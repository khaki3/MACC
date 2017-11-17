#ifndef _MACC_H
#define _MACC_H 1

#include <omp.h>
#include <openacc.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Including stdbool.h may cause conflicting.
#define bool int
#define true  1
#define false 0

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define TOPADDR(ADDR, LB, TYPE_SIZE)   (ADDR + LB * TYPE_SIZE)
#define LENGTH_BYTE(LB, UB, TYPE_SIZE) ((UB - LB + 1) * TYPE_SIZE)
#define ARE_OVERLAPPING(a_lb, a_ub, b_lb, b_ub) (!(a_lb > b_ub || a_ub < b_lb))
#define ARE_OVERLAPPING_WHOLE(a_lb, a_ub, b_lb, b_ub) (a_lb <= b_lb && b_ub <= a_ub)

#define __MACC_DEVICE_TYPE acc_device_nvidia
#define __MACC_MAX_NUMGPUS 10

int __MACC_NUMGPUS = -1;

int __macc_get_num_gpus()
{
    return acc_get_num_devices(__MACC_DEVICE_TYPE);
}

void __macc_set_gpu_num(int i)
{
    acc_set_device_num(i, __MACC_DEVICE_TYPE);
}

#define MACC_DATA_TABLE_SIZE 256
#define MACC_DATA_TABLE_WRAP_CACHE_SIZE 512
#define TABLE_INDEX(ptr) (((long)ptr / 16) % MACC_DATA_TABLE_SIZE)

struct __MaccDataTableEntry {
    void *addr;
    void *addr_ub;
    int  type_size;
    int  entire_lb;
    int  entire_ub;
    bool dirty;
    int  dirty_lb;
    int  dirty_ub;
    int  offset;
    struct __MaccDataTableEntry *next;
};

struct __MaccDataTable {
    struct __MaccDataTableEntry *entries[MACC_DATA_TABLE_SIZE];
};

struct __MaccDataTableEntryWrap {
    struct __MaccDataTableEntry *entry;
    int offset;
};

struct __MaccDataTable *__MACC_DATA_TABLE_SET;
struct __MaccDataTableEntryWrap __MACC_DATA_TABLE_WRAP_CACHE[MACC_DATA_TABLE_WRAP_CACHE_SIZE];
int __MACC_NUMBER_OF_WRAP_CACHE = 0;

void __macc_init()
{
    char *env_macc_numgpus = getenv("MACC_NUMGPUS");

    if (env_macc_numgpus != NULL) {
        __MACC_NUMGPUS = atoi(env_macc_numgpus);
    }
    else {
        __MACC_NUMGPUS = __macc_get_num_gpus();
    }

    if (__MACC_NUMGPUS <= 0) {
        fputs("[MACC ERROR] No GPU device found.", stderr);
        exit(-1);
    }

    if (getenv("OMP_NESTED") == NULL || getenv("OMP_MAX_ACTIVE_LEVELS") == NULL) {
        fputs("[MACC ERROR] Improper setting.\n"
              "\n"
              "In order to make nested-parallel available,\n"
              "run the commands below before running the program.\n"
              "\n"
              "\t" "export OMP_NESTED=TRUE\n"
              "\t" "export OMP_MAX_ACTIVE_LEVELS=2\n"
              "\n",
              stderr);
        exit(-1);
    }

    __MACC_DATA_TABLE_SET = calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataTable));
}

void __macc_data_table_insert(
    int gpu_num, void *ptr, int type_size, int entire_lb, int entire_ub)
{
    int index = TABLE_INDEX(ptr);

    struct __MaccDataTableEntry *new_entry = malloc(sizeof(struct __MaccDataTableEntry));

    new_entry->addr      = ptr;
    new_entry->addr_ub   = ptr + entire_ub * type_size;
    new_entry->type_size = type_size;
    new_entry->entire_lb = entire_lb;
    new_entry->entire_ub = entire_ub;
    new_entry->dirty     = false;
    new_entry->dirty_lb  = -1;
    new_entry->dirty_ub  = -1;
    new_entry->next      = __MACC_DATA_TABLE_SET[gpu_num].entries[index];

    __MACC_DATA_TABLE_SET[gpu_num].entries[index] = new_entry;
}

struct __MaccDataTableEntry *__macc_data_table_find(int gpu_num, void *ptr)
{
    int index = TABLE_INDEX(ptr);
    struct __MaccDataTableEntry *entry = __MACC_DATA_TABLE_SET[gpu_num].entries[index];

    while (entry != NULL)
    {
        if (entry->addr == ptr) {
            entry->offset = 0;
            return entry;
        }

        entry = entry->next;
    }

    for (int i = 0; i < MACC_DATA_TABLE_SIZE; i++)
    {
        entry = __MACC_DATA_TABLE_SET[gpu_num].entries[i];

        while (entry != NULL) {
            if (entry->addr <= ptr && ptr <= entry->addr_ub) {
                entry->offset = (ptr - entry->addr) / entry->type_size;
                return entry;
            }

            entry = entry->next;
        }
    }

    fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", ptr);
    exit(-1);

    return NULL;
}

void __macc_data_table_delete(int gpu_num, void *ptr)
{
    int index = TABLE_INDEX(ptr);
    struct __MaccDataTableEntry *entry = __MACC_DATA_TABLE_SET[gpu_num].entries[index];
    struct __MaccDataTableEntry *pre = NULL;

    if (entry != NULL) {
        if(entry->addr == ptr) {
            __MACC_DATA_TABLE_SET[gpu_num].entries[index] = entry->next;
            return;
        }

        pre = entry;
        entry = entry->next;
    }

    while (pre != NULL && entry != NULL)
    {
        if (entry->addr == ptr) {
            pre->next = entry->next;
            free(entry);
            return;
        }

        pre = entry;
        entry = entry->next;
    }

    fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", ptr);
    exit(-1);
}

void __macc_delete(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    acc_delete_async(TOPADDR(ptr, lb, type_size), length * type_size, gpu_num);
    __macc_data_table_delete(gpu_num, ptr);
    acc_wait(gpu_num);
}

void __macc_copyout(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, ptr);

    if (entry->dirty)
        acc_update_self_async(TOPADDR(entry->addr, entry->dirty_lb, entry->type_size),
                              LENGTH_BYTE(entry->dirty_lb, entry->dirty_ub, entry->type_size),
                              gpu_num);

    __macc_delete(gpu_num, ptr, type_size, lb, length);
}

void __macc_copyin(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    acc_copyin_async(TOPADDR(ptr, lb, type_size), length * type_size, gpu_num);
    __macc_data_table_insert(gpu_num, ptr, type_size, lb, lb + length - 1);
    acc_wait(gpu_num);
}

void __macc_create(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    acc_create_async(TOPADDR(ptr, lb, type_size), length * type_size, gpu_num);
    __macc_data_table_insert(gpu_num, ptr, type_size, lb, lb + length - 1);
    acc_wait(gpu_num);
}

void *__macc_malloc(unsigned long size)
{
    void *ret = malloc(size);

    #pragma omp parallel num_threads(__MACC_NUMGPUS)
    {
        __macc_create(omp_get_thread_num(), ret, 1, 0, size);
    }

    return ret;
}

void __macc_free(void *ptr)
{
    #pragma omp parallel num_threads(__MACC_NUMGPUS)
    {
        int gpu_num = omp_get_thread_num();
        struct __MaccDataTableEntry *entry =
            __macc_data_table_find(gpu_num, ptr);
        __macc_delete(gpu_num, ptr, 1, 0, entry->entire_ub + 1);
    }
    free(ptr);
}

void __macc_update_self(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, ptr);
    ptr = entry->addr;
    lb += entry->offset;
    int ub = lb + length - 1;

    if (entry->dirty && ARE_OVERLAPPING(entry->dirty_lb, entry->dirty_ub, lb, ub)) {
        int new_lb = MAX(entry->dirty_lb, lb);
        int new_ub = MIN(entry->dirty_ub, ub);
        acc_update_self(TOPADDR(ptr, new_lb, type_size), LENGTH_BYTE(new_lb, new_ub, type_size));
    }
}

void __macc_update_device(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    acc_update_device(TOPADDR(ptr, lb, type_size), length * type_size);
}

void __macc_init_access_region(int gpu_num, int *lb_set, int *ub_set)
{
    lb_set[gpu_num] = INT_MAX;
    ub_set[gpu_num] = -1;
}

void __macc_update_access_region(int gpu_num, int *lb_set, int *ub_set, int val)
{
    lb_set[gpu_num] = MIN(lb_set[gpu_num], val);
    ub_set[gpu_num] = MAX(ub_set[gpu_num], val);
}

bool __macc_region_is_overlapping(int *lb_set, int *ub_set)
{
    for (int i = 0; i < __MACC_NUMGPUS - 1; i++)
        for (int j = i + 1; j < __MACC_NUMGPUS; j++)
            if (ARE_OVERLAPPING(lb_set[i], ub_set[i], lb_set[j], ub_set[j]))
                return true;

    return false;
}

// <= or < only
void __macc_calc_loop_region
(int *loop_lb_set, int *loop_ub_set,
 int entire_start, int entire_end, int step, int until_equal)
{
    int pos = entire_start;
    int width = (int)(((float)entire_end - entire_start + (until_equal ? 1 : 0)) / __MACC_NUMGPUS + 0.9);
    width -= width % step;

    for (int i = 0; i < __MACC_NUMGPUS; i++) {
        loop_lb_set[i] = pos;
        pos += (width - 1);
        loop_ub_set[i] = pos;
        pos += step;
    }

    int tail = __MACC_NUMGPUS - 1;
    loop_ub_set[tail] = entire_end;
    if (!until_equal && loop_ub_set[tail] == entire_end)
        loop_ub_set[tail] -= step;
}

void __macc_adjust_data_region(void *ptr, int gpu_num, int *lb_set, int *ub_set)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, ptr);

    lb_set[gpu_num] += entry->offset;
    ub_set[gpu_num] += entry->offset;
}

void __macc_rewrite_loop_region_into_single(int *loop_lb_set, int *loop_ub_set)
{
    loop_ub_set[0] = loop_ub_set[__MACC_NUMGPUS - 1];

    for (int i = 1; i < __MACC_NUMGPUS; i++) {
        loop_lb_set[i] = 1;
        loop_ub_set[i] = 0;
    }
}

void __macc_rewrite_data_region_into_single(int *lb_set, int *ub_set)
{
    int gpu_ub = __MACC_NUMGPUS - 1;
    lb_set[0] = MIN(lb_set[0], lb_set[gpu_ub]);
    ub_set[0] = MAX(ub_set[0], ub_set[gpu_ub]);
}

void __macc_sync_data(int gpu_num, void *ptr, int type_size, int lb, int ub)
{
    void *update_addr = TOPADDR(ptr, lb, type_size);
    size_t length_b   = LENGTH_BYTE(lb, ub, type_size);

    acc_update_self(update_addr, length_b);

    #pragma omp parallel num_threads (__MACC_NUMGPUS)
    {
        int i = omp_get_thread_num();
        if (i != gpu_num) {
            __macc_set_gpu_num(i);
            acc_update_device(update_addr, length_b);
        }
    }

    __macc_set_gpu_num(gpu_num);
}

// (use|def)_type: 0->non-affine, 1->nothing, 2->affine
void __macc_set_data_region(int gpu_num, void *ptr, int multi,
                            int use_type, int *use_lb_set, int *use_ub_set,
                            int def_type, int *def_lb_set, int *def_ub_set)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, ptr);
    ptr = entry->addr;

    //
    // update: dirty /\ DEF_{*-i}, dirty /\ USE_{*-i}
    //
    if (entry->dirty && (multi || gpu_num != 0) && __MACC_NUMGPUS > 1) {
        bool update_all      = false;
        bool update_all_DtoH = false;

        if (use_type == 0 || def_type == 0)
            update_all = true;

        else if (def_type == 2) {
            for (int i = 0; i < __MACC_NUMGPUS; i++) {
                if (i != gpu_num &&
                    ARE_OVERLAPPING(entry->dirty_lb, entry->dirty_ub,
                                    def_lb_set[i], def_ub_set[i])) {
                    update_all = true;
                    break;
                }
            }
        }

        if (!update_all) {
            int every_whole = true;
            int unused_lb = entry->dirty_lb;
            int unused_ub = entry->dirty_ub;

            for (int i = 0; i < __MACC_NUMGPUS; i++) {
                if (i != gpu_num) {
                    if (ARE_OVERLAPPING_WHOLE(use_lb_set[i], use_ub_set[i],
                                              entry->dirty_lb, entry->dirty_ub)) {
                        update_all_DtoH = true;
                    }
                    else {
                        every_whole = false;

                        if (use_lb_set[i] <= unused_lb)
                            unused_lb = MAX(unused_lb, use_ub_set[i] + 1);
                        else if (use_ub_set[i] >= unused_ub)
                            unused_ub = MIN(unused_ub, use_lb_set[i] - 1);
                    }
                }
            }

            if (every_whole)
                update_all = true;
            if (unused_ub < unused_lb)
                update_all_DtoH = true;
        }

        // update all dirty
        if (update_all) {
            __macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub);
            entry->dirty = false;
        }

        // USE /\ dirty (don't change dirty region)
        else if (entry->dirty && use_type == 2) {
            int thread_num = multi ? __MACC_NUMGPUS : 1;

            if (update_all_DtoH)
                acc_update_self(TOPADDR(ptr, entry->dirty_lb, entry->type_size),
                                LENGTH_BYTE(entry->dirty_lb, entry->dirty_ub, entry->type_size));

            #pragma omp parallel num_threads (thread_num)
            {
                int i = omp_get_thread_num();

                if (i != gpu_num && ARE_OVERLAPPING(entry->dirty_lb,
                                                    entry->dirty_ub,
                                                    use_lb_set[i],
                                                    use_ub_set[i])) {
                    int update_lb = MAX(entry->dirty_lb, use_lb_set[i]);
                    int update_ub = MIN(entry->dirty_ub, use_ub_set[i]);
                    void *update_addr = TOPADDR(ptr, update_lb, entry->type_size);
                    size_t length_b = LENGTH_BYTE(update_lb, update_ub, entry->type_size);

                    if (!update_all_DtoH) {
                        __macc_set_gpu_num(gpu_num);
                        acc_update_self(update_addr, length_b);
                    }
                    __macc_set_gpu_num(i);
                    acc_update_device(update_addr, length_b);
                }
                __macc_set_gpu_num(gpu_num);
            }
        }
    }

    //
    // DEF
    //
    // update: DEF_{i} (when dirty and DEF_{i} are separated)
    //
    if ((multi || gpu_num == 0) && def_type != 1) {
        if (def_type == 0) {
            entry->dirty = true;
            entry->dirty_lb = entry->entire_lb;
            entry->dirty_ub = entry->entire_ub;
        }

        else if (!(entry->dirty)) {
            entry->dirty = true;
            entry->dirty_lb = def_lb_set[gpu_num];
            entry->dirty_ub = def_ub_set[gpu_num];
        }

        else if (
            // overlapping
            ARE_OVERLAPPING(entry->dirty_lb,
                            entry->dirty_ub,
                            def_lb_set[gpu_num],
                            def_ub_set[gpu_num])       ||
            // adjacent
            entry->dirty_lb == def_ub_set[gpu_num] + 1 ||
            def_lb_set[gpu_num] == entry->dirty_ub + 1
            ) {
            entry->dirty_lb = MIN(entry->dirty_lb, def_lb_set[gpu_num]);
            entry->dirty_ub = MAX(entry->dirty_ub, def_ub_set[gpu_num]);
        }

        else {
            __macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub);
            entry->dirty_lb = def_lb_set[gpu_num];
            entry->dirty_ub = def_ub_set[gpu_num];
        }
    }
}

#undef bool
#undef true
#undef false

#undef MIN
#undef MAX

#undef TOPADDR
#undef LENGTH_BYTE
#undef ARE_OVERLAPPING
#undef ARE_OVERLAPPING_WHOLE

#endif
