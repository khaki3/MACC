#ifndef _MACC_H
#define _MACC_H 1

#include <omp.h>
#include <openacc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define TOPADDR(ADDR, LB, TYPE_SIZE)   (ADDR + LB * TYPE_SIZE)
#define LENGTH_BYTE(LB, UB, TYPE_SIZE) ((UB - LB + 1) * TYPE_SIZE)

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

struct __MaccDataTableEntry {
    void *addr;
    int  type_size;
    int  entire_lb;
    int  entire_ub;
    bool dirty;
    int  dirty_lb;
    int  dirty_ub;
    struct __MaccDataTableEntry *next;
};

struct __MaccDataTable {
    struct __MaccDataTableEntry *entries[MACC_DATA_TABLE_SIZE];
};

struct __MaccDataTable *__MACC_DATA_TABLE_SET;

void __macc_init()
{
    __MACC_NUMGPUS = __macc_get_num_gpus();

    if (__MACC_NUMGPUS == 0) {
        fputs("No GPU device found.", stderr);
        exit(-1);
    }

    __MACC_DATA_TABLE_SET = calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataTable));
}

void __macc_data_table_insert(
    int gpu_num, void *p, int type_size, int entire_lb, int entire_ub)
{
    int index = (long)p % MACC_DATA_TABLE_SIZE;

    struct __MaccDataTableEntry *new_entry = malloc(sizeof(struct __MaccDataTableEntry));

    new_entry->addr      = p;
    new_entry->type_size = type_size;
    new_entry->entire_lb = entire_lb;
    new_entry->entire_ub = entire_ub;
    new_entry->dirty     = false;
    new_entry->dirty_lb  = -1;
    new_entry->dirty_ub  = -1;
    new_entry->next      = __MACC_DATA_TABLE_SET[gpu_num].entries[index];

    __MACC_DATA_TABLE_SET[gpu_num].entries[index] = new_entry;
}

struct __MaccDataTableEntry *__macc_data_table_find(int gpu_num, void *p)
{
    int index = (long)p % MACC_DATA_TABLE_SIZE;
    struct __MaccDataTableEntry *entry = __MACC_DATA_TABLE_SET[gpu_num].entries[index];

    while (entry != NULL)
    {
        if (entry->addr == p)
            return entry;

        entry = entry->next;
    }

    fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", p);
    exit(-1);

    return NULL;
}

void __macc_data_table_delete(int gpu_num, void *p)
{
    int index = (long)p % MACC_DATA_TABLE_SIZE;
    struct __MaccDataTableEntry *entry = __MACC_DATA_TABLE_SET[gpu_num].entries[index];
    struct __MaccDataTableEntry *pre = NULL;

    if (entry != NULL) {
        if(entry->addr == p) {
            __MACC_DATA_TABLE_SET[gpu_num].entries[index] = entry->next;
            return;
        }

        pre = entry;
        entry = entry->next;
    }

    while (pre != NULL && entry != NULL)
    {
        if (entry->addr == p) {
            pre->next = entry->next;
            free(entry);
            return;
        }

        pre = entry;
        entry = entry->next;
    }

    fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", p);
    exit(-1);
}

void __macc_delete(int gpu_num, void *p, int type_size, int lb, int length)
{
    acc_delete_async(TOPADDR(p, lb, type_size), length * type_size, gpu_num);
    __macc_data_table_delete(gpu_num, p);
    acc_wait(gpu_num);
}

void __macc_copyout(int gpu_num, void *p, int type_size, int lb, int length)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, p);

    if (entry->dirty)
        acc_update_self_async(TOPADDR(entry->addr, entry->dirty_lb, entry->type_size),
                              LENGTH_BYTE(entry->dirty_lb, entry->dirty_ub, entry->type_size),
                              gpu_num);

    __macc_delete(gpu_num, p, type_size, lb, length);
}

void __macc_copyin(int gpu_num, void *p, int type_size, int lb, int length)
{
    acc_copyin_async(TOPADDR(p, lb, type_size), length * type_size, gpu_num);
    __macc_data_table_insert(gpu_num, p, type_size, lb, lb + length - 1);
    acc_wait(gpu_num);
}

void __macc_create(int gpu_num, void *p, int type_size, int lb, int length)
{
    acc_create_async(TOPADDR(p, lb, type_size), length * type_size, gpu_num);
    __macc_data_table_insert(gpu_num, p, type_size, lb, lb + length - 1);
    acc_wait(gpu_num);
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

//#define FEW_BUT_LARGE
#ifdef FEW_BUT_LARGE

int __macc_sync_valid[__MACC_MAX_NUMGPUS];
int __macc_sync_lb_set[__MACC_MAX_NUMGPUS];
int __macc_sync_ub_set[__MACC_MAX_NUMGPUS];

void __macc_sync_data(int gpu_num, bool will_update, void *p, int type_size, int lb, int ub)
{
    void *update_addr;
    size_t length_b;
    int HtoD_lb, HtoD_ub;

    if (will_update) {
        update_addr = TOPADDR(p, lb, type_size);
        length_b = LENGTH_BYTE(lb, ub, type_size);

        acc_update_self(update_addr, length_b);

        __macc_sync_lb_set[gpu_num] = lb;
        __macc_sync_ub_set[gpu_num] = ub;
    }

    __macc_sync_valid[gpu_num] = will_update;

#pragma omp barrier

    HtoD_lb = INT_MAX;
    HtoD_ub = -1;

    for (int i = 0; i < __MACC_NUMGPUS; i++) {
        if (i != gpu_num && __macc_sync_valid[i]) {
            HtoD_lb = MIN(__macc_sync_lb_set[i], HtoD_lb);
            HtoD_ub = MAX(__macc_sync_ub_set[i], HtoD_ub);
        }
    }

    if (HtoD_lb != INT_MAX) {
        update_addr = TOPADDR(p, HtoD_lb, type_size);
        length_b = LENGTH_BYTE(HtoD_lb, HtoD_ub, type_size);

        acc_update_device(update_addr, length_b);
    }
}

// (use|def)_type: 0->non-affine, 1->nothing, 2->affine
void __macc_set_data_region(int gpu_num, void *p, int multi,
                            int use_type, int *use_lb_set, int *use_ub_set,
                            int def_type, int *def_lb_set, int *def_ub_set)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, p);

    int other_gpus_lb = (gpu_num != 0) ? 0 : 1;
    int other_gpus_ub = (gpu_num != __MACC_NUMGPUS - 1) ? __MACC_NUMGPUS - 1 : __MACC_NUMGPUS - 2;

    int other_use_lb = multi ? MIN(use_lb_set[other_gpus_lb], use_lb_set[other_gpus_ub]) : use_lb_set[0];
    int other_use_ub = multi ? MAX(use_ub_set[other_gpus_lb], use_ub_set[other_gpus_ub]) : use_ub_set[0];

    bool will_update;
    int update_lb, update_ub;

    //
    // USE
    //
    // update: USE_{*-i} /\ dirty
    //
    will_update = false;

    if ((multi || gpu_num != 0) && entry->dirty) {
        if (use_type == 0) {
            // update all dirty
            will_update = true;
            update_lb = entry->dirty_lb;
            update_ub = entry->dirty_ub;

            entry->dirty = false;
        }
        else if (use_type == 2) {
            // dirty and other use are overlapped?
            bool overlapped = false;

            for (int i = 0; i < __MACC_NUMGPUS; i++) {
                if (i != gpu_num && !(entry->dirty_lb > use_ub_set[i] || entry->dirty_ub < use_lb_set[i])) {
                    overlapped = true;
                    break;
                }
            }

            // If the intersection is empty
            if (!overlapped) {
                // 'do nothing'
            }
            // If other_use covers the whole of dirty
            else if (entry->dirty_lb >= other_use_lb && entry->dirty_ub <= other_use_ub) {
                will_update = true;
                update_lb = entry->dirty_lb;
                update_ub = entry->dirty_ub;

                entry->dirty = false;
            }
            // partional update
            else {
                will_update = true;

                update_lb = MAX(entry->dirty_lb, other_use_lb);
                update_ub = MIN(entry->dirty_ub, other_use_ub);

                // left end
                if (update_lb == entry->dirty_lb) {
                    entry->dirty_lb = update_ub + 1;
                }
                // Right end
                else if (update_ub == entry->dirty_ub) {
                    entry->dirty_ub = other_use_lb - 1;
                }
            }
        }
    }

    __macc_sync_data(gpu_num, will_update, p, entry->type_size, update_lb, update_ub);

    //
    // DEF
    //
    // update: dirty \ DEF_{i} (when dirty \/ DEF_{i} is empty)
    //
    will_update = false;

    if ((multi || gpu_num == 0)) {
        if (def_type == 0) {
            entry->dirty = true;
            entry->dirty_lb = entry->entire_lb;
            entry->dirty_ub = entry->entire_ub;
        }
        else if (def_type == 2) {
            if (!(entry->dirty)) {
                entry->dirty = true;
                entry->dirty_lb = def_lb_set[gpu_num];
                entry->dirty_ub = def_ub_set[gpu_num];
            }

            else if (entry->dirty_lb > def_ub_set[gpu_num] || entry->dirty_ub < def_lb_set[gpu_num]) {
                will_update = true;
                update_lb = entry->dirty_lb;
                update_ub = entry->dirty_ub;
                entry->dirty_lb = def_lb_set[gpu_num];
                entry->dirty_ub = def_ub_set[gpu_num];
            }

            else {
                entry->dirty_lb = MIN(entry->dirty_lb, def_lb_set[gpu_num]);
                entry->dirty_ub = MAX(entry->dirty_ub, def_ub_set[gpu_num]);
            }
        }
    }

    __macc_sync_data(gpu_num, will_update, p, entry->type_size, update_lb, update_ub);
}

#else

//
// In order to make nested-parallel available in the programs which compiled by pgi compiler,
// run the commands below before running the programs.
//
//   export OMP_NESTED=TRUE
//   export OMP_MAX_ACTIVE_LEVELS=2
//

void __macc_sync_data(int gpu_num, void *p, int type_size, int lb, int ub)
{
    void *update_addr = TOPADDR(p, lb, type_size);
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
void __macc_set_data_region(int gpu_num, void *p, int multi,
                            int use_type, int *use_lb_set, int *use_ub_set,
                            int def_type, int *def_lb_set, int *def_ub_set)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, p);

    //
    // USE
    //
    // update: USE_{*-i} /\ dirty
    //
    if (entry->dirty && (multi || gpu_num != 0) && use_type != 1) {
        // update all dirty
        if (use_type == 0) {
            __macc_sync_data(gpu_num, p, entry->type_size, entry->dirty_lb, entry->dirty_ub);
            entry->dirty = false;
        }

        // partial update
        else {
            int thread_num = multi ? __MACC_NUMGPUS : 1;

            #pragma omp parallel num_threads (thread_num)
            {
                int i = omp_get_thread_num();

                if (i != gpu_num && !(entry->dirty_lb > use_ub_set[i] || entry->dirty_ub < use_lb_set[i])) {
                    int update_lb = MAX(entry->dirty_lb, use_lb_set[i]);
                    int update_ub = MIN(entry->dirty_ub, use_ub_set[i]);
                    void *update_addr = TOPADDR(p, update_lb, entry->type_size);
                    size_t length_b = LENGTH_BYTE(update_lb, update_ub, entry->type_size);

                    acc_update_self(update_addr, length_b);
                    __macc_set_gpu_num(i);
                    acc_update_device(update_addr, length_b);
                    __macc_set_gpu_num(gpu_num);
                }
            }
        }
    }

    //
    // DEF
    //
    // update: dirty \ DEF_{i}
    //
    if ((multi || gpu_num == 0) && def_type != 1) {
        if (def_type == 0) {
            entry->dirty = true;
            entry->dirty_lb = entry->entire_lb;
            entry->dirty_ub = entry->entire_ub;
        }

        else if (
            // non-dirty
            !(entry->dirty) ||
            // whole
            (def_lb_set[gpu_num] <= entry->dirty_lb && entry->dirty_ub <= def_ub_set[gpu_num])) {
            entry->dirty = true;
            entry->dirty_lb = def_lb_set[gpu_num];
            entry->dirty_ub = def_ub_set[gpu_num];
        }

        else {
            int update_lb, update_ub;

            // outside
            if (entry->dirty_lb > def_ub_set[gpu_num] || entry->dirty_ub < def_lb_set[gpu_num]) {
                update_lb = entry->dirty_lb;
                update_ub = entry->dirty_ub;
                entry->dirty_lb = def_lb_set[gpu_num];
                entry->dirty_ub = def_ub_set[gpu_num];
            }

            // inside, side
            else {
                // left side
                if (entry->dirty_lb < def_lb_set[gpu_num]) {
                    update_lb = entry->dirty_lb;
                    update_ub = def_lb_set[gpu_num] - 1;
                }
                // right side
                else {
                    update_lb = def_ub_set[gpu_num] + 1;
                    update_ub = entry->dirty_ub;
                }

                entry->dirty_lb = def_lb_set[gpu_num];
                entry->dirty_ub = def_ub_set[gpu_num];
            }

            __macc_sync_data(gpu_num, p, entry->type_size, update_lb, update_ub);
        }
    }
}

#endif

// <= or < only
void __macc_set_loop_region
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

#endif
