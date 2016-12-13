#include <omp.h>
#include <openacc.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int __MACC_NUMGPUS = -1;

int __macc_get_num_gpus()
{
    return acc_get_num_devices(acc_device_nvidia);
}

void __macc_set_gpu_num(int i)
{
    acc_set_device_num(i, acc_device_nvidia);
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
