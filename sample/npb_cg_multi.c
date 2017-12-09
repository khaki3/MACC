/*
 * Original Source  : /tmp/tmp.4YhBn2KTDX/1.c
 * Language         : C
 * Compiled Time    : 2017-12-09 21:37:28
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.0.3
 */
# 1 "/tmp/tmp.4YhBn2KTDX/1.c"
typedef int omp_lock_t;
struct omp_nest_lock {
int act;
short cnt;
short tid;
};
typedef struct omp_nest_lock omp_nest_lock_t;
enum omp_sched_t {
omp_sched_static = 1,
omp_sched_dynamic = 2,
omp_sched_guided = 3,
omp_sched_auto = 4
};
typedef enum omp_sched_t omp_sched_t;
typedef unsigned long size_t;
typedef int wchar_t;
enum anon_type_1_idtype_t {
P_ALL = 0,
P_PID = 1,
P_PGID = 2
};
typedef enum anon_type_1_idtype_t idtype_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct anon_type_2___fsid_t {
int __val[2];
};
typedef struct anon_type_2___fsid_t __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __fsword_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef unsigned long __syscall_ulong_t;
typedef long __loff_t;
typedef long * __qaddr_t;
typedef char * __caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
struct anon_type_3___wait_terminated {
unsigned int __w_termsig:7;
unsigned int __w_coredump:1;
unsigned int __w_retcode:8;
unsigned int anon_mem_1:16;
};
struct anon_type_4___wait_stopped {
unsigned int __w_stopval:8;
unsigned int __w_stopsig:8;
unsigned int anon_mem_2:16;
};
struct anon_type_5_div_t {
int quot;
int rem;
};
typedef struct anon_type_5_div_t div_t;
struct anon_type_6_ldiv_t {
long quot;
long rem;
};
typedef struct anon_type_6_ldiv_t ldiv_t;
struct anon_type_7_lldiv_t {
long long quot;
long long rem;
};
typedef struct anon_type_7_lldiv_t lldiv_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef long quad_t;
typedef unsigned long u_quad_t;
typedef struct anon_type_2___fsid_t fsid_t;
typedef long loff_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned long nlink_t;
typedef unsigned int uid_t;
typedef long off_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef long ssize_t;
typedef int daddr_t;
typedef char * caddr_t;
typedef int key_t;
typedef long clock_t;
typedef long time_t;
typedef int clockid_t;
typedef void * timer_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long u_int64_t;
typedef int register_t;
typedef int __sig_atomic_t;
struct anon_type_8___sigset_t {
unsigned long __val[(1024) / ((8) * (sizeof(unsigned long)))];
};
typedef struct anon_type_8___sigset_t __sigset_t;
typedef struct anon_type_8___sigset_t sigset_t;
struct timespec {
long tv_sec;
long tv_nsec;
};
struct timeval {
long tv_sec;
long tv_usec;
};
typedef long suseconds_t;
typedef long __fd_mask;
struct anon_type_9_fd_set {
long __fds_bits[(1024) / ((8) * ((int)(sizeof(long))))];
};
typedef struct anon_type_9_fd_set fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
typedef unsigned long pthread_t;
union pthread_attr_t {
char __size[56];
long __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anon_type_11_pthread_mutexattr_t {
char __size[4];
int __align;
};
typedef union anon_type_11_pthread_mutexattr_t pthread_mutexattr_t;
struct anon_type_13___data {
int __lock;
unsigned int __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void * __mutex;
unsigned int __nwaiters;
unsigned int __broadcast_seq;
};
typedef union anon_type_12_pthread_cond_t pthread_cond_t;
union anon_type_14_pthread_condattr_t {
char __size[4];
int __align;
};
typedef union anon_type_14_pthread_condattr_t pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct anon_type_16___data {
int __lock;
unsigned int __nr_readers;
unsigned int __readers_wakeup;
unsigned int __writer_wakeup;
unsigned int __nr_readers_queued;
unsigned int __nr_writers_queued;
int __writer;
int __shared;
char __rwelision;
unsigned char __pad1[7];
unsigned long __pad2;
unsigned int __flags;
};
typedef union anon_type_15_pthread_rwlock_t pthread_rwlock_t;
union anon_type_17_pthread_rwlockattr_t {
char __size[8];
long __align;
};
typedef union anon_type_17_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef int volatile pthread_spinlock_t;
union anon_type_18_pthread_barrier_t {
char __size[32];
long __align;
};
typedef union anon_type_18_pthread_barrier_t pthread_barrier_t;
union anon_type_19_pthread_barrierattr_t {
char __size[4];
int __align;
};
typedef union anon_type_19_pthread_barrierattr_t pthread_barrierattr_t;
struct random_data {
int * fptr;
int * rptr;
int * state;
int rand_type;
int rand_deg;
int rand_sep;
int * end_ptr;
};
struct drand48_data {
unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
unsigned long long __a;
};
typedef int (* __compar_fn_t)(void const * , void const * );
typedef int _Atomic_word;
enum anon_type_20_acc_device_t {
acc_device_none = 0,
acc_device_default = 1,
acc_device_host = 2,
acc_device_not_host = 3,
acc_device_nvidia = 4,
acc_device_radeon = 5,
acc_device_xeonphi = 6,
acc_device_pgi_opencl = 7,
acc_device_nvidia_opencl = 8,
acc_device_opencl = 9
};
typedef enum anon_type_20_acc_device_t acc_device_t;
typedef unsigned int wint_t;
union anon_type_22___value {
unsigned int __wch;
char __wchb[4];
};
typedef struct anon_type_21___mbstate_t __mbstate_t;
struct __pgi_tag {
unsigned int gp_offset;
unsigned int fp_offset;
char * overflow_arg_area;
char * reg_save_area;
};
typedef struct __pgi_tag __pgi_va_list[1];
typedef struct __pgi_tag va_list[1];
typedef struct __pgi_tag __gnuc_va_list[1];
struct _IO_jump_t {
};
typedef void _IO_lock_t;
enum __codecvt_result {
__codecvt_ok = 0,
__codecvt_partial = 1,
__codecvt_error = 2,
__codecvt_noconv = 3
};
struct _IO_FILE_plus {
};
typedef long __io_read_fn(void * __cookie, char * __buf, unsigned long __nbytes);
typedef long __io_write_fn(void * __cookie, char const * __buf, unsigned long __n);
typedef int __io_seek_fn(void * __cookie, long * __pos, int __w);
typedef int __io_close_fn(void * __cookie);
struct __locale_data {
};
union anon_type_25___huge_val_t {
unsigned char __c[8];
double __d;
};
typedef union anon_type_25___huge_val_t __huge_val_t;
union anon_type_26___huge_valf_t {
unsigned char __c[4];
float __f;
};
typedef union anon_type_26___huge_valf_t __huge_valf_t;
union anon_type_27 {
unsigned char __c[12];
long double __ld;
};
union anon_type_28 {
unsigned char __c[4];
float __d;
};
typedef float float_t;
typedef double double_t;
enum anon_type_29 {
FP_NAN = 0,
FP_INFINITE = 1,
FP_ZERO = 2,
FP_SUBNORMAL = 3,
FP_NORMAL = 4
};
enum anon_type_30__LIB_VERSION_TYPE {
_IEEE_ = -1,
_SVID_ = 0,
_XOPEN_ = 1,
_POSIX_ = 2,
_ISOC_ = 3
};
typedef enum anon_type_30__LIB_VERSION_TYPE _LIB_VERSION_TYPE;
struct exception {
int type;
char * name;
double arg1;
double arg2;
double retval;
};
enum anon_type_31_logical {
false = 0,
true = 1
};
typedef enum anon_type_31_logical logical;
struct anon_type_32_dcomplex {
double real;
double imag;
};
typedef struct anon_type_32_dcomplex dcomplex;
struct tm {
int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;
long tm_gmtoff;
char const * tm_zone;
};
struct itimerspec {
struct timespec it_interval;
struct timespec it_value;
};
struct sigevent {
};
struct timezone {
int tz_minuteswest;
int tz_dsttime;
};
typedef struct timezone * restrict __timezone_ptr_t;
enum __itimer_which {
ITIMER_REAL = 0,
ITIMER_VIRTUAL = 1,
ITIMER_PROF = 2
};
struct itimerval {
struct timeval it_interval;
struct timeval it_value;
};
typedef int __itimer_which_t;
union wait {
int w_status;
struct anon_type_3___wait_terminated __wait_terminated;
struct anon_type_4___wait_stopped __wait_stopped;
};
struct __pthread_internal_list;
struct __pthread_internal_list {
struct __pthread_internal_list * __prev;
struct __pthread_internal_list * __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
int __lock;
unsigned int __count;
int __owner;
unsigned int __nusers;
int __kind;
short __spins;
short __elision;
struct __pthread_internal_list __list;
};
typedef union anon_type_10_pthread_mutex_t pthread_mutex_t;
union anon_type_12_pthread_cond_t {
struct anon_type_13___data __data;
char __size[48];
long long __align;
};
union anon_type_15_pthread_rwlock_t {
struct anon_type_16___data __data;
char __size[56];
long __align;
};
struct _IO_FILE;
struct _IO_marker;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
struct anon_type_21___mbstate_t {
int __count;
union anon_type_22___value __value;
};
struct anon_type_23__G_fpos_t {
long __pos;
struct anon_type_21___mbstate_t __state;
};
typedef struct anon_type_23__G_fpos_t _G_fpos_t;
struct anon_type_24__G_fpos64_t {
long __pos;
struct anon_type_21___mbstate_t __state;
};
typedef struct anon_type_24__G_fpos64_t _G_fpos64_t;
struct _IO_marker {
struct _IO_marker * _next;
struct _IO_FILE * _sbuf;
int _pos;
};
struct _IO_FILE {
int _flags;
char * _IO_read_ptr;
char * _IO_read_end;
char * _IO_read_base;
char * _IO_write_base;
char * _IO_write_ptr;
char * _IO_write_end;
char * _IO_buf_base;
char * _IO_buf_end;
char * _IO_save_base;
char * _IO_backup_base;
char * _IO_save_end;
struct _IO_marker * _markers;
struct _IO_FILE * _chain;
int _fileno;
int _flags2;
long _old_offset;
unsigned short _cur_column;
char _vtable_offset;
char _shortbuf[1];
void * _lock;
long _offset;
void * __pad1;
void * __pad2;
void * __pad3;
void * __pad4;
unsigned long __pad5;
int _mode;
char _unused2[(((15) * (sizeof(int))) - ((4) * (sizeof(void * )))) - (sizeof(unsigned long))];
};
typedef struct _IO_FILE _IO_FILE;
typedef struct anon_type_23__G_fpos_t fpos_t;
struct __locale_struct {
struct __locale_data * __locales[13];
unsigned short const * __ctype_b;
int const * __ctype_tolower;
int const * __ctype_toupper;
char const * __names[13];
};
typedef struct __locale_struct * __locale_t;
typedef struct __locale_struct * locale_t;
struct __MaccDataTableEntry;
struct __MaccDataTableEntry {
void * addr;
void * addr_ub;
int type_size;
int entire_lb;
int entire_ub;
int dirty;
int dirty_lb;
int dirty_ub;
int offset;
struct __MaccDataTableEntry * next;
};
struct __MaccDataTable {
struct __MaccDataTableEntry * entries[256];
};
struct __MaccDataWrapCache {
void * addr[256];
struct __MaccDataTableEntry * entry[256];
int offset[256];
int cachenum[16];
};
union anon_type_10_pthread_mutex_t {
struct __pthread_mutex_s __data;
char __size[40];
long __align;
};
extern void omp_set_num_threads(int n);
extern int omp_get_thread_num(void);
extern int omp_get_num_procs(void);
extern int omp_get_num_threads(void);
extern int omp_get_max_threads(void);
extern int omp_in_parallel(void);
extern int omp_in_final(void);
extern void omp_set_dynamic(int n);
extern int omp_get_dynamic(void);
extern void omp_set_nested(int n);
extern int omp_get_nested(void);
extern void omp_init_lock(int * s);
extern void omp_destroy_lock(int * s);
extern void omp_set_lock(int * s);
extern void omp_unset_lock(int * s);
extern int omp_test_lock(int * s);
extern void omp_init_nest_lock(struct omp_nest_lock * s);
extern void omp_destroy_nest_lock(struct omp_nest_lock * s);
extern void omp_set_nest_lock(struct omp_nest_lock * s);
extern void omp_unset_nest_lock(struct omp_nest_lock * s);
extern int omp_test_nest_lock(struct omp_nest_lock * s);
extern double omp_get_wtime(void);
extern double omp_get_wtick(void);
extern long omp_get_stack_size(void);
extern void omp_set_stack_size(long l);
extern int omp_get_thread_limit(void);
extern void omp_set_max_active_levels(int);
extern int omp_get_max_active_levels(void);
extern int omp_get_level(void);
extern int omp_get_ancestor_thread_num(int);
extern int omp_get_team_size(int);
extern int omp_get_active_level(void);
extern void omp_set_schedule(enum omp_sched_t, int);
extern void omp_get_schedule(enum omp_sched_t * , int * );
extern int omp_get_initial_device();
extern int omp_get_default_device();
extern void omp_set_default_device(int);
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h"
static unsigned short __bswap_16(unsigned short __bsx)
{
# 47 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h"
return (unsigned short)(((__bsx >> (8)) & (255)) | ((__bsx & (255)) << (8)));
}
# 87 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static unsigned int __bswap_32(unsigned int __bsx)
{
# 90 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return ((((__bsx & (-16777216u)) >> (24)) | ((__bsx & (16711680)) >> (8))) | ((__bsx & (65280)) << (8))) | ((__bsx & (255)) << (24));
}
# 148 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static unsigned long __bswap_64(unsigned long __bsx)
{
# 151 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return ((((((((__bsx & (0xff00000000000000ull)) >> (56)) | ((__bsx & (0xff000000000000ull)) >> (40))) | ((__bsx & (0xff0000000000ull)) >> (24))) | ((__bsx & (0xff00000000ull)) >> (8))) | ((__bsx & (0x0ff000000ull)) << (8))) | ((__bsx & (0x000ff0000ull)) << (24))) | ((__bsx & (0x00000ff00ull)) << (40))) | ((__bsx & (0x0000000ffull)) << (56));
}
extern unsigned long __ctype_get_mb_cur_max(void);
extern double atof(char const * __nptr);
extern int atoi(char const * __nptr);
extern long atol(char const * __nptr);
extern long long atoll(char const * __nptr);
extern double strtod(char const * restrict __nptr, char * * restrict __endptr);
extern float strtof(char const * restrict __nptr, char * * restrict __endptr);
extern long double strtold(char const * restrict __nptr, char * * restrict __endptr);
extern long strtol(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern unsigned long strtoul(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern long long strtoq(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern unsigned long long strtouq(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern long long strtoll(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern unsigned long long strtoull(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern char * l64a(long __n);
extern long a64l(char const * __s);
extern int select(int __nfds, struct anon_type_9_fd_set * restrict __readfds, struct anon_type_9_fd_set * restrict __writefds, struct anon_type_9_fd_set * restrict __exceptfds, struct timeval * restrict __timeout);
extern int pselect(int __nfds, struct anon_type_9_fd_set * restrict __readfds, struct anon_type_9_fd_set * restrict __writefds, struct anon_type_9_fd_set * restrict __exceptfds, struct timespec const * restrict __timeout, struct anon_type_8___sigset_t const * restrict __sigmask);
extern unsigned int gnu_dev_major(unsigned long long __dev);
extern unsigned int gnu_dev_minor(unsigned long long __dev);
extern unsigned long long gnu_dev_makedev(unsigned int __major, unsigned int __minor);
extern long random(void);
extern void srandom(unsigned int __seed);
extern char * initstate(unsigned int __seed, char * __statebuf, unsigned long __statelen);
extern char * setstate(char * __statebuf);
extern int random_r(struct random_data * restrict __buf, int * restrict __result);
extern int srandom_r(unsigned int __seed, struct random_data * __buf);
extern int initstate_r(unsigned int __seed, char * restrict __statebuf, unsigned long __statelen, struct random_data * restrict __buf);
extern int setstate_r(char * restrict __statebuf, struct random_data * restrict __buf);
extern int rand(void);
extern void srand(unsigned int __seed);
extern int rand_r(unsigned int * __seed);
extern double drand48(void);
extern double erand48(unsigned short __xsubi[3]);
extern long lrand48(void);
extern long nrand48(unsigned short __xsubi[3]);
extern long mrand48(void);
extern long jrand48(unsigned short __xsubi[3]);
extern void srand48(long __seedval);
extern unsigned short * seed48(unsigned short __seed16v[3]);
extern void lcong48(unsigned short __param[7]);
extern int drand48_r(struct drand48_data * restrict __buffer, double * restrict __result);
extern int erand48_r(unsigned short __xsubi[3], struct drand48_data * restrict __buffer, double * restrict __result);
extern int lrand48_r(struct drand48_data * restrict __buffer, long * restrict __result);
extern int nrand48_r(unsigned short __xsubi[3], struct drand48_data * restrict __buffer, long * restrict __result);
extern int mrand48_r(struct drand48_data * restrict __buffer, long * restrict __result);
extern int jrand48_r(unsigned short __xsubi[3], struct drand48_data * restrict __buffer, long * restrict __result);
extern int srand48_r(long __seedval, struct drand48_data * __buffer);
extern int seed48_r(unsigned short __seed16v[3], struct drand48_data * __buffer);
extern int lcong48_r(unsigned short __param[7], struct drand48_data * __buffer);
extern void * malloc(unsigned long __size);
extern void * calloc(unsigned long __nmemb, unsigned long __size);
extern void * realloc(void * __ptr, unsigned long __size);
extern void free(void * __ptr);
extern void cfree(void * __ptr);
extern void * __alloca(unsigned long __size);
extern void * alloca(unsigned long __size);
extern void * __builtin_alloca(unsigned long __size);
extern void * valloc(unsigned long __size);
extern int posix_memalign(void * * __memptr, unsigned long __alignment, unsigned long __size);
extern __attribute__((noreturn)) void abort(void);
extern int atexit(void (* __func)(void));
extern int on_exit(void (* __func)(int, void * ), void * __arg);
extern __attribute__((noreturn)) void exit(int __status);
extern __attribute__((noreturn)) void _Exit(int __status);
extern char * getenv(char const * __name);
extern int putenv(char * __string);
extern int setenv(char const * __name, char const * __value, int __replace);
extern int unsetenv(char const * __name);
extern int clearenv(void);
extern char * mktemp(char * __template);
extern int mkstemp(char * __template);
extern int mkstemps(char * __template, int __suffixlen);
extern char * mkdtemp(char * __template);
extern int system(char const * __command);
extern char * realpath(char const * restrict __name, char * restrict __resolved);
extern void * bsearch(void const * __key, void const * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ));
extern void qsort(void * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ));
extern __attribute__((const)) int abs(int __x);
extern __attribute__((const)) long labs(long __x);
extern __attribute__((const)) long long llabs(long long __x);
extern __attribute__((const)) struct anon_type_5_div_t div(int __numer, int __denom);
extern __attribute__((const)) struct anon_type_6_ldiv_t ldiv(long __numer, long __denom);
extern __attribute__((const)) struct anon_type_7_lldiv_t lldiv(long long __numer, long long __denom);
extern char * ecvt(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern char * fcvt(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern char * gcvt(double __value, int __ndigit, char * __buf);
extern char * qecvt(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern char * qfcvt(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern char * qgcvt(long double __value, int __ndigit, char * __buf);
extern int ecvt_r(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern int fcvt_r(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern int qecvt_r(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern int qfcvt_r(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern int mblen(char const * __s, unsigned long __n);
extern int mbtowc(int * restrict __pwc, char const * restrict __s, unsigned long __n);
extern int wctomb(char * __s, int __wchar);
extern unsigned long mbstowcs(int * restrict __pwcs, char const * restrict __s, unsigned long __n);
extern unsigned long wcstombs(char * restrict __s, int const * restrict __pwcs, unsigned long __n);
extern int rpmatch(char const * __response);
extern int getsubopt(char * * restrict __optionp, char * const * restrict __tokens, char * * restrict __valuep);
extern int getloadavg(double __loadavg[], int __nelem);
int __builtin_abs(int);
extern void * malloc_managed(unsigned long);
extern void * calloc_managed(unsigned long, unsigned long);
extern void free_managed(void * );
extern void cfree_managed(void * );
extern void * realloc_managed(void * , unsigned long);
extern void * valloc_managed(unsigned long);
extern void * pvalloc_managed(unsigned long);
extern void * memalign_managed(unsigned long, unsigned long);
extern int posix_memalign_managed(void * * , unsigned long, unsigned long);
extern char * tmpnam_managed(char * );
extern void * omp_target_alloc(unsigned long, int);
extern void omp_target_free(void * , int);
extern int omp_target_memcpy(void * , void * , unsigned long, unsigned long, unsigned long, int, int);
extern void _mp_atomic_add(int * , int);
extern void _mp_exchange_and_add(int * , int);
void acc_set_default_async(int async);
int acc_get_default_async(void);
extern int acc_get_num_devices(enum anon_type_20_acc_device_t devtype);
extern enum anon_type_20_acc_device_t acc_get_device(void);
extern void acc_set_device_num(int devnum, enum anon_type_20_acc_device_t devtype);
extern int acc_get_device_num(enum anon_type_20_acc_device_t devtype);
extern void acc_init(enum anon_type_20_acc_device_t devtype);
extern void acc_shutdown(enum anon_type_20_acc_device_t devtype);
extern void acc_set_deviceid(int devid);
extern int acc_get_deviceid(int devnum, enum anon_type_20_acc_device_t devtype);
extern int acc_async_test(long async);
extern int acc_async_test_all(void);
extern void acc_async_wait(long async);
extern void acc_async_wait_all(void);
extern void acc_wait(long async);
extern void acc_wait_async(long arg, long async);
extern void acc_wait_all(void);
extern void acc_wait_all_async(long async);
extern int acc_on_device(enum anon_type_20_acc_device_t devtype);
extern void __macc_free(void * );
extern void * acc_memcpy(void * targetptr, void * srcptr, unsigned long bytes);
extern void * acc_memcpy_async(void * targetptr, void * srcptr, unsigned long bytes, long async);
extern void * acc_copyin(void * hostptr, unsigned long bytes);
extern void * acc_copyin_async(void * hostptr, unsigned long bytes, long async);
extern void * acc_pcopyin(void * hostptr, unsigned long bytes);
extern void * acc_pcopyin_async(void * hostptr, unsigned long bytes, long async);
extern void * acc_present_or_copyin(void * hostptr, unsigned long bytes);
extern void * acc_present_or_copyin_async(void * hostptr, unsigned long bytes, long async);
extern void * acc_create(void * hostptr, unsigned long bytes);
extern void * acc_create_async(void * hostptr, unsigned long bytes, long async);
extern void * acc_pcreate(void * hostptr, unsigned long bytes);
extern void * acc_pcreate_async(void * hostptr, unsigned long bytes, long async);
extern void * acc_present_or_create(void * hostptr, unsigned long bytes);
extern void * acc_present_or_create_async(void * hostptr, unsigned long bytes, long async);
extern void acc_copyout(void * hostptr, unsigned long bytes);
extern void acc_copyout_async(void * hostptr, unsigned long bytes, long async);
extern void acc_delete(void * hostptr, unsigned long bytes);
extern void acc_delete_async(void * hostptr, unsigned long bytes, long async);
extern void acc_update_device(void * hostptr, unsigned long bytes);
extern void acc_update_device_async(void * hostptr, unsigned long bytes, long async);
extern void acc_update_self(void * hostptr, unsigned long bytes);
extern void acc_update_self_async(void * hostptr, unsigned long bytes, long async);
extern void acc_update_host(void * hostptr, unsigned long bytes);
extern void acc_update_host_async(void * hostptr, unsigned long bytes, long async);
extern void acc_memcpy_to_device(void * devptr, void * hostptr, unsigned long bytes);
extern void acc_memcpy_to_device_async(void * devptr, void * hostptr, unsigned long bytes, long async);
extern void acc_memcpy_from_device(void * hostptr, void * devptr, unsigned long bytes);
extern void acc_memcpy_from_device_async(void * hostptr, void * devptr, unsigned long bytes, long async);
extern void * acc_memcpy_device(void * targetdevptr, void * srcdevptr, unsigned long bytes);
extern void * acc_memcpy_device_async(void * targetdevptr, void * srcdevptr, unsigned long bytes, long async);
extern void acc_attach(void * * hostptrptr);
extern void acc_attach_async(void * * hostptrptr, long async);
extern void acc_detach(void * * hostptrptr);
extern void acc_detach_async(void * * hostptrptr, long async);
extern void acc_set_device_type(enum anon_type_20_acc_device_t devtype);
extern enum anon_type_20_acc_device_t acc_get_device_type(void);
extern void * __macc_malloc(unsigned long);
extern void * acc_deviceptr(void * hostptr);
extern void * acc_hostptr(void * devptr);
extern void acc_map_data(void * hostptr, void * devptr, unsigned long bytes);
extern void acc_unmap_data(void * hostptr);
extern int acc_is_present(void * hostptr, unsigned long bytes);
extern int acc_present_count(void * hostptr);
extern void acc_updatein(void * hostptr, unsigned long bytes);
extern void acc_updatein_async(void * hostptr, unsigned long bytes, long async);
extern void acc_updateout(void * hostptr, unsigned long bytes);
extern void acc_updateout_async(void * hostptr, unsigned long bytes, long async);
extern void * acc_get_current_cuda_context(void);
extern int acc_get_current_cuda_device(void);
extern void * acc_get_cuda_stream(long);
extern void acc_set_cuda_stream(long, void * );
extern void * acc_cuda_get_context(int);
extern int acc_cuda_get_device(int);
extern void * acc_get_current_opencl_context(void);
extern void * acc_get_current_opencl_device(void);
extern void * acc_get_opencl_queue(long);
extern int atomicaddi(void * address, int val);
extern unsigned int atomicaddu(void * address, unsigned int val);
extern unsigned long long atomicaddul(void * address, unsigned long long val);
extern float atomicaddf(void * address, float val);
extern double atomicaddd(void * address, double val);
extern int atomicsubi(void * address, int val);
extern unsigned int atomicsubu(void * address, unsigned int val);
extern unsigned long long atomicsubul(void * address, unsigned long long val);
extern float atomicsubf(void * address, float val);
extern double atomicsubd(void * address, double val);
extern int atomicmaxi(void * address, int val);
extern unsigned int atomicmaxu(void * address, unsigned int val);
extern unsigned long long atomicmaxul(void * address, unsigned long long val);
extern float atomicmaxf(void * address, float val);
extern double atomicmaxd(void * address, double val);
extern int atomicmini(void * address, int val);
extern unsigned int atomicminu(void * address, unsigned int val);
extern unsigned long long atomicminul(void * address, unsigned long long val);
extern float atomicminf(void * address, float val);
extern double atomicmind(void * address, double val);
extern int atomicandi(void * address, int val);
extern unsigned int atomicandu(void * address, unsigned int val);
extern unsigned long long atomicandul(void * address, unsigned long long val);
extern int atomicori(void * address, int val);
extern unsigned int atomicoru(void * address, unsigned int val);
extern unsigned long long atomicorul(void * address, unsigned long long val);
extern int atomicxori(void * address, int val);
extern unsigned int atomicxoru(void * address, unsigned int val);
extern unsigned long long atomicxorul(void * address, unsigned long long val);
extern int atomicexchi(void * address, int val);
extern unsigned int atomicexchu(void * address, unsigned int val);
extern unsigned long long atomicexchul(void * address, unsigned long long val);
extern float atomicexchf(void * address, float val);
extern double atomicexchd(void * address, double val);
extern unsigned int atomicincu(void * address, unsigned int val);
extern unsigned int atomicdecu(void * address, unsigned int val);
extern int atomiccasi(void * address, int val, int val2);
extern unsigned int atomiccasu(void * address, unsigned int val, unsigned int val2);
extern unsigned long long atomiccasul(void * address, unsigned long long val, unsigned long long val2);
extern float atomiccasf(void * address, float val, float val2);
extern double atomiccasd(void * address, double val, double val2);
extern int __pgi_gangidx(void);
extern int __pgi_workeridx(void);
extern int __pgi_vectoridx(void);
extern int __pgi_blockidx(int);
extern int __pgi_threadidx(int);
extern void * __builtin_va_arg();
extern int __builtin_va_start();
# 315 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 316 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 317 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_;
extern int __underflow(struct _IO_FILE * );
extern int __uflow(struct _IO_FILE * );
extern int __overflow(struct _IO_FILE * , int);
extern int _IO_getc(struct _IO_FILE * __fp);
extern int _IO_putc(int __c, struct _IO_FILE * __fp);
extern int _IO_feof(struct _IO_FILE * __fp);
extern int _IO_ferror(struct _IO_FILE * __fp);
extern int _IO_peekc_locked(struct _IO_FILE * __fp);
extern void _IO_flockfile(struct _IO_FILE * );
extern void _IO_funlockfile(struct _IO_FILE * );
extern int _IO_ftrylockfile(struct _IO_FILE * );
extern int _IO_vfscanf(struct _IO_FILE * restrict, char const * restrict, struct __pgi_tag [1], int * restrict);
extern int _IO_vfprintf(struct _IO_FILE * restrict, char const * restrict, struct __pgi_tag [1]);
extern long _IO_padn(struct _IO_FILE * , int, long);
extern unsigned long _IO_sgetn(struct _IO_FILE * , void * , unsigned long);
extern long _IO_seekoff(struct _IO_FILE * , long, int, int);
extern long _IO_seekpos(struct _IO_FILE * , long, int);
extern void _IO_free_backup_area(struct _IO_FILE * );
# 168 "/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
# 169 "/usr/include/stdio.h"
extern struct _IO_FILE * stdout;
# 170 "/usr/include/stdio.h"
extern struct _IO_FILE * stderr;
extern int remove(char const * __filename);
extern int rename(char const * __old, char const * __new);
extern int renameat(int __oldfd, char const * __old, int __newfd, char const * __new);
extern struct _IO_FILE * tmpfile(void);
extern char * tmpnam(char * __s);
extern char * tmpnam_r(char * __s);
extern char * tempnam(char const * __dir, char const * __pfx);
extern int fclose(struct _IO_FILE * __stream);
extern int fflush(struct _IO_FILE * __stream);
extern int fflush_unlocked(struct _IO_FILE * __stream);
extern struct _IO_FILE * fopen(char const * restrict __filename, char const * restrict __modes);
extern struct _IO_FILE * freopen(char const * restrict __filename, char const * restrict __modes, struct _IO_FILE * restrict __stream);
extern struct _IO_FILE * fdopen(int __fd, char const * __modes);
extern struct _IO_FILE * fmemopen(void * __s, unsigned long __len, char const * __modes);
extern struct _IO_FILE * open_memstream(char * * __bufloc, unsigned long * __sizeloc);
extern void setbuf(struct _IO_FILE * restrict __stream, char * restrict __buf);
extern int setvbuf(struct _IO_FILE * restrict __stream, char * restrict __buf, int __modes, unsigned long __n);
extern void setbuffer(struct _IO_FILE * restrict __stream, char * restrict __buf, unsigned long __size);
extern void setlinebuf(struct _IO_FILE * __stream);
extern int fprintf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...);
extern int printf(char const * restrict __format, ...);
extern int sprintf(char * restrict __s, char const * restrict __format, ...);
extern int vfprintf(struct _IO_FILE * restrict __s, char const * restrict __format, struct __pgi_tag __arg[1]);
extern int vprintf(char const * restrict __format, struct __pgi_tag __arg[1]);
extern int vsprintf(char * restrict __s, char const * restrict __format, struct __pgi_tag __arg[1]);
extern __attribute__((format(__printf__, 3, 4))) int snprintf(char * restrict __s, unsigned long __maxlen, char const * restrict __format, ...);
extern __attribute__((format(__printf__, 3, 0))) int vsnprintf(char * restrict __s, unsigned long __maxlen, char const * restrict __format, struct __pgi_tag __arg[1]);
extern __attribute__((format(__printf__, 2, 0))) int vdprintf(int __fd, char const * restrict __fmt, struct __pgi_tag __arg[1]);
extern __attribute__((format(__printf__, 2, 3))) int dprintf(int __fd, char const * restrict __fmt, ...);
extern int fscanf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...);
extern int scanf(char const * restrict __format, ...);
extern int sscanf(char const * restrict __s, char const * restrict __format, ...);
extern int __isoc99_fscanf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...);
extern int __isoc99_scanf(char const * restrict __format, ...);
extern int __isoc99_sscanf(char const * restrict __s, char const * restrict __format, ...);
extern __attribute__((format(__scanf__, 2, 0))) int vfscanf(struct _IO_FILE * restrict __s, char const * restrict __format, struct __pgi_tag __arg[1]);
extern __attribute__((format(__scanf__, 1, 0))) int vscanf(char const * restrict __format, struct __pgi_tag __arg[1]);
extern __attribute__((format(__scanf__, 2, 0))) int vsscanf(char const * restrict __s, char const * restrict __format, struct __pgi_tag __arg[1]);
extern int __isoc99_vfscanf(struct _IO_FILE * restrict __s, char const * restrict __format, struct __pgi_tag __arg[1]);
extern int __isoc99_vscanf(char const * restrict __format, struct __pgi_tag __arg[1]);
extern int __isoc99_vsscanf(char const * restrict __s, char const * restrict __format, struct __pgi_tag __arg[1]);
extern int fgetc(struct _IO_FILE * __stream);
extern int getc(struct _IO_FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(struct _IO_FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(struct _IO_FILE * __stream);
extern int fputc(int __c, struct _IO_FILE * __stream);
extern int putc(int __c, struct _IO_FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(struct _IO_FILE * __stream);
extern int putw(int __w, struct _IO_FILE * __stream);
extern char * fgets(char * restrict __s, int __n, struct _IO_FILE * restrict __stream);
extern char * gets(char * __s);
extern long __getdelim(char * * restrict __lineptr, unsigned long * restrict __n, int __delimiter, struct _IO_FILE * restrict __stream);
extern long getdelim(char * * restrict __lineptr, unsigned long * restrict __n, int __delimiter, struct _IO_FILE * restrict __stream);
extern long getline(char * * restrict __lineptr, unsigned long * restrict __n, struct _IO_FILE * restrict __stream);
extern int fputs(char const * restrict __s, struct _IO_FILE * restrict __stream);
extern int puts(char const * __s);
extern int ungetc(int __c, struct _IO_FILE * __stream);
extern unsigned long fread(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern unsigned long fwrite(void const * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __s);
extern unsigned long fread_unlocked(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern unsigned long fwrite_unlocked(void const * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern int fseek(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftell(struct _IO_FILE * __stream);
extern void rewind(struct _IO_FILE * __stream);
extern int fseeko(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftello(struct _IO_FILE * __stream);
extern int fgetpos(struct _IO_FILE * restrict __stream, struct anon_type_23__G_fpos_t * restrict __pos);
extern int fsetpos(struct _IO_FILE * __stream, struct anon_type_23__G_fpos_t const * __pos);
extern void clearerr(struct _IO_FILE * __stream);
extern int feof(struct _IO_FILE * __stream);
extern int ferror(struct _IO_FILE * __stream);
extern void clearerr_unlocked(struct _IO_FILE * __stream);
extern int feof_unlocked(struct _IO_FILE * __stream);
extern int ferror_unlocked(struct _IO_FILE * __stream);
extern void perror(char const * __s);
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern int sys_nerr;
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern char const * const sys_errlist[];
extern int fileno(struct _IO_FILE * __stream);
extern int fileno_unlocked(struct _IO_FILE * __stream);
extern struct _IO_FILE * popen(char const * __command, char const * __modes);
extern int pclose(struct _IO_FILE * __stream);
extern char * ctermid(char * __s);
extern void flockfile(struct _IO_FILE * __stream);
extern int ftrylockfile(struct _IO_FILE * __stream);
extern void funlockfile(struct _IO_FILE * __stream);
extern void * malloc_managed(unsigned long);
extern void * calloc_managed(unsigned long, unsigned long);
extern void free_managed(void * );
extern void cfree_managed(void * );
extern void * realloc_managed(void * , unsigned long);
extern void * valloc_managed(unsigned long);
extern void * pvalloc_managed(unsigned long);
extern void * memalign_managed(unsigned long, unsigned long);
extern int posix_memalign_managed(void * * , unsigned long, unsigned long);
extern char * tmpnam_managed(char * );
extern void * memcpy(void * restrict __dest, void const * restrict __src, unsigned long __n);
extern void * memmove(void * __dest, void const * __src, unsigned long __n);
extern void * memccpy(void * restrict __dest, void const * restrict __src, int __c, unsigned long __n);
extern void * memset(void * __s, int __c, unsigned long __n);
extern int memcmp(void const * __s1, void const * __s2, unsigned long __n);
extern void * memchr(void const * __s, int __c, unsigned long __n);
extern char * strcpy(char * restrict __dest, char const * restrict __src);
extern char * strncpy(char * restrict __dest, char const * restrict __src, unsigned long __n);
extern char * strcat(char * restrict __dest, char const * restrict __src);
extern char * strncat(char * restrict __dest, char const * restrict __src, unsigned long __n);
extern int strcmp(char const * __s1, char const * __s2);
extern int strncmp(char const * __s1, char const * __s2, unsigned long __n);
extern int strcoll(char const * __s1, char const * __s2);
extern unsigned long strxfrm(char * restrict __dest, char const * restrict __src, unsigned long __n);
extern int strcoll_l(char const * __s1, char const * __s2, struct __locale_struct * __l);
extern unsigned long strxfrm_l(char * __dest, char const * __src, unsigned long __n, struct __locale_struct * __l);
extern char * strdup(char const * __s);
extern char * strndup(char const * __string, unsigned long __n);
extern char * strchr(char const * __s, int __c);
extern char * strrchr(char const * __s, int __c);
extern unsigned long strcspn(char const * __s, char const * __reject);
extern unsigned long strspn(char const * __s, char const * __accept);
extern char * strpbrk(char const * __s, char const * __accept);
extern char * strstr(char const * __haystack, char const * __needle);
extern char * strtok(char * restrict __s, char const * restrict __delim);
extern char * __strtok_r(char * restrict __s, char const * restrict __delim, char * * restrict __save_ptr);
extern char * strtok_r(char * restrict __s, char const * restrict __delim, char * * restrict __save_ptr);
extern unsigned long strlen(char const * __s);
extern unsigned long strnlen(char const * __string, unsigned long __maxlen);
extern char * strerror(int __errnum);
extern int __xpg_strerror_r(int __errnum, char * __buf, unsigned long __buflen);
extern char * strerror_l(int __errnum, struct __locale_struct * __l);
extern void __bzero(void * __s, unsigned long __n);
extern void bcopy(void const * __src, void * __dest, unsigned long __n);
extern void bzero(void * __s, unsigned long __n);
extern int bcmp(void const * __s1, void const * __s2, unsigned long __n);
extern char * index(char const * __s, int __c);
extern char * rindex(char const * __s, int __c);
extern __attribute__((const)) int ffs(int __i);
extern int strcasecmp(char const * __s1, char const * __s2);
extern int strncasecmp(char const * __s1, char const * __s2, unsigned long __n);
extern char * strsep(char * * restrict __stringp, char const * restrict __delim);
extern char * strsignal(int __sig);
extern char * __stpcpy(char * restrict __dest, char const * restrict __src);
extern char * stpcpy(char * restrict __dest, char const * restrict __src);
extern char * __stpncpy(char * restrict __dest, char const * restrict __src, unsigned long __n);
extern char * stpncpy(char * restrict __dest, char const * restrict __src, unsigned long __n);
# 27 "main.c"
int __MACC_NUMGPUS = -(1);
# 29 "main.c"
int __macc_get_num_gpus()
{
# 31 "main.c"
return acc_get_num_devices(acc_device_nvidia);
}
# 34 "main.c"
int * __MACC_TOPOLOGY;
# 36 "main.c"
void __macc_set_gpu_num(int i)
{
# 38 "main.c"
acc_set_device_num(__MACC_TOPOLOGY[i], acc_device_nvidia);
}
# 61 "main.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET;
# 74 "main.c"
struct __MaccDataWrapCache * __MACC_DATA_WRAP_CACHE_SET;
# 76 "main.c"
void __macc_data_table_insert(int gpu_num, void * ptr, int type_size, int entire_lb, int entire_ub)
{
# 79 "main.c"
int index = (((long)(ptr)) / (16)) % (256);
# 81 "main.c"
struct __MaccDataTableEntry * new_entry = malloc_managed(sizeof(struct __MaccDataTableEntry));
# 83 "main.c"
(new_entry->addr) = ptr;
# 84 "main.c"
(new_entry->addr_ub) = (ptr + (entire_ub * type_size));
# 85 "main.c"
(new_entry->type_size) = type_size;
# 86 "main.c"
(new_entry->entire_lb) = entire_lb;
# 87 "main.c"
(new_entry->entire_ub) = entire_ub;
# 88 "main.c"
(new_entry->dirty) = (0);
# 89 "main.c"
(new_entry->dirty_lb) = (-(1));
# 90 "main.c"
(new_entry->dirty_ub) = (-(1));
# 91 "main.c"
(new_entry->next) = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index));
# 93 "main.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = new_entry;
}
# 96 "main.c"
struct __MaccDataTableEntry * __macc_data_table_find(int gpu_num, void * ptr)
{
# 98 "main.c"
int index = (((long)(ptr)) / (16)) % (256);
# 99 "main.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 101 "main.c"
while(entry != ((void * )(0))) {
{
# 102 "main.c"
if((entry->addr) == ptr) {
# 103 "main.c"
(entry->offset) = (0);
# 104 "main.c"
return entry;
}
# 107 "main.c"
entry = (entry->next);
}
}
{
# 110 "main.c"
struct __MaccDataWrapCache wrap_cache = __MACC_DATA_WRAP_CACHE_SET[gpu_num];
# 111 "main.c"
int lane = (((long)(ptr)) / (16)) % (16);
{
# 113 "main.c"
int i;
# 113 "main.c"
for(i = (0); i < (*(((&(wrap_cache))->cachenum) + lane)); i++) {
{
# 114 "main.c"
if(ptr == (*(((&(wrap_cache))->addr) + ((lane * (16)) + i)))) {
# 115 "main.c"
entry = (*(((&(wrap_cache))->entry) + ((lane * (16)) + i)));
# 116 "main.c"
(entry->offset) = (*(((&(wrap_cache))->offset) + ((lane * (16)) + i)));
# 117 "main.c"
return entry;
}
}
}
}
{
# 121 "main.c"
int i;
# 121 "main.c"
for(i = (0); i < (256); i++) {
{
# 122 "main.c"
entry = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + i));
# 124 "main.c"
while(entry != ((void * )(0))) {
{
# 125 "main.c"
if(((entry->addr) <= ptr) && (ptr <= (entry->addr_ub))) {
# 126 "main.c"
int offset = (ptr - (entry->addr)) / (entry->type_size);
# 128 "main.c"
int cachenum = *(((&(wrap_cache))->cachenum) + lane);
# 130 "main.c"
if(cachenum == (16)) {
# 131 "main.c"
cachenum = (0);
}
# 134 "main.c"
(*(((&(wrap_cache))->addr) + ((lane * (16)) + cachenum))) = (entry->addr);
# 135 "main.c"
(*(((&(wrap_cache))->entry) + ((lane * (16)) + cachenum))) = entry;
# 136 "main.c"
(*(((&(wrap_cache))->offset) + ((lane * (16)) + cachenum))) = offset;
# 138 "main.c"
(*(((&(wrap_cache))->cachenum) + lane)) = (cachenum + (1));
# 140 "main.c"
(entry->offset) = offset;
# 141 "main.c"
return entry;
}
# 144 "main.c"
entry = (entry->next);
}
}
}
}
}
# 148 "main.c"
fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", ptr);
# 149 "main.c"
exit(-(1));
# 151 "main.c"
return (void * )(0);
}
}
# 154 "main.c"
void __macc_data_table_delete(int gpu_num, void * ptr)
{
# 156 "main.c"
int index = (((long)(ptr)) / (16)) % (256);
# 157 "main.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 158 "main.c"
struct __MaccDataTableEntry * pre = (void * )(0);
# 160 "main.c"
memset((__MACC_DATA_WRAP_CACHE_SET + gpu_num)->cachenum, 0, (16) * (sizeof(int)));
# 162 "main.c"
if(entry != ((void * )(0))) {
# 163 "main.c"
if((entry->addr) == ptr) {
# 164 "main.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = (entry->next);
# 165 "main.c"
free_managed(entry);
# 166 "main.c"
return ;
}
# 169 "main.c"
pre = entry;
# 170 "main.c"
entry = (entry->next);
}
# 173 "main.c"
while((pre != ((void * )(0))) && (entry != ((void * )(0)))) {
{
# 174 "main.c"
if((entry->addr) == ptr) {
# 175 "main.c"
(pre->next) = (entry->next);
# 176 "main.c"
free_managed(entry);
# 177 "main.c"
return ;
}
# 180 "main.c"
pre = entry;
# 181 "main.c"
entry = (entry->next);
}
}
# 184 "main.c"
fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", ptr);
# 185 "main.c"
exit(-(1));
}
# 188 "main.c"
void __macc_delete(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 190 "main.c"
acc_delete_async(ptr + (lb * type_size), length * type_size, gpu_num);
# 191 "main.c"
__macc_data_table_delete(gpu_num, ptr);
# 192 "main.c"
acc_wait(gpu_num);
}
# 195 "main.c"
void __macc_copyout(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 197 "main.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 199 "main.c"
if(entry->dirty) {
# 200 "main.c"
acc_update_self_async((entry->addr) + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size), gpu_num);
}
# 204 "main.c"
__macc_delete(gpu_num, ptr, type_size, lb, length);
}
# 207 "main.c"
void __macc_copyin(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 209 "main.c"
acc_copyin_async(ptr + (lb * type_size), length * type_size, gpu_num);
# 210 "main.c"
__macc_data_table_insert(gpu_num, ptr, type_size, lb, (lb + length) - (1));
# 211 "main.c"
acc_wait(gpu_num);
}
# 214 "main.c"
void __macc_create(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 216 "main.c"
acc_create_async(ptr + (lb * type_size), length * type_size, gpu_num);
# 217 "main.c"
__macc_data_table_insert(gpu_num, ptr, type_size, lb, (lb + length) - (1));
# 218 "main.c"
acc_wait(gpu_num);
}
# 221 "main.c"
void * __macc_malloc(unsigned long size)
{
# 223 "main.c"
void * ret = malloc_managed(size);
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 227 "main.c"
__macc_create(omp_get_thread_num(), ret, 1, 0, size);
}
# 230 "main.c"
return ret;
}
# 233 "main.c"
void __macc_free(void * ptr)
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 237 "main.c"
int gpu_num = omp_get_thread_num();
# 238 "main.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 240 "main.c"
__macc_delete(gpu_num, ptr, 1, 0, (entry->entire_ub) + (1));
}
# 242 "main.c"
free_managed(ptr);
}
# 245 "main.c"
void __macc_update_self(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 247 "main.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 248 "main.c"
ptr = (entry->addr);
# 249 "main.c"
lb += (entry->offset);
{
# 250 "main.c"
int ub = (lb + length) - (1);
# 252 "main.c"
if((entry->dirty) && (!(((entry->dirty_lb) > ub) || ((entry->dirty_ub) < lb)))) {
# 253 "main.c"
int new_lb = ((entry->dirty_lb) > lb) ?(entry->dirty_lb) : lb;
# 254 "main.c"
int new_ub = ((entry->dirty_ub) < ub) ?(entry->dirty_ub) : ub;
# 255 "main.c"
acc_update_self(ptr + (new_lb * type_size), ((new_ub - new_lb) + (1)) * type_size);
}
}
}
# 259 "main.c"
void __macc_update_device(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 261 "main.c"
acc_update_device(ptr + (lb * type_size), length * type_size);
}
# 264 "main.c"
void __macc_init_access_region(int gpu_num, int * lb_set, int * ub_set)
{
# 266 "main.c"
(lb_set[gpu_num]) = (2147483647);
# 267 "main.c"
(ub_set[gpu_num]) = (-(1));
}
# 270 "main.c"
void __macc_update_access_region(int gpu_num, int * lb_set, int * ub_set, int val)
{
# 272 "main.c"
(lb_set[gpu_num]) = (((lb_set[gpu_num]) < val) ?(lb_set[gpu_num]) : val);
# 273 "main.c"
(ub_set[gpu_num]) = (((ub_set[gpu_num]) > val) ?(ub_set[gpu_num]) : val);
}
# 276 "main.c"
int __macc_region_is_overlapping(int * lb_set, int * ub_set)
{
{
# 278 "main.c"
int i;
# 278 "main.c"
for(i = (0); i < (__MACC_NUMGPUS - (1)); i++) {
{
{
# 279 "main.c"
int j;
# 279 "main.c"
for(j = (i + (1)); j < __MACC_NUMGPUS; j++) {
{
# 280 "main.c"
if(!(((lb_set[i]) > (ub_set[j])) || ((ub_set[i]) < (lb_set[j])))) {
# 281 "main.c"
return 1;
}
}
}
}
}
}
}
# 283 "main.c"
return 0;
}
# 287 "main.c"
void __macc_calc_loop_region(int * loop_lb_set, int * loop_ub_set, int entire_start, int entire_end, int step, int until_equal)
{
# 291 "main.c"
int tmp = entire_start + (step * ((entire_end - entire_start) / step));
# 292 "main.c"
entire_end = (tmp - ((until_equal || (entire_end != tmp)) ?(0) : step));
{
# 294 "main.c"
int len = (entire_end - entire_start) + step;
# 295 "main.c"
int width = (int)(((float)(len)) / __MACC_NUMGPUS);
# 296 "main.c"
width -= (width % step);
{
# 297 "main.c"
int rem = (len - (width * __MACC_NUMGPUS)) / step;
# 298 "main.c"
width -= step;
{
# 300 "main.c"
int pos = entire_start;
{
# 302 "main.c"
int i;
# 302 "main.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 303 "main.c"
(loop_lb_set[i]) = pos;
# 304 "main.c"
pos = ((width < (0)) ? pos : ((((pos + width) + ((i < rem) ? step : (0))) < entire_end) ?((pos + width) + ((i < rem) ? step : (0))) : entire_end));
# 305 "main.c"
(loop_ub_set[i]) = pos;
# 306 "main.c"
pos = (((pos + step) < entire_end) ?(pos + step) : entire_end);
}
}
}
}
}
}
}
# 310 "main.c"
void __macc_adjust_data_region(void * ptr, int gpu_num, int * lb_set, int * ub_set)
{
# 312 "main.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 314 "main.c"
(lb_set[gpu_num]) += (entry->offset);
# 315 "main.c"
(ub_set[gpu_num]) += (entry->offset);
}
# 318 "main.c"
void __macc_rewrite_loop_region_into_single(int * loop_lb_set, int * loop_ub_set)
{
# 320 "main.c"
(loop_ub_set[(0)]) = (loop_ub_set[(__MACC_NUMGPUS - (1))]);
{
# 322 "main.c"
int i;
# 322 "main.c"
for(i = (1); i < __MACC_NUMGPUS; i++) {
{
# 323 "main.c"
(loop_lb_set[i]) = (1);
# 324 "main.c"
(loop_ub_set[i]) = (0);
}
}
}
}
# 328 "main.c"
void __macc_rewrite_data_region_into_single(int * lb_set, int * ub_set)
{
# 330 "main.c"
int gpu_ub = __MACC_NUMGPUS - (1);
# 331 "main.c"
(lb_set[(0)]) = (((lb_set[(0)]) < (lb_set[gpu_ub])) ?(lb_set[(0)]) : (lb_set[gpu_ub]));
# 332 "main.c"
(ub_set[(0)]) = (((ub_set[(0)]) > (ub_set[gpu_ub])) ?(ub_set[(0)]) : (ub_set[gpu_ub]));
}
# 335 "main.c"
void __macc_sync_data(int gpu_num, void * ptr, int type_size, int lb, int ub)
{
# 337 "main.c"
void * update_addr = ptr + (lb * type_size);
# 338 "main.c"
unsigned long length_b = ((ub - lb) + (1)) * type_size;
# 340 "main.c"
acc_update_self(update_addr, length_b);
{
# 343 "main.c"
int i;
# 343 "main.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 346 "main.c"
if(i != gpu_num) {
# 347 "main.c"
__macc_set_gpu_num(i);
# 348 "main.c"
acc_update_device(update_addr, length_b);
}
}
}
}
# 352 "main.c"
__macc_set_gpu_num(gpu_num);
}
# 356 "main.c"
void __macc_set_data_region(int gpu_num, void * ptr, int multi, int use_type, int * use_lb_set, int * use_ub_set, int def_type, int * def_lb_set, int * def_ub_set)
{
# 360 "main.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 361 "main.c"
ptr = (entry->addr);
# 366 "main.c"
if(((entry->dirty) && (multi || (gpu_num != (0)))) && (__MACC_NUMGPUS > (1))) {
# 367 "main.c"
int update_all = 0;
# 368 "main.c"
int update_all_DtoH = 0;
# 370 "main.c"
if((use_type == (0)) || (def_type == (0))) {
# 371 "main.c"
update_all = (1);
}
else {
# 373 "main.c"
if(def_type == (2)) {
{
# 374 "main.c"
int i;
# 374 "main.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 375 "main.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (def_ub_set[i])) || ((entry->dirty_ub) < (def_lb_set[i]))))) {
# 378 "main.c"
update_all = (1);
# 379 "main.c"
break;
}
}
}
}
}
}
# 384 "main.c"
if(! update_all) {
# 385 "main.c"
int every_whole = 1;
# 386 "main.c"
int unused_lb = entry->dirty_lb;
# 387 "main.c"
int unused_ub = entry->dirty_ub;
{
# 389 "main.c"
int i;
# 389 "main.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 390 "main.c"
if(i != gpu_num) {
# 391 "main.c"
if(((use_lb_set[i]) <= (entry->dirty_lb)) && ((entry->dirty_ub) <= (use_ub_set[i]))) {
# 393 "main.c"
update_all_DtoH = (1);
}
else {
# 396 "main.c"
every_whole = (0);
# 398 "main.c"
if((use_lb_set[i]) <= unused_lb) {
# 399 "main.c"
unused_lb = ((unused_lb > ((use_ub_set[i]) + (1))) ? unused_lb : ((use_ub_set[i]) + (1)));
}
else {
# 400 "main.c"
if((use_ub_set[i]) >= unused_ub) {
# 401 "main.c"
unused_ub = ((unused_ub < ((use_lb_set[i]) - (1))) ? unused_ub : ((use_lb_set[i]) - (1)));
}
}
}
}
}
}
}
# 406 "main.c"
if(every_whole) {
# 407 "main.c"
update_all = (1);
}
# 408 "main.c"
if(unused_ub < unused_lb) {
# 409 "main.c"
update_all_DtoH = (1);
}
}
# 413 "main.c"
if(update_all) {
# 414 "main.c"
__macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 415 "main.c"
(entry->dirty) = (0);
}
else {
# 419 "main.c"
if((entry->dirty) && (use_type == (2))) {
# 420 "main.c"
int thread_num = multi ? __MACC_NUMGPUS : (1);
# 422 "main.c"
if(update_all_DtoH) {
# 423 "main.c"
acc_update_self(ptr + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size));
}
{
# 427 "main.c"
int i;
# 427 "main.c"
for(i = (0); i < thread_num; i++) {
{
# 431 "main.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (use_ub_set[i])) || ((entry->dirty_ub) < (use_lb_set[i]))))) {
# 435 "main.c"
int update_lb = ((entry->dirty_lb) > (use_lb_set[i])) ?(entry->dirty_lb) : (use_lb_set[i]);
# 436 "main.c"
int update_ub = ((entry->dirty_ub) < (use_ub_set[i])) ?(entry->dirty_ub) : (use_ub_set[i]);
# 437 "main.c"
void * update_addr = ptr + (update_lb * (entry->type_size));
# 438 "main.c"
unsigned long length_b = ((update_ub - update_lb) + (1)) * (entry->type_size);
# 440 "main.c"
if(! update_all_DtoH) {
# 441 "main.c"
__macc_set_gpu_num(gpu_num);
# 442 "main.c"
acc_update_self(update_addr, length_b);
}
# 444 "main.c"
__macc_set_gpu_num(i);
# 445 "main.c"
acc_update_device(update_addr, length_b);
}
}
}
}
# 449 "main.c"
__macc_set_gpu_num(gpu_num);
}
}
}
# 458 "main.c"
if((multi || (gpu_num == (0))) && (def_type != (1))) {
# 459 "main.c"
if(def_type == (0)) {
# 460 "main.c"
(entry->dirty) = (1);
# 461 "main.c"
(entry->dirty_lb) = (entry->entire_lb);
# 462 "main.c"
(entry->dirty_ub) = (entry->entire_ub);
}
else {
# 465 "main.c"
if(!(entry->dirty)) {
# 466 "main.c"
(entry->dirty) = (1);
# 467 "main.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 468 "main.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
else {
# 473 "main.c"
if(((!(((entry->dirty_lb) > (def_ub_set[gpu_num])) || ((entry->dirty_ub) < (def_lb_set[gpu_num])))) || ((entry->dirty_lb) == ((def_ub_set[gpu_num]) + (1)))) || ((def_lb_set[gpu_num]) == ((entry->dirty_ub) + (1)))) {
# 481 "main.c"
(entry->dirty_lb) = (((entry->dirty_lb) < (def_lb_set[gpu_num])) ?(entry->dirty_lb) : (def_lb_set[gpu_num]));
# 482 "main.c"
(entry->dirty_ub) = (((entry->dirty_ub) > (def_ub_set[gpu_num])) ?(entry->dirty_ub) : (def_ub_set[gpu_num]));
}
else {
# 486 "main.c"
__macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 487 "main.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 488 "main.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
}
}
}
}
# 493 "main.c"
void __macc_set_data_region_multi(int gpu_num, int multi, int len, void * * ptrs, int * use_type, int * * use_lb_set, int * * use_ub_set, int * def_type, int * * def_lb_set, int * * def_ub_set)
{
{
# 499 "main.c"
int i;
# 499 "main.c"
for(i = (0); i < len; i++) {
{
# 502 "main.c"
int tnum = i;
# 504 "main.c"
__macc_set_gpu_num(gpu_num);
# 506 "main.c"
__macc_set_data_region(gpu_num, ptrs[tnum], multi, use_type[tnum], use_lb_set[tnum], use_ub_set[tnum], def_type[tnum], def_lb_set[tnum], def_ub_set[tnum]);
}
}
}
}
# 513 "main.c"
void __macc_init()
{
# 515 "main.c"
char * env_macc_numgpus = getenv("MACC_NUMGPUS");
# 517 "main.c"
if(env_macc_numgpus != ((void * )(0))) {
# 518 "main.c"
__MACC_NUMGPUS = (atoi(env_macc_numgpus));
}
else {
# 521 "main.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
}
# 524 "main.c"
if(__MACC_NUMGPUS <= (0)) {
# 525 "main.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 526 "main.c"
exit(-(1));
}
# 529 "main.c"
__MACC_TOPOLOGY = (malloc_managed(__MACC_NUMGPUS * (sizeof(int))));
{
# 530 "main.c"
char * topo = getenv("MACC_TOPOLOGY");
# 532 "main.c"
if(topo != ((void * )(0))) {
# 533 "main.c"
int i = 0;
# 534 "main.c"
topo = (strtok(topo, ","));
# 535 "main.c"
while((topo != ((void * )(0))) && (i < __MACC_NUMGPUS)) {
{
# 536 "main.c"
(__MACC_TOPOLOGY[i]) = (atoi(topo));
# 537 "main.c"
topo = (strtok((void * )(0), ","));
# 538 "main.c"
i++;
}
}
}
else {
{
# 541 "main.c"
int i;
# 541 "main.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 542 "main.c"
(__MACC_TOPOLOGY[i]) = i;
}
}
}
}
# 558 "main.c"
__MACC_DATA_TABLE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
# 559 "main.c"
__MACC_DATA_WRAP_CACHE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataWrapCache)));
{
# 562 "main.c"
int t;
# 562 "main.c"
for(t = (0); t < (10); t++) {
{
# 563 "main.c"
printf("[MACC] Wake up (%d)\n", t);
{
# 565 "main.c"
int n = ((256) * (1024)) * (1024);
# 566 "main.c"
int * tmp = malloc_managed(n * (sizeof(int)));
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyin(__macc_tnum, tmp, sizeof(int), 0, n);
}
}
{
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_tmp_def_ub_set[10];
static int __macc_tmp_def_lb_set[10];
static int __macc_tmp_use_ub_set[10];
static int __macc_tmp_use_lb_set[10];
static int __macc_n_last;
static int __macc_i_loop_lb_set[10];
static int __macc_i_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (n != __macc_n_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n_last = n;
}
{
__macc_calc_loop_region(__macc_i_loop_lb_set, __macc_i_loop_ub_set, 1, n - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(tmp, __macc_gpu_num, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set);
__macc_adjust_data_region(tmp, __macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_tmp_def_lb_set, __macc_tmp_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i_loop_lb_set, __macc_i_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, tmp, __macc_multi, 1, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set, 2, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((512) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : 512 );
#pragma acc parallel present ( tmp ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector
# 572 "main.c"
# 572 "main.c"
for(int i= __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 573 "main.c"
(tmp[i]) = i;
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_tmp_def_ub_set[10];
static int __macc_tmp_def_lb_set[10];
static int __macc_tmp_use_ub_set[10];
static int __macc_tmp_use_lb_set[10];
static int __macc_n_last;
static int __macc_i_loop_lb_set[10];
static int __macc_i_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (n != __macc_n_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n_last = n;
}
{
__macc_calc_loop_region(__macc_i_loop_lb_set, __macc_i_loop_ub_set, 1, n - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set, n - __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set, n - __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set, n - __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set, n - __macc_top_loop_ub);
}
__macc_adjust_data_region(tmp, __macc_gpu_num, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set);
__macc_adjust_data_region(tmp, __macc_gpu_num, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_tmp_def_lb_set, __macc_tmp_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i_loop_lb_set, __macc_i_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_tmp_use_lb_set, __macc_tmp_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, tmp, __macc_multi, 2, __macc_tmp_use_lb_set, __macc_tmp_use_ub_set, 2, __macc_tmp_def_lb_set, __macc_tmp_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((512) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : 512 );
#pragma acc parallel present ( tmp ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector
# 577 "main.c"
# 577 "main.c"
for(int i= __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 578 "main.c"
(tmp[(n - i)]) += i;
}
}
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyout(__macc_tnum, tmp, sizeof(int), 0, n);
}
}
}
# 581 "main.c"
free_managed(tmp);
}
}
}
}
}
}
extern void * malloc_managed(unsigned long);
extern void * calloc_managed(unsigned long, unsigned long);
extern void free_managed(void * );
extern void cfree_managed(void * );
extern void * realloc_managed(void * , unsigned long);
extern void * valloc_managed(unsigned long);
extern void * pvalloc_managed(unsigned long);
extern void * memalign_managed(unsigned long, unsigned long);
extern int posix_memalign_managed(void * * , unsigned long, unsigned long);
extern char * tmpnam_managed(char * );
# 604 "main.c"
void c_print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, int passed_verification, char * npbversion, char * compiletime, char * cc, char * clink, char * c_lib, char * c_inc, char * cflags, char * clinkflags)
{
# 623 "main.c"
printf("\n\n %s Benchmark Completed\n", name);
# 625 "main.c"
printf(" Class           =                        %c\n", class);
# 627 "main.c"
if(n3 == (0)) {
# 628 "main.c"
long nn = n1;
# 629 "main.c"
if(n2 != (0)) {
# 629 "main.c"
nn *= n2;
}
# 630 "main.c"
printf(" Size            =             %12ld\n", nn);
}
else {
# 633 "main.c"
printf(" Size            =             %4dx%4dx%4d\n", n1, n2, n3);
}
# 635 "main.c"
printf(" Iterations      =             %12d\n", niter);
# 637 "main.c"
printf(" Time in seconds =             %12.2f\n", t);
# 639 "main.c"
printf(" Mop/s total     =             %12.2f\n", mops);
# 641 "main.c"
printf(" Operation type  = %24s\n", optype);
# 643 "main.c"
if(passed_verification < (0)) {
# 644 "main.c"
printf(" Verification    =            NOT PERFORMED\n");
}
else {
# 645 "main.c"
if(passed_verification) {
# 646 "main.c"
printf(" Verification    =               SUCCESSFUL\n");
}
else {
# 648 "main.c"
printf(" Verification    =             UNSUCCESSFUL\n");
}
}
# 650 "main.c"
printf(" Version         =             %12s\n", npbversion);
# 652 "main.c"
printf(" Compile date    =             %12s\n", compiletime);
# 654 "main.c"
printf("\n Compile options:\n");
# 656 "main.c"
printf("    CC           = %s\n", cc);
# 658 "main.c"
printf("    CLINK        = %s\n", clink);
# 660 "main.c"
printf("    C_LIB        = %s\n", c_lib);
# 662 "main.c"
printf("    C_INC        = %s\n", c_inc);
# 664 "main.c"
printf("    CFLAGS       = %s\n", cflags);
# 666 "main.c"
printf("    CLINKFLAGS   = %s\n", clinkflags);
# 672 "main.c"
printf("\n--------------------------------------\n");
# 673 "main.c"
printf(" Please send all errors/feedbacks to:\n");
# 674 "main.c"
printf(" Center for Manycore Programming\n");
# 675 "main.c"
printf(" cmp@aces.snu.ac.kr\n");
# 676 "main.c"
printf(" http://aces.snu.ac.kr\n");
# 677 "main.c"
printf("--------------------------------------\n");
}
extern void * malloc_managed(unsigned long);
extern void * calloc_managed(unsigned long, unsigned long);
extern void free_managed(void * );
extern void cfree_managed(void * );
extern void * realloc_managed(void * , unsigned long);
extern void * valloc_managed(unsigned long);
extern void * pvalloc_managed(unsigned long);
extern void * memalign_managed(unsigned long, unsigned long);
extern int posix_memalign_managed(void * * , unsigned long, unsigned long);
extern char * tmpnam_managed(char * );
void wtime_(double * t);
# 690 "main.c"
static double elapsed_time(void)
{
# 692 "main.c"
double t;
# 694 "main.c"
wtime_(&(t));
# 695 "main.c"
return t;
}
# 699 "main.c"
static double start[64];
# 699 "main.c"
static double elapsed[64];
# 704 "main.c"
void timer_clear(int n)
{
# 706 "main.c"
(elapsed[n]) = (0.0);
}
# 713 "main.c"
void timer_start(int n)
{
# 715 "main.c"
(start[n]) = (elapsed_time());
}
# 722 "main.c"
void timer_stop(int n)
{
# 724 "main.c"
double t;
# 724 "main.c"
double now;
# 726 "main.c"
now = (elapsed_time());
# 727 "main.c"
t = (now - (start[n]));
# 728 "main.c"
(elapsed[n]) += t;
}
# 736 "main.c"
double timer_read(int n)
{
# 738 "main.c"
return elapsed[n];
}
double tgamma(double);
float tgammaf(float);
__attribute__((const)) double round(double);
__attribute__((const)) float roundf(float);
long lround(double);
long lroundf(float);
long long llround(double);
long long llroundf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/huge_val.h"
static union anon_type_25___huge_val_t __huge_val = {{0, 0, 0, 0, 0, 0, 240, 127}};
# 48 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h"
static union anon_type_26___huge_valf_t __huge_valf = {{0, 0, 128, 127}};
# 37 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h"
static union anon_type_27 __huge_vall = {{0, 0, 0, 0, 0, 0, 0, 128, 255, 127, 0, 0}};
# 48 "/usr/include/x86_64-linux-gnu/bits/nan.h"
static __attribute__((unused)) union anon_type_28 __qnan_union = {{0, 0, 192, 127}};
extern double acos(double __x);
extern double __acos(double __x);
extern double asin(double __x);
extern double __asin(double __x);
extern double atan(double __x);
extern double __atan(double __x);
extern double atan2(double __y, double __x);
extern double __atan2(double __y, double __x);
extern double cos(double __x);
extern double __cos(double __x);
extern double sin(double __x);
extern double __sin(double __x);
extern double tan(double __x);
extern double __tan(double __x);
extern double cosh(double __x);
extern double __cosh(double __x);
extern double sinh(double __x);
extern double __sinh(double __x);
extern double tanh(double __x);
extern double __tanh(double __x);
extern double acosh(double __x);
extern double __acosh(double __x);
extern double asinh(double __x);
extern double __asinh(double __x);
extern double atanh(double __x);
extern double __atanh(double __x);
extern double exp(double __x);
extern double __exp(double __x);
extern double frexp(double __x, int * __exponent);
extern double __frexp(double __x, int * __exponent);
extern double ldexp(double __x, int __exponent);
extern double __ldexp(double __x, int __exponent);
extern double log(double __x);
extern double __log(double __x);
extern double log10(double __x);
extern double __log10(double __x);
extern double modf(double __x, double * __iptr);
extern double __modf(double __x, double * __iptr);
extern double expm1(double __x);
extern double __expm1(double __x);
extern double log1p(double __x);
extern double __log1p(double __x);
extern double logb(double __x);
extern double __logb(double __x);
extern double exp2(double __x);
extern double __exp2(double __x);
extern double log2(double __x);
extern double __log2(double __x);
extern double pow(double __x, double __y);
extern double __pow(double __x, double __y);
extern double sqrt(double __x);
extern double __sqrt(double __x);
extern double hypot(double __x, double __y);
extern double __hypot(double __x, double __y);
extern double cbrt(double __x);
extern double __cbrt(double __x);
extern __attribute__((const)) double ceil(double __x);
extern __attribute__((const)) double __ceil(double __x);
extern __attribute__((const)) double fabs(double __x);
extern __attribute__((const)) double __fabs(double __x);
extern __attribute__((const)) double floor(double __x);
extern __attribute__((const)) double __floor(double __x);
extern double fmod(double __x, double __y);
extern double __fmod(double __x, double __y);
extern __attribute__((const)) int __isinf(double __value);
extern __attribute__((const)) int __finite(double __value);
extern __attribute__((const)) int isinf(double __value);
extern __attribute__((const)) int finite(double __value);
extern double drem(double __x, double __y);
extern double __drem(double __x, double __y);
extern double significand(double __x);
extern double __significand(double __x);
extern __attribute__((const)) double copysign(double __x, double __y);
extern __attribute__((const)) double __copysign(double __x, double __y);
extern __attribute__((const)) double nan(char const * __tagb);
extern __attribute__((const)) double __nan(char const * __tagb);
extern __attribute__((const)) int __isnan(double __value);
extern __attribute__((const)) int isnan(double __value);
extern double j0(double);
extern double __j0(double);
extern double j1(double);
extern double __j1(double);
extern double jn(int, double);
extern double __jn(int, double);
extern double y0(double);
extern double __y0(double);
extern double y1(double);
extern double __y1(double);
extern double yn(int, double);
extern double __yn(int, double);
extern double erf(double);
extern double __erf(double);
extern double erfc(double);
extern double __erfc(double);
extern double lgamma(double);
extern double __lgamma(double);
double tgamma(double);
extern double __tgamma(double);
extern double gamma(double);
extern double __gamma(double);
extern double lgamma_r(double, int * __signgamp);
extern double __lgamma_r(double, int * __signgamp);
extern double rint(double __x);
extern double __rint(double __x);
extern __attribute__((const)) double nextafter(double __x, double __y);
extern __attribute__((const)) double __nextafter(double __x, double __y);
extern __attribute__((const)) double nexttoward(double __x, long double __y);
extern __attribute__((const)) double __nexttoward(double __x, long double __y);
extern double remainder(double __x, double __y);
extern double __remainder(double __x, double __y);
extern double scalbn(double __x, int __n);
extern double __scalbn(double __x, int __n);
extern int ilogb(double __x);
extern int __ilogb(double __x);
extern double scalbln(double __x, long __n);
extern double __scalbln(double __x, long __n);
extern double nearbyint(double __x);
extern double __nearbyint(double __x);
__attribute__((const)) double round(double);
extern __attribute__((const)) double __round(double __x);
extern __attribute__((const)) double trunc(double __x);
extern __attribute__((const)) double __trunc(double __x);
extern double remquo(double __x, double __y, int * __quo);
extern double __remquo(double __x, double __y, int * __quo);
extern long lrint(double __x);
extern long __lrint(double __x);
extern long long llrint(double __x);
extern long long __llrint(double __x);
long lround(double);
extern long __lround(double __x);
long long llround(double);
extern long long __llround(double __x);
extern double fdim(double __x, double __y);
extern double __fdim(double __x, double __y);
extern __attribute__((const)) double fmax(double __x, double __y);
extern __attribute__((const)) double __fmax(double __x, double __y);
extern __attribute__((const)) double fmin(double __x, double __y);
extern __attribute__((const)) double __fmin(double __x, double __y);
extern __attribute__((const)) int __fpclassify(double __value);
extern __attribute__((const)) int __signbit(double __value);
extern double fma(double __x, double __y, double __z);
extern double __fma(double __x, double __y, double __z);
extern double scalb(double __x, double __n);
extern double __scalb(double __x, double __n);
extern float acosf(float __x);
extern float __acosf(float __x);
extern float asinf(float __x);
extern float __asinf(float __x);
extern float atanf(float __x);
extern float __atanf(float __x);
extern float atan2f(float __y, float __x);
extern float __atan2f(float __y, float __x);
extern float cosf(float __x);
extern float __cosf(float __x);
extern float sinf(float __x);
extern float __sinf(float __x);
extern float tanf(float __x);
extern float __tanf(float __x);
extern float coshf(float __x);
extern float __coshf(float __x);
extern float sinhf(float __x);
extern float __sinhf(float __x);
extern float tanhf(float __x);
extern float __tanhf(float __x);
extern float acoshf(float __x);
extern float __acoshf(float __x);
extern float asinhf(float __x);
extern float __asinhf(float __x);
extern float atanhf(float __x);
extern float __atanhf(float __x);
extern float expf(float __x);
extern float __expf(float __x);
extern float frexpf(float __x, int * __exponent);
extern float __frexpf(float __x, int * __exponent);
extern float ldexpf(float __x, int __exponent);
extern float __ldexpf(float __x, int __exponent);
extern float logf(float __x);
extern float __logf(float __x);
extern float log10f(float __x);
extern float __log10f(float __x);
extern float modff(float __x, float * __iptr);
extern float __modff(float __x, float * __iptr);
extern float expm1f(float __x);
extern float __expm1f(float __x);
extern float log1pf(float __x);
extern float __log1pf(float __x);
extern float logbf(float __x);
extern float __logbf(float __x);
extern float exp2f(float __x);
extern float __exp2f(float __x);
extern float log2f(float __x);
extern float __log2f(float __x);
extern float powf(float __x, float __y);
extern float __powf(float __x, float __y);
extern float sqrtf(float __x);
extern float __sqrtf(float __x);
extern float hypotf(float __x, float __y);
extern float __hypotf(float __x, float __y);
extern float cbrtf(float __x);
extern float __cbrtf(float __x);
extern __attribute__((const)) float ceilf(float __x);
extern __attribute__((const)) float __ceilf(float __x);
extern __attribute__((const)) float fabsf(float __x);
extern __attribute__((const)) float __fabsf(float __x);
extern __attribute__((const)) float floorf(float __x);
extern __attribute__((const)) float __floorf(float __x);
extern float fmodf(float __x, float __y);
extern float __fmodf(float __x, float __y);
extern __attribute__((const)) int __isinff(float __value);
extern __attribute__((const)) int __finitef(float __value);
extern __attribute__((const)) int isinff(float __value);
extern __attribute__((const)) int finitef(float __value);
extern float dremf(float __x, float __y);
extern float __dremf(float __x, float __y);
extern float significandf(float __x);
extern float __significandf(float __x);
extern __attribute__((const)) float copysignf(float __x, float __y);
extern __attribute__((const)) float __copysignf(float __x, float __y);
extern __attribute__((const)) float nanf(char const * __tagb);
extern __attribute__((const)) float __nanf(char const * __tagb);
extern __attribute__((const)) int __isnanf(float __value);
extern __attribute__((const)) int isnanf(float __value);
extern float j0f(float);
extern float __j0f(float);
extern float j1f(float);
extern float __j1f(float);
extern float jnf(int, float);
extern float __jnf(int, float);
extern float y0f(float);
extern float __y0f(float);
extern float y1f(float);
extern float __y1f(float);
extern float ynf(int, float);
extern float __ynf(int, float);
extern float erff(float);
extern float __erff(float);
extern float erfcf(float);
extern float __erfcf(float);
extern float lgammaf(float);
extern float __lgammaf(float);
float tgammaf(float);
extern float __tgammaf(float);
extern float gammaf(float);
extern float __gammaf(float);
extern float lgammaf_r(float, int * __signgamp);
extern float __lgammaf_r(float, int * __signgamp);
extern float rintf(float __x);
extern float __rintf(float __x);
extern __attribute__((const)) float nextafterf(float __x, float __y);
extern __attribute__((const)) float __nextafterf(float __x, float __y);
extern __attribute__((const)) float nexttowardf(float __x, long double __y);
extern __attribute__((const)) float __nexttowardf(float __x, long double __y);
extern float remainderf(float __x, float __y);
extern float __remainderf(float __x, float __y);
extern float scalbnf(float __x, int __n);
extern float __scalbnf(float __x, int __n);
extern int ilogbf(float __x);
extern int __ilogbf(float __x);
extern float scalblnf(float __x, long __n);
extern float __scalblnf(float __x, long __n);
extern float nearbyintf(float __x);
extern float __nearbyintf(float __x);
__attribute__((const)) float roundf(float);
extern __attribute__((const)) float __roundf(float __x);
extern __attribute__((const)) float truncf(float __x);
extern __attribute__((const)) float __truncf(float __x);
extern float remquof(float __x, float __y, int * __quo);
extern float __remquof(float __x, float __y, int * __quo);
extern long lrintf(float __x);
extern long __lrintf(float __x);
extern long long llrintf(float __x);
extern long long __llrintf(float __x);
long lroundf(float);
extern long __lroundf(float __x);
long long llroundf(float);
extern long long __llroundf(float __x);
extern float fdimf(float __x, float __y);
extern float __fdimf(float __x, float __y);
extern __attribute__((const)) float fmaxf(float __x, float __y);
extern __attribute__((const)) float __fmaxf(float __x, float __y);
extern __attribute__((const)) float fminf(float __x, float __y);
extern __attribute__((const)) float __fminf(float __x, float __y);
extern __attribute__((const)) int __fpclassifyf(float __value);
extern __attribute__((const)) int __signbitf(float __value);
extern float fmaf(float __x, float __y, float __z);
extern float __fmaf(float __x, float __y, float __z);
extern float scalbf(float __x, float __n);
extern float __scalbf(float __x, float __n);
extern long double acosl(long double __x);
extern long double __acosl(long double __x);
extern long double asinl(long double __x);
extern long double __asinl(long double __x);
extern long double atanl(long double __x);
extern long double __atanl(long double __x);
extern long double atan2l(long double __y, long double __x);
extern long double __atan2l(long double __y, long double __x);
extern long double cosl(long double __x);
extern long double __cosl(long double __x);
extern long double sinl(long double __x);
extern long double __sinl(long double __x);
extern long double tanl(long double __x);
extern long double __tanl(long double __x);
extern long double coshl(long double __x);
extern long double __coshl(long double __x);
extern long double sinhl(long double __x);
extern long double __sinhl(long double __x);
extern long double tanhl(long double __x);
extern long double __tanhl(long double __x);
extern long double acoshl(long double __x);
extern long double __acoshl(long double __x);
extern long double asinhl(long double __x);
extern long double __asinhl(long double __x);
extern long double atanhl(long double __x);
extern long double __atanhl(long double __x);
extern long double expl(long double __x);
extern long double __expl(long double __x);
extern long double frexpl(long double __x, int * __exponent);
extern long double __frexpl(long double __x, int * __exponent);
extern long double ldexpl(long double __x, int __exponent);
extern long double __ldexpl(long double __x, int __exponent);
extern long double logl(long double __x);
extern long double __logl(long double __x);
extern long double log10l(long double __x);
extern long double __log10l(long double __x);
extern long double modfl(long double __x, long double * __iptr);
extern long double __modfl(long double __x, long double * __iptr);
extern long double expm1l(long double __x);
extern long double __expm1l(long double __x);
extern long double log1pl(long double __x);
extern long double __log1pl(long double __x);
extern long double logbl(long double __x);
extern long double __logbl(long double __x);
extern long double exp2l(long double __x);
extern long double __exp2l(long double __x);
extern long double log2l(long double __x);
extern long double __log2l(long double __x);
extern long double powl(long double __x, long double __y);
extern long double __powl(long double __x, long double __y);
extern long double sqrtl(long double __x);
extern long double __sqrtl(long double __x);
extern long double hypotl(long double __x, long double __y);
extern long double __hypotl(long double __x, long double __y);
extern long double cbrtl(long double __x);
extern long double __cbrtl(long double __x);
extern __attribute__((const)) long double ceill(long double __x);
extern __attribute__((const)) long double __ceill(long double __x);
extern __attribute__((const)) long double fabsl(long double __x);
extern __attribute__((const)) long double __fabsl(long double __x);
extern __attribute__((const)) long double floorl(long double __x);
extern __attribute__((const)) long double __floorl(long double __x);
extern long double fmodl(long double __x, long double __y);
extern long double __fmodl(long double __x, long double __y);
extern __attribute__((const)) int __isinfl(long double __value);
extern __attribute__((const)) int __finitel(long double __value);
extern __attribute__((const)) int isinfl(long double __value);
extern __attribute__((const)) int finitel(long double __value);
extern long double dreml(long double __x, long double __y);
extern long double __dreml(long double __x, long double __y);
extern long double significandl(long double __x);
extern long double __significandl(long double __x);
extern __attribute__((const)) long double copysignl(long double __x, long double __y);
extern __attribute__((const)) long double __copysignl(long double __x, long double __y);
extern __attribute__((const)) long double nanl(char const * __tagb);
extern __attribute__((const)) long double __nanl(char const * __tagb);
extern __attribute__((const)) int __isnanl(long double __value);
extern __attribute__((const)) int isnanl(long double __value);
extern long double j0l(long double);
extern long double __j0l(long double);
extern long double j1l(long double);
extern long double __j1l(long double);
extern long double jnl(int, long double);
extern long double __jnl(int, long double);
extern long double y0l(long double);
extern long double __y0l(long double);
extern long double y1l(long double);
extern long double __y1l(long double);
extern long double ynl(int, long double);
extern long double __ynl(int, long double);
extern long double erfl(long double);
extern long double __erfl(long double);
extern long double erfcl(long double);
extern long double __erfcl(long double);
extern long double lgammal(long double);
extern long double __lgammal(long double);
extern long double tgammal(long double);
extern long double __tgammal(long double);
extern long double gammal(long double);
extern long double __gammal(long double);
extern long double lgammal_r(long double, int * __signgamp);
extern long double __lgammal_r(long double, int * __signgamp);
extern long double rintl(long double __x);
extern long double __rintl(long double __x);
extern __attribute__((const)) long double nextafterl(long double __x, long double __y);
extern __attribute__((const)) long double __nextafterl(long double __x, long double __y);
extern __attribute__((const)) long double nexttowardl(long double __x, long double __y);
extern __attribute__((const)) long double __nexttowardl(long double __x, long double __y);
extern long double remainderl(long double __x, long double __y);
extern long double __remainderl(long double __x, long double __y);
extern long double scalbnl(long double __x, int __n);
extern long double __scalbnl(long double __x, int __n);
extern int ilogbl(long double __x);
extern int __ilogbl(long double __x);
extern long double scalblnl(long double __x, long __n);
extern long double __scalblnl(long double __x, long __n);
extern long double nearbyintl(long double __x);
extern long double __nearbyintl(long double __x);
extern __attribute__((const)) long double roundl(long double __x);
extern __attribute__((const)) long double __roundl(long double __x);
extern __attribute__((const)) long double truncl(long double __x);
extern __attribute__((const)) long double __truncl(long double __x);
extern long double remquol(long double __x, long double __y, int * __quo);
extern long double __remquol(long double __x, long double __y, int * __quo);
extern long lrintl(long double __x);
extern long __lrintl(long double __x);
extern long long llrintl(long double __x);
extern long long __llrintl(long double __x);
extern long lroundl(long double __x);
extern long __lroundl(long double __x);
extern long long llroundl(long double __x);
extern long long __llroundl(long double __x);
extern long double fdiml(long double __x, long double __y);
extern long double __fdiml(long double __x, long double __y);
extern __attribute__((const)) long double fmaxl(long double __x, long double __y);
extern __attribute__((const)) long double __fmaxl(long double __x, long double __y);
extern __attribute__((const)) long double fminl(long double __x, long double __y);
extern __attribute__((const)) long double __fminl(long double __x, long double __y);
extern __attribute__((const)) int __fpclassifyl(long double __value);
extern __attribute__((const)) int __signbitl(long double __value);
extern long double fmal(long double __x, long double __y, long double __z);
extern long double __fmal(long double __x, long double __y, long double __z);
extern long double scalbl(long double __x, long double __n);
extern long double __scalbl(long double __x, long double __n);
# 168 "/usr/include/math.h"
extern int signgam;
# 359 "/usr/include/math.h"
extern enum anon_type_30__LIB_VERSION_TYPE _LIB_VERSION;
extern int matherr(struct exception * __exc);
double __builtin_acos(double);
double __builtin_asin(double);
double __builtin_atan2(double, double);
double __builtin_atan(double);
double __builtin_tan(double);
double __builtin_cos(double);
double __builtin_sin(double);
double __builtin_fabs(double);
double __builtin_sqrt(double);
double __builtin_log(double);
double __builtin_log10(double);
double __builtin_exp(double);
double __builtin_pow(double, double);
double __builtin_fmin(double, double);
float __builtin_fminf(float, float);
double __builtin_fmax(double, double);
float __builtin_fmaxf(float, float);
float __builtin_acosf(float);
float __builtin_asinf(float);
float __builtin_atan2f(float, float);
float __builtin_atanf(float);
float __builtin_tanf(float);
float __builtin_cosf(float);
float __builtin_sinf(float);
float __builtin_fabsf(float);
float __builtin_sqrtf(float);
float __builtin_logf(float);
float __builtin_log10f(float);
float __builtin_expf(float);
float __builtin_powf(float, float);
#pragma libm ( acosf , acoshf , asinf , asinhf , atanhf , atan2f )
#pragma libm ( cbrtf , ceilf , copysignf , cosf , coshf )
#pragma libm ( erff , erfcf , expf , exp2f , exp10f , expm1f )
#pragma libm ( fabsf , floorf , fmaf , fminf , fmaxf )
#pragma libm ( ilogbf )
#pragma libm ( ldexpf , lgammaf , llrintf , llroundf , logbf , log1pf , logf , log2f , log10f , lrintf , lroundf )
#pragma libm ( nanf , nearbyintf , nextafterf )
#pragma libm ( powf )
#pragma libm ( remainderf , remquof , rintf , roundf , rsqrtf )
#pragma libm ( scalblnf , scalbnf , sinf , sinhf , sqrtf )
#pragma libm ( tanf , tanhf , tgammaf , truncf )
#pragma libm ( abs , acos , acosh , asin , asinh , atanh , atan2 )
#pragma libm ( cbrt , ceil , copysign , cos , cosh )
#pragma libm ( erf , erfc , exp , exp2 , exp10 , expm1 )
#pragma libm ( fabs , floor , fma , fmin , fmax )
#pragma libm ( ilogb , isinf , isfinite , isnan )
#pragma libm ( ldexp , lgamma , llrint , llround , logb , log1p , log , log2 , log10 , lrint , lround )
#pragma libm ( pow )
#pragma libm ( nan , nearbyint , nextafter )
#pragma libm ( remainder , remquo , rint , round , rsqrt )
#pragma libm ( scalbln , scalbn , sin , sinh , sqrt )
#pragma libm ( tan , tanh , tgamma , trunc )
# 746 "main.c"
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_31_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7)
{
# 751 "main.c"
char size[16];
# 752 "main.c"
int j;
# 754 "main.c"
printf("\n\n %s Benchmark Completed.\n", name);
# 755 "main.c"
printf(" Class           =             %12c\n", class);
# 762 "main.c"
if((n2 == (0)) && (n3 == (0))) {
# 763 "main.c"
if(((name[(0)]) == ((char)69)) && ((name[(1)]) == ((char)80))) {
# 764 "main.c"
sprintf(size, "%15.0lf", __builtin_pow(2.0, n1));
# 765 "main.c"
j = (14);
# 766 "main.c"
if((size[j]) == ((char)46)) {
# 767 "main.c"
(size[j]) = ((char)32);
# 768 "main.c"
j--;
}
# 770 "main.c"
(size[j + (1)]) = ((char)0);
# 771 "main.c"
printf(" Size            =          %15s\n", size);
}
else {
# 773 "main.c"
printf(" Size            =             %12d\n", n1);
}
}
else {
# 776 "main.c"
printf(" Size            =           %4dx%4dx%4d\n", n1, n2, n3);
}
# 779 "main.c"
printf(" Iterations      =             %12d\n", niter);
# 780 "main.c"
printf(" Time in seconds =             %12.2lf\n", t);
# 781 "main.c"
printf(" Mop/s total     =          %15.2lf\n", mops);
# 782 "main.c"
printf(" Operation type  = %24s\n", optype);
# 783 "main.c"
if(verified) {
# 784 "main.c"
printf(" Verification    =             %12s\n", "SUCCESSFUL");
}
else {
# 786 "main.c"
printf(" Verification    =             %12s\n", "UNSUCCESSFUL");
}
# 787 "main.c"
printf(" Version         =             %12s\n", npbversion);
# 788 "main.c"
printf(" Compile date    =             %12s\n", compiletime);
# 790 "main.c"
printf("\n Compile options:\n    CC           = %s\n", cs1);
# 792 "main.c"
printf("    CLINK        = %s\n", cs2);
# 793 "main.c"
printf("    C_LIB        = %s\n", cs3);
# 794 "main.c"
printf("    C_INC        = %s\n", cs4);
# 795 "main.c"
printf("    CFLAGS       = %s\n", cs5);
# 796 "main.c"
printf("    CLINKFLAGS   = %s\n", cs6);
# 797 "main.c"
printf("    RAND         = %s\n", cs7);
# 799 "main.c"
printf("\n--------------------------------------\n Please send all errors/feedbacks to:\n Center for Manycore Programming\n cmp@aces.snu.ac.kr\n http://aces.snu.ac.kr\n--------------------------------------\n\n");
}
# 809 "main.c"
double randlc(double * x, double a)
{
# 841 "main.c"
double const r23 = 1.1920928955078125e-07;
# 842 "main.c"
double const r46 = r23 * r23;
# 843 "main.c"
double const t23 = 8.388608e+06;
# 844 "main.c"
double const t46 = t23 * t23;
# 846 "main.c"
double t1;
# 846 "main.c"
double t2;
# 846 "main.c"
double t3;
# 846 "main.c"
double t4;
# 846 "main.c"
double a1;
# 846 "main.c"
double a2;
# 846 "main.c"
double x1;
# 846 "main.c"
double x2;
# 846 "main.c"
double z;
# 847 "main.c"
double r;
# 852 "main.c"
t1 = (r23 * a);
# 853 "main.c"
a1 = ((int)(t1));
# 854 "main.c"
a2 = (a - (t23 * a1));
# 861 "main.c"
t1 = (r23 * (*(x)));
# 862 "main.c"
x1 = ((int)(t1));
# 863 "main.c"
x2 = ((*(x)) - (t23 * x1));
# 864 "main.c"
t1 = ((a1 * x2) + (a2 * x1));
# 865 "main.c"
t2 = ((int)(r23 * t1));
# 866 "main.c"
z = (t1 - (t23 * t2));
# 867 "main.c"
t3 = ((t23 * z) + (a2 * x2));
# 868 "main.c"
t4 = ((int)(r46 * t3));
# 869 "main.c"
(*(x)) = (t3 - (t46 * t4));
# 870 "main.c"
r = (r46 * (*(x)));
# 872 "main.c"
return r;
}
# 876 "main.c"
void vranlc(int n, double * x, double a, double y[])
{
# 908 "main.c"
double const r23 = 1.1920928955078125e-07;
# 909 "main.c"
double const r46 = r23 * r23;
# 910 "main.c"
double const t23 = 8.388608e+06;
# 911 "main.c"
double const t46 = t23 * t23;
# 913 "main.c"
double t1;
# 913 "main.c"
double t2;
# 913 "main.c"
double t3;
# 913 "main.c"
double t4;
# 913 "main.c"
double a1;
# 913 "main.c"
double a2;
# 913 "main.c"
double x1;
# 913 "main.c"
double x2;
# 913 "main.c"
double z;
# 915 "main.c"
int i;
# 920 "main.c"
t1 = (r23 * a);
# 921 "main.c"
a1 = ((int)(t1));
# 922 "main.c"
a2 = (a - (t23 * a1));
# 927 "main.c"
for(i = (0); i < n; i++) {
{
# 933 "main.c"
t1 = (r23 * (*(x)));
# 934 "main.c"
x1 = ((int)(t1));
# 935 "main.c"
x2 = ((*(x)) - (t23 * x1));
# 936 "main.c"
t1 = ((a1 * x2) + (a2 * x1));
# 937 "main.c"
t2 = ((int)(r23 * t1));
# 938 "main.c"
z = (t1 - (t23 * t2));
# 939 "main.c"
t3 = ((t23 * z) + (a2 * x2));
# 940 "main.c"
t4 = ((int)(r46 * t3));
# 941 "main.c"
(*(x)) = (t3 - (t46 * t4));
# 942 "main.c"
(y[i]) = (r46 * (*(x)));
}
}
# 945 "main.c"
return ;
}
extern long clock(void);
extern long time(long * __timer);
extern __attribute__((const)) double difftime(long __time1, long __time0);
extern long mktime(struct tm * __tp);
extern unsigned long strftime(char * restrict __s, unsigned long __maxsize, char const * restrict __format, struct tm const * restrict __tp);
extern unsigned long strftime_l(char * restrict __s, unsigned long __maxsize, char const * restrict __format, struct tm const * restrict __tp, struct __locale_struct * __loc);
extern struct tm * gmtime(long const * __timer);
extern struct tm * localtime(long const * __timer);
extern struct tm * gmtime_r(long const * restrict __timer, struct tm * restrict __tp);
extern struct tm * localtime_r(long const * restrict __timer, struct tm * restrict __tp);
extern char * asctime(struct tm const * __tp);
extern char * ctime(long const * __timer);
extern char * asctime_r(struct tm const * restrict __tp, char * restrict __buf);
extern char * ctime_r(long const * restrict __timer, char * restrict __buf);
# 282 "/usr/include/time.h"
extern char * __tzname[2];
# 283 "/usr/include/time.h"
extern int __daylight;
# 284 "/usr/include/time.h"
extern long __timezone;
# 289 "/usr/include/time.h"
extern char * tzname[2];
extern void tzset(void);
# 297 "/usr/include/time.h"
extern int daylight;
# 298 "/usr/include/time.h"
extern long timezone;
extern int stime(long const * __when);
extern long timegm(struct tm * __tp);
extern long timelocal(struct tm * __tp);
extern __attribute__((const)) int dysize(int __year);
extern int nanosleep(struct timespec const * __requested_time, struct timespec * __remaining);
extern int clock_getres(int __clock_id, struct timespec * __res);
extern int clock_gettime(int __clock_id, struct timespec * __tp);
extern int clock_settime(int __clock_id, struct timespec const * __tp);
extern int clock_nanosleep(int __clock_id, int __flags, struct timespec const * __req, struct timespec * __rem);
extern int clock_getcpuclockid(int __pid, int * __clock_id);
extern int timer_create(int __clock_id, struct sigevent * restrict __evp, void * * restrict __timerid);
extern int timer_delete(void * __timerid);
extern int timer_settime(void * __timerid, int __flags, struct itimerspec const * restrict __value, struct itimerspec * restrict __ovalue);
extern int timer_gettime(void * __timerid, struct itimerspec * __value);
extern int timer_getoverrun(void * __timerid);
extern int gettimeofday(struct timeval * restrict __tv, struct timezone * restrict __tz);
extern int settimeofday(struct timeval const * __tv, struct timezone const * __tz);
extern int adjtime(struct timeval const * __delta, struct timeval * __olddelta);
extern int getitimer(int __which, struct itimerval * __value);
extern int setitimer(int __which, struct itimerval const * restrict __new, struct itimerval * restrict __old);
extern int utimes(char const * __file, struct timeval const __tvp[2]);
extern int lutimes(char const * __file, struct timeval const __tvp[2]);
extern int futimes(int __fd, struct timeval const __tvp[2]);
# 954 "main.c"
void wtime_(double * t)
{
# 956 "main.c"
static int sec = -(1);
# 957 "main.c"
struct timeval tv;
# 958 "main.c"
gettimeofday(&(tv), (void * )(0));
# 959 "main.c"
if(sec < (0)) {
# 959 "main.c"
sec = ((&(tv))->tv_sec);
}
# 960 "main.c"
(*(t)) = ((((&(tv))->tv_sec) - sec) + ((1.0e-6) * ((&(tv))->tv_usec)));
}
extern void * malloc_managed(unsigned long);
extern void * calloc_managed(unsigned long, unsigned long);
extern void free_managed(void * );
extern void cfree_managed(void * );
extern void * realloc_managed(void * , unsigned long);
extern void * valloc_managed(unsigned long);
extern void * pvalloc_managed(unsigned long);
extern void * memalign_managed(unsigned long, unsigned long);
extern int posix_memalign_managed(void * * , unsigned long, unsigned long);
extern char * tmpnam_managed(char * );
double randlc(double * x, double a);
void vranlc(int n, double * x, double a, double y[]);
void timer_clear(int n);
void timer_start(int n);
void timer_stop(int n);
double timer_read(int n);
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_31_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7);
# 1037 "main.c"
unsigned int nz = ((150000) * ((15) + (1))) * ((15) + (1));
# 1038 "main.c"
unsigned int naz = (150000) * ((15) + (1));
# 1039 "main.c"
unsigned int na = 150000;
# 1041 "main.c"
static int colidx[38400000];
# 1042 "main.c"
static int rowstr[150001];
# 1043 "main.c"
static int iv[150000];
# 1044 "main.c"
static int arow[150000];
# 1045 "main.c"
static int acol[2400000];
# 1048 "main.c"
static double aelt[2400000];
# 1049 "main.c"
static double a[38400000];
# 1050 "main.c"
static double x[150002];
# 1051 "main.c"
static double z[150002];
# 1052 "main.c"
static double p[150002];
# 1053 "main.c"
static double q[150002];
# 1054 "main.c"
static double r[150002];
# 1057 "main.c"
static int naa;
# 1058 "main.c"
static int nzz;
# 1059 "main.c"
static int firstrow;
# 1060 "main.c"
static int lastrow;
# 1061 "main.c"
static int firstcol;
# 1062 "main.c"
static int lastcol;
# 1065 "main.c"
static double amult;
# 1066 "main.c"
static double tran;
# 1069 "main.c"
static enum anon_type_31_logical timeron;
static void conj_grad(int colidx[], int rowstr[], double x[], double z[], double a[], double p[], double q[], double r[], double * rnorm);
static void makea(int n, int nz, double a[], int colidx[], int rowstr[], int firstrow, int lastrow, int firstcol, int lastcol, int arow[], int acol[][16], double aelt[][16], int iv[]);
static void sparse(double a[], int colidx[], int rowstr[], int n, int nz, int nozer, int arow[], int acol[][16], double aelt[][16], int firstrow, int lastrow, int nzloc[], double rcond, double shift);
static void sprnvc(int n, int nz, int nn1, double v[], int iv[]);
static int icnvrt(double x, int ipwr2);
static void vecset(int n, double v[], int iv[], int * nzv, int i, double val);
# 1113 "main.c"
static int conj_calls = 0;
# 1114 "main.c"
static int loop_iter = 0;
# 1118 "main.c"
int main(int argc, char * argv[])
{
__macc_init();
{
# 1120 "main.c"
int i;
# 1120 "main.c"
int j;
# 1120 "main.c"
int k;
# 1120 "main.c"
int it;
# 1121 "main.c"
int end;
# 1123 "main.c"
double zeta;
# 1124 "main.c"
double rnorm;
# 1125 "main.c"
double norm_temp1;
# 1125 "main.c"
double norm_temp2;
# 1127 "main.c"
double t;
# 1127 "main.c"
double mflops;
# 1127 "main.c"
double tmax;
# 1128 "main.c"
char Class;
# 1129 "main.c"
int verified;
# 1130 "main.c"
double zeta_verify_value;
# 1130 "main.c"
double epsilon;
# 1130 "main.c"
double err;
# 1132 "main.c"
char * t_names[3];
# 1133 "main.c"
acc_init(acc_device_default);
# 1135 "main.c"
for(i = (0); i < (3); i++) {
{
# 1136 "main.c"
timer_clear(i);
}
}
{
# 1139 "main.c"
struct _IO_FILE * fp;
# 1140 "main.c"
if((fp = (fopen("timer.flag", "r"))) != ((void * )(0))) {
# 1141 "main.c"
timeron = true;
# 1142 "main.c"
(t_names[0]) = ("init");
# 1143 "main.c"
(t_names[1]) = ("benchmk");
# 1144 "main.c"
(t_names[2]) = ("conjgd");
# 1145 "main.c"
fclose(fp);
}
else {
# 1147 "main.c"
timeron = false;
}
# 1150 "main.c"
timer_start(0);
# 1152 "main.c"
firstrow = (0);
# 1153 "main.c"
lastrow = ((150000) - (1));
# 1154 "main.c"
firstcol = (0);
# 1155 "main.c"
lastcol = ((150000) - (1));
# 1157 "main.c"
if(((((150000) == (1400)) && ((15) == (7))) && ((75) == (15))) && ((110.0) == (10))) {
# 1158 "main.c"
Class = ((char)83);
# 1159 "main.c"
zeta_verify_value = (8.5971775078648);
}
else {
# 1160 "main.c"
if(((((150000) == (7000)) && ((15) == (8))) && ((75) == (15))) && ((110.0) == (12))) {
# 1161 "main.c"
Class = ((char)87);
# 1162 "main.c"
zeta_verify_value = (10.362595087124);
}
else {
# 1163 "main.c"
if(((((150000) == (14000)) && ((15) == (11))) && ((75) == (15))) && ((110.0) == (20))) {
# 1164 "main.c"
Class = ((char)65);
# 1165 "main.c"
zeta_verify_value = (17.130235054029);
}
else {
# 1166 "main.c"
if(((((150000) == (75000)) && ((15) == (13))) && ((75) == (75))) && ((110.0) == (60))) {
# 1167 "main.c"
Class = ((char)66);
# 1168 "main.c"
zeta_verify_value = (22.712745482631);
}
else {
# 1169 "main.c"
if(((((150000) == (150000)) && ((15) == (15))) && ((75) == (75))) && ((110.0) == (110))) {
# 1170 "main.c"
Class = ((char)67);
# 1171 "main.c"
zeta_verify_value = (28.973605592845);
}
else {
# 1172 "main.c"
if(((((150000) == (1500000)) && ((15) == (21))) && ((75) == (100))) && ((110.0) == (500))) {
# 1173 "main.c"
Class = ((char)68);
# 1174 "main.c"
zeta_verify_value = (52.514532105794);
}
else {
# 1175 "main.c"
if(((((150000) == (9000000)) && ((15) == (26))) && ((75) == (100))) && ((110.0) == (1500))) {
# 1176 "main.c"
Class = ((char)69);
# 1177 "main.c"
zeta_verify_value = (77.522164599383);
}
else {
# 1179 "main.c"
Class = ((char)85);
}
}
}
}
}
}
}
# 1182 "main.c"
printf("\n\n NAS Parallel Benchmarks (NPB3.3-ACC-C) - CG Benchmark\n\n");
# 1183 "main.c"
printf(" Size: %11d\n", 150000);
# 1184 "main.c"
printf(" Iterations: %5d\n", 75);
# 1185 "main.c"
printf("\n");
# 1187 "main.c"
naa = (150000);
# 1188 "main.c"
nzz = (((150000) * ((15) + (1))) * ((15) + (1)));
# 1193 "main.c"
tran = (314159265.0);
# 1194 "main.c"
amult = (1220703125.0);
# 1195 "main.c"
zeta = (randlc(&(tran), amult));
# 1200 "main.c"
makea(naa, nzz, a, colidx, rowstr, firstrow, lastrow, firstcol, lastcol, arow, (int (* )[16])((void * )(acol)), (double (* )[16])((void * )(aelt)), iv);
# 1215 "main.c"
for(j = (0); j < ((lastrow - firstrow) + (1)); j++) {
{
# 1216 "main.c"
for(k = (rowstr[j]); k < (rowstr[j + (1)]); k++) {
{
# 1217 "main.c"
(colidx[k]) = ((colidx[k]) - firstcol);
}
}
}
}
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyin(__macc_tnum, colidx, sizeof(int), 0, nz);
__macc_copyin(__macc_tnum, a, sizeof(double), 0, nz);
__macc_copyin(__macc_tnum, rowstr, sizeof(int), 0, na + (1));
__macc_create(__macc_tnum, x, sizeof(double), 0, na + (2));
__macc_create(__macc_tnum, z, sizeof(double), 0, na + (2));
__macc_create(__macc_tnum, p, sizeof(double), 0, na + (2));
__macc_create(__macc_tnum, q, sizeof(double), 0, na + (2));
__macc_create(__macc_tnum, r, sizeof(double), 0, na + (2));
}
}
{
# 1231 "main.c"
int na_gangs = (150000) + (1);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_i_loop_lb_set[10];
static int __macc_i_loop_ub_set[10];
__macc_region_is_changed = __macc_region_is_changed;
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
}
{
__macc_calc_loop_region(__macc_i_loop_lb_set, __macc_i_loop_ub_set, 0, ((150000) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i_loop_lb_set, __macc_i_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc_x_use_lb_set, __macc_x_use_ub_set, 2, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((na_gangs + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (na_gangs + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1233 "main.c"
for(i = __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 1234 "main.c"
(x[i]) = (1.0);
}
}
}
}
}
# 1237 "main.c"
end = ((lastcol - firstcol) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_q_def_ub_set[10];
static int __macc_q_def_lb_set[10];
static int __macc_q_use_ub_set[10];
static int __macc_q_use_lb_set[10];
static int __macc_p_def_ub_set[10];
static int __macc_p_def_lb_set[10];
static int __macc_p_use_ub_set[10];
static int __macc_p_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_z_def_lb_set, __macc_z_def_ub_set)) || ((__macc_region_is_overlapping(__macc_r_def_lb_set, __macc_r_def_ub_set)) || ((__macc_region_is_overlapping(__macc_q_def_lb_set, __macc_q_def_ub_set)) || (__macc_region_is_overlapping(__macc_p_def_lb_set, __macc_p_def_ub_set))))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_def_lb_set, __macc_r_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_def_lb_set, __macc_p_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 1, __macc_z_use_lb_set, __macc_z_use_ub_set, 2, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 1, __macc_r_use_lb_set, __macc_r_use_ub_set, 2, __macc_r_def_lb_set, __macc_r_def_ub_set);
__macc_set_data_region(__macc_tnum, q, __macc_multi, 1, __macc_q_use_lb_set, __macc_q_use_ub_set, 2, __macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 1, __macc_p_use_lb_set, __macc_p_use_ub_set, 2, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1239 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1240 "main.c"
(q[j]) = (0.0);
# 1241 "main.c"
(z[j]) = (0.0);
# 1242 "main.c"
(r[j]) = (0.0);
# 1243 "main.c"
(p[j]) = (0.0);
}
}
}
}
}
# 1246 "main.c"
zeta = (0.0);
# 1253 "main.c"
for(it = (1); it <= (1); it++) {
{
# 1257 "main.c"
conj_grad(colidx, rowstr, x, z, a, p, q, r, &(rnorm));
# 1265 "main.c"
norm_temp1 = (0.0);
# 1266 "main.c"
norm_temp2 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : norm_temp2 ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc_z_use_lb_set, __macc_z_use_ub_set, 1, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : norm_temp2 )
#pragma acc loop
# 1269 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1271 "main.c"
norm_temp2 = (norm_temp2 + ((z[j]) * (z[j])));
}
}
}
}
}
# 1274 "main.c"
norm_temp2 = ((1.0) / (__builtin_sqrt(norm_temp2)));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc_z_use_lb_set, __macc_z_use_ub_set, 1, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc_x_use_lb_set, __macc_x_use_ub_set, 2, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1280 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1281 "main.c"
(x[j]) = (norm_temp2 * (z[j]));
}
}
}
}
}
}
}
# 1289 "main.c"
na_gangs = ((150000) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_i_loop_lb_set[10];
static int __macc_i_loop_ub_set[10];
__macc_region_is_changed = __macc_region_is_changed;
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
}
{
__macc_calc_loop_region(__macc_i_loop_lb_set, __macc_i_loop_ub_set, 0, ((150000) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i_loop_lb_set, __macc_i_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc_x_use_lb_set, __macc_x_use_ub_set, 2, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((na_gangs + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (na_gangs + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1291 "main.c"
for(i = __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 1292 "main.c"
(x[i]) = (1.0);
}
}
}
}
}
# 1295 "main.c"
zeta = (0.0);
# 1297 "main.c"
timer_stop(0);
# 1299 "main.c"
printf(" Initialization time = %15.3f seconds\n", timer_read(0));
# 1301 "main.c"
timer_start(1);
# 1308 "main.c"
for(it = (1); it <= (75); it++) {
{
# 1312 "main.c"
conj_grad(colidx, rowstr, x, z, a, p, q, r, &(rnorm));
# 1320 "main.c"
norm_temp1 = (0.0);
# 1321 "main.c"
norm_temp2 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x_use_lb_set, __macc_x_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : norm_temp1 ) reduction ( + : norm_temp2 ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc_z_use_lb_set, __macc_z_use_ub_set, 1, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, x, __macc_multi, 2, __macc_x_use_lb_set, __macc_x_use_ub_set, 1, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : norm_temp1 , norm_temp2 )
#pragma acc loop gang worker vector
# 1324 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1325 "main.c"
norm_temp1 = (norm_temp1 + ((x[j]) * (z[j])));
# 1326 "main.c"
norm_temp2 = (norm_temp2 + ((z[j]) * (z[j])));
}
}
}
}
}
# 1329 "main.c"
norm_temp2 = ((1.0) / (__builtin_sqrt(norm_temp2)));
# 1331 "main.c"
zeta = ((110.0) + ((1.0) / norm_temp1));
# 1332 "main.c"
if(it == (1)) {
# 1333 "main.c"
printf("\n   iteration           ||r||                 zeta\n");
}
# 1334 "main.c"
printf("    %5d       %20.14E%20.13f\n", it, rnorm, zeta);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc_z_use_lb_set, __macc_z_use_ub_set, 1, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc_x_use_lb_set, __macc_x_use_ub_set, 2, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1340 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1341 "main.c"
(x[j]) = (norm_temp2 * (z[j]));
}
}
}
}
}
}
}
# 1345 "main.c"
timer_stop(1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_delete(__macc_tnum, colidx, sizeof(int), 0, nz);
__macc_delete(__macc_tnum, a, sizeof(double), 0, nz);
__macc_delete(__macc_tnum, rowstr, sizeof(int), 0, na + (1));
__macc_delete(__macc_tnum, x, sizeof(double), 0, na + (2));
__macc_delete(__macc_tnum, z, sizeof(double), 0, na + (2));
__macc_delete(__macc_tnum, p, sizeof(double), 0, na + (2));
__macc_delete(__macc_tnum, q, sizeof(double), 0, na + (2));
__macc_delete(__macc_tnum, r, sizeof(double), 0, na + (2));
}
}
}
# 1352 "main.c"
t = (timer_read(1));
# 1354 "main.c"
printf(" Benchmark completed\n");
# 1356 "main.c"
epsilon = (1.0e-10);
# 1357 "main.c"
if(Class != ((char)85)) {
# 1358 "main.c"
err = ((__builtin_fabs(zeta - zeta_verify_value)) / zeta_verify_value);
# 1359 "main.c"
if(err <= epsilon) {
# 1360 "main.c"
verified = true;
# 1361 "main.c"
printf(" VERIFICATION SUCCESSFUL\n");
# 1362 "main.c"
printf(" Zeta is    %20.13E\n", zeta);
# 1363 "main.c"
printf(" Error is   %20.13E\n", err);
}
else {
# 1365 "main.c"
verified = false;
# 1366 "main.c"
printf(" VERIFICATION FAILED\n");
# 1367 "main.c"
printf(" Zeta                %20.13E\n", zeta);
# 1368 "main.c"
printf(" The correct zeta is %20.13E\n", zeta_verify_value);
}
}
else {
# 1371 "main.c"
verified = false;
# 1372 "main.c"
printf(" Problem size unknown\n");
# 1373 "main.c"
printf(" NO VERIFICATION PERFORMED\n");
}
# 1376 "main.c"
if(t != (0.0)) {
# 1377 "main.c"
mflops = (((((double)(((2) * (75)) * (150000))) * ((((3.0) + ((double)((15) * ((15) + (1))))) + ((25.0) * ((5.0) + ((double)((15) * ((15) + (1))))))) + (3.0))) / t) / (1000000.0));
}
else {
# 1382 "main.c"
mflops = (0.0);
}
# 1385 "main.c"
print_results("CG", Class, 150000, 0, 0, 75, t, mflops, "          floating point", verified, "3.3.1", "06 Dec 2017", "icc", "icc", "-lm", "-I../common", "-O3 -mcmodel=medium", "-O3 -mcmodel=medium", "randdp");
# 1394 "main.c"
if(timeron) {
# 1395 "main.c"
tmax = (timer_read(1));
# 1396 "main.c"
if(tmax == (0.0)) {
# 1396 "main.c"
tmax = (1.0);
}
# 1397 "main.c"
printf("  SECTION   Time (secs)\n");
# 1398 "main.c"
for(i = (0); i < (3); i++) {
{
# 1399 "main.c"
t = (timer_read(i));
# 1400 "main.c"
if(i == (0)) {
# 1401 "main.c"
printf("  %8s:%9.3f\n", t_names[i], t);
}
else {
# 1403 "main.c"
printf("  %8s:%9.3f  (%6.2f%%)\n", t_names[i], t, (t * (100.0)) / tmax);
# 1404 "main.c"
if(i == (2)) {
# 1405 "main.c"
t = (tmax - t);
# 1406 "main.c"
printf("    --> %8s:%9.3f  (%6.2f%%)\n", "rest", t, (t * (100.0)) / tmax);
}
}
}
}
}
# 1412 "main.c"
acc_shutdown(acc_device_default);
# 1413 "main.c"
printf("conj calls=%d, loop iter = %d. \n", conj_calls, loop_iter);
# 1415 "main.c"
return 0;
}
}
}
# 1423 "main.c"
static void conj_grad(int colidx[], int rowstr[], double x[], double z[], double a[], double p[], double q[], double r[], double * rnorm)
{
# 1433 "main.c"
int j;
# 1433 "main.c"
int k;
# 1433 "main.c"
int tmp1;
# 1433 "main.c"
int tmp2;
# 1433 "main.c"
int tmp3;
# 1434 "main.c"
int end;
# 1435 "main.c"
int cgit;
# 1435 "main.c"
int cgitmax = 25;
# 1436 "main.c"
double d;
# 1436 "main.c"
double sum;
# 1436 "main.c"
double rho;
# 1436 "main.c"
double rho0;
# 1436 "main.c"
double alpha;
# 1436 "main.c"
double beta;
# 1437 "main.c"
double sum_array[150002];
# 1438 "main.c"
conj_calls++;
# 1439 "main.c"
rho = (0.0);
{
# 1440 "main.c"
unsigned int num_gangs = 0;
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
}
}
{
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_q_def_ub_set[10];
static int __macc_q_def_lb_set[10];
static int __macc_q_use_ub_set[10];
static int __macc_q_use_lb_set[10];
static int __macc_p_def_ub_set[10];
static int __macc_p_def_lb_set[10];
static int __macc_p_use_ub_set[10];
static int __macc_p_use_lb_set[10];
static int __macc_naa_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (naa != __macc_naa_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_naa_last = naa;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, naa - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_z_def_lb_set, __macc_z_def_ub_set)) || ((__macc_region_is_overlapping(__macc_r_def_lb_set, __macc_r_def_ub_set)) || ((__macc_region_is_overlapping(__macc_q_def_lb_set, __macc_q_def_ub_set)) || (__macc_region_is_overlapping(__macc_p_def_lb_set, __macc_p_def_ub_set))))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_def_lb_set, __macc_r_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_def_lb_set, __macc_p_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 2, __macc_x_use_lb_set, __macc_x_use_ub_set, 1, __macc_x_def_lb_set, __macc_x_def_ub_set);
__macc_set_data_region(__macc_tnum, z, __macc_multi, 1, __macc_z_use_lb_set, __macc_z_use_ub_set, 2, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc_r_use_lb_set, __macc_r_use_ub_set, 2, __macc_r_def_lb_set, __macc_r_def_ub_set);
__macc_set_data_region(__macc_tnum, q, __macc_multi, 1, __macc_q_use_lb_set, __macc_q_use_ub_set, 2, __macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 1, __macc_p_use_lb_set, __macc_p_use_ub_set, 2, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((naa + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (naa + (127)) / (128) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector independent
# 1451 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1452 "main.c"
(q[j]) = (0.0);
# 1453 "main.c"
(z[j]) = (0.0);
# 1454 "main.c"
(r[j]) = (x[j]);
# 1455 "main.c"
(p[j]) = (r[j]);
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_firstcol_last;
static int __macc_lastcol_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((lastcol != __macc_lastcol_last) || (firstcol != __macc_firstcol_last)));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_lastcol_last = lastcol;
__macc_firstcol_last = firstcol;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, ((lastcol - firstcol) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r_use_lb_set, __macc_r_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : rho ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc_r_use_lb_set, __macc_r_use_ub_set, 1, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((((lastcol - firstcol) + (1)) + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (((lastcol - firstcol) + (1)) + (127)) / (128) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : rho )
#pragma acc loop gang worker vector
# 1465 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1466 "main.c"
rho = (rho + ((r[j]) * (r[j])));
}
}
}
}
}
# 1475 "main.c"
for(cgit = (1); cgit <= cgitmax; cgit++) {
{
# 1502 "main.c"
loop_iter++;
# 1504 "main.c"
end = ((lastrow - firstrow) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_rowstr_def_ub_set[10];
static int __macc_rowstr_def_lb_set[10];
static int __macc_rowstr_use_ub_set[10];
static int __macc_rowstr_use_lb_set[10];
static int __macc_p_def_ub_set[10];
static int __macc_p_def_lb_set[10];
static int __macc_p_use_ub_set[10];
static int __macc_p_use_lb_set[10];
static int __macc_colidx_def_ub_set[10];
static int __macc_colidx_def_lb_set[10];
static int __macc_colidx_use_ub_set[10];
static int __macc_colidx_use_lb_set[10];
static int __macc_a_def_ub_set[10];
static int __macc_a_def_lb_set[10];
static int __macc_a_use_ub_set[10];
static int __macc_a_use_lb_set[10];
static int __macc_q_def_ub_set[10];
static int __macc_q_def_lb_set[10];
static int __macc_q_use_ub_set[10];
static int __macc_q_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_a_def_lb_set, __macc_a_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set, tmp2 - (1));
}
{
}
__macc_adjust_data_region(a, __macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set);
__macc_adjust_data_region(a, __macc_gpu_num, __macc_a_def_lb_set, __macc_a_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_colidx_def_lb_set, __macc_colidx_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set, tmp2 - (1));
}
{
}
__macc_adjust_data_region(colidx, __macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set);
__macc_adjust_data_region(colidx, __macc_gpu_num, __macc_colidx_def_lb_set, __macc_colidx_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
{
}
{
}
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_rowstr_def_lb_set, __macc_rowstr_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_lb + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_ub + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(rowstr, __macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set);
__macc_adjust_data_region(rowstr, __macc_gpu_num, __macc_rowstr_def_lb_set, __macc_rowstr_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_q_def_lb_set, __macc_q_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_colidx_use_lb_set, __macc_colidx_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_a_use_lb_set, __macc_a_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_q_def_lb_set, __macc_q_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : sum ) private ( j , k , tmp1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, rowstr, __macc_multi, 2, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, 1, __macc_rowstr_def_lb_set, __macc_rowstr_def_ub_set);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 0, __macc_p_use_lb_set, __macc_p_use_ub_set, 1, __macc_p_def_lb_set, __macc_p_def_ub_set);
__macc_set_data_region(__macc_tnum, colidx, __macc_multi, 2, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set, 1, __macc_colidx_def_lb_set, __macc_colidx_def_ub_set);
__macc_set_data_region(__macc_tnum, a, __macc_multi, 2, __macc_a_use_lb_set, __macc_a_use_ub_set, 1, __macc_a_def_lb_set, __macc_a_def_ub_set);
__macc_set_data_region(__macc_tnum, q, __macc_multi, 1, __macc_q_use_lb_set, __macc_q_use_ub_set, 2, __macc_q_def_lb_set, __macc_q_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((end + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : end );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang
# 1509 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1510 "main.c"
tmp1 = (rowstr[j]);
# 1511 "main.c"
tmp2 = (rowstr[j + (1)]);
# 1512 "main.c"
sum = (0.0);
#pragma acc loop worker vector reduction ( + : sum )
# 1514 "main.c"
for(k = tmp1; k < tmp2; k++) {
{
# 1515 "main.c"
tmp3 = (colidx[k]);
# 1516 "main.c"
sum = (sum + ((a[k]) * (p[tmp3])));
}
}
# 1518 "main.c"
(q[j]) = sum;
}
}
}
}
}
# 1524 "main.c"
d = (0.0);
# 1525 "main.c"
end = ((lastcol - firstcol) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_q_def_ub_set[10];
static int __macc_q_def_lb_set[10];
static int __macc_q_use_ub_set[10];
static int __macc_q_use_lb_set[10];
static int __macc_p_def_ub_set[10];
static int __macc_p_def_lb_set[10];
static int __macc_p_use_ub_set[10];
static int __macc_p_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_use_lb_set, __macc_p_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : d ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, q, __macc_multi, 2, __macc_q_use_lb_set, __macc_q_use_ub_set, 1, __macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 2, __macc_p_use_lb_set, __macc_p_use_ub_set, 1, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang worker vector reduction ( + : d )
# 1529 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1530 "main.c"
d = (d + ((p[j]) * (q[j])));
}
}
}
}
}
# 1537 "main.c"
alpha = (rho / d);
# 1542 "main.c"
rho0 = rho;
# 1548 "main.c"
rho = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_q_def_ub_set[10];
static int __macc_q_def_lb_set[10];
static int __macc_q_use_ub_set[10];
static int __macc_q_use_lb_set[10];
static int __macc_p_def_ub_set[10];
static int __macc_p_def_lb_set[10];
static int __macc_p_use_ub_set[10];
static int __macc_p_use_lb_set[10];
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_adjust_data_region(q, __macc_gpu_num, __macc_q_def_lb_set, __macc_q_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_z_def_lb_set, __macc_z_def_ub_set)) || (__macc_region_is_overlapping(__macc_r_def_lb_set, __macc_r_def_ub_set))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_q_use_lb_set, __macc_q_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_def_lb_set, __macc_r_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, q, __macc_multi, 2, __macc_q_use_lb_set, __macc_q_use_ub_set, 1, __macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 2, __macc_p_use_lb_set, __macc_p_use_ub_set, 1, __macc_p_def_lb_set, __macc_p_def_ub_set);
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc_z_use_lb_set, __macc_z_use_ub_set, 2, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc_r_use_lb_set, __macc_r_use_ub_set, 2, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (1023)) / (1024)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (1023)) / (1024) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector independent
# 1550 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1551 "main.c"
(z[j]) = ((z[j]) + (alpha * (p[j])));
# 1552 "main.c"
(r[j]) = ((r[j]) - (alpha * (q[j])));
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r_use_lb_set, __macc_r_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : rho ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc_r_use_lb_set, __macc_r_use_ub_set, 1, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang worker vector reduction ( + : rho )
# 1562 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1564 "main.c"
rho = (rho + ((r[j]) * (r[j])));
}
}
}
}
}
# 1571 "main.c"
beta = (rho / rho0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_p_def_ub_set[10];
static int __macc_p_def_lb_set[10];
static int __macc_p_use_ub_set[10];
static int __macc_p_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_adjust_data_region(p, __macc_gpu_num, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_p_def_lb_set, __macc_p_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_use_lb_set, __macc_p_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_def_lb_set, __macc_p_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc_r_use_lb_set, __macc_r_use_ub_set, 1, __macc_r_def_lb_set, __macc_r_def_ub_set);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 2, __macc_p_use_lb_set, __macc_p_use_ub_set, 2, __macc_p_def_lb_set, __macc_p_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end + (127)) / (128) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector independent
# 1577 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1578 "main.c"
(p[j]) = ((r[j]) + (beta * (p[j])));
}
}
}
}
}
}
}
# 1588 "main.c"
end = ((lastrow - firstrow) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_rowstr_def_ub_set[10];
static int __macc_rowstr_def_lb_set[10];
static int __macc_rowstr_use_ub_set[10];
static int __macc_rowstr_use_lb_set[10];
static int __macc_colidx_def_ub_set[10];
static int __macc_colidx_def_lb_set[10];
static int __macc_colidx_use_ub_set[10];
static int __macc_colidx_use_lb_set[10];
static int __macc_a_def_ub_set[10];
static int __macc_a_def_lb_set[10];
static int __macc_a_use_ub_set[10];
static int __macc_a_use_lb_set[10];
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_end_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc_end_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end_last = end;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, end - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_a_def_lb_set, __macc_a_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set, tmp2 - (1));
}
{
}
__macc_adjust_data_region(a, __macc_gpu_num, __macc_a_use_lb_set, __macc_a_use_ub_set);
__macc_adjust_data_region(a, __macc_gpu_num, __macc_a_def_lb_set, __macc_a_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_colidx_def_lb_set, __macc_colidx_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set, tmp2 - (1));
}
{
}
__macc_adjust_data_region(colidx, __macc_gpu_num, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set);
__macc_adjust_data_region(colidx, __macc_gpu_num, __macc_colidx_def_lb_set, __macc_colidx_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_rowstr_def_lb_set, __macc_rowstr_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_lb + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_ub + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(rowstr, __macc_gpu_num, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set);
__macc_adjust_data_region(rowstr, __macc_gpu_num, __macc_rowstr_def_lb_set, __macc_rowstr_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
{
}
{
}
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_adjust_data_region(z, __macc_gpu_num, __macc_z_def_lb_set, __macc_z_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_r_def_lb_set, __macc_r_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_colidx_use_lb_set, __macc_colidx_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_a_use_lb_set, __macc_a_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_def_lb_set, __macc_r_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : d ) private ( j , k , tmp1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 0, __macc_z_use_lb_set, __macc_z_use_ub_set, 1, __macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_set_data_region(__macc_tnum, rowstr, __macc_multi, 2, __macc_rowstr_use_lb_set, __macc_rowstr_use_ub_set, 1, __macc_rowstr_def_lb_set, __macc_rowstr_def_ub_set);
__macc_set_data_region(__macc_tnum, colidx, __macc_multi, 2, __macc_colidx_use_lb_set, __macc_colidx_use_ub_set, 1, __macc_colidx_def_lb_set, __macc_colidx_def_ub_set);
__macc_set_data_region(__macc_tnum, a, __macc_multi, 2, __macc_a_use_lb_set, __macc_a_use_ub_set, 1, __macc_a_def_lb_set, __macc_a_def_ub_set);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 1, __macc_r_use_lb_set, __macc_r_use_ub_set, 2, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((end + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : end );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang
# 1592 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1593 "main.c"
tmp1 = (rowstr[j]);
# 1594 "main.c"
tmp2 = (rowstr[j + (1)]);
# 1595 "main.c"
d = (0.0);
#pragma acc loop worker vector reduction ( + : d )
# 1597 "main.c"
for(k = tmp1; k < tmp2; k++) {
{
# 1598 "main.c"
tmp3 = (colidx[k]);
# 1599 "main.c"
d = (d + ((a[k]) * (z[tmp3])));
}
}
# 1601 "main.c"
(r[j]) = d;
}
}
}
}
}
# 1607 "main.c"
sum = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_r_def_ub_set[10];
static int __macc_r_def_lb_set[10];
static int __macc_r_use_ub_set[10];
static int __macc_r_use_lb_set[10];
static int __macc_firstcol_last;
static int __macc_lastcol_last;
static int __macc_j_loop_lb_set[10];
static int __macc_j_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((lastcol != __macc_lastcol_last) || (firstcol != __macc_firstcol_last)));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_lastcol_last = lastcol;
__macc_firstcol_last = firstcol;
}
{
__macc_calc_loop_region(__macc_j_loop_lb_set, __macc_j_loop_ub_set, 0, ((lastcol - firstcol) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_use_lb_set, __macc_r_use_ub_set);
__macc_adjust_data_region(r, __macc_gpu_num, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_adjust_data_region(x, __macc_gpu_num, __macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j_loop_lb_set, __macc_j_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x_use_lb_set, __macc_x_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_use_lb_set, __macc_r_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : sum ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 2, __macc_x_use_lb_set, __macc_x_use_ub_set, 1, __macc_x_def_lb_set, __macc_x_def_ub_set);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc_r_use_lb_set, __macc_r_use_ub_set, 1, __macc_r_def_lb_set, __macc_r_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((((lastcol - firstcol) + (1)) + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (((lastcol - firstcol) + (1)) + (127)) / (128) );
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : sum )
#pragma acc loop gang worker vector
# 1613 "main.c"
for(j = __macc_top_loop_lb; j <= __macc_top_loop_ub; j++) {
{
# 1614 "main.c"
d = ((x[j]) - (r[j]));
# 1615 "main.c"
sum = (sum + (d * d));
}
}
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
}
}
}
# 1619 "main.c"
(*(rnorm)) = (__builtin_sqrt(sum));
}
}
# 1648 "main.c"
static void makea(int n, int nz, double a[], int colidx[], int rowstr[], int firstrow, int lastrow, int firstcol, int lastcol, int arow[], int acol[][16], double aelt[][16], int iv[])
{
# 1662 "main.c"
int iouter;
# 1662 "main.c"
int ivelt;
# 1662 "main.c"
int nzv;
# 1662 "main.c"
int nn1;
# 1663 "main.c"
int ivc[16];
# 1664 "main.c"
double vc[16];
# 1673 "main.c"
nn1 = (1);
# 1674 "main.c"
do {
{
# 1675 "main.c"
nn1 = ((2) * nn1);
}
}
while(nn1 < n);
# 1681 "main.c"
for(iouter = (0); iouter < n; iouter++) {
{
# 1682 "main.c"
nzv = (15);
# 1683 "main.c"
sprnvc(n, nzv, nn1, vc, ivc);
# 1684 "main.c"
vecset(n, vc, ivc, &(nzv), iouter + (1), 0.5);
# 1685 "main.c"
(arow[iouter]) = nzv;
# 1687 "main.c"
for(ivelt = (0); ivelt < nzv; ivelt++) {
{
# 1688 "main.c"
(acol[iouter][ivelt]) = ((ivc[ivelt]) - (1));
# 1689 "main.c"
(aelt[iouter][ivelt]) = (vc[ivelt]);
}
}
}
}
# 1697 "main.c"
sparse(a, colidx, rowstr, n, nz, 15, arow, acol, aelt, firstrow, lastrow, iv, 1.0e-1, 110.0);
}
# 1707 "main.c"
static void sparse(double a[], int colidx[], int rowstr[], int n, int nz, int nozer, int arow[], int acol[][16], double aelt[][16], int firstrow, int lastrow, int nzloc[], double rcond, double shift)
{
# 1722 "main.c"
int nrows;
# 1728 "main.c"
int i;
# 1728 "main.c"
int j;
# 1728 "main.c"
int j1;
# 1728 "main.c"
int j2;
# 1728 "main.c"
int nza;
# 1728 "main.c"
int k;
# 1728 "main.c"
int kk;
# 1728 "main.c"
int nzrow;
# 1728 "main.c"
int jcol;
# 1729 "main.c"
double size;
# 1729 "main.c"
double scale;
# 1729 "main.c"
double ratio;
# 1729 "main.c"
double va;
# 1730 "main.c"
enum anon_type_31_logical cont40;
# 1735 "main.c"
nrows = ((lastrow - firstrow) + (1));
# 1740 "main.c"
for(j = (0); j < (nrows + (1)); j++) {
{
# 1741 "main.c"
(rowstr[j]) = (0);
}
}
# 1744 "main.c"
for(i = (0); i < n; i++) {
{
# 1745 "main.c"
for(nza = (0); nza < (arow[i]); nza++) {
{
# 1746 "main.c"
j = ((acol[i][nza]) + (1));
# 1747 "main.c"
(rowstr[j]) = ((rowstr[j]) + (arow[i]));
}
}
}
}
# 1751 "main.c"
(rowstr[0]) = (0);
# 1752 "main.c"
for(j = (1); j < (nrows + (1)); j++) {
{
# 1753 "main.c"
(rowstr[j]) = ((rowstr[j]) + (rowstr[j - (1)]));
}
}
# 1755 "main.c"
nza = ((rowstr[nrows]) - (1));
# 1761 "main.c"
if(nza > nz) {
# 1762 "main.c"
printf("Space for matrix elements exceeded in sparse\n");
# 1763 "main.c"
printf("nza, nzmax = %d, %d\n", nza, nz);
# 1764 "main.c"
exit(1);
}
# 1770 "main.c"
for(j = (0); j < nrows; j++) {
{
# 1771 "main.c"
for(k = (rowstr[j]); k < (rowstr[j + (1)]); k++) {
{
# 1772 "main.c"
(a[k]) = (0.0);
# 1773 "main.c"
(colidx[k]) = (-(1));
}
}
# 1775 "main.c"
(nzloc[j]) = (0);
}
}
# 1781 "main.c"
size = (1.0);
# 1782 "main.c"
ratio = (__builtin_pow(rcond, (1.0) / ((double)(n))));
# 1784 "main.c"
for(i = (0); i < n; i++) {
{
# 1785 "main.c"
for(nza = (0); nza < (arow[i]); nza++) {
{
# 1786 "main.c"
j = (acol[i][nza]);
# 1788 "main.c"
scale = (size * (aelt[i][nza]));
# 1789 "main.c"
for(nzrow = (0); nzrow < (arow[i]); nzrow++) {
{
# 1790 "main.c"
jcol = (acol[i][nzrow]);
# 1791 "main.c"
va = ((aelt[i][nzrow]) * scale);
# 1797 "main.c"
if((jcol == j) && (j == i)) {
# 1798 "main.c"
va = ((va + rcond) - shift);
}
# 1801 "main.c"
cont40 = false;
# 1802 "main.c"
for(k = (rowstr[j]); k < (rowstr[j + (1)]); k++) {
{
# 1803 "main.c"
if((colidx[k]) > jcol) {
# 1807 "main.c"
for(kk = ((rowstr[j + (1)]) - (2)); kk >= k; kk--) {
{
# 1808 "main.c"
if((colidx[kk]) > (-(1))) {
# 1809 "main.c"
(a[kk + (1)]) = (a[kk]);
# 1810 "main.c"
(colidx[kk + (1)]) = (colidx[kk]);
}
}
}
# 1813 "main.c"
(colidx[k]) = jcol;
# 1814 "main.c"
(a[k]) = (0.0);
# 1815 "main.c"
cont40 = true;
# 1816 "main.c"
break;
}
else {
# 1817 "main.c"
if((colidx[k]) == (-(1))) {
# 1818 "main.c"
(colidx[k]) = jcol;
# 1819 "main.c"
cont40 = true;
# 1820 "main.c"
break;
}
else {
# 1821 "main.c"
if((colidx[k]) == jcol) {
# 1825 "main.c"
(nzloc[j]) = ((nzloc[j]) + (1));
# 1826 "main.c"
cont40 = true;
# 1827 "main.c"
break;
}
}
}
}
}
# 1830 "main.c"
if(cont40 == false) {
# 1831 "main.c"
printf("internal error in sparse: i=%d\n", i);
# 1832 "main.c"
exit(1);
}
# 1834 "main.c"
(a[k]) = ((a[k]) + va);
}
}
}
}
# 1837 "main.c"
size = (size * ratio);
}
}
# 1843 "main.c"
for(j = (1); j < nrows; j++) {
{
# 1844 "main.c"
(nzloc[j]) = ((nzloc[j]) + (nzloc[j - (1)]));
}
}
# 1847 "main.c"
for(j = (0); j < nrows; j++) {
{
# 1848 "main.c"
if(j > (0)) {
# 1849 "main.c"
j1 = ((rowstr[j]) - (nzloc[j - (1)]));
}
else {
# 1851 "main.c"
j1 = (0);
}
# 1853 "main.c"
j2 = ((rowstr[j + (1)]) - (nzloc[j]));
# 1854 "main.c"
nza = (rowstr[j]);
# 1855 "main.c"
for(k = j1; k < j2; k++) {
{
# 1856 "main.c"
(a[k]) = (a[nza]);
# 1857 "main.c"
(colidx[k]) = (colidx[nza]);
# 1858 "main.c"
nza = (nza + (1));
}
}
}
}
# 1861 "main.c"
for(j = (1); j < (nrows + (1)); j++) {
{
# 1862 "main.c"
(rowstr[j]) = ((rowstr[j]) - (nzloc[j - (1)]));
}
}
# 1864 "main.c"
nza = ((rowstr[nrows]) - (1));
}
# 1877 "main.c"
static void sprnvc(int n, int nz, int nn1, double v[], int iv[])
{
# 1879 "main.c"
int nzv;
# 1879 "main.c"
int ii;
# 1879 "main.c"
int i;
# 1880 "main.c"
double vecelt;
# 1880 "main.c"
double vecloc;
# 1882 "main.c"
nzv = (0);
# 1884 "main.c"
while(nzv < nz) {
{
# 1885 "main.c"
vecelt = (randlc(&(tran), amult));
# 1890 "main.c"
vecloc = (randlc(&(tran), amult));
# 1891 "main.c"
i = ((icnvrt(vecloc, nn1)) + (1));
# 1892 "main.c"
if(i > n) {
# 1892 "main.c"
continue;
}
{
# 1897 "main.c"
enum anon_type_31_logical was_gen = false;
# 1898 "main.c"
for(ii = (0); ii < nzv; ii++) {
{
# 1899 "main.c"
if((iv[ii]) == i) {
# 1900 "main.c"
was_gen = true;
# 1901 "main.c"
break;
}
}
}
# 1904 "main.c"
if(was_gen) {
# 1904 "main.c"
continue;
}
# 1905 "main.c"
(v[nzv]) = vecelt;
# 1906 "main.c"
(iv[nzv]) = i;
# 1907 "main.c"
nzv = (nzv + (1));
}
}
}
}
# 1915 "main.c"
static int icnvrt(double x, int ipwr2)
{
# 1917 "main.c"
return (int)(ipwr2 * x);
}
# 1925 "main.c"
static void vecset(int n, double v[], int iv[], int * nzv, int i, double val)
{
# 1927 "main.c"
int k;
# 1928 "main.c"
enum anon_type_31_logical set;
# 1930 "main.c"
set = false;
# 1931 "main.c"
for(k = (0); k < (*(nzv)); k++) {
{
# 1932 "main.c"
if((iv[k]) == i) {
# 1933 "main.c"
(v[k]) = val;
# 1934 "main.c"
set = true;
}
}
}
# 1937 "main.c"
if(set == false) {
# 1938 "main.c"
(v[*(nzv)]) = val;
# 1939 "main.c"
(iv[*(nzv)]) = i;
# 1940 "main.c"
(*(nzv)) = ((*(nzv)) + (1));
}
}
