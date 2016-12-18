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

int __MACC_NUMGPUS = -1;
int __MACC_KERNEL_ID = -1;

int __macc_get_num_gpus()
{
    return acc_get_num_devices(acc_device_nvidia);
}

void __macc_set_gpu_num(int i)
{
    acc_set_device_num(i, acc_device_nvidia);
}

#define MACC_DATA_TABLE_SIZE 256

struct __MaccDataTableEntry {
    void *addr;
    int type_size;
    int dirty;
    int dirty_lb;
    int dirty_ub;
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
    int gpu_num, void *p, int type_size, int dirty, int dirty_lb, int dirty_ub)
{
    int index = (long)p % MACC_DATA_TABLE_SIZE;

    struct __MaccDataTableEntry *new_entry = malloc(sizeof(struct __MaccDataTableEntry));

    new_entry->addr      = p;
    new_entry->type_size = type_size;
    new_entry->dirty     = dirty;
    new_entry->dirty_lb  = dirty_lb;
    new_entry->dirty_ub  = dirty_ub;
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
    acc_delete(p + lb, type_size * length);
    __macc_data_table_delete(gpu_num, p);
}

void __macc_copyout(int gpu_num, void *p, int type_size, int lb, int length)
{
    struct __MaccDataTableEntry *entry = __macc_data_table_find(gpu_num, p);

    if (entry->dirty)
        acc_update_self(entry->addr + entry->dirty_lb,
                        (entry->dirty_ub - entry->dirty_lb + 1)
                        * entry->type_size);

    __macc_delete(gpu_num, p, type_size, lb, length);
}

void __macc_copyin(int gpu_num, void *p, int type_size, int lb, int length)
{
    acc_copyin(p + lb, type_size * length);
    __macc_data_table_insert(gpu_num, p, type_size, false, 0, 0);

    __MACC_KERNEL_ID = -1;
}

void __macc_create(int gpu_num, void *p, int type_size, int lb, int length)
{
    acc_create(p + lb, type_size * length);
    __macc_data_table_insert(gpu_num, p, type_size, false, 0, 0);

    __MACC_KERNEL_ID = -1;
}

void __macc_init_access_region(int *lb_set, int *ub_set)
{
    for (int i = 0; i < __MACC_NUMGPUS; i++) {
        lb_set[i] = INT_MAX;
        ub_set[i] = -1;
    }
}

void __macc_DtoH_update(int *p, int *lb_set, int *ub_set, int tnum)
{
    int lb = lb_set[tnum];
    int ub = ub_set[tnum];

    acc_update_self(p + lb, (ub - lb + 1) * sizeof(int));
}

void __macc_HtoD_update(int *p, int *lb_set, int *ub_set, int tnum)
{
    int lb = MIN(lb_set[0], lb_set[__MACC_NUMGPUS]);
    int ub = MAX(ub_set[0], ub_set[__MACC_NUMGPUS]);

    acc_update_device(p + lb, (ub - lb + 1) * sizeof(int));
}

void __macc_update_access_region(int *lb_set, int *ub_set, int i, int val)
{
    lb_set[i] = MIN(lb_set[i], val);
    ub_set[i] = MAX(ub_set[i], val);
}

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
        pos += width;
        loop_ub_set[i] = pos;
        pos += step;
    }

    int tail = __MACC_NUMGPUS - 1;
    loop_ub_set[tail] = entire_end;
    if (!until_equal && loop_ub_set[tail] == entire_end)
        loop_ub_set[tail] -= step;
}

#endif
