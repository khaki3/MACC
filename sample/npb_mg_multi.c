/*
 * Original Source  : /tmp/tmp.9PmSihN3DY/1.c
 * Language         : C
 * Compiled Time    : 2017-12-09 21:37:48
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.0.3
 */
# 1 "/tmp/tmp.9PmSihN3DY/1.c"
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
void __macc_init()
{
# 495 "main.c"
char * env_macc_numgpus = getenv("MACC_NUMGPUS");
# 497 "main.c"
if(env_macc_numgpus != ((void * )(0))) {
# 498 "main.c"
__MACC_NUMGPUS = (atoi(env_macc_numgpus));
}
else {
# 501 "main.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
}
# 504 "main.c"
if(__MACC_NUMGPUS <= (0)) {
# 505 "main.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 506 "main.c"
exit(-(1));
}
# 509 "main.c"
__MACC_TOPOLOGY = (malloc_managed(__MACC_NUMGPUS * (sizeof(int))));
{
# 510 "main.c"
char * topo = getenv("MACC_TOPOLOGY");
# 512 "main.c"
if(topo != ((void * )(0))) {
# 513 "main.c"
int i = 0;
# 514 "main.c"
topo = (strtok(topo, ","));
# 515 "main.c"
while((topo != ((void * )(0))) && (i < __MACC_NUMGPUS)) {
{
# 516 "main.c"
(__MACC_TOPOLOGY[i]) = (atoi(topo));
# 517 "main.c"
topo = (strtok((void * )(0), ","));
# 518 "main.c"
i++;
}
}
}
else {
{
# 521 "main.c"
int i;
# 521 "main.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 522 "main.c"
(__MACC_TOPOLOGY[i]) = i;
}
}
}
}
# 538 "main.c"
__MACC_DATA_TABLE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
# 539 "main.c"
__MACC_DATA_WRAP_CACHE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataWrapCache)));
{
# 542 "main.c"
int t;
# 542 "main.c"
for(t = (0); t < (10); t++) {
{
# 543 "main.c"
printf("[MACC] Wake up (%d)\n", t);
{
# 545 "main.c"
int n = ((256) * (1024)) * (1024);
# 546 "main.c"
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
# 552 "main.c"
# 552 "main.c"
for(int i= __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 553 "main.c"
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
# 557 "main.c"
# 557 "main.c"
for(int i= __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 558 "main.c"
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
# 561 "main.c"
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
void wtime_(double * t);
# 588 "main.c"
static double elapsed_time(void)
{
# 590 "main.c"
double t;
# 592 "main.c"
wtime_(&(t));
# 593 "main.c"
return t;
}
# 597 "main.c"
static double start[64];
# 597 "main.c"
static double elapsed[64];
# 602 "main.c"
void timer_clear(int n)
{
# 604 "main.c"
(elapsed[n]) = (0.0);
}
# 611 "main.c"
void timer_start(int n)
{
# 613 "main.c"
(start[n]) = (elapsed_time());
}
# 620 "main.c"
void timer_stop(int n)
{
# 622 "main.c"
double t;
# 622 "main.c"
double now;
# 624 "main.c"
now = (elapsed_time());
# 625 "main.c"
t = (now - (start[n]));
# 626 "main.c"
(elapsed[n]) += t;
}
# 634 "main.c"
double timer_read(int n)
{
# 636 "main.c"
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
# 644 "main.c"
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_31_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7)
{
# 649 "main.c"
char size[16];
# 650 "main.c"
int j;
# 652 "main.c"
printf("\n\n %s Benchmark Completed.\n", name);
# 653 "main.c"
printf(" Class           =             %12c\n", class);
# 660 "main.c"
if((n2 == (0)) && (n3 == (0))) {
# 661 "main.c"
if(((name[(0)]) == ((char)69)) && ((name[(1)]) == ((char)80))) {
# 662 "main.c"
sprintf(size, "%15.0lf", __builtin_pow(2.0, n1));
# 663 "main.c"
j = (14);
# 664 "main.c"
if((size[j]) == ((char)46)) {
# 665 "main.c"
(size[j]) = ((char)32);
# 666 "main.c"
j--;
}
# 668 "main.c"
(size[j + (1)]) = ((char)0);
# 669 "main.c"
printf(" Size            =          %15s\n", size);
}
else {
# 671 "main.c"
printf(" Size            =             %12d\n", n1);
}
}
else {
# 674 "main.c"
printf(" Size            =           %4dx%4dx%4d\n", n1, n2, n3);
}
# 677 "main.c"
printf(" Iterations      =             %12d\n", niter);
# 678 "main.c"
printf(" Time in seconds =             %12.2lf\n", t);
# 679 "main.c"
printf(" Mop/s total     =          %15.2lf\n", mops);
# 680 "main.c"
printf(" Operation type  = %24s\n", optype);
# 681 "main.c"
if(verified) {
# 682 "main.c"
printf(" Verification    =             %12s\n", "SUCCESSFUL");
}
else {
# 684 "main.c"
printf(" Verification    =             %12s\n", "UNSUCCESSFUL");
}
# 685 "main.c"
printf(" Version         =             %12s\n", npbversion);
# 686 "main.c"
printf(" Compile date    =             %12s\n", compiletime);
# 688 "main.c"
printf("\n Compile options:\n    CC           = %s\n", cs1);
# 690 "main.c"
printf("    CLINK        = %s\n", cs2);
# 691 "main.c"
printf("    C_LIB        = %s\n", cs3);
# 692 "main.c"
printf("    C_INC        = %s\n", cs4);
# 693 "main.c"
printf("    CFLAGS       = %s\n", cs5);
# 694 "main.c"
printf("    CLINKFLAGS   = %s\n", cs6);
# 695 "main.c"
printf("    RAND         = %s\n", cs7);
# 697 "main.c"
printf("\n--------------------------------------\n Please send all errors/feedbacks to:\n Center for Manycore Programming\n cmp@aces.snu.ac.kr\n http://aces.snu.ac.kr\n--------------------------------------\n\n");
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
# 710 "main.c"
void wtime_(double * t)
{
# 712 "main.c"
static int sec = -(1);
# 713 "main.c"
struct timeval tv;
# 714 "main.c"
gettimeofday(&(tv), (void * )(0));
# 715 "main.c"
if(sec < (0)) {
# 715 "main.c"
sec = ((&(tv))->tv_sec);
}
# 716 "main.c"
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
# 62 "../globals.h"
static int nx[12];
# 63 "../globals.h"
static int ny[12];
# 64 "../globals.h"
static int nz[12];
# 67 "../globals.h"
static char Class;
# 70 "../globals.h"
static int debug_vec[8];
# 73 "../globals.h"
static int m1[12];
# 74 "../globals.h"
static int m2[12];
# 75 "../globals.h"
static int m3[12];
# 76 "../globals.h"
static int ir[12];
# 77 "../globals.h"
static int lt;
# 77 "../globals.h"
static int lb;
# 78 "../globals.h"
static int m1lt;
# 78 "../globals.h"
static int m2lt;
# 78 "../globals.h"
static int m3lt;
# 91 "../globals.h"
static enum anon_type_31_logical timeron;
void timer_clear(int n);
void timer_start(int n);
void timer_stop(int n);
double timer_read(int n);
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_31_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7);
static void setup(int * n1, int * n2, int * n3);
static void mg3P(double u[], double v[], double r[], double a[4], double c[4], int n1, int n2, int n3);
static void psinv(double * restrict or, double * restrict ou, int n1, int n2, int n3, double c[4], int k);
static void resid(double * ou, double * ov, double * or, int n1, int n2, int n3, double a[4], int k);
static void rprj3(double * or, int m1k, int m2k, int m3k, double * os, int m1j, int m2j, int m3j, int k);
static void interp(double * oz, int mm1, int mm2, int mm3, double * ou, int n1, int n2, int n3, int k);
static void norm2u3(double * or, int n1, int n2, int n3, double * rnm2, double * rnmu, int nx, int ny, int nz);
static void rep_nrm(double * u, int n1, int n2, int n3, char * title, int kk);
static void comm3(double * ou, int n1, int n2, int n3, int kk);
static void zran3(double * oz, int n1, int n2, int n3, int nx, int ny, int k);
static void showall(double * oz, int n1, int n2, int n3);
static double power(double a, int n);
static void bubble(double ten[][2], int j1[][2], int j2[][2], int j3[][2], int m, int ind);
static void zero3(double * oz, int n1, int n2, int n3);
# 825 "main.c"
static double u[1235546808];
# 826 "main.c"
static double v[1235546808];
# 827 "main.c"
static double r[1235546808];
# 828 "main.c"
int gnr = (((((((((1) * ((2) + ((1) << (10)))) * ((2) + ((1) << (10)))) * ((2) + ((1) << (10)))) + (((2) + ((1) << (10))) * ((2) + ((1) << (10))))) + ((5) * ((2) + ((1) << (10))))) + ((7) * (10))) + (6)) / (7)) * (8);
# 831 "main.c"
static int is1;
# 831 "main.c"
static int is2;
# 831 "main.c"
static int is3;
# 831 "main.c"
static int ie1;
# 831 "main.c"
static int ie2;
# 831 "main.c"
static int ie3;
# 834 "main.c"
int main()
{
__macc_init();
{
# 840 "main.c"
int k;
# 840 "main.c"
int it;
# 841 "main.c"
double t;
# 841 "main.c"
double tinit;
# 841 "main.c"
double mflops;
# 843 "main.c"
double a[4];
# 843 "main.c"
double c[4];
# 845 "main.c"
double rnm2;
# 845 "main.c"
double rnmu;
# 845 "main.c"
double old2;
# 845 "main.c"
double oldu;
# 845 "main.c"
double epsilon;
# 846 "main.c"
int n1;
# 846 "main.c"
int n2;
# 846 "main.c"
int n3;
# 846 "main.c"
int nit;
# 847 "main.c"
double nn;
# 847 "main.c"
double verify_value;
# 847 "main.c"
double err;
# 848 "main.c"
enum anon_type_31_logical verified;
# 850 "main.c"
int i;
# 851 "main.c"
char * t_names[10];
# 852 "main.c"
double tmax;
# 854 "main.c"
for(i = (0); i < (10); i++) {
{
# 855 "main.c"
timer_clear(i);
}
}
# 857 "main.c"
acc_init(acc_device_default);
# 858 "main.c"
timer_start(0);
{
# 863 "main.c"
struct _IO_FILE * fp;
# 864 "main.c"
if((fp = (fopen("timer.flag", "r"))) != ((void * )(0))) {
# 865 "main.c"
timeron = true;
# 866 "main.c"
(t_names[0]) = ("init");
# 867 "main.c"
(t_names[1]) = ("benchmk");
# 868 "main.c"
(t_names[2]) = ("mg3P");
# 869 "main.c"
(t_names[3]) = ("psinv");
# 870 "main.c"
(t_names[4]) = ("resid");
# 871 "main.c"
(t_names[6]) = ("rprj3");
# 872 "main.c"
(t_names[7]) = ("interp");
# 873 "main.c"
(t_names[8]) = ("norm2");
# 874 "main.c"
(t_names[9]) = ("comm3");
# 875 "main.c"
fclose(fp);
}
else {
# 877 "main.c"
timeron = false;
}
# 880 "main.c"
printf("\n\n NAS Parallel Benchmarks (NPB3.3-ACC-C) - MG Benchmark\n\n");
# 882 "main.c"
if((fp = (fopen("mg.input", "r"))) != ((void * )(0))) {
# 883 "main.c"
int result;
# 884 "main.c"
printf(" Reading from input file mg.input\n");
# 885 "main.c"
result = (__isoc99_fscanf(fp, "%d\n", &(lt)));
# 886 "main.c"
while((fgetc(fp)) != ((char)10)) {
{
}
}
# 887 "main.c"
result = (__isoc99_fscanf(fp, "%d%d%d", &(nx[lt]), &(ny[lt]), &(nz[lt])));
# 888 "main.c"
while((fgetc(fp)) != ((char)10)) {
{
}
}
# 889 "main.c"
result = (__isoc99_fscanf(fp, "%d", &(nit)));
# 890 "main.c"
while((fgetc(fp)) != ((char)10)) {
{
}
}
# 891 "main.c"
for(i = (0); i <= (7); i++) {
{
# 892 "main.c"
result = (__isoc99_fscanf(fp, "%d", &(debug_vec[i])));
}
}
# 894 "main.c"
fclose(fp);
}
else {
# 896 "main.c"
printf(" No input file. Using compiled defaults \n");
# 897 "main.c"
lt = (10);
# 898 "main.c"
nit = (50);
# 899 "main.c"
(nx[lt]) = (1024);
# 900 "main.c"
(ny[lt]) = (1024);
# 901 "main.c"
(nz[lt]) = (1024);
# 903 "main.c"
for(i = (0); i <= (7); i++) {
{
# 904 "main.c"
(debug_vec[i]) = (0);
}
}
}
# 908 "main.c"
if(((nx[lt]) != (ny[lt])) || ((nx[lt]) != (nz[lt]))) {
# 909 "main.c"
Class = ((char)85);
}
else {
# 910 "main.c"
if(((nx[lt]) == (32)) && (nit == (4))) {
# 911 "main.c"
Class = ((char)83);
}
else {
# 912 "main.c"
if(((nx[lt]) == (128)) && (nit == (4))) {
# 913 "main.c"
Class = ((char)87);
}
else {
# 914 "main.c"
if(((nx[lt]) == (256)) && (nit == (4))) {
# 915 "main.c"
Class = ((char)65);
}
else {
# 916 "main.c"
if(((nx[lt]) == (256)) && (nit == (20))) {
# 917 "main.c"
Class = ((char)66);
}
else {
# 918 "main.c"
if(((nx[lt]) == (512)) && (nit == (20))) {
# 919 "main.c"
Class = ((char)67);
}
else {
# 920 "main.c"
if(((nx[lt]) == (1024)) && (nit == (50))) {
# 921 "main.c"
Class = ((char)68);
}
else {
# 922 "main.c"
if(((nx[lt]) == (2048)) && (nit == (50))) {
# 923 "main.c"
Class = ((char)69);
}
else {
# 925 "main.c"
Class = ((char)85);
}
}
}
}
}
}
}
}
# 941 "main.c"
(a[0]) = ((-(8.0)) / (3.0));
# 942 "main.c"
(a[1]) = (0.0);
# 943 "main.c"
(a[2]) = ((1.0) / (6.0));
# 944 "main.c"
(a[3]) = ((1.0) / (12.0));
# 946 "main.c"
if(((Class == ((char)65)) || (Class == ((char)83))) || (Class == ((char)87))) {
# 950 "main.c"
(c[0]) = ((-(3.0)) / (8.0));
# 951 "main.c"
(c[1]) = ((1.0) / (32.0));
# 952 "main.c"
(c[2]) = ((-(1.0)) / (64.0));
# 953 "main.c"
(c[3]) = (0.0);
}
else {
# 958 "main.c"
(c[0]) = ((-(3.0)) / (17.0));
# 959 "main.c"
(c[1]) = ((1.0) / (33.0));
# 960 "main.c"
(c[2]) = ((-(1.0)) / (61.0));
# 961 "main.c"
(c[3]) = (0.0);
}
# 963 "main.c"
lb = (1);
# 964 "main.c"
k = lt;
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_create(__macc_tnum, u, sizeof(double), 0, gnr);
__macc_create(__macc_tnum, v, sizeof(double), 0, gnr);
__macc_create(__macc_tnum, r, sizeof(double), 0, gnr);
}
}
{
# 969 "main.c"
setup(&(n1), &(n2), &(n3));
# 970 "main.c"
zero3(u, n1, n2, n3);
# 971 "main.c"
zran3(v, n1, n2, n3, nx[lt], ny[lt], k);
# 973 "main.c"
norm2u3(v, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
# 975 "main.c"
printf(" Size: %4dx%4dx%4d  (class %c)\n", nx[lt], ny[lt], nz[lt], Class);
# 976 "main.c"
printf(" Iterations: %3d\n", nit);
# 977 "main.c"
printf("\n");
# 979 "main.c"
resid(u, v, r, n1, n2, n3, a, k);
# 980 "main.c"
norm2u3(r, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
# 981 "main.c"
old2 = rnm2;
# 982 "main.c"
oldu = rnmu;
# 987 "main.c"
mg3P(u, v, r, a, c, n1, n2, n3);
# 988 "main.c"
resid(u, v, r, n1, n2, n3, a, k);
# 989 "main.c"
setup(&(n1), &(n2), &(n3));
# 990 "main.c"
zero3(u, n1, n2, n3);
# 991 "main.c"
zran3(v, n1, n2, n3, nx[lt], ny[lt], k);
# 993 "main.c"
timer_stop(0);
# 994 "main.c"
tinit = (timer_read(0));
# 996 "main.c"
printf(" Initialization time: %15.3f seconds\n\n", tinit);
# 998 "main.c"
for(i = (1); i < (10); i++) {
{
# 999 "main.c"
timer_clear(i);
}
}
# 1002 "main.c"
timer_start(1);
# 1004 "main.c"
resid(u, v, r, n1, n2, n3, a, k);
# 1005 "main.c"
norm2u3(r, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
# 1006 "main.c"
old2 = rnm2;
# 1007 "main.c"
oldu = rnmu;
# 1009 "main.c"
for(it = (1); it <= nit; it++) {
{
# 1010 "main.c"
if(((it == (1)) || (it == nit)) || ((it % (100)) == (0))) {
# 1011 "main.c"
printf("  iter %3d\n", it);
}
# 1013 "main.c"
mg3P(u, v, r, a, c, n1, n2, n3);
# 1014 "main.c"
resid(u, v, r, n1, n2, n3, a, k);
}
}
# 1017 "main.c"
norm2u3(r, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_delete(__macc_tnum, u, sizeof(double), 0, gnr);
__macc_delete(__macc_tnum, v, sizeof(double), 0, gnr);
__macc_delete(__macc_tnum, r, sizeof(double), 0, gnr);
}
}
}
# 1019 "main.c"
timer_stop(1);
# 1021 "main.c"
t = (timer_read(1));
# 1023 "main.c"
verified = false;
# 1024 "main.c"
verify_value = (0.0);
# 1026 "main.c"
printf("\n Benchmark completed\n");
# 1028 "main.c"
epsilon = (1.0e-8);
# 1029 "main.c"
if(Class != ((char)85)) {
# 1030 "main.c"
if(Class == ((char)83)) {
# 1031 "main.c"
verify_value = (0.5307707005734e-04);
}
else {
# 1032 "main.c"
if(Class == ((char)87)) {
# 1033 "main.c"
verify_value = (0.6467329375339e-05);
}
else {
# 1034 "main.c"
if(Class == ((char)65)) {
# 1035 "main.c"
verify_value = (0.2433365309069e-05);
}
else {
# 1036 "main.c"
if(Class == ((char)66)) {
# 1037 "main.c"
verify_value = (0.1800564401355e-05);
}
else {
# 1038 "main.c"
if(Class == ((char)67)) {
# 1039 "main.c"
verify_value = (0.5706732285740e-06);
}
else {
# 1040 "main.c"
if(Class == ((char)68)) {
# 1041 "main.c"
verify_value = (0.1583275060440e-09);
}
else {
# 1042 "main.c"
if(Class == ((char)69)) {
# 1043 "main.c"
verify_value = (0.8157592357404e-10);
}
}
}
}
}
}
}
# 1046 "main.c"
err = ((__builtin_fabs(rnm2 - verify_value)) / verify_value);
# 1048 "main.c"
if(err <= epsilon) {
# 1049 "main.c"
verified = true;
# 1050 "main.c"
printf(" VERIFICATION SUCCESSFUL\n");
# 1051 "main.c"
printf(" L2 Norm is %20.13E\n", rnm2);
# 1052 "main.c"
printf(" Error is   %20.13E\n", err);
}
else {
# 1054 "main.c"
verified = false;
# 1055 "main.c"
printf(" VERIFICATION FAILED\n");
# 1056 "main.c"
printf(" L2 Norm is             %20.13E\n", rnm2);
# 1057 "main.c"
printf(" The correct L2 Norm is %20.13E\n", verify_value);
}
}
else {
# 1060 "main.c"
verified = false;
# 1061 "main.c"
printf(" Problem size unknown\n");
# 1062 "main.c"
printf(" NO VERIFICATION PERFORMED\n");
# 1063 "main.c"
printf(" L2 Norm is %20.13E\n", rnm2);
}
# 1066 "main.c"
nn = ((((1.0) * (nx[lt])) * (ny[lt])) * (nz[lt]));
# 1068 "main.c"
if(t != (0.0)) {
# 1069 "main.c"
mflops = (((((58.0) * nit) * nn) * (1.0e-6)) / t);
}
else {
# 1071 "main.c"
mflops = (0.0);
}
# 1074 "main.c"
print_results("MG", Class, nx[lt], ny[lt], nz[lt], nit, t, mflops, "          floating point", verified, "3.3.1", "08 Dec 2017", "icc", "icc", "-lm", "-I../common", "-O3 -mcmodel=medium", "-O3 -mcmodel=medium", "randdp");
# 1083 "main.c"
if(timeron) {
# 1084 "main.c"
tmax = (timer_read(1));
# 1085 "main.c"
if(tmax == (0.0)) {
# 1085 "main.c"
tmax = (1.0);
}
# 1087 "main.c"
printf("  SECTION   Time (secs)\n");
# 1088 "main.c"
for(i = (1); i < (10); i++) {
{
# 1089 "main.c"
t = (timer_read(i));
# 1090 "main.c"
if(i == (5)) {
# 1091 "main.c"
t = ((timer_read(4)) - t);
# 1092 "main.c"
printf("    --> %8s:%9.3f  (%6.2f%%)\n", "mg-resid", t, (t * (100.)) / tmax);
}
else {
# 1094 "main.c"
printf("  %-8s:%9.3f  (%6.2f%%)\n", t_names[i], t, (t * (100.)) / tmax);
}
}
}
}
# 1098 "main.c"
acc_shutdown(acc_device_default);
# 1099 "main.c"
return 0;
}
}
}
# 1103 "main.c"
static void setup(int * n1, int * n2, int * n3)
{
# 1105 "main.c"
int k;
# 1105 "main.c"
int j;
# 1107 "main.c"
int ax;
# 1107 "main.c"
int mi[12][3];
# 1108 "main.c"
int ng[12][3];
# 1110 "main.c"
(ng[lt][0]) = (nx[lt]);
# 1111 "main.c"
(ng[lt][1]) = (ny[lt]);
# 1112 "main.c"
(ng[lt][2]) = (nz[lt]);
# 1113 "main.c"
for(k = (lt - (1)); k >= (1); k--) {
{
# 1114 "main.c"
for(ax = (0); ax < (3); ax++) {
{
# 1115 "main.c"
(ng[k][ax]) = ((ng[k + (1)][ax]) / (2));
}
}
}
}
# 1118 "main.c"
for(k = lt; k >= (1); k--) {
{
# 1119 "main.c"
(nx[k]) = (ng[k][0]);
# 1120 "main.c"
(ny[k]) = (ng[k][1]);
# 1121 "main.c"
(nz[k]) = (ng[k][2]);
}
}
# 1124 "main.c"
for(k = lt; k >= (1); k--) {
{
# 1125 "main.c"
for(ax = (0); ax < (3); ax++) {
{
# 1126 "main.c"
(mi[k][ax]) = ((2) + (ng[k][ax]));
}
}
# 1129 "main.c"
(m1[k]) = (mi[k][0]);
# 1130 "main.c"
(m2[k]) = (mi[k][1]);
# 1131 "main.c"
(m3[k]) = (mi[k][2]);
}
}
# 1134 "main.c"
k = lt;
# 1135 "main.c"
is1 = (((2) + (ng[k][0])) - (ng[lt][0]));
# 1136 "main.c"
ie1 = ((1) + (ng[k][0]));
# 1137 "main.c"
(*(n1)) = (((3) + ie1) - is1);
# 1138 "main.c"
is2 = (((2) + (ng[k][1])) - (ng[lt][1]));
# 1139 "main.c"
ie2 = ((1) + (ng[k][1]));
# 1140 "main.c"
(*(n2)) = (((3) + ie2) - is2);
# 1141 "main.c"
is3 = (((2) + (ng[k][2])) - (ng[lt][2]));
# 1142 "main.c"
ie3 = ((1) + (ng[k][2]));
# 1143 "main.c"
(*(n3)) = (((3) + ie3) - is3);
# 1145 "main.c"
(ir[lt]) = (0);
# 1146 "main.c"
for(j = (lt - (1)); j >= (1); j--) {
{
# 1147 "main.c"
(ir[j]) = ((ir[j + (1)]) + ((((1) * (m1[j + (1)])) * (m2[j + (1)])) * (m3[j + (1)])));
}
}
# 1150 "main.c"
if((debug_vec[1]) >= (1)) {
# 1151 "main.c"
printf(" in setup, \n");
# 1152 "main.c"
printf(" k  lt  nx  ny  nz  n1  n2  n3 is1 is2 is3 ie1 ie2 ie3\n");
# 1153 "main.c"
printf("%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d\n", k, lt, ng[k][0], ng[k][1], ng[k][2], *(n1), *(n2), *(n3), is1, is2, is3, ie1, ie2, ie3);
}
}
# 1162 "main.c"
static void mg3P(double u[], double v[], double r[], double a[4], double c[4], int n1, int n2, int n3)
{
# 1165 "main.c"
int j;
# 1165 "main.c"
int k;
# 1171 "main.c"
for(k = lt; k >= (lb + (1)); k--) {
{
# 1172 "main.c"
j = (k - (1));
# 1173 "main.c"
rprj3(&(r[ir[k]]), m1[k], m2[k], m3[k], &(r[ir[j]]), m1[j], m2[j], m3[j], k);
}
}
# 1177 "main.c"
k = lb;
# 1181 "main.c"
zero3(&(u[ir[k]]), m1[k], m2[k], m3[k]);
# 1182 "main.c"
psinv(&(r[ir[k]]), &(u[ir[k]]), m1[k], m2[k], m3[k], c, k);
# 1184 "main.c"
for(k = (lb + (1)); k <= (lt - (1)); k++) {
{
# 1185 "main.c"
j = (k - (1));
# 1190 "main.c"
zero3(&(u[ir[k]]), m1[k], m2[k], m3[k]);
# 1191 "main.c"
interp(&(u[ir[j]]), m1[j], m2[j], m3[j], &(u[ir[k]]), m1[k], m2[k], m3[k], k);
# 1196 "main.c"
resid(&(u[ir[k]]), &(r[ir[k]]), &(r[ir[k]]), m1[k], m2[k], m3[k], a, k);
# 1201 "main.c"
psinv(&(r[ir[k]]), &(u[ir[k]]), m1[k], m2[k], m3[k], c, k);
}
}
# 1204 "main.c"
j = (lt - (1));
# 1205 "main.c"
k = lt;
# 1206 "main.c"
interp(&(u[ir[j]]), m1[j], m2[j], m3[j], u, n1, n2, n3, k);
# 1207 "main.c"
resid(u, v, r, n1, n2, n3, a, k);
# 1208 "main.c"
psinv(r, u, n1, n2, n3, c, k);
}
# 1223 "main.c"
static void psinv(double * restrict or, double * restrict ou, int n1, int n2, int n3, double c[4], int k)
{
# 1229 "main.c"
int i3;
# 1229 "main.c"
int i2;
# 1229 "main.c"
int i1;
# 1230 "main.c"
double c0;
# 1230 "main.c"
double c1;
# 1230 "main.c"
double c2;
# 1233 "main.c"
double * restrict r1;
# 1233 "main.c"
double * restrict r2;
# 1235 "main.c"
c0 = (c[0]);
# 1236 "main.c"
c1 = (c[1]);
# 1237 "main.c"
c2 = (c[2]);
# 1240 "main.c"
r1 = ((double * )(__macc_malloc(((n3 * n2) * n1) * (sizeof(double)))));
# 1241 "main.c"
r2 = ((double * )(__macc_malloc(((n3 * n2) * n1) * (sizeof(double)))));
# 1248 "main.c"
if(timeron) {
# 1248 "main.c"
timer_start(3);
}
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
static int __macc_or_def_ub_set[10];
static int __macc_or_def_lb_set[10];
static int __macc_or_use_ub_set[10];
static int __macc_or_use_lb_set[10];
static int __macc_r2_def_ub_set[10];
static int __macc_r2_def_lb_set[10];
static int __macc_r2_use_ub_set[10];
static int __macc_r2_use_lb_set[10];
static int __macc_r1_def_ub_set[10];
static int __macc_r1_def_lb_set[10];
static int __macc_r1_use_ub_set[10];
static int __macc_r1_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(r1, __macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set);
__macc_adjust_data_region(r1, __macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(r2, __macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set);
__macc_adjust_data_region(r2, __macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
}
{
}
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_r2_def_lb_set, __macc_r2_def_ub_set)) || (__macc_region_is_overlapping(__macc_r1_def_lb_set, __macc_r1_def_ub_set))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r2_def_lb_set, __macc_r2_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r1_def_lb_set, __macc_r1_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc_or_use_lb_set, __macc_or_use_ub_set, 1, __macc_or_def_lb_set, __macc_or_def_ub_set);
__macc_set_data_region(__macc_tnum, r2, __macc_multi, 1, __macc_r2_use_lb_set, __macc_r2_use_ub_set, 2, __macc_r2_def_lb_set, __macc_r2_def_ub_set);
__macc_set_data_region(__macc_tnum, r1, __macc_multi, 1, __macc_r1_use_lb_set, __macc_r1_use_ub_set, 2, __macc_r1_def_lb_set, __macc_r1_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( r1 , r2 , ou , or ) num_gangs  (__macc_num_gangs)  num_workers ( 16 ) vector_length ( 64 )
#pragma acc loop gang
# 1254 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1256 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 1258 "main.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 1265 "main.c"
(r1[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((or[((((i3 * n2) * n1) + ((i2 - (1)) * n1)) + i1)]) + (or[((((i3 * n2) * n1) + ((i2 + (1)) * n1)) + i1)])) + (or[(((((i3 - (1)) * n2) * n1) + (i2 * n1)) + i1)])) + (or[(((((i3 + (1)) * n2) * n1) + (i2 * n1)) + i1)]));
# 1267 "main.c"
(r2[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((or[(((((i3 - (1)) * n2) * n1) + ((i2 - (1)) * n1)) + i1)]) + (or[(((((i3 - (1)) * n2) * n1) + ((i2 + (1)) * n1)) + i1)])) + (or[(((((i3 + (1)) * n2) * n1) + ((i2 - (1)) * n1)) + i1)])) + (or[(((((i3 + (1)) * n2) * n1) + ((i2 + (1)) * n1)) + i1)]));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_r2_def_ub_set[10];
static int __macc_r2_def_lb_set[10];
static int __macc_r2_use_ub_set[10];
static int __macc_r2_use_lb_set[10];
static int __macc_r1_def_ub_set[10];
static int __macc_r1_def_lb_set[10];
static int __macc_r1_use_ub_set[10];
static int __macc_r1_use_lb_set[10];
static int __macc_or_def_ub_set[10];
static int __macc_or_def_lb_set[10];
static int __macc_or_use_ub_set[10];
static int __macc_or_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(r1, __macc_gpu_num, __macc_r1_use_lb_set, __macc_r1_use_ub_set);
__macc_adjust_data_region(r1, __macc_gpu_num, __macc_r1_def_lb_set, __macc_r1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(r2, __macc_gpu_num, __macc_r2_use_lb_set, __macc_r2_use_ub_set);
__macc_adjust_data_region(r2, __macc_gpu_num, __macc_r2_def_lb_set, __macc_r2_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r2_use_lb_set, __macc_r2_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r1_use_lb_set, __macc_r1_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, r2, __macc_multi, 2, __macc_r2_use_lb_set, __macc_r2_use_ub_set, 1, __macc_r2_def_lb_set, __macc_r2_def_ub_set);
__macc_set_data_region(__macc_tnum, r1, __macc_multi, 2, __macc_r1_use_lb_set, __macc_r1_use_ub_set, 1, __macc_r1_def_lb_set, __macc_r1_def_ub_set);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc_or_use_lb_set, __macc_or_use_ub_set, 1, __macc_or_def_lb_set, __macc_or_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( r1 , r2 , ou , or ) num_gangs  (__macc_num_gangs)  num_workers ( 16 ) vector_length ( 64 )
#pragma acc loop gang
# 1274 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1276 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 1278 "main.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 1286 "main.c"
(ou[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((ou[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) + (c0 * (or[((((i3 * n2) * n1) + (i2 * n1)) + i1)]))) + (c1 * (((or[((((i3 * n2) * n1) + (i2 * n1)) + (i1 - (1)))]) + (or[((((i3 * n2) * n1) + (i2 * n1)) + (i1 + (1)))])) + (r1[((((i3 * n2) * n1) + (i2 * n1)) + i1)])))) + (c2 * (((r2[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) + (r1[((((i3 * n2) * n1) + (i2 * n1)) + (i1 - (1)))])) + (r1[((((i3 * n2) * n1) + (i2 * n1)) + (i1 + (1)))]))));
}
}
}
}
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
# 1305 "main.c"
if(timeron) {
# 1305 "main.c"
timer_stop(3);
}
# 1307 "main.c"
__macc_free(r1);
# 1308 "main.c"
__macc_free(r2);
# 1318 "main.c"
comm3(ou, n1, n2, n3, k);
# 1320 "main.c"
if((debug_vec[0]) >= (1)) {
# 1322 "main.c"
rep_nrm(ou, n1, n2, n3, "   psinv", k);
}
# 1325 "main.c"
if((debug_vec[3]) >= k) {
# 1327 "main.c"
showall(ou, n1, n2, n3);
}
}
# 1344 "main.c"
static void resid(double * ou, double * ov, double * or, int n1, int n2, int n3, double a[4], int k)
{
# 1352 "main.c"
int i3;
# 1352 "main.c"
int i2;
# 1352 "main.c"
int i1;
# 1353 "main.c"
double a0;
# 1353 "main.c"
double a2;
# 1353 "main.c"
double a3;
# 1355 "main.c"
double * restrict u1;
# 1355 "main.c"
double * restrict u2;
# 1357 "main.c"
a0 = (a[0]);
# 1358 "main.c"
a2 = (a[2]);
# 1359 "main.c"
a3 = (a[3]);
# 1361 "main.c"
if(timeron) {
# 1361 "main.c"
timer_start(4);
}
# 1363 "main.c"
u1 = ((double * )(__macc_malloc(((n3 * n2) * n1) * (sizeof(double)))));
# 1364 "main.c"
u2 = ((double * )(__macc_malloc(((n3 * n2) * n1) * (sizeof(double)))));
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
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_u2_def_ub_set[10];
static int __macc_u2_def_lb_set[10];
static int __macc_u2_use_ub_set[10];
static int __macc_u2_use_lb_set[10];
static int __macc_u1_def_ub_set[10];
static int __macc_u1_def_lb_set[10];
static int __macc_u1_use_ub_set[10];
static int __macc_u1_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(u1, __macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set);
__macc_adjust_data_region(u1, __macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(u2, __macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set);
__macc_adjust_data_region(u2, __macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) + (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((((n2 - (1)) - (1)) - (1)) * n1)) + (n1 - (1)));
}
{
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_u2_def_lb_set, __macc_u2_def_ub_set)) || (__macc_region_is_overlapping(__macc_u1_def_lb_set, __macc_u1_def_ub_set))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_u2_def_lb_set, __macc_u2_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_u1_def_lb_set, __macc_u1_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 1, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
__macc_set_data_region(__macc_tnum, u2, __macc_multi, 1, __macc_u2_use_lb_set, __macc_u2_use_ub_set, 2, __macc_u2_def_lb_set, __macc_u2_def_ub_set);
__macc_set_data_region(__macc_tnum, u1, __macc_multi, 1, __macc_u1_use_lb_set, __macc_u1_use_ub_set, 2, __macc_u1_def_lb_set, __macc_u1_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( u1 , u2 , ou , ov , or ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1378 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1380 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 1382 "main.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 1389 "main.c"
(u1[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((ou[((((i3 * n2) * n1) + ((i2 - (1)) * n1)) + i1)]) + (ou[((((i3 * n2) * n1) + ((i2 + (1)) * n1)) + i1)])) + (ou[(((((i3 - (1)) * n2) * n1) + (i2 * n1)) + i1)])) + (ou[(((((i3 + (1)) * n2) * n1) + (i2 * n1)) + i1)]));
# 1391 "main.c"
(u2[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((ou[(((((i3 - (1)) * n2) * n1) + ((i2 - (1)) * n1)) + i1)]) + (ou[(((((i3 - (1)) * n2) * n1) + ((i2 + (1)) * n1)) + i1)])) + (ou[(((((i3 + (1)) * n2) * n1) + ((i2 - (1)) * n1)) + i1)])) + (ou[(((((i3 + (1)) * n2) * n1) + ((i2 + (1)) * n1)) + i1)]));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_u2_def_ub_set[10];
static int __macc_u2_def_lb_set[10];
static int __macc_u2_use_ub_set[10];
static int __macc_u2_use_lb_set[10];
static int __macc_u1_def_ub_set[10];
static int __macc_u1_def_lb_set[10];
static int __macc_u1_use_ub_set[10];
static int __macc_u1_use_lb_set[10];
static int __macc_ov_def_ub_set[10];
static int __macc_ov_def_lb_set[10];
static int __macc_ov_use_ub_set[10];
static int __macc_ov_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_or_def_ub_set[10];
static int __macc_or_def_lb_set[10];
static int __macc_or_use_ub_set[10];
static int __macc_or_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ov_def_lb_set, __macc_ov_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(ov, __macc_gpu_num, __macc_ov_use_lb_set, __macc_ov_use_ub_set);
__macc_adjust_data_region(ov, __macc_gpu_num, __macc_ov_def_lb_set, __macc_ov_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
}
{
}
__macc_adjust_data_region(u1, __macc_gpu_num, __macc_u1_use_lb_set, __macc_u1_use_ub_set);
__macc_adjust_data_region(u1, __macc_gpu_num, __macc_u1_def_lb_set, __macc_u1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (((n1 - (1)) - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(u2, __macc_gpu_num, __macc_u2_use_lb_set, __macc_u2_use_ub_set);
__macc_adjust_data_region(u2, __macc_gpu_num, __macc_u2_def_lb_set, __macc_u2_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_or_def_lb_set, __macc_or_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_u2_use_lb_set, __macc_u2_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_u1_use_lb_set, __macc_u1_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ov_use_lb_set, __macc_ov_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_or_def_lb_set, __macc_or_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, u2, __macc_multi, 2, __macc_u2_use_lb_set, __macc_u2_use_ub_set, 1, __macc_u2_def_lb_set, __macc_u2_def_ub_set);
__macc_set_data_region(__macc_tnum, u1, __macc_multi, 2, __macc_u1_use_lb_set, __macc_u1_use_ub_set, 1, __macc_u1_def_lb_set, __macc_u1_def_ub_set);
__macc_set_data_region(__macc_tnum, ov, __macc_multi, 2, __macc_ov_use_lb_set, __macc_ov_use_ub_set, 1, __macc_ov_def_lb_set, __macc_ov_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 1, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 1, __macc_or_use_lb_set, __macc_or_use_ub_set, 2, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( u1 , u2 , ou , ov , or ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1401 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1403 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 1405 "main.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 1410 "main.c"
(or[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((ov[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) - (a0 * (ou[((((i3 * n2) * n1) + (i2 * n1)) + i1)]))) - (a2 * (((u2[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) + (u1[((((i3 * n2) * n1) + (i2 * n1)) + (i1 - (1)))])) + (u1[((((i3 * n2) * n1) + (i2 * n1)) + (i1 + (1)))])))) - (a3 * ((u2[((((i3 * n2) * n1) + (i2 * n1)) + (i1 - (1)))]) + (u2[((((i3 * n2) * n1) + (i2 * n1)) + (i1 + (1)))]))));
}
}
}
}
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
# 1431 "main.c"
__macc_free(u1);
# 1432 "main.c"
__macc_free(u2);
# 1437 "main.c"
if(timeron) {
# 1437 "main.c"
timer_stop(4);
}
# 1443 "main.c"
comm3(or, n1, n2, n3, k);
# 1445 "main.c"
if((debug_vec[0]) >= (1)) {
# 1447 "main.c"
rep_nrm(or, n1, n2, n3, "   resid", k);
}
# 1450 "main.c"
if((debug_vec[2]) >= k) {
# 1452 "main.c"
showall(or, n1, n2, n3);
}
}
# 1466 "main.c"
static void rprj3(double * or, int m1k, int m2k, int m3k, double * os, int m1j, int m2j, int m3j, int k)
{
# 1473 "main.c"
int j3;
# 1473 "main.c"
int j2;
# 1473 "main.c"
int j1;
# 1473 "main.c"
int i3;
# 1473 "main.c"
int i2;
# 1473 "main.c"
int i1;
# 1473 "main.c"
int d1;
# 1473 "main.c"
int d2;
# 1473 "main.c"
int d3;
# 1473 "main.c"
int j;
# 1476 "main.c"
double * x1;
# 1476 "main.c"
double * y1;
# 1476 "main.c"
double x2;
# 1476 "main.c"
double y2;
# 1478 "main.c"
x1 = ((double * )(__macc_malloc(((m3k * m2k) * m1k) * (sizeof(double)))));
# 1479 "main.c"
y1 = ((double * )(__macc_malloc(((m3k * m2k) * m1k) * (sizeof(double)))));
# 1485 "main.c"
if(timeron) {
# 1485 "main.c"
timer_start(6);
}
# 1486 "main.c"
if(m1k == (3)) {
# 1487 "main.c"
d1 = (2);
}
else {
# 1489 "main.c"
d1 = (1);
}
# 1492 "main.c"
if(m2k == (3)) {
# 1493 "main.c"
d2 = (2);
}
else {
# 1495 "main.c"
d2 = (1);
}
# 1498 "main.c"
if(m3k == (3)) {
# 1499 "main.c"
d3 = (2);
}
else {
# 1501 "main.c"
d3 = (1);
}
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
static int __macc_or_def_ub_set[10];
static int __macc_or_def_lb_set[10];
static int __macc_or_use_ub_set[10];
static int __macc_or_use_lb_set[10];
static int __macc_y1_def_ub_set[10];
static int __macc_y1_def_lb_set[10];
static int __macc_y1_use_ub_set[10];
static int __macc_y1_use_lb_set[10];
static int __macc_x1_def_ub_set[10];
static int __macc_x1_def_lb_set[10];
static int __macc_x1_use_ub_set[10];
static int __macc_x1_use_lb_set[10];
static int __macc_m3j_last;
static int __macc_d3_last;
static int __macc_d2_last;
static int __macc_m2k_last;
static int __macc_m1k_last;
static int __macc_d1_last;
static int __macc_j3_loop_lb_set[10];
static int __macc_j3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((d1 != __macc_d1_last) || ((m1k != __macc_m1k_last) || ((m2k != __macc_m2k_last) || ((d2 != __macc_d2_last) || ((d3 != __macc_d3_last) || (m3j != __macc_m3j_last)))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_d1_last = d1;
__macc_m1k_last = m1k;
__macc_m2k_last = m2k;
__macc_d2_last = d2;
__macc_d3_last = d3;
__macc_m3j_last = m3j;
}
{
__macc_calc_loop_region(__macc_j3_loop_lb_set, __macc_j3_loop_ub_set, 1, (m3j - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
}
__macc_adjust_data_region(x1, __macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set);
__macc_adjust_data_region(x1, __macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
}
__macc_adjust_data_region(y1, __macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set);
__macc_adjust_data_region(y1, __macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
}
{
}
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_y1_def_lb_set, __macc_y1_def_ub_set)) || (__macc_region_is_overlapping(__macc_x1_def_lb_set, __macc_x1_def_ub_set))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j3_loop_lb_set, __macc_j3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_y1_def_lb_set, __macc_y1_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_x1_def_lb_set, __macc_x1_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j3 , j2 , j1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc_or_use_lb_set, __macc_or_use_ub_set, 1, __macc_or_def_lb_set, __macc_or_def_ub_set);
__macc_set_data_region(__macc_tnum, y1, __macc_multi, 1, __macc_y1_use_lb_set, __macc_y1_use_ub_set, 2, __macc_y1_def_lb_set, __macc_y1_def_ub_set);
__macc_set_data_region(__macc_tnum, x1, __macc_multi, 1, __macc_x1_use_lb_set, __macc_x1_use_ub_set, 2, __macc_x1_def_lb_set, __macc_x1_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((m3j - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : m3j - (2) );
#pragma acc parallel present ( x1 , y1 , or , os ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1509 "main.c"
for(j3 = __macc_top_loop_lb; j3 <= __macc_top_loop_ub; j3++) {
{
# 1510 "main.c"
i3 = (((2) * j3) - d3);
#pragma acc loop worker
# 1512 "main.c"
for(j2 = (1); j2 < (m2j - (1)); j2++) {
{
# 1513 "main.c"
i2 = (((2) * j2) - d2);
#pragma acc loop vector
# 1515 "main.c"
for(j1 = (1); j1 < m1j; j1++) {
{
# 1516 "main.c"
i1 = (((2) * j1) - d1);
# 1523 "main.c"
(x1[((((i3 * m2k) * m1k) + (i2 * m1k)) + i1)]) = ((((or[(((((i3 + (1)) * m2k) * m1k) + (i2 * m1k)) + i1)]) + (or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + i1)])) + (or[((((i3 * m2k) * m1k) + ((i2 + (1)) * m1k)) + i1)])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + i1)]));
# 1525 "main.c"
(y1[((((i3 * m2k) * m1k) + (i2 * m1k)) + i1)]) = ((((or[((((i3 * m2k) * m1k) + (i2 * m1k)) + i1)]) + (or[(((((i3 + (2)) * m2k) * m1k) + (i2 * m1k)) + i1)])) + (or[((((i3 * m2k) * m1k) + ((i2 + (2)) * m1k)) + i1)])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + i1)]));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_y1_def_ub_set[10];
static int __macc_y1_def_lb_set[10];
static int __macc_y1_use_ub_set[10];
static int __macc_y1_use_lb_set[10];
static int __macc_x1_def_ub_set[10];
static int __macc_x1_def_lb_set[10];
static int __macc_x1_use_ub_set[10];
static int __macc_x1_use_lb_set[10];
static int __macc_or_def_ub_set[10];
static int __macc_or_def_lb_set[10];
static int __macc_or_use_ub_set[10];
static int __macc_or_use_lb_set[10];
static int __macc_os_def_ub_set[10];
static int __macc_os_def_lb_set[10];
static int __macc_os_use_ub_set[10];
static int __macc_os_use_lb_set[10];
static int __macc_m3j_last;
static int __macc_d3_last;
static int __macc_d2_last;
static int __macc_m2k_last;
static int __macc_d1_last;
static int __macc_m1k_last;
static int __macc_m2j_last;
static int __macc_m1j_last;
static int __macc_j3_loop_lb_set[10];
static int __macc_j3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((m1j != __macc_m1j_last) || ((m2j != __macc_m2j_last) || ((m1k != __macc_m1k_last) || ((d1 != __macc_d1_last) || ((m2k != __macc_m2k_last) || ((d2 != __macc_d2_last) || ((d3 != __macc_d3_last) || (m3j != __macc_m3j_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_m1j_last = m1j;
__macc_m2j_last = m2j;
__macc_m1k_last = m1k;
__macc_d1_last = d1;
__macc_m2k_last = m2k;
__macc_d2_last = d2;
__macc_d3_last = d3;
__macc_m3j_last = m3j;
}
{
__macc_calc_loop_region(__macc_j3_loop_lb_set, __macc_j3_loop_ub_set, 1, (m3j - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_os_use_lb_set, __macc_os_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_lb * m2j) * m1j) + ((1) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_lb * m2j) * m1j) + ((1) * m1j)) + ((m1j - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_lb * m2j) * m1j) + (((m2j - (1)) - (1)) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_lb * m2j) * m1j) + (((m2j - (1)) - (1)) * m1j)) + ((m1j - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_ub * m2j) * m1j) + ((1) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_ub * m2j) * m1j) + ((1) * m1j)) + ((m1j - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_ub * m2j) * m1j) + (((m2j - (1)) - (1)) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set, (((__macc_top_loop_ub * m2j) * m1j) + (((m2j - (1)) - (1)) * m1j)) + ((m1j - (1)) - (1)));
}
__macc_adjust_data_region(os, __macc_gpu_num, __macc_os_use_lb_set, __macc_os_use_ub_set);
__macc_adjust_data_region(os, __macc_gpu_num, __macc_os_def_lb_set, __macc_os_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (2)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * ((m2j - (1)) - (1))) - d2) + (1)) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (1)));
}
{
}
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
}
{
}
__macc_adjust_data_region(x1, __macc_gpu_num, __macc_x1_use_lb_set, __macc_x1_use_ub_set);
__macc_adjust_data_region(x1, __macc_gpu_num, __macc_x1_def_lb_set, __macc_x1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + ((((2) * ((m1j - (1)) - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * ((m2j - (1)) - (1))) - d2) * m1k)) + (((2) * ((m1j - (1)) - (1))) - d1));
}
{
}
__macc_adjust_data_region(y1, __macc_gpu_num, __macc_y1_use_lb_set, __macc_y1_use_ub_set);
__macc_adjust_data_region(y1, __macc_gpu_num, __macc_y1_def_lb_set, __macc_y1_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_os_def_lb_set, __macc_os_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j3_loop_lb_set, __macc_j3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_y1_use_lb_set, __macc_y1_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x1_use_lb_set, __macc_x1_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_os_def_lb_set, __macc_os_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j3 , j2 , j1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, y1, __macc_multi, 2, __macc_y1_use_lb_set, __macc_y1_use_ub_set, 1, __macc_y1_def_lb_set, __macc_y1_def_ub_set);
__macc_set_data_region(__macc_tnum, x1, __macc_multi, 2, __macc_x1_use_lb_set, __macc_x1_use_ub_set, 1, __macc_x1_def_lb_set, __macc_x1_def_ub_set);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc_or_use_lb_set, __macc_or_use_ub_set, 1, __macc_or_def_lb_set, __macc_or_def_ub_set);
__macc_set_data_region(__macc_tnum, os, __macc_multi, 1, __macc_os_use_lb_set, __macc_os_use_ub_set, 2, __macc_os_def_lb_set, __macc_os_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((m3j - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : m3j - (2) );
#pragma acc parallel present ( x1 , y1 , or , os ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1532 "main.c"
for(j3 = __macc_top_loop_lb; j3 <= __macc_top_loop_ub; j3++) {
{
# 1533 "main.c"
i3 = (((2) * j3) - d3);
#pragma acc loop worker
# 1535 "main.c"
for(j2 = (1); j2 < (m2j - (1)); j2++) {
{
# 1536 "main.c"
i2 = (((2) * j2) - d2);
#pragma acc loop vector
# 1538 "main.c"
for(j1 = (1); j1 < (m1j - (1)); j1++) {
{
# 1539 "main.c"
i1 = (((2) * j1) - d1);
# 1551 "main.c"
y2 = ((((or[((((i3 * m2k) * m1k) + (i2 * m1k)) + (i1 + (1)))]) + (or[(((((i3 + (2)) * m2k) * m1k) + (i2 * m1k)) + (i1 + (1)))])) + (or[((((i3 * m2k) * m1k) + ((i2 + (2)) * m1k)) + (i1 + (1)))])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + (i1 + (1)))]));
# 1553 "main.c"
x2 = ((((or[(((((i3 + (1)) * m2k) * m1k) + (i2 * m1k)) + (i1 + (1)))]) + (or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + (i1 + (1)))])) + (or[((((i3 * m2k) * m1k) + ((i2 + (1)) * m1k)) + (i1 + (1)))])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + (i1 + (1)))]));
# 1555 "main.c"
(os[((((j3 * m2j) * m1j) + (j2 * m1j)) + j1)]) = (((((0.5) * (or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + (i1 + (1)))])) + ((0.25) * (((or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + i1)]) + (or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + (i1 + (2)))])) + x2))) + ((0.125) * (((x1[((((i3 * m2k) * m1k) + (i2 * m1k)) + i1)]) + (x1[((((i3 * m2k) * m1k) + (i2 * m1k)) + (i1 + (2)))])) + y2))) + ((0.0625) * ((y1[((((i3 * m2k) * m1k) + (i2 * m1k)) + i1)]) + (y1[((((i3 * m2k) * m1k) + (i2 * m1k)) + (i1 + (2)))]))));
}
}
}
}
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
# 1564 "main.c"
if(timeron) {
# 1564 "main.c"
timer_stop(6);
}
# 1566 "main.c"
j = (k - (1));
# 1568 "main.c"
comm3(os, m1j, m2j, m3j, j);
# 1570 "main.c"
if((debug_vec[0]) >= (1)) {
# 1572 "main.c"
rep_nrm(os, m1j, m2j, m3j, "   rprj3", k - (1));
}
# 1575 "main.c"
if((debug_vec[4]) >= k) {
# 1577 "main.c"
showall(os, m1j, m2j, m3j);
}
# 1580 "main.c"
__macc_free(x1);
# 1581 "main.c"
__macc_free(y1);
}
# 1599 "main.c"
static void interp(double * oz, int mm1, int mm2, int mm3, double * ou, int n1, int n2, int n3, int k)
{
# 1606 "main.c"
int i3;
# 1606 "main.c"
int i2;
# 1606 "main.c"
int i1;
# 1606 "main.c"
int d1;
# 1606 "main.c"
int d2;
# 1606 "main.c"
int d3;
# 1606 "main.c"
int t1;
# 1606 "main.c"
int t2;
# 1606 "main.c"
int t3;
# 1613 "main.c"
static double * z1;
# 1613 "main.c"
static double * z2;
# 1613 "main.c"
static double * z3;
# 1617 "main.c"
z1 = ((double * )(__macc_malloc(((mm3 * mm2) * mm1) * (sizeof(double)))));
# 1619 "main.c"
z2 = ((double * )(__macc_malloc(((mm3 * mm2) * mm1) * (sizeof(double)))));
# 1621 "main.c"
z3 = ((double * )(__macc_malloc(((mm3 * mm2) * mm1) * (sizeof(double)))));
# 1628 "main.c"
if(timeron) {
# 1628 "main.c"
timer_start(7);
}
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
}
}
{
# 1635 "main.c"
if(((n1 != (3)) && (n2 != (3))) && (n3 != (3))) {
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_z3_def_ub_set[10];
static int __macc_z3_def_lb_set[10];
static int __macc_z3_use_ub_set[10];
static int __macc_z3_use_lb_set[10];
static int __macc_z2_def_ub_set[10];
static int __macc_z2_def_lb_set[10];
static int __macc_z2_use_ub_set[10];
static int __macc_z2_use_lb_set[10];
static int __macc_z1_def_ub_set[10];
static int __macc_z1_def_lb_set[10];
static int __macc_z1_use_ub_set[10];
static int __macc_z1_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 0, (mm3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
__macc_adjust_data_region(z1, __macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set);
__macc_adjust_data_region(z1, __macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
__macc_adjust_data_region(z2, __macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set);
__macc_adjust_data_region(z2, __macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
__macc_adjust_data_region(z3, __macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set);
__macc_adjust_data_region(z3, __macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((0) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((0) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((((mm2 - (1)) - (1)) + (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if((__macc_region_is_overlapping(__macc_z3_def_lb_set, __macc_z3_def_ub_set)) || ((__macc_region_is_overlapping(__macc_z2_def_lb_set, __macc_z2_def_ub_set)) || (__macc_region_is_overlapping(__macc_z1_def_lb_set, __macc_z1_def_ub_set)))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z3_def_lb_set, __macc_z3_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_z2_def_lb_set, __macc_z2_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_z1_use_lb_set, __macc_z1_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z1_def_lb_set, __macc_z1_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, z3, __macc_multi, 1, __macc_z3_use_lb_set, __macc_z3_use_ub_set, 2, __macc_z3_def_lb_set, __macc_z3_def_ub_set);
__macc_set_data_region(__macc_tnum, z2, __macc_multi, 1, __macc_z2_use_lb_set, __macc_z2_use_ub_set, 2, __macc_z2_def_lb_set, __macc_z2_def_ub_set);
__macc_set_data_region(__macc_tnum, z1, __macc_multi, 2, __macc_z1_use_lb_set, __macc_z1_use_ub_set, 2, __macc_z1_def_lb_set, __macc_z1_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1638 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1640 "main.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1642 "main.c"
for(i1 = (0); i1 < mm1; i1++) {
{
# 1648 "main.c"
(z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) = ((oz[((((i3 * mm2) * mm1) + ((i2 + (1)) * mm1)) + i1)]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
# 1650 "main.c"
(z2[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) = ((oz[(((((i3 + (1)) * mm2) * mm1) + (i2 * mm1)) + i1)]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
# 1652 "main.c"
(z3[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) = (((oz[(((((i3 + (1)) * mm2) * mm1) + ((i2 + (1)) * mm1)) + i1)]) + (oz[(((((i3 + (1)) * mm2) * mm1) + (i2 * mm1)) + i1)])) + (z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 0, (mm3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1660 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1662 "main.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1664 "main.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1671 "main.c"
(ou[((((((2) * i3) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) = ((ou[((((((2) * i3) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
# 1673 "main.c"
(ou[((((((2) * i3) * n2) * n1) + (((2) * i2) * n1)) + (((2) * i1) + (1)))]) = ((ou[((((((2) * i3) * n2) * n1) + (((2) * i2) * n1)) + (((2) * i1) + (1)))]) + ((0.5) * ((oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + (i1 + (1)))]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z1_def_ub_set[10];
static int __macc_z1_def_lb_set[10];
static int __macc_z1_use_ub_set[10];
static int __macc_z1_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 0, (mm3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(z1, __macc_gpu_num, __macc_z1_use_lb_set, __macc_z1_use_ub_set);
__macc_adjust_data_region(z1, __macc_gpu_num, __macc_z1_def_lb_set, __macc_z1_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z1_use_lb_set, __macc_z1_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z1, __macc_multi, 2, __macc_z1_use_lb_set, __macc_z1_use_ub_set, 1, __macc_z1_def_lb_set, __macc_z1_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1681 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1683 "main.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1685 "main.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1692 "main.c"
(ou[((((((2) * i3) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) = ((ou[((((((2) * i3) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) + ((0.5) * (z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)])));
# 1694 "main.c"
(ou[((((((2) * i3) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + (((2) * i1) + (1)))]) = ((ou[((((((2) * i3) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + (((2) * i1) + (1)))]) + ((0.25) * ((z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) + (z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + (i1 + (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z2_def_ub_set[10];
static int __macc_z2_def_lb_set[10];
static int __macc_z2_use_ub_set[10];
static int __macc_z2_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 0, (mm3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * ((mm2 - (1)) - (1))) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(z2, __macc_gpu_num, __macc_z2_use_lb_set, __macc_z2_use_ub_set);
__macc_adjust_data_region(z2, __macc_gpu_num, __macc_z2_def_lb_set, __macc_z2_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z2_use_lb_set, __macc_z2_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z2, __macc_multi, 2, __macc_z2_use_lb_set, __macc_z2_use_ub_set, 1, __macc_z2_def_lb_set, __macc_z2_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1701 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1703 "main.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1705 "main.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1712 "main.c"
(ou[(((((((2) * i3) + (1)) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) = ((ou[(((((((2) * i3) + (1)) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) + ((0.5) * (z2[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)])));
# 1714 "main.c"
(ou[(((((((2) * i3) + (1)) * n2) * n1) + (((2) * i2) * n1)) + (((2) * i1) + (1)))]) = ((ou[(((((((2) * i3) + (1)) * n2) * n1) + (((2) * i2) * n1)) + (((2) * i1) + (1)))]) + ((0.25) * ((z2[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) + (z2[((((i3 * mm2) * mm1) + (i2 * mm1)) + (i1 + (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_z3_def_ub_set[10];
static int __macc_z3_def_lb_set[10];
static int __macc_z3_use_ub_set[10];
static int __macc_z3_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 0, (mm3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + (((2) * ((mm1 - (1)) - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * ((mm2 - (1)) - (1))) + (1)) * n1)) + ((2) * ((mm1 - (1)) - (1))));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (((mm1 - (1)) - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(z3, __macc_gpu_num, __macc_z3_use_lb_set, __macc_z3_use_ub_set);
__macc_adjust_data_region(z3, __macc_gpu_num, __macc_z3_def_lb_set, __macc_z3_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z3_use_lb_set, __macc_z3_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, z3, __macc_multi, 2, __macc_z3_use_lb_set, __macc_z3_use_ub_set, 1, __macc_z3_def_lb_set, __macc_z3_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1722 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1724 "main.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1726 "main.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1733 "main.c"
(ou[(((((((2) * i3) + (1)) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) = ((ou[(((((((2) * i3) + (1)) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) + ((0.25) * (z3[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)])));
# 1735 "main.c"
(ou[(((((((2) * i3) + (1)) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + (((2) * i1) + (1)))]) = ((ou[(((((((2) * i3) + (1)) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + (((2) * i1) + (1)))]) + ((0.125) * ((z3[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) + (z3[((((i3 * mm2) * mm1) + (i2 * mm1)) + (i1 + (1)))]))));
}
}
}
}
}
}
}
}
}
}
else {
# 1742 "main.c"
if(n1 == (3)) {
# 1743 "main.c"
d1 = (2);
# 1744 "main.c"
t1 = (1);
}
else {
# 1746 "main.c"
d1 = (1);
# 1747 "main.c"
t1 = (0);
}
# 1750 "main.c"
if(n2 == (3)) {
# 1751 "main.c"
d2 = (2);
# 1752 "main.c"
t2 = (1);
}
else {
# 1754 "main.c"
d2 = (1);
# 1755 "main.c"
t2 = (0);
}
# 1758 "main.c"
if(n3 == (3)) {
# 1759 "main.c"
d3 = (2);
# 1760 "main.c"
t3 = (1);
}
else {
# 1762 "main.c"
d3 = (1);
# 1763 "main.c"
t3 = (0);
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_d3_last;
static int __macc_d2_last;
static int __macc_n2_last;
static int __macc_d1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((d1 != __macc_d1_last) || ((n2 != __macc_n2_last) || ((d2 != __macc_d2_last) || ((d3 != __macc_d3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_d1_last = d1;
__macc_n2_last = n2;
__macc_d2_last = d2;
__macc_d3_last = d3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, d3, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , d2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - d3) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - d3 );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1767 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1769 "main.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1771 "main.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1777 "main.c"
(ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) = ((ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) + (ou[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_d3_last;
static int __macc_d2_last;
static int __macc_n2_last;
static int __macc_t1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((t1 != __macc_t1_last) || ((n2 != __macc_n2_last) || ((d2 != __macc_d2_last) || ((d3 != __macc_d3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_t1_last = t1;
__macc_n2_last = n2;
__macc_d2_last = d2;
__macc_d3_last = d3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, d3, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , d2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - d3) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - d3 );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1784 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1786 "main.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1788 "main.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1794 "main.c"
(ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) = ((ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) + ((0.5) * ((oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + i1)]) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_d3_last;
static int __macc_t2_last;
static int __macc_n2_last;
static int __macc_d1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((d1 != __macc_d1_last) || ((n2 != __macc_n2_last) || ((t2 != __macc_t2_last) || ((d3 != __macc_d3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_d1_last = d1;
__macc_n2_last = n2;
__macc_t2_last = t2;
__macc_d3_last = d3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, d3, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - d3) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - d3 );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1802 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1804 "main.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1806 "main.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1812 "main.c"
(ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) = ((ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) + ((0.5) * ((oz[(((((i3 - (1)) * mm2) * mm1) + (i2 * mm1)) + (i1 - (1)))]) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_d3_last;
static int __macc_t2_last;
static int __macc_n2_last;
static int __macc_t1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((t1 != __macc_t1_last) || ((n2 != __macc_n2_last) || ((t2 != __macc_t2_last) || ((d3 != __macc_d3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_t1_last = t1;
__macc_n2_last = n2;
__macc_t2_last = t2;
__macc_d3_last = d3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, d3, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - d3) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - d3 );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1820 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1822 "main.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1824 "main.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1831 "main.c"
(ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) = ((ou[((((((((2) * i3) - d3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) + ((0.25) * ((((oz[(((((i3 - (1)) * mm2) * mm1) + (i2 * mm1)) + i1)]) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + i1)])) + (oz[(((((i3 - (1)) * mm2) * mm1) + (i2 * mm1)) + (i1 - (1)))])) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_t3_last;
static int __macc_d2_last;
static int __macc_n2_last;
static int __macc_d1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((d1 != __macc_d1_last) || ((n2 != __macc_n2_last) || ((d2 != __macc_d2_last) || ((t3 != __macc_t3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_d1_last = d1;
__macc_n2_last = n2;
__macc_d2_last = d2;
__macc_t3_last = t3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , d2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1842 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1844 "main.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1846 "main.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1852 "main.c"
(ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) = ((ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) + ((0.5) * ((oz[((((i3 * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_t3_last;
static int __macc_d2_last;
static int __macc_n2_last;
static int __macc_t1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((t1 != __macc_t1_last) || ((n2 != __macc_n2_last) || ((d2 != __macc_d2_last) || ((t3 != __macc_t3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_t1_last = t1;
__macc_n2_last = n2;
__macc_d2_last = d2;
__macc_t3_last = t3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , d2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1860 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1862 "main.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1864 "main.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1871 "main.c"
(ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) = ((ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - d2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) + ((0.25) * ((((oz[((((i3 * mm2) * mm1) + ((i2 - (1)) * mm1)) + i1)]) + (oz[((((i3 * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))])) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + i1)])) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_t3_last;
static int __macc_t2_last;
static int __macc_n2_last;
static int __macc_d1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((d1 != __macc_d1_last) || ((n2 != __macc_n2_last) || ((t2 != __macc_t2_last) || ((t3 != __macc_t3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_d1_last = d1;
__macc_n2_last = n2;
__macc_t2_last = t2;
__macc_t3_last = t3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1881 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1883 "main.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1885 "main.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1892 "main.c"
(ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) = ((ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - d1) - (1)))]) + ((0.25) * ((((oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + (i1 - (1)))]) + (oz[((((i3 * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))])) + (oz[(((((i3 - (1)) * mm2) * mm1) + (i2 * mm1)) + (i1 - (1)))])) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_mm3_last;
static int __macc_mm2_last;
static int __macc_mm1_last;
static int __macc_t3_last;
static int __macc_t2_last;
static int __macc_n2_last;
static int __macc_t1_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((t1 != __macc_t1_last) || ((n2 != __macc_n2_last) || ((t2 != __macc_t2_last) || ((t3 != __macc_t3_last) || ((mm1 != __macc_mm1_last) || ((mm2 != __macc_mm2_last) || (mm3 != __macc_mm3_last)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_t1_last = t1;
__macc_n2_last = n2;
__macc_t2_last = t2;
__macc_t3_last = t3;
__macc_mm1_last = mm1;
__macc_mm2_last = mm2;
__macc_mm3_last = mm3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, mm3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 1, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((mm3 - (1)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : mm3 - (1) );
#pragma acc parallel present ( z1 , z2 , z3 , oz , ou ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1902 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1904 "main.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1906 "main.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1915 "main.c"
(ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) = ((ou[((((((((2) * i3) - t3) - (1)) * n2) * n1) + (((((2) * i2) - t2) - (1)) * n1)) + ((((2) * i1) - t1) - (1)))]) + ((0.125) * ((((((((oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) + (oz[((((i3 * mm2) * mm1) + ((i2 - (1)) * mm1)) + i1)])) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + (i1 - (1)))])) + (oz[((((i3 * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))])) + (oz[(((((i3 - (1)) * mm2) * mm1) + (i2 * mm1)) + i1)])) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + i1)])) + (oz[(((((i3 - (1)) * mm2) * mm1) + (i2 * mm1)) + (i1 - (1)))])) + (oz[(((((i3 - (1)) * mm2) * mm1) + ((i2 - (1)) * mm1)) + (i1 - (1)))]))));
}
}
}
}
}
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
# 1933 "main.c"
__macc_free(z1);
# 1934 "main.c"
__macc_free(z2);
# 1935 "main.c"
__macc_free(z3);
# 1941 "main.c"
if(timeron) {
# 1941 "main.c"
timer_stop(7);
}
# 1943 "main.c"
if((debug_vec[0]) >= (1)) {
# 1946 "main.c"
rep_nrm(oz, mm1, mm2, mm3, "z: inter", k - (1));
# 1947 "main.c"
rep_nrm(ou, n1, n2, n3, "u: inter", k);
}
# 1950 "main.c"
if((debug_vec[5]) >= k) {
# 1953 "main.c"
showall(oz, mm1, mm2, mm3);
# 1954 "main.c"
showall(ou, n1, n2, n3);
}
}
# 1966 "main.c"
static void norm2u3(double * or, int n1, int n2, int n3, double * rnm2, double * rnmu, int nx, int ny, int nz)
{
# 1972 "main.c"
double s;
# 1972 "main.c"
double a;
# 1973 "main.c"
double temp;
# 1974 "main.c"
int i3;
# 1974 "main.c"
int i2;
# 1974 "main.c"
int i1;
# 1976 "main.c"
double dn;
# 1978 "main.c"
if(timeron) {
# 1978 "main.c"
timer_start(8);
}
# 1979 "main.c"
dn = ((((1.0) * nx) * ny) * nz);
# 1981 "main.c"
s = (0.0);
# 1982 "main.c"
(*(rnmu)) = (0.0);
# 1983 "main.c"
temp = (*(rnmu));
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
static int __macc_or_def_ub_set[10];
static int __macc_or_def_lb_set[10];
static int __macc_or_use_ub_set[10];
static int __macc_or_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_use_lb_set, __macc_or_use_ub_set);
__macc_adjust_data_region(or, __macc_gpu_num, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_or_use_lb_set, __macc_or_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : s ) reduction ( max : temp ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc_or_use_lb_set, __macc_or_use_ub_set, 1, __macc_or_def_lb_set, __macc_or_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( or ) reduction ( + : s ) reduction ( max : temp ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 1988 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 1990 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 1992 "main.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 1995 "main.c"
s = (s + (__builtin_pow(or[((((i3 * n2) * n1) + (i2 * n1)) + i1)], 2.0)));
# 1996 "main.c"
a = (__builtin_fabs(or[((((i3 * n2) * n1) + (i2 * n1)) + i1)]));
# 1998 "main.c"
temp = ((temp > a) ? temp : a);
}
}
}
}
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
# 2003 "main.c"
(*(rnmu)) = temp;
# 2004 "main.c"
(*(rnm2)) = (__builtin_sqrt(s / dn));
# 2005 "main.c"
if(timeron) {
# 2005 "main.c"
timer_stop(8);
}
}
# 2012 "main.c"
static void rep_nrm(double * u, int n1, int n2, int n3, char * title, int kk)
{
# 2014 "main.c"
double rnm2;
# 2014 "main.c"
double rnmu;
# 2016 "main.c"
norm2u3(u, n1, n2, n3, &(rnm2), &(rnmu), nx[kk], ny[kk], nz[kk]);
# 2017 "main.c"
printf(" Level%2d in %8s: norms =%21.14E%21.14E\n", kk, title, rnm2, rnmu);
}
# 2024 "main.c"
static void comm3(double * ou, int n1, int n2, int n3, int kk)
{
# 2028 "main.c"
int i1;
# 2028 "main.c"
int i2;
# 2028 "main.c"
int i3;
# 2029 "main.c"
if(timeron) {
# 2029 "main.c"
timer_start(9);
}
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
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (1));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( ou ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang
# 2033 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop vector
# 2035 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
# 2040 "main.c"
(ou[((((i3 * n2) * n1) + (i2 * n1)) + (0))]) = (ou[((((i3 * n2) * n1) + (i2 * n1)) + (n1 - (2)))]);
# 2041 "main.c"
(ou[((((i3 * n2) * n1) + (i2 * n1)) + (n1 - (1)))]) = (ou[((((i3 * n2) * n1) + (i2 * n1)) + (1))]);
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 1, (n3 - (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (2)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (2)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (2)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (2)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((n3 - (2)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 - (2) );
#pragma acc parallel present ( ou ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang
# 2046 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop vector
# 2048 "main.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 2053 "main.c"
(ou[((((i3 * n2) * n1) + ((0) * n1)) + i1)]) = (ou[((((i3 * n2) * n1) + ((n2 - (2)) * n1)) + i1)]);
# 2054 "main.c"
(ou[((((i3 * n2) * n1) + ((n2 - (1)) * n1)) + i1)]) = (ou[((((i3 * n2) * n1) + ((1) * n1)) + i1)]);
}
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_ou_def_ub_set[10];
static int __macc_ou_def_lb_set[10];
static int __macc_ou_use_ub_set[10];
static int __macc_ou_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i2_loop_lb_set[10];
static int __macc_i2_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i2_loop_lb_set, __macc_i2_loop_ub_set, 0, n2 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i2_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i2_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_lb * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_ub * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((1) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((1) * n2) * n1) + (__macc_top_loop_lb * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((1) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set, ((((1) * n2) * n1) + (__macc_top_loop_ub * n1)) + (n1 - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_lb * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_ub * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((0) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((0) * n2) * n1) + (__macc_top_loop_lb * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((0) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set, ((((0) * n2) * n1) + (__macc_top_loop_ub * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_adjust_data_region(ou, __macc_gpu_num, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_ou_def_lb_set, __macc_ou_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i2_loop_lb_set, __macc_i2_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_ou_use_lb_set, __macc_ou_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i2_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i2_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc_ou_use_lb_set, __macc_ou_use_ub_set, 2, __macc_ou_def_lb_set, __macc_ou_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((n2 + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n2 );
#pragma acc parallel present ( ou ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang
# 2059 "main.c"
for(i2 = __macc_top_loop_lb; i2 <= __macc_top_loop_ub; i2++) {
{
#pragma acc loop vector
# 2061 "main.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 2066 "main.c"
(ou[(((((0) * n2) * n1) + (i2 * n1)) + i1)]) = (ou[(((((n3 - (2)) * n2) * n1) + (i2 * n1)) + i1)]);
# 2067 "main.c"
(ou[(((((n3 - (1)) * n2) * n1) + (i2 * n1)) + i1)]) = (ou[(((((1) * n2) * n1) + (i2 * n1)) + i1)]);
}
}
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
# 2071 "main.c"
if(timeron) {
# 2071 "main.c"
timer_stop(9);
}
}
# 2075 "main.c"
inline double randlc(double * x, double a)
{
# 2077 "main.c"
double const r23 = 1.1920928955078125e-07;
# 2078 "main.c"
double const r46 = r23 * r23;
# 2079 "main.c"
double const t23 = 8.388608e+06;
# 2080 "main.c"
double const t46 = t23 * t23;
# 2082 "main.c"
double t1;
# 2082 "main.c"
double t2;
# 2082 "main.c"
double t3;
# 2082 "main.c"
double t4;
# 2082 "main.c"
double a1;
# 2082 "main.c"
double a2;
# 2082 "main.c"
double x1;
# 2082 "main.c"
double x2;
# 2082 "main.c"
double z;
# 2083 "main.c"
double r;
# 2084 "main.c"
t1 = (r23 * a);
# 2085 "main.c"
a1 = ((int)(t1));
# 2086 "main.c"
a2 = (a - (t23 * a1));
# 2088 "main.c"
t1 = (r23 * (*(x)));
# 2089 "main.c"
x1 = ((int)(t1));
# 2090 "main.c"
x2 = ((*(x)) - (t23 * x1));
# 2091 "main.c"
t1 = ((a1 * x2) + (a2 * x1));
# 2092 "main.c"
t2 = ((int)(r23 * t1));
# 2093 "main.c"
z = (t1 - (t23 * t2));
# 2094 "main.c"
t3 = ((t23 * z) + (a2 * x2));
# 2095 "main.c"
t4 = ((int)(r46 * t3));
# 2096 "main.c"
(*(x)) = (t3 - (t46 * t4));
# 2097 "main.c"
r = (r46 * (*(x)));
# 2099 "main.c"
return r;
}
# 2102 "main.c"
inline void vranlc(int n, double * x, double a, double y[])
{
# 2105 "main.c"
double const r23 = 1.1920928955078125e-07;
# 2106 "main.c"
double const r46 = r23 * r23;
# 2107 "main.c"
double const t23 = 8.388608e+06;
# 2108 "main.c"
double const t46 = t23 * t23;
# 2110 "main.c"
double t1;
# 2110 "main.c"
double t2;
# 2110 "main.c"
double t3;
# 2110 "main.c"
double t4;
# 2110 "main.c"
double a1;
# 2110 "main.c"
double a2;
# 2110 "main.c"
double x1;
# 2110 "main.c"
double x2;
# 2110 "main.c"
double z;
# 2112 "main.c"
int i;
# 2113 "main.c"
t1 = (r23 * a);
# 2114 "main.c"
a1 = ((int)(t1));
# 2115 "main.c"
a2 = (a - (t23 * a1));
# 2116 "main.c"
for(i = (0); i < n; i++) {
{
# 2117 "main.c"
t1 = (r23 * (*(x)));
# 2118 "main.c"
x1 = ((int)(t1));
# 2119 "main.c"
x2 = ((*(x)) - (t23 * x1));
# 2120 "main.c"
t1 = ((a1 * x2) + (a2 * x1));
# 2121 "main.c"
t2 = ((int)(r23 * t1));
# 2122 "main.c"
z = (t1 - (t23 * t2));
# 2123 "main.c"
t3 = ((t23 * z) + (a2 * x2));
# 2124 "main.c"
t4 = ((int)(r46 * t3));
# 2125 "main.c"
(*(x)) = (t3 - (t46 * t4));
# 2126 "main.c"
(y[i]) = (r46 * (*(x)));
}
}
}
# 2135 "main.c"
static void zran3(double * oz, int n1, int n2, int n3, int nx, int ny, int k)
{
# 2139 "main.c"
int i0;
# 2139 "main.c"
int m0;
# 2139 "main.c"
int m1;
# 2141 "main.c"
int i1;
# 2141 "main.c"
int i2;
# 2141 "main.c"
int i3;
# 2141 "main.c"
int d1;
# 2141 "main.c"
int e1;
# 2141 "main.c"
int e2;
# 2141 "main.c"
int e3;
# 2142 "main.c"
double xx;
# 2142 "main.c"
double x0;
# 2142 "main.c"
double x1;
# 2142 "main.c"
double a1;
# 2142 "main.c"
double a2;
# 2142 "main.c"
double ai;
# 2144 "main.c"
int const mm = 10;
# 2145 "main.c"
double const a = __builtin_pow(5.0, 13.0);
# 2146 "main.c"
double const x = 314159265.0;
# 2147 "main.c"
double ten[mm][2];
# 2147 "main.c"
double best;
# 2148 "main.c"
int i;
# 2148 "main.c"
int j1[mm][2];
# 2148 "main.c"
int j2[mm][2];
# 2148 "main.c"
int j3[mm][2];
# 2149 "main.c"
int jg[4][mm][2];
# 2151 "main.c"
double rdummy;
# 2153 "main.c"
a1 = (power(a, nx));
# 2154 "main.c"
a2 = (power(a, nx * ny));
# 2157 "main.c"
zero3(oz, n1, n2, n3);
# 2159 "main.c"
i = ((is1 - (2)) + (nx * ((is2 - (2)) + (ny * (is3 - (2))))));
# 2161 "main.c"
ai = (power(a, i));
# 2162 "main.c"
d1 = ((ie1 - is1) + (1));
# 2163 "main.c"
e1 = ((ie1 - is1) + (2));
# 2164 "main.c"
e2 = ((ie2 - is2) + (2));
# 2165 "main.c"
e3 = ((ie3 - is3) + (2));
# 2166 "main.c"
x0 = x;
# 2167 "main.c"
rdummy = (randlc(&(x0), ai));
# 2169 "main.c"
for(i3 = (1); i3 < e3; i3++) {
{
# 2170 "main.c"
x1 = x0;
# 2171 "main.c"
for(i2 = (1); i2 < e2; i2++) {
{
# 2172 "main.c"
xx = x1;
# 2174 "main.c"
vranlc(d1, &(xx), a, oz + ((((i3 * n2) * n1) + (i2 * n1)) + (1)));
# 2175 "main.c"
rdummy = (randlc(&(x1), a1));
}
}
# 2177 "main.c"
rdummy = (randlc(&(x0), a2));
}
}
# 2188 "main.c"
for(i = (0); i < mm; i++) {
{
# 2189 "main.c"
(ten[i][1]) = (0.0);
# 2190 "main.c"
(j1[i][1]) = (0);
# 2191 "main.c"
(j2[i][1]) = (0);
# 2192 "main.c"
(j3[i][1]) = (0);
# 2193 "main.c"
(ten[i][0]) = (1.0);
# 2194 "main.c"
(j1[i][0]) = (0);
# 2195 "main.c"
(j2[i][0]) = (0);
# 2196 "main.c"
(j3[i][0]) = (0);
}
}
# 2199 "main.c"
for(i3 = (1); i3 < (n3 - (1)); i3++) {
{
# 2200 "main.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
# 2201 "main.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 2203 "main.c"
if((oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) > (ten[0][1])) {
# 2205 "main.c"
(ten[0][1]) = (oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]);
# 2206 "main.c"
(j1[0][1]) = i1;
# 2207 "main.c"
(j2[0][1]) = i2;
# 2208 "main.c"
(j3[0][1]) = i3;
# 2209 "main.c"
bubble(ten, j1, j2, j3, mm, 1);
}
# 2212 "main.c"
if((oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) < (ten[0][0])) {
# 2214 "main.c"
(ten[0][0]) = (oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]);
# 2215 "main.c"
(j1[0][0]) = i1;
# 2216 "main.c"
(j2[0][0]) = i2;
# 2217 "main.c"
(j3[0][0]) = i3;
# 2218 "main.c"
bubble(ten, j1, j2, j3, mm, 0);
}
}
}
}
}
}
}
# 2228 "main.c"
i1 = (mm - (1));
# 2229 "main.c"
i0 = (mm - (1));
# 2230 "main.c"
for(i = (mm - (1)); i >= (0); i--) {
{
# 2231 "main.c"
best = (0.0);
# 2232 "main.c"
if(best < (ten[i1][1])) {
# 2233 "main.c"
(jg[0][i][1]) = (0);
# 2234 "main.c"
(jg[1][i][1]) = ((is1 - (2)) + (j1[i1][1]));
# 2235 "main.c"
(jg[2][i][1]) = ((is2 - (2)) + (j2[i1][1]));
# 2236 "main.c"
(jg[3][i][1]) = ((is3 - (2)) + (j3[i1][1]));
# 2237 "main.c"
i1 = (i1 - (1));
}
else {
# 2239 "main.c"
(jg[0][i][1]) = (0);
# 2240 "main.c"
(jg[1][i][1]) = (0);
# 2241 "main.c"
(jg[2][i][1]) = (0);
# 2242 "main.c"
(jg[3][i][1]) = (0);
}
# 2245 "main.c"
best = (1.0);
# 2246 "main.c"
if(best > (ten[i0][0])) {
# 2247 "main.c"
(jg[0][i][0]) = (0);
# 2248 "main.c"
(jg[1][i][0]) = ((is1 - (2)) + (j1[i0][0]));
# 2249 "main.c"
(jg[2][i][0]) = ((is2 - (2)) + (j2[i0][0]));
# 2250 "main.c"
(jg[3][i][0]) = ((is3 - (2)) + (j3[i0][0]));
# 2251 "main.c"
i0 = (i0 - (1));
}
else {
# 2253 "main.c"
(jg[0][i][0]) = (0);
# 2254 "main.c"
(jg[1][i][0]) = (0);
# 2255 "main.c"
(jg[2][i][0]) = (0);
# 2256 "main.c"
(jg[3][i][0]) = (0);
}
}
}
# 2262 "main.c"
m1 = (0);
# 2263 "main.c"
m0 = (0);
# 2310 "main.c"
for(i3 = (0); i3 < n3; i3++) {
{
# 2311 "main.c"
for(i2 = (0); i2 < n2; i2++) {
{
# 2312 "main.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 2314 "main.c"
(oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = (0.0);
}
}
}
}
}
}
# 2319 "main.c"
for(i = (mm - (1)); i >= m0; i--) {
{
# 2321 "main.c"
i3 = (jg[3][i][0]);
# 2322 "main.c"
i2 = (jg[2][i][0]);
# 2323 "main.c"
i1 = (jg[1][i][0]);
# 2324 "main.c"
(oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = (-(1.0));
}
}
# 2327 "main.c"
for(i = (mm - (1)); i >= m1; i--) {
{
# 2329 "main.c"
i3 = (jg[3][i][1]);
# 2330 "main.c"
i2 = (jg[2][i][1]);
# 2331 "main.c"
i1 = (jg[1][i][1]);
# 2332 "main.c"
(oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = (1.0);
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_update_device(__macc_tnum, oz, sizeof(double), 0, (n3 * n2) * n1);
}
}
# 2337 "main.c"
comm3(oz, n1, n2, n3, k);
}
# 2345 "main.c"
static void showall(double * oz, int n1, int n2, int n3)
{
# 2349 "main.c"
int i1;
# 2349 "main.c"
int i2;
# 2349 "main.c"
int i3;
# 2350 "main.c"
int m1;
# 2350 "main.c"
int m2;
# 2350 "main.c"
int m3;
# 2352 "main.c"
m1 = ((n1 < (18)) ? n1 : (18));
# 2353 "main.c"
m2 = ((n2 < (14)) ? n2 : (14));
# 2354 "main.c"
m3 = ((n3 < (18)) ? n3 : (18));
# 2356 "main.c"
printf("   \n");
# 2357 "main.c"
for(i3 = (0); i3 < m3; i3++) {
{
# 2358 "main.c"
for(i1 = (0); i1 < m1; i1++) {
{
# 2359 "main.c"
for(i2 = (0); i2 < m2; i2++) {
{
# 2361 "main.c"
printf("%6.3f", oz[((((i3 * n2) * n1) + (i2 * n1)) + i2)]);
}
}
# 2363 "main.c"
printf("\n");
}
}
# 2365 "main.c"
printf("  - - - - - - - \n");
}
}
# 2367 "main.c"
printf("   \n");
}
# 2375 "main.c"
static double power(double a, int n)
{
# 2377 "main.c"
double aj;
# 2378 "main.c"
int nj;
# 2379 "main.c"
double rdummy;
# 2380 "main.c"
double power;
# 2382 "main.c"
power = (1.0);
# 2383 "main.c"
nj = n;
# 2384 "main.c"
aj = a;
# 2386 "main.c"
while(nj != (0)) {
{
# 2387 "main.c"
if((nj % (2)) == (1)) {
# 2387 "main.c"
rdummy = (randlc(&(power), aj));
}
# 2388 "main.c"
rdummy = (randlc(&(aj), aj));
# 2389 "main.c"
nj = (nj / (2));
}
}
# 2392 "main.c"
return power;
}
# 2399 "main.c"
static void bubble(double ten[][2], int j1[][2], int j2[][2], int j3[][2], int m, int ind)
{
# 2402 "main.c"
double temp;
# 2403 "main.c"
int i;
# 2403 "main.c"
int j_temp;
# 2405 "main.c"
if(ind == (1)) {
# 2406 "main.c"
for(i = (0); i < (m - (1)); i++) {
{
# 2407 "main.c"
if((ten[i][ind]) > (ten[i + (1)][ind])) {
# 2408 "main.c"
temp = (ten[i + (1)][ind]);
# 2409 "main.c"
(ten[i + (1)][ind]) = (ten[i][ind]);
# 2410 "main.c"
(ten[i][ind]) = temp;
# 2412 "main.c"
j_temp = (j1[i + (1)][ind]);
# 2413 "main.c"
(j1[i + (1)][ind]) = (j1[i][ind]);
# 2414 "main.c"
(j1[i][ind]) = j_temp;
# 2416 "main.c"
j_temp = (j2[i + (1)][ind]);
# 2417 "main.c"
(j2[i + (1)][ind]) = (j2[i][ind]);
# 2418 "main.c"
(j2[i][ind]) = j_temp;
# 2420 "main.c"
j_temp = (j3[i + (1)][ind]);
# 2421 "main.c"
(j3[i + (1)][ind]) = (j3[i][ind]);
# 2422 "main.c"
(j3[i][ind]) = j_temp;
}
else {
# 2424 "main.c"
return ;
}
}
}
}
else {
# 2428 "main.c"
for(i = (0); i < (m - (1)); i++) {
{
# 2429 "main.c"
if((ten[i][ind]) < (ten[i + (1)][ind])) {
# 2431 "main.c"
temp = (ten[i + (1)][ind]);
# 2432 "main.c"
(ten[i + (1)][ind]) = (ten[i][ind]);
# 2433 "main.c"
(ten[i][ind]) = temp;
# 2435 "main.c"
j_temp = (j1[i + (1)][ind]);
# 2436 "main.c"
(j1[i + (1)][ind]) = (j1[i][ind]);
# 2437 "main.c"
(j1[i][ind]) = j_temp;
# 2439 "main.c"
j_temp = (j2[i + (1)][ind]);
# 2440 "main.c"
(j2[i + (1)][ind]) = (j2[i][ind]);
# 2441 "main.c"
(j2[i][ind]) = j_temp;
# 2443 "main.c"
j_temp = (j3[i + (1)][ind]);
# 2444 "main.c"
(j3[i + (1)][ind]) = (j3[i][ind]);
# 2445 "main.c"
(j3[i][ind]) = j_temp;
}
else {
# 2447 "main.c"
return ;
}
}
}
}
}
# 2454 "main.c"
static void zero3(double * oz, int n1, int n2, int n3)
{
# 2458 "main.c"
int i1;
# 2458 "main.c"
int i2;
# 2458 "main.c"
int i3;
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static int __macc_oz_def_ub_set[10];
static int __macc_oz_def_lb_set[10];
static int __macc_oz_use_ub_set[10];
static int __macc_oz_use_lb_set[10];
static int __macc_n3_last;
static int __macc_n2_last;
static int __macc_n1_last;
static int __macc_i3_loop_lb_set[10];
static int __macc_i3_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc_n1_last) || ((n2 != __macc_n2_last) || (n3 != __macc_n3_last))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n1_last = n1;
__macc_n2_last = n2;
__macc_n3_last = n3;
}
{
__macc_calc_loop_region(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set, 0, n3 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_use_lb_set, __macc_oz_use_ub_set);
__macc_adjust_data_region(oz, __macc_gpu_num, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
if(__macc_region_is_overlapping(__macc_oz_def_lb_set, __macc_oz_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i3_loop_lb_set, __macc_i3_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i3_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i3_loop_ub_set[__macc_tnum]);
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 1, __macc_oz_use_lb_set, __macc_oz_use_ub_set, 2, __macc_oz_def_lb_set, __macc_oz_def_ub_set);
}
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((n3 + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : n3 );
#pragma acc parallel present ( oz ) num_gangs  (__macc_num_gangs)  num_workers ( 8 ) vector_length ( 128 )
#pragma acc loop gang
# 2463 "main.c"
for(i3 = __macc_top_loop_lb; i3 <= __macc_top_loop_ub; i3++) {
{
#pragma acc loop worker
# 2465 "main.c"
for(i2 = (0); i2 < n2; i2++) {
{
#pragma acc loop vector
# 2467 "main.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 2469 "main.c"
(oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = (0.0);
}
}
}
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
}
