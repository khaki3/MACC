#ifndef _MACC_H
#define _MACC_H 1

#include <omp.h>
#include <openacc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Including stdbool.h may cause conflicting.
#define bool int
#define true  1
#define false 0

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define TOPADDR(ADDR, LB, TYPE_SIZE)   (ADDR + LB * (size_t)TYPE_SIZE)
#define LENGTH_BYTE(LB, UB, TYPE_SIZE) ((UB - LB + 1) * (size_t)TYPE_SIZE)
#define ARE_OVERLAPPING(a_lb, a_ub, b_lb, b_ub) (!(a_lb > b_ub || a_ub < b_lb))
#define ARE_OVERLAPPING_WHOLE(a_lb, a_ub, b_lb, b_ub) (a_lb <= b_lb && b_ub <= a_ub)

#define __MACC_DEVICE_TYPE acc_device_nvidia
#define __MACC_MAX_NUMGPUS 10

int __MACC_NUMGPUS = -1;

int __macc_get_num_gpus()
{
    return acc_get_num_devices(__MACC_DEVICE_TYPE);
}

int * __MACC_TOPOLOGY;

int __macc_set_gpu_num(int i)
{
    int gpu_id = __MACC_TOPOLOGY[i];
    acc_set_device_num(gpu_id, __MACC_DEVICE_TYPE);
    return gpu_id;
}

#define MACC_DATA_TABLE_SIZE 256
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

struct __MaccDataTable * __MACC_DATA_TABLE_SET;

#define MACC_DATA_WRAP_CACHE_LEN 16
#define MACC_DATA_WRAP_CACHE_SIZE 16
#define CACHE_LANE(ptr) (((long)ptr / 16) % MACC_DATA_WRAP_CACHE_LEN)

struct __MaccDataWrapCache {
    void * addr[MACC_DATA_WRAP_CACHE_LEN * MACC_DATA_WRAP_CACHE_SIZE];
    struct __MaccDataTableEntry * entry[MACC_DATA_WRAP_CACHE_LEN * MACC_DATA_WRAP_CACHE_SIZE];
    int offset[MACC_DATA_WRAP_CACHE_LEN * MACC_DATA_WRAP_CACHE_SIZE];
    int cachenum[MACC_DATA_WRAP_CACHE_LEN];
};

struct __MaccDataWrapCache * __MACC_DATA_WRAP_CACHE_SET;

void __macc_data_table_insert(
    int gpu_num, void *ptr, int type_size, int entire_lb, int entire_ub)
{
    int index = TABLE_INDEX(ptr);

    struct __MaccDataTableEntry *new_entry = malloc(sizeof(struct __MaccDataTableEntry));

    new_entry->addr      = ptr;
    new_entry->addr_ub   = ptr + entire_ub * (size_t)type_size;
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

    while (entry != NULL) {
        if (entry->addr == ptr) {
            entry->offset = 0;
            return entry;
        }

        entry = entry->next;
    }

    struct __MaccDataWrapCache wrap_cache = __MACC_DATA_WRAP_CACHE_SET[gpu_num];
    int lane = CACHE_LANE(ptr);

    for (int i = 0; i < wrap_cache.cachenum[lane]; i++) {
        if (ptr == wrap_cache.addr[lane * MACC_DATA_WRAP_CACHE_SIZE + i]) {
            entry = wrap_cache.entry[lane * MACC_DATA_WRAP_CACHE_SIZE + i];
            entry->offset = wrap_cache.offset[lane * MACC_DATA_WRAP_CACHE_SIZE + i];
            return entry;
        }
    }

    for (int i = 0; i < MACC_DATA_TABLE_SIZE; i++) {
        entry = __MACC_DATA_TABLE_SET[gpu_num].entries[i];

        while (entry != NULL) {
            if (entry->addr <= ptr && ptr <= entry->addr_ub) {
                int offset = (ptr - entry->addr) / entry->type_size;

                int cachenum = wrap_cache.cachenum[lane];

                if (cachenum == MACC_DATA_WRAP_CACHE_SIZE) {
                    cachenum = 0;
                }

                wrap_cache.addr[lane * MACC_DATA_WRAP_CACHE_SIZE + cachenum] = entry->addr;
                wrap_cache.entry[lane * MACC_DATA_WRAP_CACHE_SIZE + cachenum] = entry;
                wrap_cache.offset[lane * MACC_DATA_WRAP_CACHE_SIZE + cachenum] = offset;

                wrap_cache.cachenum[lane] = cachenum + 1;

                entry->offset = offset;
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

    memset(__MACC_DATA_WRAP_CACHE_SET[gpu_num].cachenum, 0, MACC_DATA_WRAP_CACHE_LEN * sizeof(int));

    if (entry != NULL) {
        if(entry->addr == ptr) {
            __MACC_DATA_TABLE_SET[gpu_num].entries[index] = entry->next;
            free(entry);
            return;
        }

        pre = entry;
        entry = entry->next;
    }

    while (pre != NULL && entry != NULL) {
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
    acc_delete_async(TOPADDR(ptr, lb, type_size), length * (size_t)type_size, gpu_num);
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
    acc_copyin_async(TOPADDR(ptr, lb, type_size), length * (size_t)type_size, gpu_num);
    __macc_data_table_insert(gpu_num, ptr, type_size, lb, lb + length - 1);
    acc_wait(gpu_num);
}

void __macc_create(int gpu_num, void *ptr, int type_size, int lb, int length)
{
    acc_create_async(TOPADDR(ptr, lb, type_size), length * (size_t)type_size, gpu_num);
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
    acc_update_device(TOPADDR(ptr, lb, type_size), length * (size_t)type_size);
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
    int tmp = entire_start + step * ((entire_end - entire_start) / step);
    entire_end = tmp - ((until_equal || entire_end != tmp) ? 0 : step);

    int len = entire_end - entire_start + step;
    int width = (int)((float)len / __MACC_NUMGPUS);
    width -= width % step;
    int rem = (len - width * __MACC_NUMGPUS) / step;
    width -= step;

    int pos = entire_start;

    for (int i = 0; i < __MACC_NUMGPUS; i++) {
        loop_lb_set[i] = pos;
        pos = (width < 0) ? pos : MIN(pos + width + ((i < rem) ? step : 0), entire_end);
        loop_ub_set[i] = pos;
        pos = MIN(pos + step, entire_end);
    }
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

extern void cudaMemcpyPeerAsync(void *, int, void *, int, size_t, void *);
extern void cudaDeviceEnablePeerAccess(int, int);

void __macc_p2p(int from, int to, void *ptr, size_t length_b)
{
    void *from_ptr, *to_ptr;
    void * s = acc_get_cuda_stream(from);
    to = __macc_set_gpu_num(to);
    to_ptr = acc_deviceptr(ptr);
    from = __macc_set_gpu_num(from);
    from_ptr = acc_deviceptr(ptr);

    cudaMemcpyPeerAsync(to_ptr, to, from_ptr, from, length_b, s);
}

void __macc_sync_data(int gpu_num, void *ptr, int type_size, int lb, int ub, bool including_host)
{
    void *update_addr = TOPADDR(ptr, lb, type_size);
    size_t length_b   = LENGTH_BYTE(lb, ub, type_size);

    if (including_host)
        acc_update_self_async(update_addr, length_b, gpu_num);

    for (int i = 0; i < __MACC_NUMGPUS; i++) {
        if (i != gpu_num)
            __macc_p2p(gpu_num, i, update_addr, length_b);
    }
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
        bool update_all     = false;
        bool including_host = false;

        if (def_type == 0) {
            update_all = true;
            including_host = true;
        }

        else if (def_type == 2) {
            for (int i = 0; i < __MACC_NUMGPUS; i++) {
                if (i != gpu_num &&
                    ARE_OVERLAPPING(entry->dirty_lb, entry->dirty_ub,
                                    def_lb_set[i], def_ub_set[i])) {
                    update_all = true;
                    including_host = true;
                    break;
                }
            }
        }

        if (use_type == 0)  {
            update_all = true;
        }

        // update all dirty
        if (update_all) {
            __macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub,
                             including_host);
            if (including_host)
                entry->dirty = false;
        }

        // USE /\ dirty (don't change dirty region)
        else if (entry->dirty && use_type == 2) {
            int thread_num = multi ? __MACC_NUMGPUS : 1;

            for (int i = 0; i < thread_num; i++) {
                if (i != gpu_num && ARE_OVERLAPPING(entry->dirty_lb,
                                                    entry->dirty_ub,
                                                    use_lb_set[i],
                                                    use_ub_set[i])) {
                    int update_lb = MAX(entry->dirty_lb, use_lb_set[i]);
                    int update_ub = MIN(entry->dirty_ub, use_ub_set[i]);
                    void *update_addr = TOPADDR(ptr, update_lb, entry->type_size);
                    size_t length_b = LENGTH_BYTE(update_lb, update_ub, entry->type_size);

                    __macc_p2p(gpu_num, i, update_addr, length_b);
                }
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
            __macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub, true);
            entry->dirty_lb = def_lb_set[gpu_num];
            entry->dirty_ub = def_ub_set[gpu_num];
        }
    }

    acc_wait(gpu_num);
}

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

    __MACC_TOPOLOGY = malloc(__MACC_NUMGPUS * sizeof(int));
    char * topo = getenv("MACC_TOPOLOGY");

    if (topo != NULL) {
        int i = 0;
        topo = strtok(topo, ",");
        while (topo != NULL && i < __MACC_NUMGPUS) {
            __MACC_TOPOLOGY[i] = atoi(topo);
            topo = strtok(NULL, ",");
            i++;
        }
    } else {
        for (int i = 0; i < __MACC_NUMGPUS; i++)
            __MACC_TOPOLOGY[i] = i;
    }

    for (int i = 0; i < __MACC_NUMGPUS; i++) {
        acc_set_device_num(__MACC_TOPOLOGY[i], __MACC_DEVICE_TYPE);
        for (int j = 0; j < __MACC_NUMGPUS; j++) {
            if (i != j) {
                cudaDeviceEnablePeerAccess(__MACC_TOPOLOGY[j], 0);
            }
        }
    }

    /* if (getenv("OMP_NESTED") == NULL || getenv("OMP_MAX_ACTIVE_LEVELS") == NULL) { */
    /*     fputs("[MACC ERROR] Improper setting.\n" */
    /*           "\n" */
    /*           "In order to make nested-parallel available,\n" */
    /*           "run the commands below before running the program.\n" */
    /*           "\n" */
    /*           "\t" "export OMP_NESTED=TRUE\n" */
    /*           "\t" "export OMP_MAX_ACTIVE_LEVELS=3\n" */
    /*           "\n", */
    /*           stderr); */
    /*     exit(-1); */
    /* } */

    __MACC_DATA_TABLE_SET = calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataTable));
    __MACC_DATA_WRAP_CACHE_SET = calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataWrapCache));

    // Wake up
    for (int t = 0; t < 10; t++) {
        printf("[MACC] Wake up (%d)\n", t);

        int n = 256 * 1024 * 1024;
        int * tmp = malloc(n * sizeof(int));

        #pragma acc data copy(tmp[0:n])
        {
            #pragma acc parallel loop\
                num_gangs(512) vector_length(1024) gang vector
            for (int i = 1; i < n; i++)
                tmp[i] = i;

            #pragma acc parallel loop\
                num_gangs(512) vector_length(1024) gang vector
            for (int i = 1; i < n; i++)
                tmp[n - i] += i;
        }

        free(tmp);
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
