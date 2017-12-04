/*
  Generated from
  https://github.com/uhhpctools/openacc-npb/blob/master/CG/CG/cg.c
*/
/*
 * Original Source  : /tmp/tmp.S9VWDT2nnf/1.c
 * Language         : C
 * Compiled Time    : 2017-12-04 15:01:17
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.0.3
 */
# 1 "/tmp/tmp.S9VWDT2nnf/1.c"
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
typedef long __io_read_fn(void * __RN_525, char * __RN_526, unsigned long __RN_527);
typedef long __io_write_fn(void * __RN_528, char const * __RN_529, unsigned long __RN_530);
typedef int __io_seek_fn(void * __RN_531, long * __RN_532, int __RN_533);
typedef int __io_close_fn(void * __RN_534);
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
struct _IO_FILE;
struct _IO_marker;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
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
extern void omp_set_num_threads(int __RN_0);
extern int omp_get_thread_num(void);
extern int omp_get_num_procs(void);
extern int omp_get_num_threads(void);
extern int omp_get_max_threads(void);
extern int omp_in_parallel(void);
extern int omp_in_final(void);
extern void omp_set_dynamic(int __RN_7);
extern int omp_get_dynamic(void);
extern void omp_set_nested(int __RN_9);
extern int omp_get_nested(void);
extern void omp_init_lock(int * __RN_11);
extern void omp_destroy_lock(int * __RN_12);
extern void omp_set_lock(int * __RN_13);
extern void omp_unset_lock(int * __RN_14);
extern int omp_test_lock(int * __RN_15);
extern void omp_init_nest_lock(struct omp_nest_lock * __RN_16);
extern void omp_destroy_nest_lock(struct omp_nest_lock * __RN_17);
extern void omp_set_nest_lock(struct omp_nest_lock * __RN_18);
extern void omp_unset_nest_lock(struct omp_nest_lock * __RN_19);
extern int omp_test_nest_lock(struct omp_nest_lock * __RN_20);
extern double omp_get_wtime(void);
extern double omp_get_wtick(void);
extern long omp_get_stack_size(void);
extern void omp_set_stack_size(long __RN_24);
extern int omp_get_thread_limit(void);
extern void omp_set_max_active_levels(int __RN_26);
extern int omp_get_max_active_levels(void);
extern int omp_get_level(void);
extern int omp_get_ancestor_thread_num(int __RN_29);
extern int omp_get_team_size(int __RN_30);
extern int omp_get_active_level(void);
extern void omp_set_schedule(enum omp_sched_t __RN_32, int __RN_33);
extern void omp_get_schedule(enum omp_sched_t * __RN_34, int * __RN_35);
extern int omp_get_initial_device();
extern int omp_get_default_device();
extern void omp_set_default_device(int __RN_36);
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h"
static unsigned short __bswap_16(unsigned short __bsx__RN_1882)
{
# 47 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h"
return (unsigned short)(((__bsx__RN_1882 >> (8)) & (255)) | ((__bsx__RN_1882 & (255)) << (8)));
}
# 87 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static unsigned int __bswap_32(unsigned int __bsx__RN_1883)
{
# 90 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return ((((__bsx__RN_1883 & (-(16777216u))) >> (24)) | ((__bsx__RN_1883 & (16711680)) >> (8))) | ((__bsx__RN_1883 & (65280)) << (8))) | ((__bsx__RN_1883 & (255)) << (24));
}
# 148 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static unsigned long __bswap_64(unsigned long __bsx__RN_1884)
{
# 151 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return ((((((((__bsx__RN_1884 & (0xff00000000000000ull)) >> (56)) | ((__bsx__RN_1884 & (0xff000000000000ull)) >> (40))) | ((__bsx__RN_1884 & (0xff0000000000ull)) >> (24))) | ((__bsx__RN_1884 & (0xff00000000ull)) >> (8))) | ((__bsx__RN_1884 & (0x0ff000000ull)) << (8))) | ((__bsx__RN_1884 & (0x000ff0000ull)) << (24))) | ((__bsx__RN_1884 & (0x00000ff00ull)) << (40))) | ((__bsx__RN_1884 & (0x0000000ffull)) << (56));
}
extern unsigned long __ctype_get_mb_cur_max(void);
extern double atof(char const * __RN_41);
extern int atoi(char const * __RN_42);
extern long atol(char const * __RN_43);
extern long long atoll(char const * __RN_44);
extern double strtod(char const * restrict __RN_45, char * * restrict __RN_46);
extern float strtof(char const * restrict __RN_47, char * * restrict __RN_48);
extern long double strtold(char const * restrict __RN_49, char * * restrict __RN_50);
extern long strtol(char const * restrict __RN_51, char * * restrict __RN_52, int __RN_53);
extern unsigned long strtoul(char const * restrict __RN_54, char * * restrict __RN_55, int __RN_56);
extern long long strtoq(char const * restrict __RN_57, char * * restrict __RN_58, int __RN_59);
extern unsigned long long strtouq(char const * restrict __RN_60, char * * restrict __RN_61, int __RN_62);
extern long long strtoll(char const * restrict __RN_63, char * * restrict __RN_64, int __RN_65);
extern unsigned long long strtoull(char const * restrict __RN_66, char * * restrict __RN_67, int __RN_68);
extern char * l64a(long __RN_69);
extern long a64l(char const * __RN_70);
extern int select(int __RN_71, struct anon_type_9_fd_set * restrict __RN_72, struct anon_type_9_fd_set * restrict __RN_73, struct anon_type_9_fd_set * restrict __RN_74, struct timeval * restrict __RN_75);
extern int pselect(int __RN_76, struct anon_type_9_fd_set * restrict __RN_77, struct anon_type_9_fd_set * restrict __RN_78, struct anon_type_9_fd_set * restrict __RN_79, struct timespec const * restrict __RN_80, struct anon_type_8___sigset_t const * restrict __RN_81);
extern unsigned int gnu_dev_major(unsigned long long __RN_82);
extern unsigned int gnu_dev_minor(unsigned long long __RN_83);
extern unsigned long long gnu_dev_makedev(unsigned int __RN_84, unsigned int __RN_85);
extern long random(void);
extern void srandom(unsigned int __RN_87);
extern char * initstate(unsigned int __RN_88, char * __RN_89, unsigned long __RN_90);
extern char * setstate(char * __RN_91);
extern int random_r(struct random_data * restrict __RN_92, int * restrict __RN_93);
extern int srandom_r(unsigned int __RN_94, struct random_data * __RN_95);
extern int initstate_r(unsigned int __RN_96, char * restrict __RN_97, unsigned long __RN_98, struct random_data * restrict __RN_99);
extern int setstate_r(char * restrict __RN_100, struct random_data * restrict __RN_101);
extern int rand(void);
extern void srand(unsigned int __RN_103);
extern int rand_r(unsigned int * __RN_104);
extern double drand48(void);
extern double erand48(unsigned short __RN_106[3]);
extern long lrand48(void);
extern long nrand48(unsigned short __RN_108[3]);
extern long mrand48(void);
extern long jrand48(unsigned short __RN_110[3]);
extern void srand48(long __RN_111);
extern unsigned short * seed48(unsigned short __RN_112[3]);
extern void lcong48(unsigned short __RN_113[7]);
extern int drand48_r(struct drand48_data * restrict __RN_114, double * restrict __RN_115);
extern int erand48_r(unsigned short __RN_116[3], struct drand48_data * restrict __RN_117, double * restrict __RN_118);
extern int lrand48_r(struct drand48_data * restrict __RN_119, long * restrict __RN_120);
extern int nrand48_r(unsigned short __RN_121[3], struct drand48_data * restrict __RN_122, long * restrict __RN_123);
extern int mrand48_r(struct drand48_data * restrict __RN_124, long * restrict __RN_125);
extern int jrand48_r(unsigned short __RN_126[3], struct drand48_data * restrict __RN_127, long * restrict __RN_128);
extern int srand48_r(long __RN_129, struct drand48_data * __RN_130);
extern int seed48_r(unsigned short __RN_131[3], struct drand48_data * __RN_132);
extern int lcong48_r(unsigned short __RN_133[7], struct drand48_data * __RN_134);
extern void * malloc(unsigned long __RN_135);
extern void * calloc(unsigned long __RN_136, unsigned long __RN_137);
extern void * realloc(void * __RN_138, unsigned long __RN_139);
extern void free(void * __RN_140);
extern void cfree(void * __RN_141);
extern void * __alloca(unsigned long __RN_142);
extern void * alloca(unsigned long __RN_143);
extern void * __builtin_alloca(unsigned long __RN_144);
extern void * valloc(unsigned long __RN_145);
extern int posix_memalign(void * * __RN_146, unsigned long __RN_147, unsigned long __RN_148);
extern __attribute__((noreturn)) void abort(void);
extern int atexit(void (* __RN_150)(void));
extern int on_exit(void (* __RN_152)(int, void * ), void * __RN_153);
extern __attribute__((noreturn)) void exit(int __RN_156);
extern __attribute__((noreturn)) void _Exit(int __RN_157);
extern char * getenv(char const * __RN_158);
extern int putenv(char * __RN_159);
extern int setenv(char const * __RN_160, char const * __RN_161, int __RN_162);
extern int unsetenv(char const * __RN_163);
extern int clearenv(void);
extern char * mktemp(char * __RN_165);
extern int mkstemp(char * __RN_166);
extern int mkstemps(char * __RN_167, int __RN_168);
extern char * mkdtemp(char * __RN_169);
extern int system(char const * __RN_170);
extern char * realpath(char const * restrict __RN_171, char * restrict __RN_172);
extern void * bsearch(void const * __RN_175, void const * __RN_176, unsigned long __RN_177, unsigned long __RN_178, int (* __RN_179)(void const * , void const * ));
extern void qsort(void * __RN_180, unsigned long __RN_181, unsigned long __RN_182, int (* __RN_183)(void const * , void const * ));
extern __attribute__((const)) int abs(int __RN_184);
extern __attribute__((const)) long labs(long __RN_185);
extern __attribute__((const)) long long llabs(long long __RN_186);
extern __attribute__((const)) struct anon_type_5_div_t div(int __RN_187, int __RN_188);
extern __attribute__((const)) struct anon_type_6_ldiv_t ldiv(long __RN_189, long __RN_190);
extern __attribute__((const)) struct anon_type_7_lldiv_t lldiv(long long __RN_191, long long __RN_192);
extern char * ecvt(double __RN_193, int __RN_194, int * restrict __RN_195, int * restrict __RN_196);
extern char * fcvt(double __RN_197, int __RN_198, int * restrict __RN_199, int * restrict __RN_200);
extern char * gcvt(double __RN_201, int __RN_202, char * __RN_203);
extern char * qecvt(long double __RN_204, int __RN_205, int * restrict __RN_206, int * restrict __RN_207);
extern char * qfcvt(long double __RN_208, int __RN_209, int * restrict __RN_210, int * restrict __RN_211);
extern char * qgcvt(long double __RN_212, int __RN_213, char * __RN_214);
extern int ecvt_r(double __RN_215, int __RN_216, int * restrict __RN_217, int * restrict __RN_218, char * restrict __RN_219, unsigned long __RN_220);
extern int fcvt_r(double __RN_221, int __RN_222, int * restrict __RN_223, int * restrict __RN_224, char * restrict __RN_225, unsigned long __RN_226);
extern int qecvt_r(long double __RN_227, int __RN_228, int * restrict __RN_229, int * restrict __RN_230, char * restrict __RN_231, unsigned long __RN_232);
extern int qfcvt_r(long double __RN_233, int __RN_234, int * restrict __RN_235, int * restrict __RN_236, char * restrict __RN_237, unsigned long __RN_238);
extern int mblen(char const * __RN_239, unsigned long __RN_240);
extern int mbtowc(int * restrict __RN_241, char const * restrict __RN_242, unsigned long __RN_243);
extern int wctomb(char * __RN_244, int __RN_245);
extern unsigned long mbstowcs(int * restrict __RN_246, char const * restrict __RN_247, unsigned long __RN_248);
extern unsigned long wcstombs(char * restrict __RN_249, int const * restrict __RN_250, unsigned long __RN_251);
extern int rpmatch(char const * __RN_252);
extern int getsubopt(char * * restrict __RN_253, char * const * restrict __RN_254, char * * restrict __RN_255);
extern int getloadavg(double __RN_256[], int __RN_257);
int __builtin_abs(int __RN_258);
extern void * malloc_managed(unsigned long __RN_259);
extern void * calloc_managed(unsigned long __RN_260, unsigned long __RN_261);
extern void free_managed(void * __RN_262);
extern void cfree_managed(void * __RN_263);
extern void * realloc_managed(void * __RN_264, unsigned long __RN_265);
extern void * valloc_managed(unsigned long __RN_266);
extern void * pvalloc_managed(unsigned long __RN_267);
extern void * memalign_managed(unsigned long __RN_268, unsigned long __RN_269);
extern int posix_memalign_managed(void * * __RN_270, unsigned long __RN_271, unsigned long __RN_272);
extern char * tmpnam_managed(char * __RN_273);
extern void * omp_target_alloc(unsigned long __RN_274, int __RN_275);
extern void omp_target_free(void * __RN_276, int __RN_277);
extern int omp_target_memcpy(void * __RN_278, void * __RN_279, unsigned long __RN_280, unsigned long __RN_281, unsigned long __RN_282, int __RN_283, int __RN_284);
extern void _mp_atomic_add(int * __RN_285, int __RN_286);
extern void _mp_exchange_and_add(int * __RN_287, int __RN_288);
void acc_set_default_async(int __RN_289);
int acc_get_default_async(void);
extern int acc_get_num_devices(enum anon_type_20_acc_device_t __RN_291);
extern enum anon_type_20_acc_device_t acc_get_device(void);
extern void acc_set_device_num(int __RN_293, enum anon_type_20_acc_device_t __RN_294);
extern int acc_get_device_num(enum anon_type_20_acc_device_t __RN_295);
extern void acc_init(enum anon_type_20_acc_device_t __RN_296);
extern void acc_shutdown(enum anon_type_20_acc_device_t __RN_297);
extern void acc_set_deviceid(int __RN_298);
extern int acc_get_deviceid(int __RN_299, enum anon_type_20_acc_device_t __RN_300);
extern int acc_async_test(long __RN_301);
extern int acc_async_test_all(void);
extern void acc_async_wait(long __RN_303);
extern void acc_async_wait_all(void);
extern void acc_wait(long __RN_305);
extern void acc_wait_async(long __RN_306, long __RN_307);
extern void acc_wait_all(void);
extern void acc_wait_all_async(long __RN_309);
extern int acc_on_device(enum anon_type_20_acc_device_t __RN_310);
extern void __macc_free(void * __RN_311);
extern void * acc_memcpy(void * __RN_312, void * __RN_313, unsigned long __RN_314);
extern void * acc_memcpy_async(void * __RN_315, void * __RN_316, unsigned long __RN_317, long __RN_318);
extern void * acc_copyin(void * __RN_319, unsigned long __RN_320);
extern void * acc_copyin_async(void * __RN_321, unsigned long __RN_322, long __RN_323);
extern void * acc_pcopyin(void * __RN_324, unsigned long __RN_325);
extern void * acc_pcopyin_async(void * __RN_326, unsigned long __RN_327, long __RN_328);
extern void * acc_present_or_copyin(void * __RN_329, unsigned long __RN_330);
extern void * acc_present_or_copyin_async(void * __RN_331, unsigned long __RN_332, long __RN_333);
extern void * acc_create(void * __RN_334, unsigned long __RN_335);
extern void * acc_create_async(void * __RN_336, unsigned long __RN_337, long __RN_338);
extern void * acc_pcreate(void * __RN_339, unsigned long __RN_340);
extern void * acc_pcreate_async(void * __RN_341, unsigned long __RN_342, long __RN_343);
extern void * acc_present_or_create(void * __RN_344, unsigned long __RN_345);
extern void * acc_present_or_create_async(void * __RN_346, unsigned long __RN_347, long __RN_348);
extern void acc_copyout(void * __RN_349, unsigned long __RN_350);
extern void acc_copyout_async(void * __RN_351, unsigned long __RN_352, long __RN_353);
extern void acc_delete(void * __RN_354, unsigned long __RN_355);
extern void acc_delete_async(void * __RN_356, unsigned long __RN_357, long __RN_358);
extern void acc_update_device(void * __RN_359, unsigned long __RN_360);
extern void acc_update_device_async(void * __RN_361, unsigned long __RN_362, long __RN_363);
extern void acc_update_self(void * __RN_364, unsigned long __RN_365);
extern void acc_update_self_async(void * __RN_366, unsigned long __RN_367, long __RN_368);
extern void acc_update_host(void * __RN_369, unsigned long __RN_370);
extern void acc_update_host_async(void * __RN_371, unsigned long __RN_372, long __RN_373);
extern void acc_memcpy_to_device(void * __RN_374, void * __RN_375, unsigned long __RN_376);
extern void acc_memcpy_to_device_async(void * __RN_377, void * __RN_378, unsigned long __RN_379, long __RN_380);
extern void acc_memcpy_from_device(void * __RN_381, void * __RN_382, unsigned long __RN_383);
extern void acc_memcpy_from_device_async(void * __RN_384, void * __RN_385, unsigned long __RN_386, long __RN_387);
extern void * acc_memcpy_device(void * __RN_388, void * __RN_389, unsigned long __RN_390);
extern void * acc_memcpy_device_async(void * __RN_391, void * __RN_392, unsigned long __RN_393, long __RN_394);
extern void acc_attach(void * * __RN_395);
extern void acc_attach_async(void * * __RN_396, long __RN_397);
extern void acc_detach(void * * __RN_398);
extern void acc_detach_async(void * * __RN_399, long __RN_400);
extern void acc_set_device_type(enum anon_type_20_acc_device_t __RN_401);
extern enum anon_type_20_acc_device_t acc_get_device_type(void);
extern void * __macc_malloc(unsigned long __RN_403);
extern void * acc_deviceptr(void * __RN_404);
extern void * acc_hostptr(void * __RN_405);
extern void acc_map_data(void * __RN_406, void * __RN_407, unsigned long __RN_408);
extern void acc_unmap_data(void * __RN_409);
extern int acc_is_present(void * __RN_410, unsigned long __RN_411);
extern int acc_present_count(void * __RN_412);
extern void acc_updatein(void * __RN_413, unsigned long __RN_414);
extern void acc_updatein_async(void * __RN_415, unsigned long __RN_416, long __RN_417);
extern void acc_updateout(void * __RN_418, unsigned long __RN_419);
extern void acc_updateout_async(void * __RN_420, unsigned long __RN_421, long __RN_422);
extern void * acc_get_current_cuda_context(void);
extern int acc_get_current_cuda_device(void);
extern void * acc_get_cuda_stream(long __RN_425);
extern void acc_set_cuda_stream(long __RN_426, void * __RN_427);
extern void * acc_cuda_get_context(int __RN_428);
extern int acc_cuda_get_device(int __RN_429);
extern void * acc_get_current_opencl_context(void);
extern void * acc_get_current_opencl_device(void);
extern void * acc_get_opencl_queue(long __RN_432);
extern int atomicaddi(void * __RN_433, int __RN_434);
extern unsigned int atomicaddu(void * __RN_435, unsigned int __RN_436);
extern unsigned long long atomicaddul(void * __RN_437, unsigned long long __RN_438);
extern float atomicaddf(void * __RN_439, float __RN_440);
extern double atomicaddd(void * __RN_441, double __RN_442);
extern int atomicsubi(void * __RN_443, int __RN_444);
extern unsigned int atomicsubu(void * __RN_445, unsigned int __RN_446);
extern unsigned long long atomicsubul(void * __RN_447, unsigned long long __RN_448);
extern float atomicsubf(void * __RN_449, float __RN_450);
extern double atomicsubd(void * __RN_451, double __RN_452);
extern int atomicmaxi(void * __RN_453, int __RN_454);
extern unsigned int atomicmaxu(void * __RN_455, unsigned int __RN_456);
extern unsigned long long atomicmaxul(void * __RN_457, unsigned long long __RN_458);
extern float atomicmaxf(void * __RN_459, float __RN_460);
extern double atomicmaxd(void * __RN_461, double __RN_462);
extern int atomicmini(void * __RN_463, int __RN_464);
extern unsigned int atomicminu(void * __RN_465, unsigned int __RN_466);
extern unsigned long long atomicminul(void * __RN_467, unsigned long long __RN_468);
extern float atomicminf(void * __RN_469, float __RN_470);
extern double atomicmind(void * __RN_471, double __RN_472);
extern int atomicandi(void * __RN_473, int __RN_474);
extern unsigned int atomicandu(void * __RN_475, unsigned int __RN_476);
extern unsigned long long atomicandul(void * __RN_477, unsigned long long __RN_478);
extern int atomicori(void * __RN_479, int __RN_480);
extern unsigned int atomicoru(void * __RN_481, unsigned int __RN_482);
extern unsigned long long atomicorul(void * __RN_483, unsigned long long __RN_484);
extern int atomicxori(void * __RN_485, int __RN_486);
extern unsigned int atomicxoru(void * __RN_487, unsigned int __RN_488);
extern unsigned long long atomicxorul(void * __RN_489, unsigned long long __RN_490);
extern int atomicexchi(void * __RN_491, int __RN_492);
extern unsigned int atomicexchu(void * __RN_493, unsigned int __RN_494);
extern unsigned long long atomicexchul(void * __RN_495, unsigned long long __RN_496);
extern float atomicexchf(void * __RN_497, float __RN_498);
extern double atomicexchd(void * __RN_499, double __RN_500);
extern unsigned int atomicincu(void * __RN_501, unsigned int __RN_502);
extern unsigned int atomicdecu(void * __RN_503, unsigned int __RN_504);
extern int atomiccasi(void * __RN_505, int __RN_506, int __RN_507);
extern unsigned int atomiccasu(void * __RN_508, unsigned int __RN_509, unsigned int __RN_510);
extern unsigned long long atomiccasul(void * __RN_511, unsigned long long __RN_512, unsigned long long __RN_513);
extern float atomiccasf(void * __RN_514, float __RN_515, float __RN_516);
extern double atomiccasd(void * __RN_517, double __RN_518, double __RN_519);
extern int __pgi_gangidx(void);
extern int __pgi_workeridx(void);
extern int __pgi_vectoridx(void);
extern int __pgi_blockidx(int __RN_523);
extern int __pgi_threadidx(int __RN_524);
extern void * __builtin_va_arg();
extern int __builtin_va_start();
# 315 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 316 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 317 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_;
extern int __underflow(struct _IO_FILE * __RN_535);
extern int __uflow(struct _IO_FILE * __RN_536);
extern int __overflow(struct _IO_FILE * __RN_537, int __RN_538);
extern int _IO_getc(struct _IO_FILE * __RN_539);
extern int _IO_putc(int __RN_540, struct _IO_FILE * __RN_541);
extern int _IO_feof(struct _IO_FILE * __RN_542);
extern int _IO_ferror(struct _IO_FILE * __RN_543);
extern int _IO_peekc_locked(struct _IO_FILE * __RN_544);
extern void _IO_flockfile(struct _IO_FILE * __RN_545);
extern void _IO_funlockfile(struct _IO_FILE * __RN_546);
extern int _IO_ftrylockfile(struct _IO_FILE * __RN_547);
extern int _IO_vfscanf(struct _IO_FILE * restrict __RN_548, char const * restrict __RN_549, struct __pgi_tag __RN_550[1], int * restrict __RN_551);
extern int _IO_vfprintf(struct _IO_FILE * restrict __RN_552, char const * restrict __RN_553, struct __pgi_tag __RN_554[1]);
extern long _IO_padn(struct _IO_FILE * __RN_555, int __RN_556, long __RN_557);
extern unsigned long _IO_sgetn(struct _IO_FILE * __RN_558, void * __RN_559, unsigned long __RN_560);
extern long _IO_seekoff(struct _IO_FILE * __RN_561, long __RN_562, int __RN_563, int __RN_564);
extern long _IO_seekpos(struct _IO_FILE * __RN_565, long __RN_566, int __RN_567);
extern void _IO_free_backup_area(struct _IO_FILE * __RN_568);
# 168 "/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
# 169 "/usr/include/stdio.h"
extern struct _IO_FILE * stdout;
# 170 "/usr/include/stdio.h"
extern struct _IO_FILE * stderr;
extern int remove(char const * __RN_569);
extern int rename(char const * __RN_570, char const * __RN_571);
extern int renameat(int __RN_572, char const * __RN_573, int __RN_574, char const * __RN_575);
extern struct _IO_FILE * tmpfile(void);
extern char * tmpnam(char * __RN_577);
extern char * tmpnam_r(char * __RN_578);
extern char * tempnam(char const * __RN_579, char const * __RN_580);
extern int fclose(struct _IO_FILE * __RN_581);
extern int fflush(struct _IO_FILE * __RN_582);
extern int fflush_unlocked(struct _IO_FILE * __RN_583);
extern struct _IO_FILE * fopen(char const * restrict __RN_584, char const * restrict __RN_585);
extern struct _IO_FILE * freopen(char const * restrict __RN_586, char const * restrict __RN_587, struct _IO_FILE * restrict __RN_588);
extern struct _IO_FILE * fdopen(int __RN_589, char const * __RN_590);
extern struct _IO_FILE * fmemopen(void * __RN_591, unsigned long __RN_592, char const * __RN_593);
extern struct _IO_FILE * open_memstream(char * * __RN_594, unsigned long * __RN_595);
extern void setbuf(struct _IO_FILE * restrict __RN_596, char * restrict __RN_597);
extern int setvbuf(struct _IO_FILE * restrict __RN_598, char * restrict __RN_599, int __RN_600, unsigned long __RN_601);
extern void setbuffer(struct _IO_FILE * restrict __RN_602, char * restrict __RN_603, unsigned long __RN_604);
extern void setlinebuf(struct _IO_FILE * __RN_605);
extern int fprintf(struct _IO_FILE * restrict __RN_606, char const * restrict __RN_607, ...);
extern int printf(char const * restrict __RN_608, ...);
extern int sprintf(char * restrict __RN_609, char const * restrict __RN_610, ...);
extern int vfprintf(struct _IO_FILE * restrict __RN_611, char const * restrict __RN_612, struct __pgi_tag __RN_613[1]);
extern int vprintf(char const * restrict __RN_614, struct __pgi_tag __RN_615[1]);
extern int vsprintf(char * restrict __RN_616, char const * restrict __RN_617, struct __pgi_tag __RN_618[1]);
extern __attribute__((format(__printf__, 3, 4))) int snprintf(char * restrict __RN_619, unsigned long __RN_620, char const * restrict __RN_621, ...);
extern __attribute__((format(__printf__, 3, 0))) int vsnprintf(char * restrict __RN_622, unsigned long __RN_623, char const * restrict __RN_624, struct __pgi_tag __RN_625[1]);
extern __attribute__((format(__printf__, 2, 0))) int vdprintf(int __RN_626, char const * restrict __RN_627, struct __pgi_tag __RN_628[1]);
extern __attribute__((format(__printf__, 2, 3))) int dprintf(int __RN_629, char const * restrict __RN_630, ...);
extern int fscanf(struct _IO_FILE * restrict __RN_631, char const * restrict __RN_632, ...);
extern int scanf(char const * restrict __RN_633, ...);
extern int sscanf(char const * restrict __RN_634, char const * restrict __RN_635, ...);
extern int __isoc99_fscanf(struct _IO_FILE * restrict __RN_636, char const * restrict __RN_637, ...);
extern int __isoc99_scanf(char const * restrict __RN_638, ...);
extern int __isoc99_sscanf(char const * restrict __RN_639, char const * restrict __RN_640, ...);
extern __attribute__((format(__scanf__, 2, 0))) int vfscanf(struct _IO_FILE * restrict __RN_641, char const * restrict __RN_642, struct __pgi_tag __RN_643[1]);
extern __attribute__((format(__scanf__, 1, 0))) int vscanf(char const * restrict __RN_644, struct __pgi_tag __RN_645[1]);
extern __attribute__((format(__scanf__, 2, 0))) int vsscanf(char const * restrict __RN_646, char const * restrict __RN_647, struct __pgi_tag __RN_648[1]);
extern int __isoc99_vfscanf(struct _IO_FILE * restrict __RN_649, char const * restrict __RN_650, struct __pgi_tag __RN_651[1]);
extern int __isoc99_vscanf(char const * restrict __RN_652, struct __pgi_tag __RN_653[1]);
extern int __isoc99_vsscanf(char const * restrict __RN_654, char const * restrict __RN_655, struct __pgi_tag __RN_656[1]);
extern int fgetc(struct _IO_FILE * __RN_657);
extern int getc(struct _IO_FILE * __RN_658);
extern int getchar(void);
extern int getc_unlocked(struct _IO_FILE * __RN_660);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(struct _IO_FILE * __RN_662);
extern int fputc(int __RN_663, struct _IO_FILE * __RN_664);
extern int putc(int __RN_665, struct _IO_FILE * __RN_666);
extern int putchar(int __RN_667);
extern int fputc_unlocked(int __RN_668, struct _IO_FILE * __RN_669);
extern int putc_unlocked(int __RN_670, struct _IO_FILE * __RN_671);
extern int putchar_unlocked(int __RN_672);
extern int getw(struct _IO_FILE * __RN_673);
extern int putw(int __RN_674, struct _IO_FILE * __RN_675);
extern char * fgets(char * restrict __RN_676, int __RN_677, struct _IO_FILE * restrict __RN_678);
extern char * gets(char * __RN_679);
extern long __getdelim(char * * restrict __RN_680, unsigned long * restrict __RN_681, int __RN_682, struct _IO_FILE * restrict __RN_683);
extern long getdelim(char * * restrict __RN_684, unsigned long * restrict __RN_685, int __RN_686, struct _IO_FILE * restrict __RN_687);
extern long getline(char * * restrict __RN_688, unsigned long * restrict __RN_689, struct _IO_FILE * restrict __RN_690);
extern int fputs(char const * restrict __RN_691, struct _IO_FILE * restrict __RN_692);
extern int puts(char const * __RN_693);
extern int ungetc(int __RN_694, struct _IO_FILE * __RN_695);
extern unsigned long fread(void * restrict __RN_696, unsigned long __RN_697, unsigned long __RN_698, struct _IO_FILE * restrict __RN_699);
extern unsigned long fwrite(void const * restrict __RN_700, unsigned long __RN_701, unsigned long __RN_702, struct _IO_FILE * restrict __RN_703);
extern unsigned long fread_unlocked(void * restrict __RN_704, unsigned long __RN_705, unsigned long __RN_706, struct _IO_FILE * restrict __RN_707);
extern unsigned long fwrite_unlocked(void const * restrict __RN_708, unsigned long __RN_709, unsigned long __RN_710, struct _IO_FILE * restrict __RN_711);
extern int fseek(struct _IO_FILE * __RN_712, long __RN_713, int __RN_714);
extern long ftell(struct _IO_FILE * __RN_715);
extern void rewind(struct _IO_FILE * __RN_716);
extern int fseeko(struct _IO_FILE * __RN_717, long __RN_718, int __RN_719);
extern long ftello(struct _IO_FILE * __RN_720);
extern int fgetpos(struct _IO_FILE * restrict __RN_721, struct anon_type_23__G_fpos_t * restrict __RN_722);
extern int fsetpos(struct _IO_FILE * __RN_723, struct anon_type_23__G_fpos_t const * __RN_724);
extern void clearerr(struct _IO_FILE * __RN_725);
extern int feof(struct _IO_FILE * __RN_726);
extern int ferror(struct _IO_FILE * __RN_727);
extern void clearerr_unlocked(struct _IO_FILE * __RN_728);
extern int feof_unlocked(struct _IO_FILE * __RN_729);
extern int ferror_unlocked(struct _IO_FILE * __RN_730);
extern void perror(char const * __RN_731);
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern int sys_nerr;
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern char const * const sys_errlist[];
extern int fileno(struct _IO_FILE * __RN_732);
extern int fileno_unlocked(struct _IO_FILE * __RN_733);
extern struct _IO_FILE * popen(char const * __RN_734, char const * __RN_735);
extern int pclose(struct _IO_FILE * __RN_736);
extern char * ctermid(char * __RN_737);
extern void flockfile(struct _IO_FILE * __RN_738);
extern int ftrylockfile(struct _IO_FILE * __RN_739);
extern void funlockfile(struct _IO_FILE * __RN_740);
extern void * malloc_managed(unsigned long __RN_259);
extern void * calloc_managed(unsigned long __RN_260, unsigned long __RN_261);
extern void free_managed(void * __RN_262);
extern void cfree_managed(void * __RN_263);
extern void * realloc_managed(void * __RN_264, unsigned long __RN_265);
extern void * valloc_managed(unsigned long __RN_266);
extern void * pvalloc_managed(unsigned long __RN_267);
extern void * memalign_managed(unsigned long __RN_268, unsigned long __RN_269);
extern int posix_memalign_managed(void * * __RN_270, unsigned long __RN_271, unsigned long __RN_272);
extern char * tmpnam_managed(char * __RN_273);
extern void * memcpy(void * restrict __RN_756, void const * restrict __RN_757, unsigned long __RN_758);
extern void * memmove(void * __RN_759, void const * __RN_760, unsigned long __RN_761);
extern void * memccpy(void * restrict __RN_762, void const * restrict __RN_763, int __RN_764, unsigned long __RN_765);
extern void * memset(void * __RN_766, int __RN_767, unsigned long __RN_768);
extern int memcmp(void const * __RN_769, void const * __RN_770, unsigned long __RN_771);
extern void * memchr(void const * __RN_772, int __RN_773, unsigned long __RN_774);
extern char * strcpy(char * restrict __RN_775, char const * restrict __RN_776);
extern char * strncpy(char * restrict __RN_777, char const * restrict __RN_778, unsigned long __RN_779);
extern char * strcat(char * restrict __RN_780, char const * restrict __RN_781);
extern char * strncat(char * restrict __RN_782, char const * restrict __RN_783, unsigned long __RN_784);
extern int strcmp(char const * __RN_785, char const * __RN_786);
extern int strncmp(char const * __RN_787, char const * __RN_788, unsigned long __RN_789);
extern int strcoll(char const * __RN_790, char const * __RN_791);
extern unsigned long strxfrm(char * restrict __RN_792, char const * restrict __RN_793, unsigned long __RN_794);
extern int strcoll_l(char const * __RN_795, char const * __RN_796, struct __locale_struct * __RN_797);
extern unsigned long strxfrm_l(char * __RN_798, char const * __RN_799, unsigned long __RN_800, struct __locale_struct * __RN_801);
extern char * strdup(char const * __RN_802);
extern char * strndup(char const * __RN_803, unsigned long __RN_804);
extern char * strchr(char const * __RN_805, int __RN_806);
extern char * strrchr(char const * __RN_807, int __RN_808);
extern unsigned long strcspn(char const * __RN_809, char const * __RN_810);
extern unsigned long strspn(char const * __RN_811, char const * __RN_812);
extern char * strpbrk(char const * __RN_813, char const * __RN_814);
extern char * strstr(char const * __RN_815, char const * __RN_816);
extern char * strtok(char * restrict __RN_817, char const * restrict __RN_818);
extern char * __strtok_r(char * restrict __RN_819, char const * restrict __RN_820, char * * restrict __RN_821);
extern char * strtok_r(char * restrict __RN_822, char const * restrict __RN_823, char * * restrict __RN_824);
extern unsigned long strlen(char const * __RN_825);
extern unsigned long strnlen(char const * __RN_826, unsigned long __RN_827);
extern char * strerror(int __RN_828);
extern int __xpg_strerror_r(int __RN_829, char * __RN_830, unsigned long __RN_831);
extern char * strerror_l(int __RN_832, struct __locale_struct * __RN_833);
extern void __bzero(void * __RN_834, unsigned long __RN_835);
extern void bcopy(void const * __RN_836, void * __RN_837, unsigned long __RN_838);
extern void bzero(void * __RN_839, unsigned long __RN_840);
extern int bcmp(void const * __RN_841, void const * __RN_842, unsigned long __RN_843);
extern char * index(char const * __RN_844, int __RN_845);
extern char * rindex(char const * __RN_846, int __RN_847);
extern __attribute__((const)) int ffs(int __RN_848);
extern int strcasecmp(char const * __RN_849, char const * __RN_850);
extern int strncasecmp(char const * __RN_851, char const * __RN_852, unsigned long __RN_853);
extern char * strsep(char * * restrict __RN_854, char const * restrict __RN_855);
extern char * strsignal(int __RN_856);
extern char * __stpcpy(char * restrict __RN_857, char const * restrict __RN_858);
extern char * stpcpy(char * restrict __RN_859, char const * restrict __RN_860);
extern char * __stpncpy(char * restrict __RN_861, char const * restrict __RN_862, unsigned long __RN_863);
extern char * stpncpy(char * restrict __RN_864, char const * restrict __RN_865, unsigned long __RN_866);
# 27 "main.c"
int __MACC_NUMGPUS = -(1);
# 29 "main.c"
int __macc_get_num_gpus()
{
# 31 "main.c"
return acc_get_num_devices(acc_device_nvidia);
}
# 34 "main.c"
void __macc_set_gpu_num(int i__RN_1885)
{
# 36 "main.c"
acc_set_device_num(i__RN_1885, acc_device_nvidia);
}
# 59 "main.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET;
# 72 "main.c"
struct __MaccDataWrapCache * __MACC_DATA_WRAP_CACHE_SET;
# 74 "main.c"
void __macc_data_table_insert(int gpu_num__RN_1886, void * ptr__RN_1887, int type_size__RN_1888, int entire_lb__RN_1889, int entire_ub__RN_1890)
{
# 77 "main.c"
int index__RN_2073 = (((long)(ptr__RN_1887)) / (16)) % (256);
# 79 "main.c"
struct __MaccDataTableEntry * new_entry__RN_2074 = malloc_managed(sizeof(struct __MaccDataTableEntry));
# 81 "main.c"
(new_entry__RN_2074->addr) = ptr__RN_1887;
# 82 "main.c"
(new_entry__RN_2074->addr_ub) = (ptr__RN_1887 + (entire_ub__RN_1890 * type_size__RN_1888));
# 83 "main.c"
(new_entry__RN_2074->type_size) = type_size__RN_1888;
# 84 "main.c"
(new_entry__RN_2074->entire_lb) = entire_lb__RN_1889;
# 85 "main.c"
(new_entry__RN_2074->entire_ub) = entire_ub__RN_1890;
# 86 "main.c"
(new_entry__RN_2074->dirty) = (0);
# 87 "main.c"
(new_entry__RN_2074->dirty_lb) = (-(1));
# 88 "main.c"
(new_entry__RN_2074->dirty_ub) = (-(1));
# 89 "main.c"
(new_entry__RN_2074->next) = (*(((__MACC_DATA_TABLE_SET + gpu_num__RN_1886)->entries) + index__RN_2073));
# 91 "main.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num__RN_1886)->entries) + index__RN_2073)) = new_entry__RN_2074;
}
# 94 "main.c"
struct __MaccDataTableEntry * __macc_data_table_find(int gpu_num__RN_1891, void * ptr__RN_1892)
{
# 96 "main.c"
int index__RN_2075 = (((long)(ptr__RN_1892)) / (16)) % (256);
# 97 "main.c"
struct __MaccDataTableEntry * entry__RN_2076 = *(((__MACC_DATA_TABLE_SET + gpu_num__RN_1891)->entries) + index__RN_2075);
# 99 "main.c"
while(entry__RN_2076 != ((void * )(0))) {
{
{
# 100 "main.c"
if((entry__RN_2076->addr) == ptr__RN_1892) {
# 101 "main.c"
(entry__RN_2076->offset) = (0);
# 102 "main.c"
return entry__RN_2076;
}
# 105 "main.c"
entry__RN_2076 = (entry__RN_2076->next);
}
}
}
{
# 108 "main.c"
struct __MaccDataWrapCache wrap_cache__RN_2186 = __MACC_DATA_WRAP_CACHE_SET[gpu_num__RN_1891];
# 109 "main.c"
int lane__RN_2187 = (((long)(ptr__RN_1892)) / (16)) % (16);
{
# 111 "main.c"
int i__RN_2200;
# 111 "main.c"
for(i__RN_2200 = (0); i__RN_2200 < (*(((&(wrap_cache__RN_2186))->cachenum) + lane__RN_2187)); i__RN_2200++) {
{
{
# 112 "main.c"
if(ptr__RN_1892 == (*(((&(wrap_cache__RN_2186))->addr) + ((lane__RN_2187 * (16)) + i__RN_2200)))) {
# 113 "main.c"
entry__RN_2076 = (*(((&(wrap_cache__RN_2186))->entry) + ((lane__RN_2187 * (16)) + i__RN_2200)));
# 114 "main.c"
(entry__RN_2076->offset) = (*(((&(wrap_cache__RN_2186))->offset) + ((lane__RN_2187 * (16)) + i__RN_2200)));
# 115 "main.c"
return entry__RN_2076;
}
}
}
}
}
{
# 119 "main.c"
int i__RN_2201;
# 119 "main.c"
for(i__RN_2201 = (0); i__RN_2201 < (256); i__RN_2201++) {
{
{
# 120 "main.c"
entry__RN_2076 = (*(((__MACC_DATA_TABLE_SET + gpu_num__RN_1891)->entries) + i__RN_2201));
# 122 "main.c"
while(entry__RN_2076 != ((void * )(0))) {
{
{
# 123 "main.c"
if(((entry__RN_2076->addr) <= ptr__RN_1892) && (ptr__RN_1892 <= (entry__RN_2076->addr_ub))) {
# 124 "main.c"
int offset__RN_2225 = (ptr__RN_1892 - (entry__RN_2076->addr)) / (entry__RN_2076->type_size);
# 126 "main.c"
int cachenum__RN_2226 = *(((&(wrap_cache__RN_2186))->cachenum) + lane__RN_2187);
# 128 "main.c"
if(cachenum__RN_2226 == (16)) {
# 129 "main.c"
cachenum__RN_2226 = (0);
}
# 132 "main.c"
(*(((&(wrap_cache__RN_2186))->addr) + ((lane__RN_2187 * (16)) + cachenum__RN_2226))) = (entry__RN_2076->addr);
# 133 "main.c"
(*(((&(wrap_cache__RN_2186))->entry) + ((lane__RN_2187 * (16)) + cachenum__RN_2226))) = entry__RN_2076;
# 134 "main.c"
(*(((&(wrap_cache__RN_2186))->offset) + ((lane__RN_2187 * (16)) + cachenum__RN_2226))) = offset__RN_2225;
# 136 "main.c"
(*(((&(wrap_cache__RN_2186))->cachenum) + lane__RN_2187)) = (cachenum__RN_2226 + (1));
# 138 "main.c"
(entry__RN_2076->offset) = offset__RN_2225;
# 139 "main.c"
return entry__RN_2076;
}
# 142 "main.c"
entry__RN_2076 = (entry__RN_2076->next);
}
}
}
}
}
}
}
# 146 "main.c"
fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", ptr__RN_1892);
# 147 "main.c"
exit(-(1));
# 149 "main.c"
return (void * )(0);
}
}
# 152 "main.c"
void __macc_data_table_delete(int gpu_num__RN_1893, void * ptr__RN_1894)
{
# 154 "main.c"
int index__RN_2077 = (((long)(ptr__RN_1894)) / (16)) % (256);
# 155 "main.c"
struct __MaccDataTableEntry * entry__RN_2078 = *(((__MACC_DATA_TABLE_SET + gpu_num__RN_1893)->entries) + index__RN_2077);
# 156 "main.c"
struct __MaccDataTableEntry * pre__RN_2079 = (void * )(0);
# 158 "main.c"
memset((__MACC_DATA_WRAP_CACHE_SET + gpu_num__RN_1893)->cachenum, 0, (16) * (sizeof(int)));
# 160 "main.c"
if(entry__RN_2078 != ((void * )(0))) {
# 161 "main.c"
if((entry__RN_2078->addr) == ptr__RN_1894) {
# 162 "main.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num__RN_1893)->entries) + index__RN_2077)) = (entry__RN_2078->next);
# 163 "main.c"
free_managed(entry__RN_2078);
# 164 "main.c"
return ;
}
# 167 "main.c"
pre__RN_2079 = entry__RN_2078;
# 168 "main.c"
entry__RN_2078 = (entry__RN_2078->next);
}
# 171 "main.c"
while((pre__RN_2079 != ((void * )(0))) && (entry__RN_2078 != ((void * )(0)))) {
{
{
# 172 "main.c"
if((entry__RN_2078->addr) == ptr__RN_1894) {
# 173 "main.c"
(pre__RN_2079->next) = (entry__RN_2078->next);
# 174 "main.c"
free_managed(entry__RN_2078);
# 175 "main.c"
return ;
}
# 178 "main.c"
pre__RN_2079 = entry__RN_2078;
# 179 "main.c"
entry__RN_2078 = (entry__RN_2078->next);
}
}
}
# 182 "main.c"
fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", ptr__RN_1894);
# 183 "main.c"
exit(-(1));
}
# 186 "main.c"
void __macc_delete(int gpu_num__RN_1895, void * ptr__RN_1896, int type_size__RN_1897, int lb__RN_1898, int length__RN_1899)
{
# 188 "main.c"
acc_delete_async(ptr__RN_1896 + (lb__RN_1898 * type_size__RN_1897), length__RN_1899 * type_size__RN_1897, gpu_num__RN_1895);
# 189 "main.c"
__macc_data_table_delete(gpu_num__RN_1895, ptr__RN_1896);
# 190 "main.c"
acc_wait(gpu_num__RN_1895);
}
# 193 "main.c"
void __macc_copyout(int gpu_num__RN_1900, void * ptr__RN_1901, int type_size__RN_1902, int lb__RN_1903, int length__RN_1904)
{
# 195 "main.c"
struct __MaccDataTableEntry * entry__RN_2080 = __macc_data_table_find(gpu_num__RN_1900, ptr__RN_1901);
# 197 "main.c"
if(entry__RN_2080->dirty) {
# 198 "main.c"
acc_update_self_async((entry__RN_2080->addr) + ((entry__RN_2080->dirty_lb) * (entry__RN_2080->type_size)), (((entry__RN_2080->dirty_ub) - (entry__RN_2080->dirty_lb)) + (1)) * (entry__RN_2080->type_size), gpu_num__RN_1900);
}
# 202 "main.c"
__macc_delete(gpu_num__RN_1900, ptr__RN_1901, type_size__RN_1902, lb__RN_1903, length__RN_1904);
}
# 205 "main.c"
void __macc_copyin(int gpu_num__RN_1905, void * ptr__RN_1906, int type_size__RN_1907, int lb__RN_1908, int length__RN_1909)
{
# 207 "main.c"
acc_copyin_async(ptr__RN_1906 + (lb__RN_1908 * type_size__RN_1907), length__RN_1909 * type_size__RN_1907, gpu_num__RN_1905);
# 208 "main.c"
__macc_data_table_insert(gpu_num__RN_1905, ptr__RN_1906, type_size__RN_1907, lb__RN_1908, (lb__RN_1908 + length__RN_1909) - (1));
# 209 "main.c"
acc_wait(gpu_num__RN_1905);
}
# 212 "main.c"
void __macc_create(int gpu_num__RN_1910, void * ptr__RN_1911, int type_size__RN_1912, int lb__RN_1913, int length__RN_1914)
{
# 214 "main.c"
acc_create_async(ptr__RN_1911 + (lb__RN_1913 * type_size__RN_1912), length__RN_1914 * type_size__RN_1912, gpu_num__RN_1910);
# 215 "main.c"
__macc_data_table_insert(gpu_num__RN_1910, ptr__RN_1911, type_size__RN_1912, lb__RN_1913, (lb__RN_1913 + length__RN_1914) - (1));
# 216 "main.c"
acc_wait(gpu_num__RN_1910);
}
# 219 "main.c"
void * __macc_malloc(unsigned long size__RN_1915)
{
# 221 "main.c"
void * ret__RN_2081 = malloc_managed(size__RN_1915);
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 225 "main.c"
__macc_create(omp_get_thread_num(), ret__RN_2081, 1, 0, size__RN_1915);
}
# 228 "main.c"
return ret__RN_2081;
}
# 231 "main.c"
void __macc_free(void * ptr__RN_1916)
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 235 "main.c"
int gpu_num__RN_2198 = omp_get_thread_num();
# 236 "main.c"
struct __MaccDataTableEntry * entry__RN_2199 = __macc_data_table_find(gpu_num__RN_2198, ptr__RN_1916);
# 238 "main.c"
__macc_delete(gpu_num__RN_2198, ptr__RN_1916, 1, 0, (entry__RN_2199->entire_ub) + (1));
}
# 240 "main.c"
free_managed(ptr__RN_1916);
}
# 243 "main.c"
void __macc_update_self(int gpu_num__RN_1917, void * ptr__RN_1918, int type_size__RN_1919, int lb__RN_1920, int length__RN_1921)
{
# 245 "main.c"
struct __MaccDataTableEntry * entry__RN_2082 = __macc_data_table_find(gpu_num__RN_1917, ptr__RN_1918);
# 246 "main.c"
ptr__RN_1918 = (entry__RN_2082->addr);
# 247 "main.c"
lb__RN_1920 += (entry__RN_2082->offset);
{
# 248 "main.c"
int ub__RN_2188 = (lb__RN_1920 + length__RN_1921) - (1);
# 250 "main.c"
if((entry__RN_2082->dirty) && (!(((entry__RN_2082->dirty_lb) > ub__RN_2188) || ((entry__RN_2082->dirty_ub) < lb__RN_1920)))) {
# 251 "main.c"
int new_lb__RN_2207 = ((entry__RN_2082->dirty_lb) > lb__RN_1920) ?(entry__RN_2082->dirty_lb) : lb__RN_1920;
# 252 "main.c"
int new_ub__RN_2208 = ((entry__RN_2082->dirty_ub) < ub__RN_2188) ?(entry__RN_2082->dirty_ub) : ub__RN_2188;
# 253 "main.c"
acc_update_self(ptr__RN_1918 + (new_lb__RN_2207 * type_size__RN_1919), ((new_ub__RN_2208 - new_lb__RN_2207) + (1)) * type_size__RN_1919);
}
}
}
# 257 "main.c"
void __macc_update_device(int gpu_num__RN_1922, void * ptr__RN_1923, int type_size__RN_1924, int lb__RN_1925, int length__RN_1926)
{
# 259 "main.c"
acc_update_device(ptr__RN_1923 + (lb__RN_1925 * type_size__RN_1924), length__RN_1926 * type_size__RN_1924);
}
# 262 "main.c"
void __macc_init_access_region(int gpu_num__RN_1927, int * lb_set__RN_1928, int * ub_set__RN_1929)
{
# 264 "main.c"
(lb_set__RN_1928[gpu_num__RN_1927]) = (2147483647);
# 265 "main.c"
(ub_set__RN_1929[gpu_num__RN_1927]) = (-(1));
}
# 268 "main.c"
void __macc_update_access_region(int gpu_num__RN_1930, int * lb_set__RN_1931, int * ub_set__RN_1932, int val__RN_1933)
{
# 270 "main.c"
(lb_set__RN_1931[gpu_num__RN_1930]) = (((lb_set__RN_1931[gpu_num__RN_1930]) < val__RN_1933) ?(lb_set__RN_1931[gpu_num__RN_1930]) : val__RN_1933);
# 271 "main.c"
(ub_set__RN_1932[gpu_num__RN_1930]) = (((ub_set__RN_1932[gpu_num__RN_1930]) > val__RN_1933) ?(ub_set__RN_1932[gpu_num__RN_1930]) : val__RN_1933);
}
# 274 "main.c"
int __macc_region_is_overlapping(int * lb_set__RN_1934, int * ub_set__RN_1935)
{
{
# 276 "main.c"
int i__RN_2189;
# 276 "main.c"
for(i__RN_2189 = (0); i__RN_2189 < (__MACC_NUMGPUS - (1)); i__RN_2189++) {
{
{
{
# 277 "main.c"
int j__RN_2212;
# 277 "main.c"
for(j__RN_2212 = (i__RN_2189 + (1)); j__RN_2212 < __MACC_NUMGPUS; j__RN_2212++) {
{
{
# 278 "main.c"
if(!(((lb_set__RN_1934[i__RN_2189]) > (ub_set__RN_1935[j__RN_2212])) || ((ub_set__RN_1935[i__RN_2189]) < (lb_set__RN_1934[j__RN_2212])))) {
# 279 "main.c"
return 1;
}
}
}
}
}
}
}
}
}
# 281 "main.c"
return 0;
}
# 285 "main.c"
void __macc_calc_loop_region(int * loop_lb_set__RN_1936, int * loop_ub_set__RN_1937, int entire_start__RN_1938, int entire_end__RN_1939, int step__RN_1940, int until_equal__RN_1941)
{
# 289 "main.c"
int tmp__RN_2083 = entire_start__RN_1938 + (step__RN_1940 * ((entire_end__RN_1939 - entire_start__RN_1938) / step__RN_1940));
# 290 "main.c"
entire_end__RN_1939 = (tmp__RN_2083 - ((until_equal__RN_1941 || (entire_end__RN_1939 != tmp__RN_2083)) ?(0) : step__RN_1940));
{
# 292 "main.c"
int len__RN_2190 = (entire_end__RN_1939 - entire_start__RN_1938) + step__RN_1940;
# 293 "main.c"
int width__RN_2191 = (int)(((float)(len__RN_2190)) / __MACC_NUMGPUS);
# 294 "main.c"
width__RN_2191 -= (width__RN_2191 % step__RN_1940);
{
# 295 "main.c"
int rem__RN_2202 = (len__RN_2190 - (width__RN_2191 * __MACC_NUMGPUS)) / step__RN_1940;
# 296 "main.c"
width__RN_2191 -= step__RN_1940;
{
# 298 "main.c"
int pos__RN_2209 = entire_start__RN_1938;
{
# 300 "main.c"
int i__RN_2213;
# 300 "main.c"
for(i__RN_2213 = (0); i__RN_2213 < __MACC_NUMGPUS; i__RN_2213++) {
{
{
# 301 "main.c"
(loop_lb_set__RN_1936[i__RN_2213]) = pos__RN_2209;
# 302 "main.c"
pos__RN_2209 = ((width__RN_2191 < (0)) ? pos__RN_2209 : ((((pos__RN_2209 + width__RN_2191) + ((i__RN_2213 < rem__RN_2202) ? step__RN_1940 : (0))) < entire_end__RN_1939) ?((pos__RN_2209 + width__RN_2191) + ((i__RN_2213 < rem__RN_2202) ? step__RN_1940 : (0))) : entire_end__RN_1939));
# 303 "main.c"
(loop_ub_set__RN_1937[i__RN_2213]) = pos__RN_2209;
# 304 "main.c"
pos__RN_2209 = (((pos__RN_2209 + step__RN_1940) < entire_end__RN_1939) ?(pos__RN_2209 + step__RN_1940) : entire_end__RN_1939);
}
}
}
}
}
}
}
}
# 308 "main.c"
void __macc_adjust_data_region(void * ptr__RN_1942, int gpu_num__RN_1943, int * lb_set__RN_1944, int * ub_set__RN_1945)
{
# 310 "main.c"
struct __MaccDataTableEntry * entry__RN_2084 = __macc_data_table_find(gpu_num__RN_1943, ptr__RN_1942);
# 312 "main.c"
(lb_set__RN_1944[gpu_num__RN_1943]) += (entry__RN_2084->offset);
# 313 "main.c"
(ub_set__RN_1945[gpu_num__RN_1943]) += (entry__RN_2084->offset);
}
# 316 "main.c"
void __macc_rewrite_loop_region_into_single(int * loop_lb_set__RN_1946, int * loop_ub_set__RN_1947)
{
# 318 "main.c"
(loop_ub_set__RN_1947[(0)]) = (loop_ub_set__RN_1947[(__MACC_NUMGPUS - (1))]);
{
# 320 "main.c"
int i__RN_2192;
# 320 "main.c"
for(i__RN_2192 = (1); i__RN_2192 < __MACC_NUMGPUS; i__RN_2192++) {
{
{
# 321 "main.c"
(loop_lb_set__RN_1946[i__RN_2192]) = (1);
# 322 "main.c"
(loop_ub_set__RN_1947[i__RN_2192]) = (0);
}
}
}
}
}
# 326 "main.c"
void __macc_rewrite_data_region_into_single(int * lb_set__RN_1948, int * ub_set__RN_1949)
{
# 328 "main.c"
int gpu_ub__RN_2085 = __MACC_NUMGPUS - (1);
# 329 "main.c"
(lb_set__RN_1948[(0)]) = (((lb_set__RN_1948[(0)]) < (lb_set__RN_1948[gpu_ub__RN_2085])) ?(lb_set__RN_1948[(0)]) : (lb_set__RN_1948[gpu_ub__RN_2085]));
# 330 "main.c"
(ub_set__RN_1949[(0)]) = (((ub_set__RN_1949[(0)]) > (ub_set__RN_1949[gpu_ub__RN_2085])) ?(ub_set__RN_1949[(0)]) : (ub_set__RN_1949[gpu_ub__RN_2085]));
}
# 333 "main.c"
void __macc_sync_data(int gpu_num__RN_1950, void * ptr__RN_1951, int type_size__RN_1952, int lb__RN_1953, int ub__RN_1954)
{
# 335 "main.c"
void * update_addr__RN_2086 = ptr__RN_1951 + (lb__RN_1953 * type_size__RN_1952);
# 336 "main.c"
unsigned long length_b__RN_2087 = ((ub__RN_1954 - lb__RN_1953) + (1)) * type_size__RN_1952;
# 338 "main.c"
acc_update_self(update_addr__RN_2086, length_b__RN_2087);
{
# 341 "main.c"
int i__RN_2193;
# 341 "main.c"
for(i__RN_2193 = (0); i__RN_2193 < __MACC_NUMGPUS; i__RN_2193++) {
{
{
# 344 "main.c"
if(i__RN_2193 != gpu_num__RN_1950) {
# 345 "main.c"
__macc_set_gpu_num(i__RN_2193);
# 346 "main.c"
acc_update_device(update_addr__RN_2086, length_b__RN_2087);
}
}
}
}
}
# 350 "main.c"
__macc_set_gpu_num(gpu_num__RN_1950);
}
# 354 "main.c"
void __macc_set_data_region(int gpu_num__RN_1955, void * ptr__RN_1956, int multi__RN_1957, int use_type__RN_1958, int * use_lb_set__RN_1959, int * use_ub_set__RN_1960, int def_type__RN_1961, int * def_lb_set__RN_1962, int * def_ub_set__RN_1963)
{
# 358 "main.c"
struct __MaccDataTableEntry * entry__RN_2088 = __macc_data_table_find(gpu_num__RN_1955, ptr__RN_1956);
# 359 "main.c"
ptr__RN_1956 = (entry__RN_2088->addr);
# 364 "main.c"
if(((entry__RN_2088->dirty) && (multi__RN_1957 || (gpu_num__RN_1955 != (0)))) && (__MACC_NUMGPUS > (1))) {
# 365 "main.c"
int update_all__RN_2203 = 0;
# 366 "main.c"
int update_all_DtoH__RN_2204 = 0;
# 368 "main.c"
if((use_type__RN_1958 == (0)) || (def_type__RN_1961 == (0))) {
# 369 "main.c"
update_all__RN_2203 = (1);
}
else {
# 371 "main.c"
if(def_type__RN_1961 == (2)) {
{
# 372 "main.c"
int i__RN_2221;
# 372 "main.c"
for(i__RN_2221 = (0); i__RN_2221 < __MACC_NUMGPUS; i__RN_2221++) {
{
{
# 373 "main.c"
if((i__RN_2221 != gpu_num__RN_1955) && (!(((entry__RN_2088->dirty_lb) > (def_ub_set__RN_1963[i__RN_2221])) || ((entry__RN_2088->dirty_ub) < (def_lb_set__RN_1962[i__RN_2221]))))) {
# 376 "main.c"
update_all__RN_2203 = (1);
# 377 "main.c"
break;
}
}
}
}
}
}
}
# 382 "main.c"
if(! update_all__RN_2203) {
# 383 "main.c"
int every_whole__RN_2214 = 1;
# 384 "main.c"
int unused_lb__RN_2215 = entry__RN_2088->dirty_lb;
# 385 "main.c"
int unused_ub__RN_2216 = entry__RN_2088->dirty_ub;
{
# 387 "main.c"
int i__RN_2219;
# 387 "main.c"
for(i__RN_2219 = (0); i__RN_2219 < __MACC_NUMGPUS; i__RN_2219++) {
{
{
# 388 "main.c"
if(i__RN_2219 != gpu_num__RN_1955) {
# 389 "main.c"
if(((use_lb_set__RN_1959[i__RN_2219]) <= (entry__RN_2088->dirty_lb)) && ((entry__RN_2088->dirty_ub) <= (use_ub_set__RN_1960[i__RN_2219]))) {
# 391 "main.c"
update_all_DtoH__RN_2204 = (1);
}
else {
# 394 "main.c"
every_whole__RN_2214 = (0);
# 396 "main.c"
if((use_lb_set__RN_1959[i__RN_2219]) <= unused_lb__RN_2215) {
# 397 "main.c"
unused_lb__RN_2215 = ((unused_lb__RN_2215 > ((use_ub_set__RN_1960[i__RN_2219]) + (1))) ? unused_lb__RN_2215 : ((use_ub_set__RN_1960[i__RN_2219]) + (1)));
}
else {
# 398 "main.c"
if((use_ub_set__RN_1960[i__RN_2219]) >= unused_ub__RN_2216) {
# 399 "main.c"
unused_ub__RN_2216 = ((unused_ub__RN_2216 < ((use_lb_set__RN_1959[i__RN_2219]) - (1))) ? unused_ub__RN_2216 : ((use_lb_set__RN_1959[i__RN_2219]) - (1)));
}
}
}
}
}
}
}
}
# 404 "main.c"
if(every_whole__RN_2214) {
# 405 "main.c"
update_all__RN_2203 = (1);
}
# 406 "main.c"
if(unused_ub__RN_2216 < unused_lb__RN_2215) {
# 407 "main.c"
update_all_DtoH__RN_2204 = (1);
}
}
# 411 "main.c"
if(update_all__RN_2203) {
# 412 "main.c"
__macc_sync_data(gpu_num__RN_1955, ptr__RN_1956, entry__RN_2088->type_size, entry__RN_2088->dirty_lb, entry__RN_2088->dirty_ub);
# 413 "main.c"
(entry__RN_2088->dirty) = (0);
}
else {
# 417 "main.c"
if((entry__RN_2088->dirty) && (use_type__RN_1958 == (2))) {
# 418 "main.c"
int thread_num__RN_2220 = multi__RN_1957 ? __MACC_NUMGPUS : (1);
# 420 "main.c"
if(update_all_DtoH__RN_2204) {
# 421 "main.c"
acc_update_self(ptr__RN_1956 + ((entry__RN_2088->dirty_lb) * (entry__RN_2088->type_size)), (((entry__RN_2088->dirty_ub) - (entry__RN_2088->dirty_lb)) + (1)) * (entry__RN_2088->type_size));
}
{
# 425 "main.c"
int i__RN_2222;
# 425 "main.c"
for(i__RN_2222 = (0); i__RN_2222 < thread_num__RN_2220; i__RN_2222++) {
{
{
# 429 "main.c"
if((i__RN_2222 != gpu_num__RN_1955) && (!(((entry__RN_2088->dirty_lb) > (use_ub_set__RN_1960[i__RN_2222])) || ((entry__RN_2088->dirty_ub) < (use_lb_set__RN_1959[i__RN_2222]))))) {
# 433 "main.c"
int update_lb__RN_2227 = ((entry__RN_2088->dirty_lb) > (use_lb_set__RN_1959[i__RN_2222])) ?(entry__RN_2088->dirty_lb) : (use_lb_set__RN_1959[i__RN_2222]);
# 434 "main.c"
int update_ub__RN_2228 = ((entry__RN_2088->dirty_ub) < (use_ub_set__RN_1960[i__RN_2222])) ?(entry__RN_2088->dirty_ub) : (use_ub_set__RN_1960[i__RN_2222]);
# 435 "main.c"
void * update_addr__RN_2229 = ptr__RN_1956 + (update_lb__RN_2227 * (entry__RN_2088->type_size));
# 436 "main.c"
unsigned long length_b__RN_2230 = ((update_ub__RN_2228 - update_lb__RN_2227) + (1)) * (entry__RN_2088->type_size);
# 438 "main.c"
if(! update_all_DtoH__RN_2204) {
# 439 "main.c"
__macc_set_gpu_num(gpu_num__RN_1955);
# 440 "main.c"
acc_update_self(update_addr__RN_2229, length_b__RN_2230);
}
# 442 "main.c"
__macc_set_gpu_num(i__RN_2222);
# 443 "main.c"
acc_update_device(update_addr__RN_2229, length_b__RN_2230);
}
}
}
}
}
# 447 "main.c"
__macc_set_gpu_num(gpu_num__RN_1955);
}
}
}
# 456 "main.c"
if((multi__RN_1957 || (gpu_num__RN_1955 == (0))) && (def_type__RN_1961 != (1))) {
# 457 "main.c"
if(def_type__RN_1961 == (0)) {
# 458 "main.c"
(entry__RN_2088->dirty) = (1);
# 459 "main.c"
(entry__RN_2088->dirty_lb) = (entry__RN_2088->entire_lb);
# 460 "main.c"
(entry__RN_2088->dirty_ub) = (entry__RN_2088->entire_ub);
}
else {
# 463 "main.c"
if(!(entry__RN_2088->dirty)) {
# 464 "main.c"
(entry__RN_2088->dirty) = (1);
# 465 "main.c"
(entry__RN_2088->dirty_lb) = (def_lb_set__RN_1962[gpu_num__RN_1955]);
# 466 "main.c"
(entry__RN_2088->dirty_ub) = (def_ub_set__RN_1963[gpu_num__RN_1955]);
}
else {
# 471 "main.c"
if(((!(((entry__RN_2088->dirty_lb) > (def_ub_set__RN_1963[gpu_num__RN_1955])) || ((entry__RN_2088->dirty_ub) < (def_lb_set__RN_1962[gpu_num__RN_1955])))) || ((entry__RN_2088->dirty_lb) == ((def_ub_set__RN_1963[gpu_num__RN_1955]) + (1)))) || ((def_lb_set__RN_1962[gpu_num__RN_1955]) == ((entry__RN_2088->dirty_ub) + (1)))) {
# 479 "main.c"
(entry__RN_2088->dirty_lb) = (((entry__RN_2088->dirty_lb) < (def_lb_set__RN_1962[gpu_num__RN_1955])) ?(entry__RN_2088->dirty_lb) : (def_lb_set__RN_1962[gpu_num__RN_1955]));
# 480 "main.c"
(entry__RN_2088->dirty_ub) = (((entry__RN_2088->dirty_ub) > (def_ub_set__RN_1963[gpu_num__RN_1955])) ?(entry__RN_2088->dirty_ub) : (def_ub_set__RN_1963[gpu_num__RN_1955]));
}
else {
# 484 "main.c"
__macc_sync_data(gpu_num__RN_1955, ptr__RN_1956, entry__RN_2088->type_size, entry__RN_2088->dirty_lb, entry__RN_2088->dirty_ub);
# 485 "main.c"
(entry__RN_2088->dirty_lb) = (def_lb_set__RN_1962[gpu_num__RN_1955]);
# 486 "main.c"
(entry__RN_2088->dirty_ub) = (def_ub_set__RN_1963[gpu_num__RN_1955]);
}
}
}
}
}
# 491 "main.c"
void __macc_set_data_region_multi(int gpu_num__RN_1964, int multi__RN_1965, int len__RN_1966, void * * ptrs__RN_1967, int * use_type__RN_1968, int * * use_lb_set__RN_1969, int * * use_ub_set__RN_1970, int * def_type__RN_1971, int * * def_lb_set__RN_1972, int * * def_ub_set__RN_1973)
{
{
# 497 "main.c"
int i__RN_2194;
# 497 "main.c"
for(i__RN_2194 = (0); i__RN_2194 < len__RN_1966; i__RN_2194++) {
{
{
# 500 "main.c"
int tnum__RN_2210 = i__RN_2194;
# 502 "main.c"
__macc_set_gpu_num(gpu_num__RN_1964);
# 504 "main.c"
__macc_set_data_region(gpu_num__RN_1964, ptrs__RN_1967[tnum__RN_2210], multi__RN_1965, use_type__RN_1968[tnum__RN_2210], use_lb_set__RN_1969[tnum__RN_2210], use_ub_set__RN_1970[tnum__RN_2210], def_type__RN_1971[tnum__RN_2210], def_lb_set__RN_1972[tnum__RN_2210], def_ub_set__RN_1973[tnum__RN_2210]);
}
}
}
}
}
# 511 "main.c"
void __macc_init()
{
# 513 "main.c"
char * env_macc_numgpus__RN_2089 = getenv("MACC_NUMGPUS");
# 515 "main.c"
if(env_macc_numgpus__RN_2089 != ((void * )(0))) {
# 516 "main.c"
__MACC_NUMGPUS = (atoi(env_macc_numgpus__RN_2089));
}
else {
# 519 "main.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
}
# 522 "main.c"
if(__MACC_NUMGPUS <= (0)) {
# 523 "main.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 524 "main.c"
exit(-(1));
}
# 540 "main.c"
__MACC_DATA_TABLE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
# 541 "main.c"
__MACC_DATA_WRAP_CACHE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataWrapCache)));
{
# 544 "main.c"
int t__RN_2195;
# 544 "main.c"
for(t__RN_2195 = (0); t__RN_2195 < (10); t__RN_2195++) {
{
{
# 545 "main.c"
printf("[MACC] Wake up (%d)\n", t__RN_2195);
{
# 547 "main.c"
int n__RN_2217 = ((256) * (1024)) * (1024);
# 548 "main.c"
int * tmp__RN_2218 = malloc_managed(n__RN_2217 * (sizeof(int)));
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyin(__macc_tnum, tmp__RN_2218, sizeof(int), 0, n__RN_2217);
}
}
{
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_tmp__RN_2218_def_ub_set[10];
static int __macc_tmp__RN_2218_def_lb_set[10];
static int __macc_tmp__RN_2218_use_ub_set[10];
static int __macc_tmp__RN_2218_use_lb_set[10];
static int __macc_n__RN_2217_last;
static int __macc_i__RN_2223_loop_lb_set[10];
static int __macc_i__RN_2223_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (n__RN_2217 != __macc_n__RN_2217_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n__RN_2217_last = n__RN_2217;
}
{
__macc_calc_loop_region(__macc_i__RN_2223_loop_lb_set, __macc_i__RN_2223_loop_ub_set, 1, n__RN_2217 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i__RN_2223_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i__RN_2223_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(tmp__RN_2218, __macc_gpu_num, __macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set);
__macc_adjust_data_region(tmp__RN_2218, __macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set);
}
(__macc_ptrs[0]) = tmp__RN_2218;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_tmp__RN_2218_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_tmp__RN_2218_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_tmp__RN_2218_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_tmp__RN_2218_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i__RN_2223_loop_lb_set, __macc_i__RN_2223_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set);
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
__macc_top_loop_lb = (__macc_i__RN_2223_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i__RN_2223_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((512) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : 512 );
#pragma acc parallel present ( tmp__RN_2218 ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector
# 554 "main.c"
# 554 "main.c"
for(int i__RN_2223= __macc_top_loop_lb; i__RN_2223 <= __macc_top_loop_ub; i__RN_2223++) {
{
{
# 555 "main.c"
(tmp__RN_2218[i__RN_2223]) = i__RN_2223;
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_tmp__RN_2218_def_ub_set[10];
static int __macc_tmp__RN_2218_def_lb_set[10];
static int __macc_tmp__RN_2218_use_ub_set[10];
static int __macc_tmp__RN_2218_use_lb_set[10];
static int __macc_n__RN_2217_last;
static int __macc_i__RN_2224_loop_lb_set[10];
static int __macc_i__RN_2224_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (n__RN_2217 != __macc_n__RN_2217_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_n__RN_2217_last = n__RN_2217;
}
{
__macc_calc_loop_region(__macc_i__RN_2224_loop_lb_set, __macc_i__RN_2224_loop_ub_set, 1, n__RN_2217 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i__RN_2224_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i__RN_2224_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set, n__RN_2217 - __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set, n__RN_2217 - __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set, n__RN_2217 - __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set, n__RN_2217 - __macc_top_loop_ub);
}
__macc_adjust_data_region(tmp__RN_2218, __macc_gpu_num, __macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set);
__macc_adjust_data_region(tmp__RN_2218, __macc_gpu_num, __macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set);
}
(__macc_ptrs[0]) = tmp__RN_2218;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_tmp__RN_2218_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_tmp__RN_2218_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_tmp__RN_2218_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_tmp__RN_2218_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i__RN_2224_loop_lb_set, __macc_i__RN_2224_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_tmp__RN_2218_use_lb_set, __macc_tmp__RN_2218_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_tmp__RN_2218_def_lb_set, __macc_tmp__RN_2218_def_ub_set);
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
__macc_top_loop_lb = (__macc_i__RN_2224_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i__RN_2224_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((512) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : 512 );
#pragma acc parallel present ( tmp__RN_2218 ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector
# 559 "main.c"
# 559 "main.c"
for(int i__RN_2224= __macc_top_loop_lb; i__RN_2224 <= __macc_top_loop_ub; i__RN_2224++) {
{
{
# 560 "main.c"
(tmp__RN_2218[(n__RN_2217 - i__RN_2224)]) += i__RN_2224;
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
__macc_copyout(__macc_tnum, tmp__RN_2218, sizeof(int), 0, n__RN_2217);
}
}
}
# 563 "main.c"
free_managed(tmp__RN_2218);
}
}
}
}
}
}
extern void * malloc_managed(unsigned long __RN_259);
extern void * calloc_managed(unsigned long __RN_260, unsigned long __RN_261);
extern void free_managed(void * __RN_262);
extern void cfree_managed(void * __RN_263);
extern void * realloc_managed(void * __RN_264, unsigned long __RN_265);
extern void * valloc_managed(unsigned long __RN_266);
extern void * pvalloc_managed(unsigned long __RN_267);
extern void * memalign_managed(unsigned long __RN_268, unsigned long __RN_269);
extern int posix_memalign_managed(void * * __RN_270, unsigned long __RN_271, unsigned long __RN_272);
extern char * tmpnam_managed(char * __RN_273);
# 586 "main.c"
void c_print_results(char * name__RN_1974, char class__RN_1975, int n1__RN_1976, int n2__RN_1977, int n3__RN_1978, int niter__RN_1979, double t__RN_1980, double mops__RN_1981, char * optype__RN_1982, int passed_verification__RN_1983, char * npbversion__RN_1984, char * compiletime__RN_1985, char * cc__RN_1986, char * clink__RN_1987, char * c_lib__RN_1988, char * c_inc__RN_1989, char * cflags__RN_1990, char * clinkflags__RN_1991)
{
# 605 "main.c"
printf("\n\n %s Benchmark Completed\n", name__RN_1974);
# 607 "main.c"
printf(" Class           =                        %c\n", class__RN_1975);
# 609 "main.c"
if(n3__RN_1978 == (0)) {
# 610 "main.c"
long nn__RN_2205 = n1__RN_1976;
# 611 "main.c"
if(n2__RN_1977 != (0)) {
# 611 "main.c"
nn__RN_2205 *= n2__RN_1977;
}
# 612 "main.c"
printf(" Size            =             %12ld\n", nn__RN_2205);
}
else {
# 615 "main.c"
printf(" Size            =             %4dx%4dx%4d\n", n1__RN_1976, n2__RN_1977, n3__RN_1978);
}
# 617 "main.c"
printf(" Iterations      =             %12d\n", niter__RN_1979);
# 619 "main.c"
printf(" Time in seconds =             %12.2f\n", t__RN_1980);
# 621 "main.c"
printf(" Mop/s total     =             %12.2f\n", mops__RN_1981);
# 623 "main.c"
printf(" Operation type  = %24s\n", optype__RN_1982);
# 625 "main.c"
if(passed_verification__RN_1983 < (0)) {
# 626 "main.c"
printf(" Verification    =            NOT PERFORMED\n");
}
else {
# 627 "main.c"
if(passed_verification__RN_1983) {
# 628 "main.c"
printf(" Verification    =               SUCCESSFUL\n");
}
else {
# 630 "main.c"
printf(" Verification    =             UNSUCCESSFUL\n");
}
}
# 632 "main.c"
printf(" Version         =             %12s\n", npbversion__RN_1984);
# 634 "main.c"
printf(" Compile date    =             %12s\n", compiletime__RN_1985);
# 636 "main.c"
printf("\n Compile options:\n");
# 638 "main.c"
printf("    CC           = %s\n", cc__RN_1986);
# 640 "main.c"
printf("    CLINK        = %s\n", clink__RN_1987);
# 642 "main.c"
printf("    C_LIB        = %s\n", c_lib__RN_1988);
# 644 "main.c"
printf("    C_INC        = %s\n", c_inc__RN_1989);
# 646 "main.c"
printf("    CFLAGS       = %s\n", cflags__RN_1990);
# 648 "main.c"
printf("    CLINKFLAGS   = %s\n", clinkflags__RN_1991);
# 654 "main.c"
printf("\n--------------------------------------\n");
# 655 "main.c"
printf(" Please send all errors/feedbacks to:\n");
# 656 "main.c"
printf(" Center for Manycore Programming\n");
# 657 "main.c"
printf(" cmpaces.snu.ac.kr\n");
# 658 "main.c"
printf(" http://aces.snu.ac.kr\n");
# 659 "main.c"
printf("--------------------------------------\n");
}
extern void * malloc_managed(unsigned long __RN_259);
extern void * calloc_managed(unsigned long __RN_260, unsigned long __RN_261);
extern void free_managed(void * __RN_262);
extern void cfree_managed(void * __RN_263);
extern void * realloc_managed(void * __RN_264, unsigned long __RN_265);
extern void * valloc_managed(unsigned long __RN_266);
extern void * pvalloc_managed(unsigned long __RN_267);
extern void * memalign_managed(unsigned long __RN_268, unsigned long __RN_269);
extern int posix_memalign_managed(void * * __RN_270, unsigned long __RN_271, unsigned long __RN_272);
extern char * tmpnam_managed(char * __RN_273);
void wtime_(double * t__RN_2021);
# 672 "main.c"
static double elapsed_time(void)
{
# 674 "main.c"
double t__RN_2090;
# 676 "main.c"
wtime_(&(t__RN_2090));
# 677 "main.c"
return t__RN_2090;
}
# 681 "main.c"
static double * start;
# 681 "main.c"
static double * elapsed;
# 686 "main.c"
void timer_clear(int n__RN_1992)
{
# 688 "main.c"
(elapsed[n__RN_1992]) = (0.0);
}
# 695 "main.c"
void timer_start(int n__RN_1993)
{
# 697 "main.c"
(start[n__RN_1993]) = (elapsed_time());
}
# 704 "main.c"
void timer_stop(int n__RN_1994)
{
# 706 "main.c"
double t__RN_2091;
# 706 "main.c"
double now__RN_2092;
# 708 "main.c"
now__RN_2092 = (elapsed_time());
# 709 "main.c"
t__RN_2091 = (now__RN_2092 - (start[n__RN_1994]));
# 710 "main.c"
(elapsed[n__RN_1994]) += t__RN_2091;
}
# 718 "main.c"
double timer_read(int n__RN_1995)
{
# 720 "main.c"
return elapsed[n__RN_1995];
}
double tgamma(double __RN_1010);
float tgammaf(float __RN_1011);
__attribute__((const, const)) double round(double __RN_1012);
__attribute__((const, const)) float roundf(float __RN_1013);
long lround(double __RN_1014);
long lroundf(float __RN_1015);
long long llround(double __RN_1016);
long long llroundf(float __RN_1017);
# 50 "/usr/include/x86_64-linux-gnu/bits/huge_val.h"
static union anon_type_25___huge_val_t __huge_val = {{0, 0, 0, 0, 0, 0, 240, 127}};
# 48 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h"
static union anon_type_26___huge_valf_t __huge_valf = {{0, 0, 128, 127}};
# 37 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h"
static union anon_type_27 __huge_vall = {{0, 0, 0, 0, 0, 0, 0, 128, 255, 127, 0, 0}};
# 48 "/usr/include/x86_64-linux-gnu/bits/nan.h"
static __attribute__((unused)) union anon_type_28 __qnan_union = {{0, 0, 192, 127}};
extern double acos(double __RN_1018);
extern double __acos(double __RN_1019);
extern double asin(double __RN_1020);
extern double __asin(double __RN_1021);
extern double atan(double __RN_1022);
extern double __atan(double __RN_1023);
extern double atan2(double __RN_1024, double __RN_1025);
extern double __atan2(double __RN_1026, double __RN_1027);
extern double cos(double __RN_1028);
extern double __cos(double __RN_1029);
extern double sin(double __RN_1030);
extern double __sin(double __RN_1031);
extern double tan(double __RN_1032);
extern double __tan(double __RN_1033);
extern double cosh(double __RN_1034);
extern double __cosh(double __RN_1035);
extern double sinh(double __RN_1036);
extern double __sinh(double __RN_1037);
extern double tanh(double __RN_1038);
extern double __tanh(double __RN_1039);
extern double acosh(double __RN_1040);
extern double __acosh(double __RN_1041);
extern double asinh(double __RN_1042);
extern double __asinh(double __RN_1043);
extern double atanh(double __RN_1044);
extern double __atanh(double __RN_1045);
extern double exp(double __RN_1046);
extern double __exp(double __RN_1047);
extern double frexp(double __RN_1048, int * __RN_1049);
extern double __frexp(double __RN_1050, int * __RN_1051);
extern double ldexp(double __RN_1052, int __RN_1053);
extern double __ldexp(double __RN_1054, int __RN_1055);
extern double log(double __RN_1056);
extern double __log(double __RN_1057);
extern double log10(double __RN_1058);
extern double __log10(double __RN_1059);
extern double modf(double __RN_1060, double * __RN_1061);
extern double __modf(double __RN_1062, double * __RN_1063);
extern double expm1(double __RN_1064);
extern double __expm1(double __RN_1065);
extern double log1p(double __RN_1066);
extern double __log1p(double __RN_1067);
extern double logb(double __RN_1068);
extern double __logb(double __RN_1069);
extern double exp2(double __RN_1070);
extern double __exp2(double __RN_1071);
extern double log2(double __RN_1072);
extern double __log2(double __RN_1073);
extern double pow(double __RN_1074, double __RN_1075);
extern double __pow(double __RN_1076, double __RN_1077);
extern double sqrt(double __RN_1078);
extern double __sqrt(double __RN_1079);
extern double hypot(double __RN_1080, double __RN_1081);
extern double __hypot(double __RN_1082, double __RN_1083);
extern double cbrt(double __RN_1084);
extern double __cbrt(double __RN_1085);
extern __attribute__((const)) double ceil(double __RN_1086);
extern __attribute__((const)) double __ceil(double __RN_1087);
extern __attribute__((const)) double fabs(double __RN_1088);
extern __attribute__((const)) double __fabs(double __RN_1089);
extern __attribute__((const)) double floor(double __RN_1090);
extern __attribute__((const)) double __floor(double __RN_1091);
extern double fmod(double __RN_1092, double __RN_1093);
extern double __fmod(double __RN_1094, double __RN_1095);
extern __attribute__((const)) int __isinf(double __RN_1096);
extern __attribute__((const)) int __finite(double __RN_1097);
extern __attribute__((const)) int isinf(double __RN_1098);
extern __attribute__((const)) int finite(double __RN_1099);
extern double drem(double __RN_1100, double __RN_1101);
extern double __drem(double __RN_1102, double __RN_1103);
extern double significand(double __RN_1104);
extern double __significand(double __RN_1105);
extern __attribute__((const)) double copysign(double __RN_1106, double __RN_1107);
extern __attribute__((const)) double __copysign(double __RN_1108, double __RN_1109);
extern __attribute__((const)) double nan(char const * __RN_1110);
extern __attribute__((const)) double __nan(char const * __RN_1111);
extern __attribute__((const)) int __isnan(double __RN_1112);
extern __attribute__((const)) int isnan(double __RN_1113);
extern double j0(double __RN_1114);
extern double __j0(double __RN_1115);
extern double j1(double __RN_1116);
extern double __j1(double __RN_1117);
extern double jn(int __RN_1118, double __RN_1119);
extern double __jn(int __RN_1120, double __RN_1121);
extern double y0(double __RN_1122);
extern double __y0(double __RN_1123);
extern double y1(double __RN_1124);
extern double __y1(double __RN_1125);
extern double yn(int __RN_1126, double __RN_1127);
extern double __yn(int __RN_1128, double __RN_1129);
extern double erf(double __RN_1130);
extern double __erf(double __RN_1131);
extern double erfc(double __RN_1132);
extern double __erfc(double __RN_1133);
extern double lgamma(double __RN_1134);
extern double __lgamma(double __RN_1135);
double tgamma(double __RN_1010);
extern double __tgamma(double __RN_1137);
extern double gamma(double __RN_1138);
extern double __gamma(double __RN_1139);
extern double lgamma_r(double __RN_1140, int * __RN_1141);
extern double __lgamma_r(double __RN_1142, int * __RN_1143);
extern double rint(double __RN_1144);
extern double __rint(double __RN_1145);
extern __attribute__((const)) double nextafter(double __RN_1146, double __RN_1147);
extern __attribute__((const)) double __nextafter(double __RN_1148, double __RN_1149);
extern __attribute__((const)) double nexttoward(double __RN_1150, long double __RN_1151);
extern __attribute__((const)) double __nexttoward(double __RN_1152, long double __RN_1153);
extern double remainder(double __RN_1154, double __RN_1155);
extern double __remainder(double __RN_1156, double __RN_1157);
extern double scalbn(double __RN_1158, int __RN_1159);
extern double __scalbn(double __RN_1160, int __RN_1161);
extern int ilogb(double __RN_1162);
extern int __ilogb(double __RN_1163);
extern double scalbln(double __RN_1164, long __RN_1165);
extern double __scalbln(double __RN_1166, long __RN_1167);
extern double nearbyint(double __RN_1168);
extern double __nearbyint(double __RN_1169);
__attribute__((const, const)) double round(double __RN_1012);
extern __attribute__((const)) double __round(double __RN_1171);
extern __attribute__((const)) double trunc(double __RN_1172);
extern __attribute__((const)) double __trunc(double __RN_1173);
extern double remquo(double __RN_1174, double __RN_1175, int * __RN_1176);
extern double __remquo(double __RN_1177, double __RN_1178, int * __RN_1179);
extern long lrint(double __RN_1180);
extern long __lrint(double __RN_1181);
extern long long llrint(double __RN_1182);
extern long long __llrint(double __RN_1183);
long lround(double __RN_1014);
extern long __lround(double __RN_1185);
long long llround(double __RN_1016);
extern long long __llround(double __RN_1187);
extern double fdim(double __RN_1188, double __RN_1189);
extern double __fdim(double __RN_1190, double __RN_1191);
extern __attribute__((const)) double fmax(double __RN_1192, double __RN_1193);
extern __attribute__((const)) double __fmax(double __RN_1194, double __RN_1195);
extern __attribute__((const)) double fmin(double __RN_1196, double __RN_1197);
extern __attribute__((const)) double __fmin(double __RN_1198, double __RN_1199);
extern __attribute__((const)) int __fpclassify(double __RN_1200);
extern __attribute__((const)) int __signbit(double __RN_1201);
extern double fma(double __RN_1202, double __RN_1203, double __RN_1204);
extern double __fma(double __RN_1205, double __RN_1206, double __RN_1207);
extern double scalb(double __RN_1208, double __RN_1209);
extern double __scalb(double __RN_1210, double __RN_1211);
extern float acosf(float __RN_1212);
extern float __acosf(float __RN_1213);
extern float asinf(float __RN_1214);
extern float __asinf(float __RN_1215);
extern float atanf(float __RN_1216);
extern float __atanf(float __RN_1217);
extern float atan2f(float __RN_1218, float __RN_1219);
extern float __atan2f(float __RN_1220, float __RN_1221);
extern float cosf(float __RN_1222);
extern float __cosf(float __RN_1223);
extern float sinf(float __RN_1224);
extern float __sinf(float __RN_1225);
extern float tanf(float __RN_1226);
extern float __tanf(float __RN_1227);
extern float coshf(float __RN_1228);
extern float __coshf(float __RN_1229);
extern float sinhf(float __RN_1230);
extern float __sinhf(float __RN_1231);
extern float tanhf(float __RN_1232);
extern float __tanhf(float __RN_1233);
extern float acoshf(float __RN_1234);
extern float __acoshf(float __RN_1235);
extern float asinhf(float __RN_1236);
extern float __asinhf(float __RN_1237);
extern float atanhf(float __RN_1238);
extern float __atanhf(float __RN_1239);
extern float expf(float __RN_1240);
extern float __expf(float __RN_1241);
extern float frexpf(float __RN_1242, int * __RN_1243);
extern float __frexpf(float __RN_1244, int * __RN_1245);
extern float ldexpf(float __RN_1246, int __RN_1247);
extern float __ldexpf(float __RN_1248, int __RN_1249);
extern float logf(float __RN_1250);
extern float __logf(float __RN_1251);
extern float log10f(float __RN_1252);
extern float __log10f(float __RN_1253);
extern float modff(float __RN_1254, float * __RN_1255);
extern float __modff(float __RN_1256, float * __RN_1257);
extern float expm1f(float __RN_1258);
extern float __expm1f(float __RN_1259);
extern float log1pf(float __RN_1260);
extern float __log1pf(float __RN_1261);
extern float logbf(float __RN_1262);
extern float __logbf(float __RN_1263);
extern float exp2f(float __RN_1264);
extern float __exp2f(float __RN_1265);
extern float log2f(float __RN_1266);
extern float __log2f(float __RN_1267);
extern float powf(float __RN_1268, float __RN_1269);
extern float __powf(float __RN_1270, float __RN_1271);
extern float sqrtf(float __RN_1272);
extern float __sqrtf(float __RN_1273);
extern float hypotf(float __RN_1274, float __RN_1275);
extern float __hypotf(float __RN_1276, float __RN_1277);
extern float cbrtf(float __RN_1278);
extern float __cbrtf(float __RN_1279);
extern __attribute__((const)) float ceilf(float __RN_1280);
extern __attribute__((const)) float __ceilf(float __RN_1281);
extern __attribute__((const)) float fabsf(float __RN_1282);
extern __attribute__((const)) float __fabsf(float __RN_1283);
extern __attribute__((const)) float floorf(float __RN_1284);
extern __attribute__((const)) float __floorf(float __RN_1285);
extern float fmodf(float __RN_1286, float __RN_1287);
extern float __fmodf(float __RN_1288, float __RN_1289);
extern __attribute__((const)) int __isinff(float __RN_1290);
extern __attribute__((const)) int __finitef(float __RN_1291);
extern __attribute__((const)) int isinff(float __RN_1292);
extern __attribute__((const)) int finitef(float __RN_1293);
extern float dremf(float __RN_1294, float __RN_1295);
extern float __dremf(float __RN_1296, float __RN_1297);
extern float significandf(float __RN_1298);
extern float __significandf(float __RN_1299);
extern __attribute__((const)) float copysignf(float __RN_1300, float __RN_1301);
extern __attribute__((const)) float __copysignf(float __RN_1302, float __RN_1303);
extern __attribute__((const)) float nanf(char const * __RN_1304);
extern __attribute__((const)) float __nanf(char const * __RN_1305);
extern __attribute__((const)) int __isnanf(float __RN_1306);
extern __attribute__((const)) int isnanf(float __RN_1307);
extern float j0f(float __RN_1308);
extern float __j0f(float __RN_1309);
extern float j1f(float __RN_1310);
extern float __j1f(float __RN_1311);
extern float jnf(int __RN_1312, float __RN_1313);
extern float __jnf(int __RN_1314, float __RN_1315);
extern float y0f(float __RN_1316);
extern float __y0f(float __RN_1317);
extern float y1f(float __RN_1318);
extern float __y1f(float __RN_1319);
extern float ynf(int __RN_1320, float __RN_1321);
extern float __ynf(int __RN_1322, float __RN_1323);
extern float erff(float __RN_1324);
extern float __erff(float __RN_1325);
extern float erfcf(float __RN_1326);
extern float __erfcf(float __RN_1327);
extern float lgammaf(float __RN_1328);
extern float __lgammaf(float __RN_1329);
float tgammaf(float __RN_1011);
extern float __tgammaf(float __RN_1331);
extern float gammaf(float __RN_1332);
extern float __gammaf(float __RN_1333);
extern float lgammaf_r(float __RN_1334, int * __RN_1335);
extern float __lgammaf_r(float __RN_1336, int * __RN_1337);
extern float rintf(float __RN_1338);
extern float __rintf(float __RN_1339);
extern __attribute__((const)) float nextafterf(float __RN_1340, float __RN_1341);
extern __attribute__((const)) float __nextafterf(float __RN_1342, float __RN_1343);
extern __attribute__((const)) float nexttowardf(float __RN_1344, long double __RN_1345);
extern __attribute__((const)) float __nexttowardf(float __RN_1346, long double __RN_1347);
extern float remainderf(float __RN_1348, float __RN_1349);
extern float __remainderf(float __RN_1350, float __RN_1351);
extern float scalbnf(float __RN_1352, int __RN_1353);
extern float __scalbnf(float __RN_1354, int __RN_1355);
extern int ilogbf(float __RN_1356);
extern int __ilogbf(float __RN_1357);
extern float scalblnf(float __RN_1358, long __RN_1359);
extern float __scalblnf(float __RN_1360, long __RN_1361);
extern float nearbyintf(float __RN_1362);
extern float __nearbyintf(float __RN_1363);
__attribute__((const, const)) float roundf(float __RN_1013);
extern __attribute__((const)) float __roundf(float __RN_1365);
extern __attribute__((const)) float truncf(float __RN_1366);
extern __attribute__((const)) float __truncf(float __RN_1367);
extern float remquof(float __RN_1368, float __RN_1369, int * __RN_1370);
extern float __remquof(float __RN_1371, float __RN_1372, int * __RN_1373);
extern long lrintf(float __RN_1374);
extern long __lrintf(float __RN_1375);
extern long long llrintf(float __RN_1376);
extern long long __llrintf(float __RN_1377);
long lroundf(float __RN_1015);
extern long __lroundf(float __RN_1379);
long long llroundf(float __RN_1017);
extern long long __llroundf(float __RN_1381);
extern float fdimf(float __RN_1382, float __RN_1383);
extern float __fdimf(float __RN_1384, float __RN_1385);
extern __attribute__((const)) float fmaxf(float __RN_1386, float __RN_1387);
extern __attribute__((const)) float __fmaxf(float __RN_1388, float __RN_1389);
extern __attribute__((const)) float fminf(float __RN_1390, float __RN_1391);
extern __attribute__((const)) float __fminf(float __RN_1392, float __RN_1393);
extern __attribute__((const)) int __fpclassifyf(float __RN_1394);
extern __attribute__((const)) int __signbitf(float __RN_1395);
extern float fmaf(float __RN_1396, float __RN_1397, float __RN_1398);
extern float __fmaf(float __RN_1399, float __RN_1400, float __RN_1401);
extern float scalbf(float __RN_1402, float __RN_1403);
extern float __scalbf(float __RN_1404, float __RN_1405);
extern long double acosl(long double __RN_1406);
extern long double __acosl(long double __RN_1407);
extern long double asinl(long double __RN_1408);
extern long double __asinl(long double __RN_1409);
extern long double atanl(long double __RN_1410);
extern long double __atanl(long double __RN_1411);
extern long double atan2l(long double __RN_1412, long double __RN_1413);
extern long double __atan2l(long double __RN_1414, long double __RN_1415);
extern long double cosl(long double __RN_1416);
extern long double __cosl(long double __RN_1417);
extern long double sinl(long double __RN_1418);
extern long double __sinl(long double __RN_1419);
extern long double tanl(long double __RN_1420);
extern long double __tanl(long double __RN_1421);
extern long double coshl(long double __RN_1422);
extern long double __coshl(long double __RN_1423);
extern long double sinhl(long double __RN_1424);
extern long double __sinhl(long double __RN_1425);
extern long double tanhl(long double __RN_1426);
extern long double __tanhl(long double __RN_1427);
extern long double acoshl(long double __RN_1428);
extern long double __acoshl(long double __RN_1429);
extern long double asinhl(long double __RN_1430);
extern long double __asinhl(long double __RN_1431);
extern long double atanhl(long double __RN_1432);
extern long double __atanhl(long double __RN_1433);
extern long double expl(long double __RN_1434);
extern long double __expl(long double __RN_1435);
extern long double frexpl(long double __RN_1436, int * __RN_1437);
extern long double __frexpl(long double __RN_1438, int * __RN_1439);
extern long double ldexpl(long double __RN_1440, int __RN_1441);
extern long double __ldexpl(long double __RN_1442, int __RN_1443);
extern long double logl(long double __RN_1444);
extern long double __logl(long double __RN_1445);
extern long double log10l(long double __RN_1446);
extern long double __log10l(long double __RN_1447);
extern long double modfl(long double __RN_1448, long double * __RN_1449);
extern long double __modfl(long double __RN_1450, long double * __RN_1451);
extern long double expm1l(long double __RN_1452);
extern long double __expm1l(long double __RN_1453);
extern long double log1pl(long double __RN_1454);
extern long double __log1pl(long double __RN_1455);
extern long double logbl(long double __RN_1456);
extern long double __logbl(long double __RN_1457);
extern long double exp2l(long double __RN_1458);
extern long double __exp2l(long double __RN_1459);
extern long double log2l(long double __RN_1460);
extern long double __log2l(long double __RN_1461);
extern long double powl(long double __RN_1462, long double __RN_1463);
extern long double __powl(long double __RN_1464, long double __RN_1465);
extern long double sqrtl(long double __RN_1466);
extern long double __sqrtl(long double __RN_1467);
extern long double hypotl(long double __RN_1468, long double __RN_1469);
extern long double __hypotl(long double __RN_1470, long double __RN_1471);
extern long double cbrtl(long double __RN_1472);
extern long double __cbrtl(long double __RN_1473);
extern __attribute__((const)) long double ceill(long double __RN_1474);
extern __attribute__((const)) long double __ceill(long double __RN_1475);
extern __attribute__((const)) long double fabsl(long double __RN_1476);
extern __attribute__((const)) long double __fabsl(long double __RN_1477);
extern __attribute__((const)) long double floorl(long double __RN_1478);
extern __attribute__((const)) long double __floorl(long double __RN_1479);
extern long double fmodl(long double __RN_1480, long double __RN_1481);
extern long double __fmodl(long double __RN_1482, long double __RN_1483);
extern __attribute__((const)) int __isinfl(long double __RN_1484);
extern __attribute__((const)) int __finitel(long double __RN_1485);
extern __attribute__((const)) int isinfl(long double __RN_1486);
extern __attribute__((const)) int finitel(long double __RN_1487);
extern long double dreml(long double __RN_1488, long double __RN_1489);
extern long double __dreml(long double __RN_1490, long double __RN_1491);
extern long double significandl(long double __RN_1492);
extern long double __significandl(long double __RN_1493);
extern __attribute__((const)) long double copysignl(long double __RN_1494, long double __RN_1495);
extern __attribute__((const)) long double __copysignl(long double __RN_1496, long double __RN_1497);
extern __attribute__((const)) long double nanl(char const * __RN_1498);
extern __attribute__((const)) long double __nanl(char const * __RN_1499);
extern __attribute__((const)) int __isnanl(long double __RN_1500);
extern __attribute__((const)) int isnanl(long double __RN_1501);
extern long double j0l(long double __RN_1502);
extern long double __j0l(long double __RN_1503);
extern long double j1l(long double __RN_1504);
extern long double __j1l(long double __RN_1505);
extern long double jnl(int __RN_1506, long double __RN_1507);
extern long double __jnl(int __RN_1508, long double __RN_1509);
extern long double y0l(long double __RN_1510);
extern long double __y0l(long double __RN_1511);
extern long double y1l(long double __RN_1512);
extern long double __y1l(long double __RN_1513);
extern long double ynl(int __RN_1514, long double __RN_1515);
extern long double __ynl(int __RN_1516, long double __RN_1517);
extern long double erfl(long double __RN_1518);
extern long double __erfl(long double __RN_1519);
extern long double erfcl(long double __RN_1520);
extern long double __erfcl(long double __RN_1521);
extern long double lgammal(long double __RN_1522);
extern long double __lgammal(long double __RN_1523);
extern long double tgammal(long double __RN_1524);
extern long double __tgammal(long double __RN_1525);
extern long double gammal(long double __RN_1526);
extern long double __gammal(long double __RN_1527);
extern long double lgammal_r(long double __RN_1528, int * __RN_1529);
extern long double __lgammal_r(long double __RN_1530, int * __RN_1531);
extern long double rintl(long double __RN_1532);
extern long double __rintl(long double __RN_1533);
extern __attribute__((const)) long double nextafterl(long double __RN_1534, long double __RN_1535);
extern __attribute__((const)) long double __nextafterl(long double __RN_1536, long double __RN_1537);
extern __attribute__((const)) long double nexttowardl(long double __RN_1538, long double __RN_1539);
extern __attribute__((const)) long double __nexttowardl(long double __RN_1540, long double __RN_1541);
extern long double remainderl(long double __RN_1542, long double __RN_1543);
extern long double __remainderl(long double __RN_1544, long double __RN_1545);
extern long double scalbnl(long double __RN_1546, int __RN_1547);
extern long double __scalbnl(long double __RN_1548, int __RN_1549);
extern int ilogbl(long double __RN_1550);
extern int __ilogbl(long double __RN_1551);
extern long double scalblnl(long double __RN_1552, long __RN_1553);
extern long double __scalblnl(long double __RN_1554, long __RN_1555);
extern long double nearbyintl(long double __RN_1556);
extern long double __nearbyintl(long double __RN_1557);
extern __attribute__((const)) long double roundl(long double __RN_1558);
extern __attribute__((const)) long double __roundl(long double __RN_1559);
extern __attribute__((const)) long double truncl(long double __RN_1560);
extern __attribute__((const)) long double __truncl(long double __RN_1561);
extern long double remquol(long double __RN_1562, long double __RN_1563, int * __RN_1564);
extern long double __remquol(long double __RN_1565, long double __RN_1566, int * __RN_1567);
extern long lrintl(long double __RN_1568);
extern long __lrintl(long double __RN_1569);
extern long long llrintl(long double __RN_1570);
extern long long __llrintl(long double __RN_1571);
extern long lroundl(long double __RN_1572);
extern long __lroundl(long double __RN_1573);
extern long long llroundl(long double __RN_1574);
extern long long __llroundl(long double __RN_1575);
extern long double fdiml(long double __RN_1576, long double __RN_1577);
extern long double __fdiml(long double __RN_1578, long double __RN_1579);
extern __attribute__((const)) long double fmaxl(long double __RN_1580, long double __RN_1581);
extern __attribute__((const)) long double __fmaxl(long double __RN_1582, long double __RN_1583);
extern __attribute__((const)) long double fminl(long double __RN_1584, long double __RN_1585);
extern __attribute__((const)) long double __fminl(long double __RN_1586, long double __RN_1587);
extern __attribute__((const)) int __fpclassifyl(long double __RN_1588);
extern __attribute__((const)) int __signbitl(long double __RN_1589);
extern long double fmal(long double __RN_1590, long double __RN_1591, long double __RN_1592);
extern long double __fmal(long double __RN_1593, long double __RN_1594, long double __RN_1595);
extern long double scalbl(long double __RN_1596, long double __RN_1597);
extern long double __scalbl(long double __RN_1598, long double __RN_1599);
# 168 "/usr/include/math.h"
extern int signgam;
# 359 "/usr/include/math.h"
extern enum anon_type_30__LIB_VERSION_TYPE _LIB_VERSION;
extern int matherr(struct exception * __RN_1600);
double __builtin_acos(double __RN_1601);
double __builtin_asin(double __RN_1602);
double __builtin_atan2(double __RN_1603, double __RN_1604);
double __builtin_atan(double __RN_1605);
double __builtin_tan(double __RN_1606);
double __builtin_cos(double __RN_1607);
double __builtin_sin(double __RN_1608);
double __builtin_fabs(double __RN_1609);
double __builtin_sqrt(double __RN_1610);
double __builtin_log(double __RN_1611);
double __builtin_log10(double __RN_1612);
double __builtin_exp(double __RN_1613);
double __builtin_pow(double __RN_1614, double __RN_1615);
double __builtin_fmin(double __RN_1616, double __RN_1617);
float __builtin_fminf(float __RN_1618, float __RN_1619);
double __builtin_fmax(double __RN_1620, double __RN_1621);
float __builtin_fmaxf(float __RN_1622, float __RN_1623);
float __builtin_acosf(float __RN_1624);
float __builtin_asinf(float __RN_1625);
float __builtin_atan2f(float __RN_1626, float __RN_1627);
float __builtin_atanf(float __RN_1628);
float __builtin_tanf(float __RN_1629);
float __builtin_cosf(float __RN_1630);
float __builtin_sinf(float __RN_1631);
float __builtin_fabsf(float __RN_1632);
float __builtin_sqrtf(float __RN_1633);
float __builtin_logf(float __RN_1634);
float __builtin_log10f(float __RN_1635);
float __builtin_expf(float __RN_1636);
float __builtin_powf(float __RN_1637, float __RN_1638);
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
# 728 "main.c"
void print_results(char * name__RN_1996, char class__RN_1997, int n1__RN_1998, int n2__RN_1999, int n3__RN_2000, int niter__RN_2001, double t__RN_2002, double mops__RN_2003, char * optype__RN_2004, enum anon_type_31_logical verified__RN_2005, char * npbversion__RN_2006, char * compiletime__RN_2007, char * cs1__RN_2008, char * cs2__RN_2009, char * cs3__RN_2010, char * cs4__RN_2011, char * cs5__RN_2012, char * cs6__RN_2013, char * cs7__RN_2014)
{
# 733 "main.c"
char size__RN_2093[16];
# 734 "main.c"
int j__RN_2094;
# 736 "main.c"
printf("\n\n %s Benchmark Completed.\n", name__RN_1996);
# 737 "main.c"
printf(" Class           =             %12c\n", class__RN_1997);
# 744 "main.c"
if((n2__RN_1999 == (0)) && (n3__RN_2000 == (0))) {
# 745 "main.c"
if(((name__RN_1996[(0)]) == ((char)(69))) && ((name__RN_1996[(1)]) == ((char)(80)))) {
# 746 "main.c"
sprintf(size__RN_2093, "%15.0lf", __builtin_pow(2.0, n1__RN_1998));
# 747 "main.c"
j__RN_2094 = (14);
# 748 "main.c"
if((size__RN_2093[j__RN_2094]) == ((char)(46))) {
# 749 "main.c"
(size__RN_2093[j__RN_2094]) = ((char)(32));
# 750 "main.c"
j__RN_2094--;
}
# 752 "main.c"
(size__RN_2093[j__RN_2094 + (1)]) = ((char)(0));
# 753 "main.c"
printf(" Size            =          %15s\n", size__RN_2093);
}
else {
# 755 "main.c"
printf(" Size            =             %12d\n", n1__RN_1998);
}
}
else {
# 758 "main.c"
printf(" Size            =           %4dx%4dx%4d\n", n1__RN_1998, n2__RN_1999, n3__RN_2000);
}
# 761 "main.c"
printf(" Iterations      =             %12d\n", niter__RN_2001);
# 762 "main.c"
printf(" Time in seconds =             %12.2lf\n", t__RN_2002);
# 763 "main.c"
printf(" Mop/s total     =          %15.2lf\n", mops__RN_2003);
# 764 "main.c"
printf(" Operation type  = %24s\n", optype__RN_2004);
# 765 "main.c"
if(verified__RN_2005) {
# 766 "main.c"
printf(" Verification    =             %12s\n", "SUCCESSFUL");
}
else {
# 768 "main.c"
printf(" Verification    =             %12s\n", "UNSUCCESSFUL");
}
# 769 "main.c"
printf(" Version         =             %12s\n", npbversion__RN_2006);
# 770 "main.c"
printf(" Compile date    =             %12s\n", compiletime__RN_2007);
# 772 "main.c"
printf("\n Compile options:\n    CC           = %s\n", cs1__RN_2008);
# 774 "main.c"
printf("    CLINK        = %s\n", cs2__RN_2009);
# 775 "main.c"
printf("    C_LIB        = %s\n", cs3__RN_2010);
# 776 "main.c"
printf("    C_INC        = %s\n", cs4__RN_2011);
# 777 "main.c"
printf("    CFLAGS       = %s\n", cs5__RN_2012);
# 778 "main.c"
printf("    CLINKFLAGS   = %s\n", cs6__RN_2013);
# 779 "main.c"
printf("    RAND         = %s\n", cs7__RN_2014);
# 781 "main.c"
printf("\n--------------------------------------\n Please send all errors/feedbacks to:\n Center for Manycore Programming\n cmpaces.snu.ac.kr\n http://aces.snu.ac.kr\n--------------------------------------\n\n");
}
# 791 "main.c"
double randlc(double * x__RN_2015, double a__RN_2016)
{
# 823 "main.c"
double const r23__RN_2095 = 1.1920928955078125e-07;
# 824 "main.c"
double const r46__RN_2096 = r23__RN_2095 * r23__RN_2095;
# 825 "main.c"
double const t23__RN_2097 = 8.388608e+06;
# 826 "main.c"
double const t46__RN_2098 = t23__RN_2097 * t23__RN_2097;
# 828 "main.c"
double t1__RN_2099;
# 828 "main.c"
double t2__RN_2100;
# 828 "main.c"
double t3__RN_2101;
# 828 "main.c"
double t4__RN_2102;
# 828 "main.c"
double a1__RN_2103;
# 828 "main.c"
double a2__RN_2104;
# 828 "main.c"
double x1__RN_2105;
# 828 "main.c"
double x2__RN_2106;
# 828 "main.c"
double z__RN_2107;
# 829 "main.c"
double r__RN_2108;
# 834 "main.c"
t1__RN_2099 = (r23__RN_2095 * a__RN_2016);
# 835 "main.c"
a1__RN_2103 = ((int)(t1__RN_2099));
# 836 "main.c"
a2__RN_2104 = (a__RN_2016 - (t23__RN_2097 * a1__RN_2103));
# 843 "main.c"
t1__RN_2099 = (r23__RN_2095 * (*(x__RN_2015)));
# 844 "main.c"
x1__RN_2105 = ((int)(t1__RN_2099));
# 845 "main.c"
x2__RN_2106 = ((*(x__RN_2015)) - (t23__RN_2097 * x1__RN_2105));
# 846 "main.c"
t1__RN_2099 = ((a1__RN_2103 * x2__RN_2106) + (a2__RN_2104 * x1__RN_2105));
# 847 "main.c"
t2__RN_2100 = ((int)(r23__RN_2095 * t1__RN_2099));
# 848 "main.c"
z__RN_2107 = (t1__RN_2099 - (t23__RN_2097 * t2__RN_2100));
# 849 "main.c"
t3__RN_2101 = ((t23__RN_2097 * z__RN_2107) + (a2__RN_2104 * x2__RN_2106));
# 850 "main.c"
t4__RN_2102 = ((int)(r46__RN_2096 * t3__RN_2101));
# 851 "main.c"
(*(x__RN_2015)) = (t3__RN_2101 - (t46__RN_2098 * t4__RN_2102));
# 852 "main.c"
r__RN_2108 = (r46__RN_2096 * (*(x__RN_2015)));
# 854 "main.c"
return r__RN_2108;
}
# 858 "main.c"
void vranlc(int n__RN_2017, double * x__RN_2018, double a__RN_2019, double y__RN_2020[])
{
# 890 "main.c"
double const r23__RN_2109 = 1.1920928955078125e-07;
# 891 "main.c"
double const r46__RN_2110 = r23__RN_2109 * r23__RN_2109;
# 892 "main.c"
double const t23__RN_2111 = 8.388608e+06;
# 893 "main.c"
double const t46__RN_2112 = t23__RN_2111 * t23__RN_2111;
# 895 "main.c"
double t1__RN_2113;
# 895 "main.c"
double t2__RN_2114;
# 895 "main.c"
double t3__RN_2115;
# 895 "main.c"
double t4__RN_2116;
# 895 "main.c"
double a1__RN_2117;
# 895 "main.c"
double a2__RN_2118;
# 895 "main.c"
double x1__RN_2119;
# 895 "main.c"
double x2__RN_2120;
# 895 "main.c"
double z__RN_2121;
# 897 "main.c"
int i__RN_2122;
# 902 "main.c"
t1__RN_2113 = (r23__RN_2109 * a__RN_2019);
# 903 "main.c"
a1__RN_2117 = ((int)(t1__RN_2113));
# 904 "main.c"
a2__RN_2118 = (a__RN_2019 - (t23__RN_2111 * a1__RN_2117));
# 909 "main.c"
for(i__RN_2122 = (0); i__RN_2122 < n__RN_2017; i__RN_2122++) {
{
{
# 915 "main.c"
t1__RN_2113 = (r23__RN_2109 * (*(x__RN_2018)));
# 916 "main.c"
x1__RN_2119 = ((int)(t1__RN_2113));
# 917 "main.c"
x2__RN_2120 = ((*(x__RN_2018)) - (t23__RN_2111 * x1__RN_2119));
# 918 "main.c"
t1__RN_2113 = ((a1__RN_2117 * x2__RN_2120) + (a2__RN_2118 * x1__RN_2119));
# 919 "main.c"
t2__RN_2114 = ((int)(r23__RN_2109 * t1__RN_2113));
# 920 "main.c"
z__RN_2121 = (t1__RN_2113 - (t23__RN_2111 * t2__RN_2114));
# 921 "main.c"
t3__RN_2115 = ((t23__RN_2111 * z__RN_2121) + (a2__RN_2118 * x2__RN_2120));
# 922 "main.c"
t4__RN_2116 = ((int)(r46__RN_2110 * t3__RN_2115));
# 923 "main.c"
(*(x__RN_2018)) = (t3__RN_2115 - (t46__RN_2112 * t4__RN_2116));
# 924 "main.c"
(y__RN_2020[i__RN_2122]) = (r46__RN_2110 * (*(x__RN_2018)));
}
}
}
# 927 "main.c"
return ;
}
extern long clock(void);
extern long time(long * __RN_1665);
extern __attribute__((const)) double difftime(long __RN_1666, long __RN_1667);
extern long mktime(struct tm * __RN_1668);
extern unsigned long strftime(char * restrict __RN_1669, unsigned long __RN_1670, char const * restrict __RN_1671, struct tm const * restrict __RN_1672);
extern unsigned long strftime_l(char * restrict __RN_1673, unsigned long __RN_1674, char const * restrict __RN_1675, struct tm const * restrict __RN_1676, struct __locale_struct * __RN_1677);
extern struct tm * gmtime(long const * __RN_1678);
extern struct tm * localtime(long const * __RN_1679);
extern struct tm * gmtime_r(long const * restrict __RN_1680, struct tm * restrict __RN_1681);
extern struct tm * localtime_r(long const * restrict __RN_1682, struct tm * restrict __RN_1683);
extern char * asctime(struct tm const * __RN_1684);
extern char * ctime(long const * __RN_1685);
extern char * asctime_r(struct tm const * restrict __RN_1686, char * restrict __RN_1687);
extern char * ctime_r(long const * restrict __RN_1688, char * restrict __RN_1689);
# 282 "/usr/include/time.h"
extern char * * __tzname;
# 283 "/usr/include/time.h"
extern int __daylight;
# 284 "/usr/include/time.h"
extern long __timezone;
# 289 "/usr/include/time.h"
extern char * * tzname;
extern void tzset(void);
# 297 "/usr/include/time.h"
extern int daylight;
# 298 "/usr/include/time.h"
extern long timezone;
extern int stime(long const * __RN_1691);
extern long timegm(struct tm * __RN_1692);
extern long timelocal(struct tm * __RN_1693);
extern __attribute__((const)) int dysize(int __RN_1694);
extern int nanosleep(struct timespec const * __RN_1695, struct timespec * __RN_1696);
extern int clock_getres(int __RN_1697, struct timespec * __RN_1698);
extern int clock_gettime(int __RN_1699, struct timespec * __RN_1700);
extern int clock_settime(int __RN_1701, struct timespec const * __RN_1702);
extern int clock_nanosleep(int __RN_1703, int __RN_1704, struct timespec const * __RN_1705, struct timespec * __RN_1706);
extern int clock_getcpuclockid(int __RN_1707, int * __RN_1708);
extern int timer_create(int __RN_1709, struct sigevent * restrict __RN_1710, void * * restrict __RN_1711);
extern int timer_delete(void * __RN_1712);
extern int timer_settime(void * __RN_1713, int __RN_1714, struct itimerspec const * restrict __RN_1715, struct itimerspec * restrict __RN_1716);
extern int timer_gettime(void * __RN_1717, struct itimerspec * __RN_1718);
extern int timer_getoverrun(void * __RN_1719);
extern int gettimeofday(struct timeval * restrict __RN_1720, struct timezone * restrict __RN_1721);
extern int settimeofday(struct timeval const * __RN_1722, struct timezone const * __RN_1723);
extern int adjtime(struct timeval const * __RN_1724, struct timeval * __RN_1725);
extern int getitimer(int __RN_1726, struct itimerval * __RN_1727);
extern int setitimer(int __RN_1728, struct itimerval const * restrict __RN_1729, struct itimerval * restrict __RN_1730);
extern int utimes(char const * __RN_1731, struct timeval const __RN_1732[2]);
extern int lutimes(char const * __RN_1733, struct timeval const __RN_1734[2]);
extern int futimes(int __RN_1735, struct timeval const __RN_1736[2]);
# 936 "main.c"
void wtime_(double * t__RN_2021)
{
# 938 "main.c"
static int sec__RN_2123 = -(1);
# 939 "main.c"
struct timeval tv__RN_2124;
# 940 "main.c"
gettimeofday(&(tv__RN_2124), (void * )(0));
# 941 "main.c"
if(sec__RN_2123 < (0)) {
# 941 "main.c"
sec__RN_2123 = ((&(tv__RN_2124))->tv_sec);
}
# 942 "main.c"
(*(t__RN_2021)) = ((((&(tv__RN_2124))->tv_sec) - sec__RN_2123) + ((1.0e-6) * ((&(tv__RN_2124))->tv_usec)));
}
extern void * malloc_managed(unsigned long __RN_259);
extern void * calloc_managed(unsigned long __RN_260, unsigned long __RN_261);
extern void free_managed(void * __RN_262);
extern void cfree_managed(void * __RN_263);
extern void * realloc_managed(void * __RN_264, unsigned long __RN_265);
extern void * valloc_managed(unsigned long __RN_266);
extern void * pvalloc_managed(unsigned long __RN_267);
extern void * memalign_managed(unsigned long __RN_268, unsigned long __RN_269);
extern int posix_memalign_managed(void * * __RN_270, unsigned long __RN_271, unsigned long __RN_272);
extern char * tmpnam_managed(char * __RN_273);
double randlc(double * x__RN_2015, double a__RN_2016);
void vranlc(int n__RN_2017, double * x__RN_2018, double a__RN_2019, double y__RN_2020[]);
void timer_clear(int n__RN_1992);
void timer_start(int n__RN_1993);
void timer_stop(int n__RN_1994);
double timer_read(int n__RN_1995);
void print_results(char * name__RN_1996, char class__RN_1997, int n1__RN_1998, int n2__RN_1999, int n3__RN_2000, int niter__RN_2001, double t__RN_2002, double mops__RN_2003, char * optype__RN_2004, enum anon_type_31_logical verified__RN_2005, char * npbversion__RN_2006, char * compiletime__RN_2007, char * cs1__RN_2008, char * cs2__RN_2009, char * cs3__RN_2010, char * cs4__RN_2011, char * cs5__RN_2012, char * cs6__RN_2013, char * cs7__RN_2014);
# 1019 "main.c"
unsigned int nz = ((1500000) * ((21) + (1))) * ((21) + (1));
# 1020 "main.c"
unsigned int naz = (1500000) * ((21) + (1));
# 1021 "main.c"
unsigned int na = 1500000;
# 1023 "main.c"
static int * colidx;
# 1024 "main.c"
static int * rowstr;
# 1025 "main.c"
static int * iv;
# 1026 "main.c"
static int * arow;
# 1027 "main.c"
static int * acol;
# 1030 "main.c"
static double * aelt;
# 1031 "main.c"
static double * a;
# 1032 "main.c"
static double * x;
# 1033 "main.c"
static double * z;
# 1034 "main.c"
static double * p;
# 1035 "main.c"
static double * q;
# 1036 "main.c"
static double * r;
# 1039 "main.c"
static int naa;
# 1040 "main.c"
static int nzz;
# 1041 "main.c"
static int firstrow;
# 1042 "main.c"
static int lastrow;
# 1043 "main.c"
static int firstcol;
# 1044 "main.c"
static int lastcol;
# 1047 "main.c"
static double amult;
# 1048 "main.c"
static double tran;
# 1051 "main.c"
static enum anon_type_31_logical timeron;
static void conj_grad(int colidx__RN_2024[], int rowstr__RN_2025[], double x__RN_2026[], double z__RN_2027[], double a__RN_2028[], double p__RN_2029[], double q__RN_2030[], double r__RN_2031[], double * rnorm__RN_2032);
static void makea(int n__RN_2033, int nz__RN_2034, double a__RN_2035[], int colidx__RN_2036[], int rowstr__RN_2037[], int firstrow__RN_2038, int lastrow__RN_2039, int firstcol__RN_2040, int lastcol__RN_2041, int arow__RN_2042[], int acol__RN_2043[], double aelt__RN_2044[], int iv__RN_2045[]);
static void sparse(double a__RN_2046[], int colidx__RN_2047[], int rowstr__RN_2048[], int n__RN_2049, int nz__RN_2050, int nozer__RN_2051, int arow__RN_2052[], int acol__RN_2053[], double aelt__RN_2054[], int firstrow__RN_2055, int lastrow__RN_2056, int nzloc__RN_2057[], double rcond__RN_2058, double shift__RN_2059);
static void sprnvc(int n__RN_2060, int nz__RN_2061, int nn1__RN_2062, double v__RN_2063[], int iv__RN_2064[]);
static int icnvrt(double x__RN_2065, int ipwr2__RN_2066);
static void vecset(int n__RN_2067, double v__RN_2068[], int iv__RN_2069[], int * nzv__RN_2070, int i__RN_2071, double val__RN_2072);
# 1095 "main.c"
static int conj_calls = 0;
# 1096 "main.c"
static int loop_iter = 0;
# 1100 "main.c"
int main(int argc__RN_2022, char * argv__RN_2023[])
{
__macc_init();
{
# 1102 "main.c"
start = (malloc_managed((64) * (sizeof(double))));
# 1103 "main.c"
elapsed = (malloc_managed((64) * (sizeof(double))));
# 1104 "main.c"
__tzname = (malloc_managed((2) * (sizeof(char * ))));
# 1105 "main.c"
tzname = (malloc_managed((2) * (sizeof(char * ))));
# 1106 "main.c"
colidx = (malloc_managed((726000000) * (sizeof(int))));
# 1107 "main.c"
rowstr = (malloc_managed((1500001) * (sizeof(int))));
# 1108 "main.c"
iv = (malloc_managed((1500000) * (sizeof(int))));
# 1109 "main.c"
arow = (malloc_managed((1500000) * (sizeof(int))));
# 1110 "main.c"
acol = (malloc_managed((33000000) * (sizeof(int))));
# 1111 "main.c"
aelt = (malloc_managed((33000000) * (sizeof(double))));
# 1112 "main.c"
a = (malloc_managed((726000000) * (sizeof(double))));
# 1113 "main.c"
x = (malloc_managed((1500002) * (sizeof(double))));
# 1114 "main.c"
z = (malloc_managed((1500002) * (sizeof(double))));
# 1115 "main.c"
p = (malloc_managed((1500002) * (sizeof(double))));
# 1116 "main.c"
q = (malloc_managed((1500002) * (sizeof(double))));
# 1117 "main.c"
r = (malloc_managed((1500002) * (sizeof(double))));
{
# 1102 "main.c"
int i__RN_2125;
# 1102 "main.c"
int j__RN_2126;
# 1102 "main.c"
int k__RN_2127;
# 1102 "main.c"
int it__RN_2128;
# 1103 "main.c"
int end__RN_2129;
# 1105 "main.c"
double zeta__RN_2130;
# 1106 "main.c"
double rnorm__RN_2131;
# 1107 "main.c"
double norm_temp1__RN_2132;
# 1107 "main.c"
double norm_temp2__RN_2133;
# 1109 "main.c"
double t__RN_2134;
# 1109 "main.c"
double mflops__RN_2135;
# 1109 "main.c"
double tmax__RN_2136;
# 1110 "main.c"
char Class__RN_2137;
# 1111 "main.c"
int verified__RN_2138;
# 1112 "main.c"
double zeta_verify_value__RN_2139;
# 1112 "main.c"
double epsilon__RN_2140;
# 1112 "main.c"
double err__RN_2141;
# 1114 "main.c"
char * t_names__RN_2142[3];
# 1115 "main.c"
acc_init(acc_device_default);
# 1117 "main.c"
for(i__RN_2125 = (0); i__RN_2125 < (3); i__RN_2125++) {
{
{
# 1118 "main.c"
timer_clear(i__RN_2125);
}
}
}
{
# 1121 "main.c"
struct _IO_FILE * fp__RN_2196;
# 1122 "main.c"
if((fp__RN_2196 = (fopen("timer.flag", "r"))) != ((void * )(0))) {
# 1123 "main.c"
timeron = true;
# 1124 "main.c"
(t_names__RN_2142[0]) = ("init");
# 1125 "main.c"
(t_names__RN_2142[1]) = ("benchmk");
# 1126 "main.c"
(t_names__RN_2142[2]) = ("conjgd");
# 1127 "main.c"
fclose(fp__RN_2196);
}
else {
# 1129 "main.c"
timeron = false;
}
# 1132 "main.c"
timer_start(0);
# 1134 "main.c"
firstrow = (0);
# 1135 "main.c"
lastrow = ((1500000) - (1));
# 1136 "main.c"
firstcol = (0);
# 1137 "main.c"
lastcol = ((1500000) - (1));
# 1139 "main.c"
if(((((1500000) == (1400)) && ((21) == (7))) && ((100) == (15))) && ((500.0) == (10))) {
# 1140 "main.c"
Class__RN_2137 = ((char)(83));
# 1141 "main.c"
zeta_verify_value__RN_2139 = (8.5971775078648);
}
else {
# 1142 "main.c"
if(((((1500000) == (7000)) && ((21) == (8))) && ((100) == (15))) && ((500.0) == (12))) {
# 1143 "main.c"
Class__RN_2137 = ((char)(87));
# 1144 "main.c"
zeta_verify_value__RN_2139 = (10.362595087124);
}
else {
# 1145 "main.c"
if(((((1500000) == (14000)) && ((21) == (11))) && ((100) == (15))) && ((500.0) == (20))) {
# 1146 "main.c"
Class__RN_2137 = ((char)(65));
# 1147 "main.c"
zeta_verify_value__RN_2139 = (17.130235054029);
}
else {
# 1148 "main.c"
if(((((1500000) == (75000)) && ((21) == (13))) && ((100) == (75))) && ((500.0) == (60))) {
# 1149 "main.c"
Class__RN_2137 = ((char)(66));
# 1150 "main.c"
zeta_verify_value__RN_2139 = (22.712745482631);
}
else {
# 1151 "main.c"
if(((((1500000) == (150000)) && ((21) == (15))) && ((100) == (75))) && ((500.0) == (110))) {
# 1152 "main.c"
Class__RN_2137 = ((char)(67));
# 1153 "main.c"
zeta_verify_value__RN_2139 = (28.973605592845);
}
else {
# 1154 "main.c"
if(((((1500000) == (1500000)) && ((21) == (21))) && ((100) == (100))) && ((500.0) == (500))) {
# 1155 "main.c"
Class__RN_2137 = ((char)(68));
# 1156 "main.c"
zeta_verify_value__RN_2139 = (52.514532105794);
}
else {
# 1157 "main.c"
if(((((1500000) == (9000000)) && ((21) == (26))) && ((100) == (100))) && ((500.0) == (1500))) {
# 1158 "main.c"
Class__RN_2137 = ((char)(69));
# 1159 "main.c"
zeta_verify_value__RN_2139 = (77.522164599383);
}
else {
# 1161 "main.c"
Class__RN_2137 = ((char)(85));
}
}
}
}
}
}
}
# 1164 "main.c"
printf("\n\n NAS Parallel Benchmarks (NPB3.3-ACC-C) - CG Benchmark\n\n");
# 1165 "main.c"
printf(" Size: %11d\n", 1500000);
# 1166 "main.c"
printf(" Iterations: %5d\n", 100);
# 1167 "main.c"
printf("\n");
# 1169 "main.c"
naa = (1500000);
# 1170 "main.c"
nzz = (((1500000) * ((21) + (1))) * ((21) + (1)));
# 1175 "main.c"
tran = (314159265.0);
# 1176 "main.c"
amult = (1220703125.0);
# 1177 "main.c"
zeta__RN_2130 = (randlc(&(tran), amult));
# 1182 "main.c"
makea(naa, nzz, a, colidx, rowstr, firstrow, lastrow, firstcol, lastcol, arow, (void * )(acol), (void * )(aelt), iv);
# 1197 "main.c"
for(j__RN_2126 = (0); j__RN_2126 < ((lastrow - firstrow) + (1)); j__RN_2126++) {
{
{
# 1198 "main.c"
for(k__RN_2127 = (rowstr[j__RN_2126]); k__RN_2127 < (rowstr[(j__RN_2126 + (1))]); k__RN_2127++) {
{
{
# 1199 "main.c"
(colidx[k__RN_2127]) = ((colidx[k__RN_2127]) - firstcol);
}
}
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
# 1213 "main.c"
int na_gangs__RN_2206 = (1500000) + (1);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_i__RN_2125_loop_lb_set[10];
static int __macc_i__RN_2125_loop_ub_set[10];
__macc_region_is_changed = __macc_region_is_changed;
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
}
{
__macc_calc_loop_region(__macc_i__RN_2125_loop_lb_set, __macc_i__RN_2125_loop_ub_set, 0, ((1500000) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i__RN_2125_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i__RN_2125_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = x;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_x_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_x_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_x_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_x_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i__RN_2125_loop_lb_set, __macc_i__RN_2125_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i__RN_2125 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i__RN_2125_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i__RN_2125_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((na_gangs__RN_2206 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (na_gangs__RN_2206 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1215 "main.c"
for(i__RN_2125 = __macc_top_loop_lb; i__RN_2125 <= __macc_top_loop_ub; i__RN_2125++) {
{
{
# 1216 "main.c"
(x[i__RN_2125]) = (1.0);
}
}
}
}
}
}
# 1219 "main.c"
end__RN_2129 = ((lastcol - firstcol) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[4];
static int __macc_use_types[4];
static int * __macc_use_lb_sets[4];
static int * __macc_use_ub_sets[4];
static int __macc_def_types[4];
static int * __macc_def_lb_sets[4];
static int * __macc_def_ub_sets[4];
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
static int __macc_end__RN_2129_last;
static int __macc_j__RN_2126_loop_lb_set[10];
static int __macc_j__RN_2126_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2129 != __macc_end__RN_2129_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2129_last = end__RN_2129;
}
{
__macc_calc_loop_region(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set, 0, end__RN_2129 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = p;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_p_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_p_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_p_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_p_def_ub_set;
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
(__macc_ptrs[1]) = q;
(__macc_use_types[1]) = (1);
(__macc_use_lb_sets[1]) = __macc_q_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_q_use_ub_set;
(__macc_def_types[1]) = (2);
(__macc_def_lb_sets[1]) = __macc_q_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_q_def_ub_set;
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
(__macc_ptrs[2]) = r;
(__macc_use_types[2]) = (1);
(__macc_use_lb_sets[2]) = __macc_r_use_lb_set;
(__macc_use_ub_sets[2]) = __macc_r_use_ub_set;
(__macc_def_types[2]) = (2);
(__macc_def_lb_sets[2]) = __macc_r_def_lb_set;
(__macc_def_ub_sets[2]) = __macc_r_def_ub_set;
}
{
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
(__macc_ptrs[3]) = z;
(__macc_use_types[3]) = (1);
(__macc_use_lb_sets[3]) = __macc_z_use_lb_set;
(__macc_use_ub_sets[3]) = __macc_z_use_ub_set;
(__macc_def_types[3]) = (2);
(__macc_def_lb_sets[3]) = __macc_z_def_lb_set;
(__macc_def_ub_sets[3]) = __macc_z_def_ub_set;
}
}
}
if((__macc_region_is_overlapping(__macc_z_def_lb_set, __macc_z_def_ub_set)) || ((__macc_region_is_overlapping(__macc_r_def_lb_set, __macc_r_def_ub_set)) || ((__macc_region_is_overlapping(__macc_q_def_lb_set, __macc_q_def_ub_set)) || (__macc_region_is_overlapping(__macc_p_def_lb_set, __macc_p_def_ub_set))))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_def_lb_set, __macc_z_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r_def_lb_set, __macc_r_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_q_def_lb_set, __macc_q_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_def_lb_set, __macc_p_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j__RN_2126 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 4, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2129 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2129 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1221 "main.c"
for(j__RN_2126 = __macc_top_loop_lb; j__RN_2126 <= __macc_top_loop_ub; j__RN_2126++) {
{
{
# 1222 "main.c"
(q[j__RN_2126]) = (0.0);
# 1223 "main.c"
(z[j__RN_2126]) = (0.0);
# 1224 "main.c"
(r[j__RN_2126]) = (0.0);
# 1225 "main.c"
(p[j__RN_2126]) = (0.0);
}
}
}
}
}
}
# 1228 "main.c"
zeta__RN_2130 = (0.0);
# 1235 "main.c"
for(it__RN_2128 = (1); it__RN_2128 <= (1); it__RN_2128++) {
{
{
# 1239 "main.c"
conj_grad(colidx, rowstr, x, z, a, p, q, r, &(rnorm__RN_2131));
# 1247 "main.c"
norm_temp1__RN_2132 = (0.0);
# 1248 "main.c"
norm_temp2__RN_2133 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_end__RN_2129_last;
static int __macc_j__RN_2126_loop_lb_set[10];
static int __macc_j__RN_2126_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2129 != __macc_end__RN_2129_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2129_last = end__RN_2129;
}
{
__macc_calc_loop_region(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set, 0, end__RN_2129 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = z;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_z_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_z_use_ub_set;
(__macc_def_types[0]) = (1);
(__macc_def_lb_sets[0]) = __macc_z_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_z_def_ub_set;
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : norm_temp2__RN_2133 ) private ( j__RN_2126 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2129 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2129 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : norm_temp2__RN_2133 )
#pragma acc loop
# 1251 "main.c"
for(j__RN_2126 = __macc_top_loop_lb; j__RN_2126 <= __macc_top_loop_ub; j__RN_2126++) {
{
{
# 1253 "main.c"
norm_temp2__RN_2133 = (norm_temp2__RN_2133 + ((z[j__RN_2126]) * (z[j__RN_2126])));
}
}
}
}
}
}
# 1256 "main.c"
norm_temp2__RN_2133 = ((1.0) / (__builtin_sqrt(norm_temp2__RN_2133)));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_end__RN_2129_last;
static int __macc_j__RN_2126_loop_lb_set[10];
static int __macc_j__RN_2126_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2129 != __macc_end__RN_2129_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2129_last = end__RN_2129;
}
{
__macc_calc_loop_region(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set, 0, end__RN_2129 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = x;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_x_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_x_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_x_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_x_def_ub_set;
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
(__macc_ptrs[1]) = z;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_z_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_z_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_z_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_z_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j__RN_2126 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2129 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2129 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1262 "main.c"
for(j__RN_2126 = __macc_top_loop_lb; j__RN_2126 <= __macc_top_loop_ub; j__RN_2126++) {
{
{
# 1263 "main.c"
(x[j__RN_2126]) = (norm_temp2__RN_2133 * (z[j__RN_2126]));
}
}
}
}
}
}
}
}
}
# 1271 "main.c"
na_gangs__RN_2206 = ((1500000) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_i__RN_2125_loop_lb_set[10];
static int __macc_i__RN_2125_loop_ub_set[10];
__macc_region_is_changed = __macc_region_is_changed;
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
}
{
__macc_calc_loop_region(__macc_i__RN_2125_loop_lb_set, __macc_i__RN_2125_loop_ub_set, 0, ((1500000) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_i__RN_2125_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_i__RN_2125_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = x;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_x_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_x_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_x_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_x_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i__RN_2125_loop_lb_set, __macc_i__RN_2125_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i__RN_2125 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i__RN_2125_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i__RN_2125_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((na_gangs__RN_2206 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (na_gangs__RN_2206 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1273 "main.c"
for(i__RN_2125 = __macc_top_loop_lb; i__RN_2125 <= __macc_top_loop_ub; i__RN_2125++) {
{
{
# 1274 "main.c"
(x[i__RN_2125]) = (1.0);
}
}
}
}
}
}
# 1277 "main.c"
zeta__RN_2130 = (0.0);
# 1279 "main.c"
timer_stop(0);
# 1281 "main.c"
printf(" Initialization time = %15.3f seconds\n", timer_read(0));
# 1283 "main.c"
timer_start(1);
# 1290 "main.c"
for(it__RN_2128 = (1); it__RN_2128 <= (100); it__RN_2128++) {
{
{
# 1294 "main.c"
conj_grad(colidx, rowstr, x, z, a, p, q, r, &(rnorm__RN_2131));
# 1302 "main.c"
norm_temp1__RN_2132 = (0.0);
# 1303 "main.c"
norm_temp2__RN_2133 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_end__RN_2129_last;
static int __macc_j__RN_2126_loop_lb_set[10];
static int __macc_j__RN_2126_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2129 != __macc_end__RN_2129_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2129_last = end__RN_2129;
}
{
__macc_calc_loop_region(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set, 0, end__RN_2129 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = x;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_x_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_x_use_ub_set;
(__macc_def_types[0]) = (1);
(__macc_def_lb_sets[0]) = __macc_x_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_x_def_ub_set;
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
(__macc_ptrs[1]) = z;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_z_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_z_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_z_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_z_def_ub_set;
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x_use_lb_set, __macc_x_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : norm_temp1__RN_2132 ) reduction ( + : norm_temp2__RN_2133 ) private ( j__RN_2126 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2129 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2129 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : norm_temp1__RN_2132 , norm_temp2__RN_2133 )
#pragma acc loop gang worker vector
# 1306 "main.c"
for(j__RN_2126 = __macc_top_loop_lb; j__RN_2126 <= __macc_top_loop_ub; j__RN_2126++) {
{
{
# 1307 "main.c"
norm_temp1__RN_2132 = (norm_temp1__RN_2132 + ((x[j__RN_2126]) * (z[j__RN_2126])));
# 1308 "main.c"
norm_temp2__RN_2133 = (norm_temp2__RN_2133 + ((z[j__RN_2126]) * (z[j__RN_2126])));
}
}
}
}
}
}
# 1311 "main.c"
norm_temp2__RN_2133 = ((1.0) / (__builtin_sqrt(norm_temp2__RN_2133)));
# 1313 "main.c"
zeta__RN_2130 = ((500.0) + ((1.0) / norm_temp1__RN_2132));
# 1314 "main.c"
if(it__RN_2128 == (1)) {
# 1315 "main.c"
printf("\n   iteration           ||r||                 zeta\n");
}
# 1316 "main.c"
printf("    %5d       %20.14E%20.13f\n", it__RN_2128, rnorm__RN_2131, zeta__RN_2130);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_z_def_ub_set[10];
static int __macc_z_def_lb_set[10];
static int __macc_z_use_ub_set[10];
static int __macc_z_use_lb_set[10];
static int __macc_x_def_ub_set[10];
static int __macc_x_def_lb_set[10];
static int __macc_x_use_ub_set[10];
static int __macc_x_use_lb_set[10];
static int __macc_end__RN_2129_last;
static int __macc_j__RN_2126_loop_lb_set[10];
static int __macc_j__RN_2126_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2129 != __macc_end__RN_2129_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2129_last = end__RN_2129;
}
{
__macc_calc_loop_region(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set, 0, end__RN_2129 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_gpu_num]);
}
{
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
(__macc_ptrs[0]) = x;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_x_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_x_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_x_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_x_def_ub_set;
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
(__macc_ptrs[1]) = z;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_z_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_z_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_z_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_z_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_x_def_lb_set, __macc_x_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2126_loop_lb_set, __macc_j__RN_2126_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_z_use_lb_set, __macc_z_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_x_def_lb_set, __macc_x_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j__RN_2126 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2126_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2126_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2129 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2129 + (127)) / (128) );
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector
# 1322 "main.c"
for(j__RN_2126 = __macc_top_loop_lb; j__RN_2126 <= __macc_top_loop_ub; j__RN_2126++) {
{
{
# 1323 "main.c"
(x[j__RN_2126]) = (norm_temp2__RN_2133 * (z[j__RN_2126]));
}
}
}
}
}
}
}
}
}
# 1327 "main.c"
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
# 1334 "main.c"
t__RN_2134 = (timer_read(1));
# 1336 "main.c"
printf(" Benchmark completed\n");
# 1338 "main.c"
epsilon__RN_2140 = (1.0e-10);
# 1339 "main.c"
if(Class__RN_2137 != ((char)(85))) {
# 1340 "main.c"
err__RN_2141 = ((__builtin_fabs(zeta__RN_2130 - zeta_verify_value__RN_2139)) / zeta_verify_value__RN_2139);
# 1341 "main.c"
if(err__RN_2141 <= epsilon__RN_2140) {
# 1342 "main.c"
verified__RN_2138 = true;
# 1343 "main.c"
printf(" VERIFICATION SUCCESSFUL\n");
# 1344 "main.c"
printf(" Zeta is    %20.13E\n", zeta__RN_2130);
# 1345 "main.c"
printf(" Error is   %20.13E\n", err__RN_2141);
}
else {
# 1347 "main.c"
verified__RN_2138 = false;
# 1348 "main.c"
printf(" VERIFICATION FAILED\n");
# 1349 "main.c"
printf(" Zeta                %20.13E\n", zeta__RN_2130);
# 1350 "main.c"
printf(" The correct zeta is %20.13E\n", zeta_verify_value__RN_2139);
}
}
else {
# 1353 "main.c"
verified__RN_2138 = false;
# 1354 "main.c"
printf(" Problem size unknown\n");
# 1355 "main.c"
printf(" NO VERIFICATION PERFORMED\n");
}
# 1358 "main.c"
if(t__RN_2134 != (0.0)) {
# 1359 "main.c"
mflops__RN_2135 = (((((double)(((2) * (100)) * (1500000))) * ((((3.0) + ((double)((21) * ((21) + (1))))) + ((25.0) * ((5.0) + ((double)((21) * ((21) + (1))))))) + (3.0))) / t__RN_2134) / (1000000.0));
}
else {
# 1364 "main.c"
mflops__RN_2135 = (0.0);
}
# 1367 "main.c"
print_results("CG", Class__RN_2137, 1500000, 0, 0, 100, t__RN_2134, mflops__RN_2135, "          floating point", verified__RN_2138, "3.3.1", "04 Dec 2017", "icc", "icc", "-lm", "-I../common", "-O3 -mcmodel=medium", "-O3 -mcmodel=medium", "randdp");
# 1376 "main.c"
if(timeron) {
# 1377 "main.c"
tmax__RN_2136 = (timer_read(1));
# 1378 "main.c"
if(tmax__RN_2136 == (0.0)) {
# 1378 "main.c"
tmax__RN_2136 = (1.0);
}
# 1379 "main.c"
printf("  SECTION   Time (secs)\n");
# 1380 "main.c"
for(i__RN_2125 = (0); i__RN_2125 < (3); i__RN_2125++) {
{
{
# 1381 "main.c"
t__RN_2134 = (timer_read(i__RN_2125));
# 1382 "main.c"
if(i__RN_2125 == (0)) {
# 1383 "main.c"
printf("  %8s:%9.3f\n", t_names__RN_2142[i__RN_2125], t__RN_2134);
}
else {
# 1385 "main.c"
printf("  %8s:%9.3f  (%6.2f%%)\n", t_names__RN_2142[i__RN_2125], t__RN_2134, (t__RN_2134 * (100.0)) / tmax__RN_2136);
# 1386 "main.c"
if(i__RN_2125 == (2)) {
# 1387 "main.c"
t__RN_2134 = (tmax__RN_2136 - t__RN_2134);
# 1388 "main.c"
printf("    --> %8s:%9.3f  (%6.2f%%)\n", "rest", t__RN_2134, (t__RN_2134 * (100.0)) / tmax__RN_2136);
}
}
}
}
}
}
# 1394 "main.c"
acc_shutdown(acc_device_default);
# 1395 "main.c"
printf("conj calls=%d, loop iter = %d. \n", conj_calls, loop_iter);
# 1397 "main.c"
return 0;
}
}
}
}
# 1405 "main.c"
static void conj_grad(int colidx__RN_2024[], int rowstr__RN_2025[], double x__RN_2026[], double z__RN_2027[], double a__RN_2028[], double p__RN_2029[], double q__RN_2030[], double r__RN_2031[], double * rnorm__RN_2032)
{
# 1415 "main.c"
int j__RN_2143;
# 1415 "main.c"
int k__RN_2144;
# 1415 "main.c"
int tmp1__RN_2145;
# 1415 "main.c"
int tmp2__RN_2146;
# 1415 "main.c"
int tmp3__RN_2147;
# 1416 "main.c"
int end__RN_2148;
# 1417 "main.c"
int cgit__RN_2149;
# 1417 "main.c"
int cgitmax__RN_2150 = 25;
# 1418 "main.c"
double d__RN_2151;
# 1418 "main.c"
double sum__RN_2152;
# 1418 "main.c"
double rho__RN_2153;
# 1418 "main.c"
double rho0__RN_2154;
# 1418 "main.c"
double alpha__RN_2155;
# 1418 "main.c"
double beta__RN_2156;
# 1419 "main.c"
double sum_array__RN_2157[1500002];
# 1420 "main.c"
conj_calls++;
# 1421 "main.c"
rho__RN_2153 = (0.0);
{
# 1422 "main.c"
unsigned int num_gangs__RN_2197 = 0;
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
static void * __macc_ptrs[5];
static int __macc_use_types[5];
static int * __macc_use_lb_sets[5];
static int * __macc_use_ub_sets[5];
static int __macc_def_types[5];
static int * __macc_def_lb_sets[5];
static int * __macc_def_ub_sets[5];
static int __macc_x__RN_2026_def_ub_set[10];
static int __macc_x__RN_2026_def_lb_set[10];
static int __macc_x__RN_2026_use_ub_set[10];
static int __macc_x__RN_2026_use_lb_set[10];
static int __macc_z__RN_2027_def_ub_set[10];
static int __macc_z__RN_2027_def_lb_set[10];
static int __macc_z__RN_2027_use_ub_set[10];
static int __macc_z__RN_2027_use_lb_set[10];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_q__RN_2030_def_ub_set[10];
static int __macc_q__RN_2030_def_lb_set[10];
static int __macc_q__RN_2030_use_ub_set[10];
static int __macc_q__RN_2030_use_lb_set[10];
static int __macc_p__RN_2029_def_ub_set[10];
static int __macc_p__RN_2029_def_lb_set[10];
static int __macc_p__RN_2029_use_ub_set[10];
static int __macc_p__RN_2029_use_lb_set[10];
static int __macc_naa_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (naa != __macc_naa_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_naa_last = naa;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, naa - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
(__macc_ptrs[0]) = p__RN_2029;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_p__RN_2029_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_p__RN_2029_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_p__RN_2029_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_p__RN_2029_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
}
(__macc_ptrs[1]) = q__RN_2030;
(__macc_use_types[1]) = (1);
(__macc_use_lb_sets[1]) = __macc_q__RN_2030_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_q__RN_2030_use_ub_set;
(__macc_def_types[1]) = (2);
(__macc_def_lb_sets[1]) = __macc_q__RN_2030_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_q__RN_2030_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[2]) = r__RN_2031;
(__macc_use_types[2]) = (2);
(__macc_use_lb_sets[2]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[2]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[2]) = (2);
(__macc_def_lb_sets[2]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[2]) = __macc_r__RN_2031_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(z__RN_2027, __macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_adjust_data_region(z__RN_2027, __macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
}
(__macc_ptrs[3]) = z__RN_2027;
(__macc_use_types[3]) = (1);
(__macc_use_lb_sets[3]) = __macc_z__RN_2027_use_lb_set;
(__macc_use_ub_sets[3]) = __macc_z__RN_2027_use_ub_set;
(__macc_def_types[3]) = (2);
(__macc_def_lb_sets[3]) = __macc_z__RN_2027_def_lb_set;
(__macc_def_ub_sets[3]) = __macc_z__RN_2027_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x__RN_2026_def_lb_set, __macc_x__RN_2026_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(x__RN_2026, __macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set);
__macc_adjust_data_region(x__RN_2026, __macc_gpu_num, __macc_x__RN_2026_def_lb_set, __macc_x__RN_2026_def_ub_set);
}
(__macc_ptrs[4]) = x__RN_2026;
(__macc_use_types[4]) = (2);
(__macc_use_lb_sets[4]) = __macc_x__RN_2026_use_lb_set;
(__macc_use_ub_sets[4]) = __macc_x__RN_2026_use_ub_set;
(__macc_def_types[4]) = (1);
(__macc_def_lb_sets[4]) = __macc_x__RN_2026_def_lb_set;
(__macc_def_ub_sets[4]) = __macc_x__RN_2026_def_ub_set;
}
}
}
if((__macc_region_is_overlapping(__macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set)) || ((__macc_region_is_overlapping(__macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set)) || ((__macc_region_is_overlapping(__macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set)) || (__macc_region_is_overlapping(__macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set))))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 5, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((naa + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (naa + (127)) / (128) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector independent
# 1433 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1434 "main.c"
(q__RN_2030[j__RN_2143]) = (0.0);
# 1435 "main.c"
(z__RN_2027[j__RN_2143]) = (0.0);
# 1436 "main.c"
(r__RN_2031[j__RN_2143]) = (x__RN_2026[j__RN_2143]);
# 1437 "main.c"
(p__RN_2029[j__RN_2143]) = (r__RN_2031[j__RN_2143]);
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_firstcol_last;
static int __macc_lastcol_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((lastcol != __macc_lastcol_last) || (firstcol != __macc_firstcol_last)));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_lastcol_last = lastcol;
__macc_firstcol_last = firstcol;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, ((lastcol - firstcol) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[0]) = r__RN_2031;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[0]) = (1);
(__macc_def_lb_sets[0]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_r__RN_2031_def_ub_set;
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : rho__RN_2153 ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((((lastcol - firstcol) + (1)) + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (((lastcol - firstcol) + (1)) + (127)) / (128) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : rho__RN_2153 )
#pragma acc loop gang worker vector
# 1447 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1448 "main.c"
rho__RN_2153 = (rho__RN_2153 + ((r__RN_2031[j__RN_2143]) * (r__RN_2031[j__RN_2143])));
}
}
}
}
}
}
# 1457 "main.c"
for(cgit__RN_2149 = (1); cgit__RN_2149 <= cgitmax__RN_2150; cgit__RN_2149++) {
{
{
# 1484 "main.c"
loop_iter++;
# 1486 "main.c"
end__RN_2148 = ((lastrow - firstrow) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[5];
static int __macc_use_types[5];
static int * __macc_use_lb_sets[5];
static int * __macc_use_ub_sets[5];
static int __macc_def_types[5];
static int * __macc_def_lb_sets[5];
static int * __macc_def_ub_sets[5];
static int __macc_rowstr__RN_2025_def_ub_set[10];
static int __macc_rowstr__RN_2025_def_lb_set[10];
static int __macc_rowstr__RN_2025_use_ub_set[10];
static int __macc_rowstr__RN_2025_use_lb_set[10];
static int __macc_p__RN_2029_def_ub_set[10];
static int __macc_p__RN_2029_def_lb_set[10];
static int __macc_p__RN_2029_use_ub_set[10];
static int __macc_p__RN_2029_use_lb_set[10];
static int __macc_colidx__RN_2024_def_ub_set[10];
static int __macc_colidx__RN_2024_def_lb_set[10];
static int __macc_colidx__RN_2024_use_ub_set[10];
static int __macc_colidx__RN_2024_use_lb_set[10];
static int __macc_a__RN_2028_def_ub_set[10];
static int __macc_a__RN_2028_def_lb_set[10];
static int __macc_a__RN_2028_use_ub_set[10];
static int __macc_a__RN_2028_use_lb_set[10];
static int __macc_q__RN_2030_def_ub_set[10];
static int __macc_q__RN_2030_def_lb_set[10];
static int __macc_q__RN_2030_use_ub_set[10];
static int __macc_q__RN_2030_use_lb_set[10];
static int __macc_end__RN_2148_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2148 != __macc_end__RN_2148_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2148_last = end__RN_2148;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, end__RN_2148 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
}
(__macc_ptrs[0]) = q__RN_2030;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_q__RN_2030_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_q__RN_2030_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_q__RN_2030_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_q__RN_2030_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_a__RN_2028_def_lb_set, __macc_a__RN_2028_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set, tmp1__RN_2145);
__macc_update_access_region(__macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set, tmp2__RN_2146 - (1));
}
{
}
__macc_adjust_data_region(a__RN_2028, __macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set);
__macc_adjust_data_region(a__RN_2028, __macc_gpu_num, __macc_a__RN_2028_def_lb_set, __macc_a__RN_2028_def_ub_set);
}
(__macc_ptrs[1]) = a__RN_2028;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_a__RN_2028_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_a__RN_2028_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_a__RN_2028_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_a__RN_2028_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_colidx__RN_2024_def_lb_set, __macc_colidx__RN_2024_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set, tmp1__RN_2145);
__macc_update_access_region(__macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set, tmp2__RN_2146 - (1));
}
{
}
__macc_adjust_data_region(colidx__RN_2024, __macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set);
__macc_adjust_data_region(colidx__RN_2024, __macc_gpu_num, __macc_colidx__RN_2024_def_lb_set, __macc_colidx__RN_2024_def_ub_set);
}
(__macc_ptrs[2]) = colidx__RN_2024;
(__macc_use_types[2]) = (2);
(__macc_use_lb_sets[2]) = __macc_colidx__RN_2024_use_lb_set;
(__macc_use_ub_sets[2]) = __macc_colidx__RN_2024_use_ub_set;
(__macc_def_types[2]) = (1);
(__macc_def_lb_sets[2]) = __macc_colidx__RN_2024_def_lb_set;
(__macc_def_ub_sets[2]) = __macc_colidx__RN_2024_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
{
}
{
}
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
(__macc_ptrs[3]) = p__RN_2029;
(__macc_use_types[3]) = (0);
(__macc_use_lb_sets[3]) = __macc_p__RN_2029_use_lb_set;
(__macc_use_ub_sets[3]) = __macc_p__RN_2029_use_ub_set;
(__macc_def_types[3]) = (1);
(__macc_def_lb_sets[3]) = __macc_p__RN_2029_def_lb_set;
(__macc_def_ub_sets[3]) = __macc_p__RN_2029_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_def_lb_set, __macc_rowstr__RN_2025_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_lb + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_ub + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(rowstr__RN_2025, __macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set);
__macc_adjust_data_region(rowstr__RN_2025, __macc_gpu_num, __macc_rowstr__RN_2025_def_lb_set, __macc_rowstr__RN_2025_def_ub_set);
}
(__macc_ptrs[4]) = rowstr__RN_2025;
(__macc_use_types[4]) = (2);
(__macc_use_lb_sets[4]) = __macc_rowstr__RN_2025_use_lb_set;
(__macc_use_ub_sets[4]) = __macc_rowstr__RN_2025_use_ub_set;
(__macc_def_types[4]) = (1);
(__macc_def_lb_sets[4]) = __macc_rowstr__RN_2025_def_lb_set;
(__macc_def_ub_sets[4]) = __macc_rowstr__RN_2025_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : sum__RN_2152 ) private ( j__RN_2143 , k__RN_2144 , tmp1__RN_2145 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 5, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((end__RN_2148 + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : end__RN_2148 );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang
# 1491 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1492 "main.c"
tmp1__RN_2145 = (rowstr__RN_2025[j__RN_2143]);
# 1493 "main.c"
tmp2__RN_2146 = (rowstr__RN_2025[j__RN_2143 + (1)]);
# 1494 "main.c"
sum__RN_2152 = (0.0);
#pragma acc loop worker vector reduction ( + : sum__RN_2152 )
# 1496 "main.c"
for(k__RN_2144 = tmp1__RN_2145; k__RN_2144 < tmp2__RN_2146; k__RN_2144++) {
{
{
# 1497 "main.c"
tmp3__RN_2147 = (colidx__RN_2024[k__RN_2144]);
# 1498 "main.c"
sum__RN_2152 = (sum__RN_2152 + ((a__RN_2028[k__RN_2144]) * (p__RN_2029[tmp3__RN_2147])));
}
}
}
# 1500 "main.c"
(q__RN_2030[j__RN_2143]) = sum__RN_2152;
}
}
}
}
}
}
# 1506 "main.c"
d__RN_2151 = (0.0);
# 1507 "main.c"
end__RN_2148 = ((lastcol - firstcol) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_q__RN_2030_def_ub_set[10];
static int __macc_q__RN_2030_def_lb_set[10];
static int __macc_q__RN_2030_use_ub_set[10];
static int __macc_q__RN_2030_use_lb_set[10];
static int __macc_p__RN_2029_def_ub_set[10];
static int __macc_p__RN_2029_def_lb_set[10];
static int __macc_p__RN_2029_use_ub_set[10];
static int __macc_p__RN_2029_use_lb_set[10];
static int __macc_end__RN_2148_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2148 != __macc_end__RN_2148_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2148_last = end__RN_2148;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, end__RN_2148 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
(__macc_ptrs[0]) = p__RN_2029;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_p__RN_2029_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_p__RN_2029_use_ub_set;
(__macc_def_types[0]) = (1);
(__macc_def_lb_sets[0]) = __macc_p__RN_2029_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_p__RN_2029_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
}
(__macc_ptrs[1]) = q__RN_2030;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_q__RN_2030_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_q__RN_2030_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_q__RN_2030_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_q__RN_2030_def_ub_set;
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : d__RN_2151 ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2148 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2148 + (127)) / (128) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang worker vector reduction ( + : d__RN_2151 )
# 1511 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1512 "main.c"
d__RN_2151 = (d__RN_2151 + ((p__RN_2029[j__RN_2143]) * (q__RN_2030[j__RN_2143])));
}
}
}
}
}
}
# 1519 "main.c"
alpha__RN_2155 = (rho__RN_2153 / d__RN_2151);
# 1524 "main.c"
rho0__RN_2154 = rho__RN_2153;
# 1530 "main.c"
rho__RN_2153 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[4];
static int __macc_use_types[4];
static int * __macc_use_lb_sets[4];
static int * __macc_use_ub_sets[4];
static int __macc_def_types[4];
static int * __macc_def_lb_sets[4];
static int * __macc_def_ub_sets[4];
static int __macc_q__RN_2030_def_ub_set[10];
static int __macc_q__RN_2030_def_lb_set[10];
static int __macc_q__RN_2030_use_ub_set[10];
static int __macc_q__RN_2030_use_lb_set[10];
static int __macc_p__RN_2029_def_ub_set[10];
static int __macc_p__RN_2029_def_lb_set[10];
static int __macc_p__RN_2029_use_ub_set[10];
static int __macc_p__RN_2029_use_lb_set[10];
static int __macc_z__RN_2027_def_ub_set[10];
static int __macc_z__RN_2027_def_lb_set[10];
static int __macc_z__RN_2027_use_ub_set[10];
static int __macc_z__RN_2027_use_lb_set[10];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_end__RN_2148_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2148 != __macc_end__RN_2148_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2148_last = end__RN_2148;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, end__RN_2148 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[0]) = r__RN_2031;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_r__RN_2031_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(z__RN_2027, __macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_adjust_data_region(z__RN_2027, __macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
}
(__macc_ptrs[1]) = z__RN_2027;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_z__RN_2027_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_z__RN_2027_use_ub_set;
(__macc_def_types[1]) = (2);
(__macc_def_lb_sets[1]) = __macc_z__RN_2027_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_z__RN_2027_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
(__macc_ptrs[2]) = p__RN_2029;
(__macc_use_types[2]) = (2);
(__macc_use_lb_sets[2]) = __macc_p__RN_2029_use_lb_set;
(__macc_use_ub_sets[2]) = __macc_p__RN_2029_use_ub_set;
(__macc_def_types[2]) = (1);
(__macc_def_lb_sets[2]) = __macc_p__RN_2029_def_lb_set;
(__macc_def_ub_sets[2]) = __macc_p__RN_2029_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_adjust_data_region(q__RN_2030, __macc_gpu_num, __macc_q__RN_2030_def_lb_set, __macc_q__RN_2030_def_ub_set);
}
(__macc_ptrs[3]) = q__RN_2030;
(__macc_use_types[3]) = (2);
(__macc_use_lb_sets[3]) = __macc_q__RN_2030_use_lb_set;
(__macc_use_ub_sets[3]) = __macc_q__RN_2030_use_ub_set;
(__macc_def_types[3]) = (1);
(__macc_def_lb_sets[3]) = __macc_q__RN_2030_def_lb_set;
(__macc_def_ub_sets[3]) = __macc_q__RN_2030_def_ub_set;
}
}
}
if((__macc_region_is_overlapping(__macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set)) || (__macc_region_is_overlapping(__macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_q__RN_2030_use_lb_set, __macc_q__RN_2030_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 4, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2148 + (1023)) / (1024)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2148 + (1023)) / (1024) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector independent
# 1532 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1533 "main.c"
(z__RN_2027[j__RN_2143]) = ((z__RN_2027[j__RN_2143]) + (alpha__RN_2155 * (p__RN_2029[j__RN_2143])));
# 1534 "main.c"
(r__RN_2031[j__RN_2143]) = ((r__RN_2031[j__RN_2143]) - (alpha__RN_2155 * (q__RN_2030[j__RN_2143])));
}
}
}
}
}
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_end__RN_2148_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2148 != __macc_end__RN_2148_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2148_last = end__RN_2148;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, end__RN_2148 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[0]) = r__RN_2031;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[0]) = (1);
(__macc_def_lb_sets[0]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_r__RN_2031_def_ub_set;
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : rho__RN_2153 ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2148 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2148 + (127)) / (128) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang worker vector reduction ( + : rho__RN_2153 )
# 1544 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1546 "main.c"
rho__RN_2153 = (rho__RN_2153 + ((r__RN_2031[j__RN_2143]) * (r__RN_2031[j__RN_2143])));
}
}
}
}
}
}
# 1553 "main.c"
beta__RN_2156 = (rho__RN_2153 / rho0__RN_2154);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_p__RN_2029_def_ub_set[10];
static int __macc_p__RN_2029_def_lb_set[10];
static int __macc_p__RN_2029_use_ub_set[10];
static int __macc_p__RN_2029_use_lb_set[10];
static int __macc_end__RN_2148_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2148 != __macc_end__RN_2148_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2148_last = end__RN_2148;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, end__RN_2148 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_adjust_data_region(p__RN_2029, __macc_gpu_num, __macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
(__macc_ptrs[0]) = p__RN_2029;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_p__RN_2029_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_p__RN_2029_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_p__RN_2029_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_p__RN_2029_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[1]) = r__RN_2031;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_r__RN_2031_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p__RN_2029_use_lb_set, __macc_p__RN_2029_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p__RN_2029_def_lb_set, __macc_p__RN_2029_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((end__RN_2148 + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (end__RN_2148 + (127)) / (128) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  vector_length ( 128 )
#pragma acc loop gang vector independent
# 1559 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1560 "main.c"
(p__RN_2029[j__RN_2143]) = ((r__RN_2031[j__RN_2143]) + (beta__RN_2156 * (p__RN_2029[j__RN_2143])));
}
}
}
}
}
}
}
}
}
# 1570 "main.c"
end__RN_2148 = ((lastrow - firstrow) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[5];
static int __macc_use_types[5];
static int * __macc_use_lb_sets[5];
static int * __macc_use_ub_sets[5];
static int __macc_def_types[5];
static int * __macc_def_lb_sets[5];
static int * __macc_def_ub_sets[5];
static int __macc_z__RN_2027_def_ub_set[10];
static int __macc_z__RN_2027_def_lb_set[10];
static int __macc_z__RN_2027_use_ub_set[10];
static int __macc_z__RN_2027_use_lb_set[10];
static int __macc_rowstr__RN_2025_def_ub_set[10];
static int __macc_rowstr__RN_2025_def_lb_set[10];
static int __macc_rowstr__RN_2025_use_ub_set[10];
static int __macc_rowstr__RN_2025_use_lb_set[10];
static int __macc_colidx__RN_2024_def_ub_set[10];
static int __macc_colidx__RN_2024_def_lb_set[10];
static int __macc_colidx__RN_2024_use_ub_set[10];
static int __macc_colidx__RN_2024_use_lb_set[10];
static int __macc_a__RN_2028_def_ub_set[10];
static int __macc_a__RN_2028_def_lb_set[10];
static int __macc_a__RN_2028_use_ub_set[10];
static int __macc_a__RN_2028_use_lb_set[10];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_end__RN_2148_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || (end__RN_2148 != __macc_end__RN_2148_last));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_end__RN_2148_last = end__RN_2148;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, end__RN_2148 - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set, __macc_top_loop_ub);
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[0]) = r__RN_2031;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_r__RN_2031_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_a__RN_2028_def_lb_set, __macc_a__RN_2028_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set, tmp1__RN_2145);
__macc_update_access_region(__macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set, tmp2__RN_2146 - (1));
}
{
}
__macc_adjust_data_region(a__RN_2028, __macc_gpu_num, __macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set);
__macc_adjust_data_region(a__RN_2028, __macc_gpu_num, __macc_a__RN_2028_def_lb_set, __macc_a__RN_2028_def_ub_set);
}
(__macc_ptrs[1]) = a__RN_2028;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_a__RN_2028_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_a__RN_2028_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_a__RN_2028_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_a__RN_2028_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_colidx__RN_2024_def_lb_set, __macc_colidx__RN_2024_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set, tmp1__RN_2145);
__macc_update_access_region(__macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set, tmp2__RN_2146 - (1));
}
{
}
__macc_adjust_data_region(colidx__RN_2024, __macc_gpu_num, __macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set);
__macc_adjust_data_region(colidx__RN_2024, __macc_gpu_num, __macc_colidx__RN_2024_def_lb_set, __macc_colidx__RN_2024_def_ub_set);
}
(__macc_ptrs[2]) = colidx__RN_2024;
(__macc_use_types[2]) = (2);
(__macc_use_lb_sets[2]) = __macc_colidx__RN_2024_use_lb_set;
(__macc_use_ub_sets[2]) = __macc_colidx__RN_2024_use_ub_set;
(__macc_def_types[2]) = (1);
(__macc_def_lb_sets[2]) = __macc_colidx__RN_2024_def_lb_set;
(__macc_def_ub_sets[2]) = __macc_colidx__RN_2024_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_def_lb_set, __macc_rowstr__RN_2025_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_lb + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_ub + (1));
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(rowstr__RN_2025, __macc_gpu_num, __macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set);
__macc_adjust_data_region(rowstr__RN_2025, __macc_gpu_num, __macc_rowstr__RN_2025_def_lb_set, __macc_rowstr__RN_2025_def_ub_set);
}
(__macc_ptrs[3]) = rowstr__RN_2025;
(__macc_use_types[3]) = (2);
(__macc_use_lb_sets[3]) = __macc_rowstr__RN_2025_use_lb_set;
(__macc_use_ub_sets[3]) = __macc_rowstr__RN_2025_use_ub_set;
(__macc_def_types[3]) = (1);
(__macc_def_lb_sets[3]) = __macc_rowstr__RN_2025_def_lb_set;
(__macc_def_ub_sets[3]) = __macc_rowstr__RN_2025_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
{
}
{
}
__macc_adjust_data_region(z__RN_2027, __macc_gpu_num, __macc_z__RN_2027_use_lb_set, __macc_z__RN_2027_use_ub_set);
__macc_adjust_data_region(z__RN_2027, __macc_gpu_num, __macc_z__RN_2027_def_lb_set, __macc_z__RN_2027_def_ub_set);
}
(__macc_ptrs[4]) = z__RN_2027;
(__macc_use_types[4]) = (0);
(__macc_use_lb_sets[4]) = __macc_z__RN_2027_use_lb_set;
(__macc_use_ub_sets[4]) = __macc_z__RN_2027_use_ub_set;
(__macc_def_types[4]) = (1);
(__macc_def_lb_sets[4]) = __macc_z__RN_2027_def_lb_set;
(__macc_def_ub_sets[4]) = __macc_z__RN_2027_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_rowstr__RN_2025_use_lb_set, __macc_rowstr__RN_2025_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_colidx__RN_2024_use_lb_set, __macc_colidx__RN_2024_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_a__RN_2028_use_lb_set, __macc_a__RN_2028_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : d__RN_2151 ) private ( j__RN_2143 , k__RN_2144 , tmp1__RN_2145 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 5, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((end__RN_2148 + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : end__RN_2148 );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 )
#pragma acc loop gang
# 1574 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1575 "main.c"
tmp1__RN_2145 = (rowstr__RN_2025[j__RN_2143]);
# 1576 "main.c"
tmp2__RN_2146 = (rowstr__RN_2025[j__RN_2143 + (1)]);
# 1577 "main.c"
d__RN_2151 = (0.0);
#pragma acc loop worker vector reduction ( + : d__RN_2151 )
# 1579 "main.c"
for(k__RN_2144 = tmp1__RN_2145; k__RN_2144 < tmp2__RN_2146; k__RN_2144++) {
{
{
# 1580 "main.c"
tmp3__RN_2147 = (colidx__RN_2024[k__RN_2144]);
# 1581 "main.c"
d__RN_2151 = (d__RN_2151 + ((a__RN_2028[k__RN_2144]) * (z__RN_2027[tmp3__RN_2147])));
}
}
}
# 1583 "main.c"
(r__RN_2031[j__RN_2143]) = d__RN_2151;
}
}
}
}
}
}
# 1589 "main.c"
sum__RN_2152 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_x__RN_2026_def_ub_set[10];
static int __macc_x__RN_2026_def_lb_set[10];
static int __macc_x__RN_2026_use_ub_set[10];
static int __macc_x__RN_2026_use_lb_set[10];
static int __macc_r__RN_2031_def_ub_set[10];
static int __macc_r__RN_2031_def_lb_set[10];
static int __macc_r__RN_2031_use_ub_set[10];
static int __macc_r__RN_2031_use_lb_set[10];
static int __macc_firstcol_last;
static int __macc_lastcol_last;
static int __macc_j__RN_2143_loop_lb_set[10];
static int __macc_j__RN_2143_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((lastcol != __macc_lastcol_last) || (firstcol != __macc_firstcol_last)));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_lastcol_last = lastcol;
__macc_firstcol_last = firstcol;
}
{
__macc_calc_loop_region(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set, 0, ((lastcol - firstcol) + (1)) - (1), 1, 1);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_gpu_num = (omp_get_thread_num());
{
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_gpu_num]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_gpu_num]);
}
{
{
{
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
__macc_adjust_data_region(r__RN_2031, __macc_gpu_num, __macc_r__RN_2031_def_lb_set, __macc_r__RN_2031_def_ub_set);
}
(__macc_ptrs[0]) = r__RN_2031;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_r__RN_2031_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_r__RN_2031_use_ub_set;
(__macc_def_types[0]) = (1);
(__macc_def_lb_sets[0]) = __macc_r__RN_2031_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_r__RN_2031_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_x__RN_2026_def_lb_set, __macc_x__RN_2026_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set, __macc_top_loop_ub);
}
{
}
__macc_adjust_data_region(x__RN_2026, __macc_gpu_num, __macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set);
__macc_adjust_data_region(x__RN_2026, __macc_gpu_num, __macc_x__RN_2026_def_lb_set, __macc_x__RN_2026_def_ub_set);
}
(__macc_ptrs[1]) = x__RN_2026;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_x__RN_2026_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_x__RN_2026_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_x__RN_2026_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_x__RN_2026_def_ub_set;
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_j__RN_2143_loop_lb_set, __macc_j__RN_2143_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_x__RN_2026_use_lb_set, __macc_x__RN_2026_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_r__RN_2031_use_lb_set, __macc_r__RN_2031_use_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : sum__RN_2152 ) private ( j__RN_2143 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_j__RN_2143_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_j__RN_2143_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? ((((((lastcol - firstcol) + (1)) + (127)) / (128)) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : (((lastcol - firstcol) + (1)) + (127)) / (128) );
#pragma acc parallel present ( colidx__RN_2024 , rowstr__RN_2025 , x__RN_2026 , z__RN_2027 , a__RN_2028 , p__RN_2029 , q__RN_2030 , r__RN_2031 ) num_gangs  (__macc_num_gangs)  num_workers ( 4 ) vector_length ( 32 ) reduction ( + : sum__RN_2152 )
#pragma acc loop gang worker vector
# 1595 "main.c"
for(j__RN_2143 = __macc_top_loop_lb; j__RN_2143 <= __macc_top_loop_ub; j__RN_2143++) {
{
{
# 1596 "main.c"
d__RN_2151 = ((x__RN_2026[j__RN_2143]) - (r__RN_2031[j__RN_2143]));
# 1597 "main.c"
sum__RN_2152 = (sum__RN_2152 + (d__RN_2151 * d__RN_2151));
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
# 1601 "main.c"
(*(rnorm__RN_2032)) = (__builtin_sqrt(sum__RN_2152));
}
}
# 1630 "main.c"
static void makea(int n__RN_2033, int nz__RN_2034, double a__RN_2035[], int colidx__RN_2036[], int rowstr__RN_2037[], int firstrow__RN_2038, int lastrow__RN_2039, int firstcol__RN_2040, int lastcol__RN_2041, int arow__RN_2042[], int acol__RN_2043[], double aelt__RN_2044[], int iv__RN_2045[])
{
# 1644 "main.c"
int iouter__RN_2158;
# 1644 "main.c"
int ivelt__RN_2159;
# 1644 "main.c"
int nzv__RN_2160;
# 1644 "main.c"
int nn1__RN_2161;
# 1645 "main.c"
int ivc__RN_2162[22];
# 1646 "main.c"
double vc__RN_2163[22];
# 1655 "main.c"
nn1__RN_2161 = (1);
# 1656 "main.c"
do {
{
{
# 1657 "main.c"
nn1__RN_2161 = ((2) * nn1__RN_2161);
}
}
}
while(nn1__RN_2161 < n__RN_2033);
# 1663 "main.c"
for(iouter__RN_2158 = (0); iouter__RN_2158 < n__RN_2033; iouter__RN_2158++) {
{
{
# 1664 "main.c"
nzv__RN_2160 = (21);
# 1665 "main.c"
sprnvc(n__RN_2033, nzv__RN_2160, nn1__RN_2161, vc__RN_2163, ivc__RN_2162);
# 1666 "main.c"
vecset(n__RN_2033, vc__RN_2163, ivc__RN_2162, &(nzv__RN_2160), iouter__RN_2158 + (1), 0.5);
# 1667 "main.c"
(arow__RN_2042[iouter__RN_2158]) = nzv__RN_2160;
# 1669 "main.c"
for(ivelt__RN_2159 = (0); ivelt__RN_2159 < nzv__RN_2160; ivelt__RN_2159++) {
{
{
# 1670 "main.c"
(acol__RN_2043[(iouter__RN_2158 * (22)) + ivelt__RN_2159]) = ((ivc__RN_2162[ivelt__RN_2159]) - (1));
# 1671 "main.c"
(aelt__RN_2044[(iouter__RN_2158 * (22)) + ivelt__RN_2159]) = (vc__RN_2163[ivelt__RN_2159]);
}
}
}
}
}
}
# 1679 "main.c"
sparse(a__RN_2035, colidx__RN_2036, rowstr__RN_2037, n__RN_2033, nz__RN_2034, 21, arow__RN_2042, acol__RN_2043, aelt__RN_2044, firstrow__RN_2038, lastrow__RN_2039, iv__RN_2045, 1.0e-1, 500.0);
}
# 1689 "main.c"
static void sparse(double a__RN_2046[], int colidx__RN_2047[], int rowstr__RN_2048[], int n__RN_2049, int nz__RN_2050, int nozer__RN_2051, int arow__RN_2052[], int acol__RN_2053[], double aelt__RN_2054[], int firstrow__RN_2055, int lastrow__RN_2056, int nzloc__RN_2057[], double rcond__RN_2058, double shift__RN_2059)
{
# 1704 "main.c"
int nrows__RN_2164;
# 1710 "main.c"
int i__RN_2165;
# 1710 "main.c"
int j__RN_2166;
# 1710 "main.c"
int j1__RN_2167;
# 1710 "main.c"
int j2__RN_2168;
# 1710 "main.c"
int nza__RN_2169;
# 1710 "main.c"
int k__RN_2170;
# 1710 "main.c"
int kk__RN_2171;
# 1710 "main.c"
int nzrow__RN_2172;
# 1710 "main.c"
int jcol__RN_2173;
# 1711 "main.c"
double size__RN_2174;
# 1711 "main.c"
double scale__RN_2175;
# 1711 "main.c"
double ratio__RN_2176;
# 1711 "main.c"
double va__RN_2177;
# 1712 "main.c"
enum anon_type_31_logical cont40__RN_2178;
# 1717 "main.c"
nrows__RN_2164 = ((lastrow__RN_2056 - firstrow__RN_2055) + (1));
# 1722 "main.c"
for(j__RN_2166 = (0); j__RN_2166 < (nrows__RN_2164 + (1)); j__RN_2166++) {
{
{
# 1723 "main.c"
(rowstr__RN_2048[j__RN_2166]) = (0);
}
}
}
# 1726 "main.c"
for(i__RN_2165 = (0); i__RN_2165 < n__RN_2049; i__RN_2165++) {
{
{
# 1727 "main.c"
for(nza__RN_2169 = (0); nza__RN_2169 < (arow__RN_2052[i__RN_2165]); nza__RN_2169++) {
{
{
# 1728 "main.c"
j__RN_2166 = ((acol__RN_2053[(i__RN_2165 * (22)) + nza__RN_2169]) + (1));
# 1729 "main.c"
(rowstr__RN_2048[j__RN_2166]) = ((rowstr__RN_2048[j__RN_2166]) + (arow__RN_2052[i__RN_2165]));
}
}
}
}
}
}
# 1733 "main.c"
(rowstr__RN_2048[0]) = (0);
# 1734 "main.c"
for(j__RN_2166 = (1); j__RN_2166 < (nrows__RN_2164 + (1)); j__RN_2166++) {
{
{
# 1735 "main.c"
(rowstr__RN_2048[j__RN_2166]) = ((rowstr__RN_2048[j__RN_2166]) + (rowstr__RN_2048[j__RN_2166 - (1)]));
}
}
}
# 1737 "main.c"
nza__RN_2169 = ((rowstr__RN_2048[nrows__RN_2164]) - (1));
# 1743 "main.c"
if(nza__RN_2169 > nz__RN_2050) {
# 1744 "main.c"
printf("Space for matrix elements exceeded in sparse\n");
# 1745 "main.c"
printf("nza, nzmax = %d, %d\n", nza__RN_2169, nz__RN_2050);
# 1746 "main.c"
exit(1);
}
# 1752 "main.c"
for(j__RN_2166 = (0); j__RN_2166 < nrows__RN_2164; j__RN_2166++) {
{
{
# 1753 "main.c"
for(k__RN_2170 = (rowstr__RN_2048[j__RN_2166]); k__RN_2170 < (rowstr__RN_2048[j__RN_2166 + (1)]); k__RN_2170++) {
{
{
# 1754 "main.c"
(a__RN_2046[k__RN_2170]) = (0.0);
# 1755 "main.c"
(colidx__RN_2047[k__RN_2170]) = (-(1));
}
}
}
# 1757 "main.c"
(nzloc__RN_2057[j__RN_2166]) = (0);
}
}
}
# 1763 "main.c"
size__RN_2174 = (1.0);
# 1764 "main.c"
ratio__RN_2176 = (__builtin_pow(rcond__RN_2058, (1.0) / ((double)(n__RN_2049))));
# 1766 "main.c"
for(i__RN_2165 = (0); i__RN_2165 < n__RN_2049; i__RN_2165++) {
{
{
# 1767 "main.c"
for(nza__RN_2169 = (0); nza__RN_2169 < (arow__RN_2052[i__RN_2165]); nza__RN_2169++) {
{
{
# 1768 "main.c"
j__RN_2166 = (acol__RN_2053[(i__RN_2165 * (22)) + nza__RN_2169]);
# 1770 "main.c"
scale__RN_2175 = (size__RN_2174 * (aelt__RN_2054[(i__RN_2165 * (22)) + nza__RN_2169]));
# 1771 "main.c"
for(nzrow__RN_2172 = (0); nzrow__RN_2172 < (arow__RN_2052[i__RN_2165]); nzrow__RN_2172++) {
{
{
# 1772 "main.c"
jcol__RN_2173 = (acol__RN_2053[(i__RN_2165 * (22)) + nzrow__RN_2172]);
# 1773 "main.c"
va__RN_2177 = ((aelt__RN_2054[(i__RN_2165 * (22)) + nzrow__RN_2172]) * scale__RN_2175);
# 1779 "main.c"
if((jcol__RN_2173 == j__RN_2166) && (j__RN_2166 == i__RN_2165)) {
# 1780 "main.c"
va__RN_2177 = ((va__RN_2177 + rcond__RN_2058) - shift__RN_2059);
}
# 1783 "main.c"
cont40__RN_2178 = false;
# 1784 "main.c"
for(k__RN_2170 = (rowstr__RN_2048[j__RN_2166]); k__RN_2170 < (rowstr__RN_2048[j__RN_2166 + (1)]); k__RN_2170++) {
{
{
# 1785 "main.c"
if((colidx__RN_2047[k__RN_2170]) > jcol__RN_2173) {
# 1789 "main.c"
for(kk__RN_2171 = ((rowstr__RN_2048[j__RN_2166 + (1)]) - (2)); kk__RN_2171 >= k__RN_2170; kk__RN_2171--) {
{
{
# 1790 "main.c"
if((colidx__RN_2047[kk__RN_2171]) > (-(1))) {
# 1791 "main.c"
(a__RN_2046[kk__RN_2171 + (1)]) = (a__RN_2046[kk__RN_2171]);
# 1792 "main.c"
(colidx__RN_2047[kk__RN_2171 + (1)]) = (colidx__RN_2047[kk__RN_2171]);
}
}
}
}
# 1795 "main.c"
(colidx__RN_2047[k__RN_2170]) = jcol__RN_2173;
# 1796 "main.c"
(a__RN_2046[k__RN_2170]) = (0.0);
# 1797 "main.c"
cont40__RN_2178 = true;
# 1798 "main.c"
break;
}
else {
# 1799 "main.c"
if((colidx__RN_2047[k__RN_2170]) == (-(1))) {
# 1800 "main.c"
(colidx__RN_2047[k__RN_2170]) = jcol__RN_2173;
# 1801 "main.c"
cont40__RN_2178 = true;
# 1802 "main.c"
break;
}
else {
# 1803 "main.c"
if((colidx__RN_2047[k__RN_2170]) == jcol__RN_2173) {
# 1807 "main.c"
(nzloc__RN_2057[j__RN_2166]) = ((nzloc__RN_2057[j__RN_2166]) + (1));
# 1808 "main.c"
cont40__RN_2178 = true;
# 1809 "main.c"
break;
}
}
}
}
}
}
# 1812 "main.c"
if(cont40__RN_2178 == false) {
# 1813 "main.c"
printf("internal error in sparse: i=%d\n", i__RN_2165);
# 1814 "main.c"
exit(1);
}
# 1816 "main.c"
(a__RN_2046[k__RN_2170]) = ((a__RN_2046[k__RN_2170]) + va__RN_2177);
}
}
}
}
}
}
# 1819 "main.c"
size__RN_2174 = (size__RN_2174 * ratio__RN_2176);
}
}
}
# 1825 "main.c"
for(j__RN_2166 = (1); j__RN_2166 < nrows__RN_2164; j__RN_2166++) {
{
{
# 1826 "main.c"
(nzloc__RN_2057[j__RN_2166]) = ((nzloc__RN_2057[j__RN_2166]) + (nzloc__RN_2057[j__RN_2166 - (1)]));
}
}
}
# 1829 "main.c"
for(j__RN_2166 = (0); j__RN_2166 < nrows__RN_2164; j__RN_2166++) {
{
{
# 1830 "main.c"
if(j__RN_2166 > (0)) {
# 1831 "main.c"
j1__RN_2167 = ((rowstr__RN_2048[j__RN_2166]) - (nzloc__RN_2057[j__RN_2166 - (1)]));
}
else {
# 1833 "main.c"
j1__RN_2167 = (0);
}
# 1835 "main.c"
j2__RN_2168 = ((rowstr__RN_2048[j__RN_2166 + (1)]) - (nzloc__RN_2057[j__RN_2166]));
# 1836 "main.c"
nza__RN_2169 = (rowstr__RN_2048[j__RN_2166]);
# 1837 "main.c"
for(k__RN_2170 = j1__RN_2167; k__RN_2170 < j2__RN_2168; k__RN_2170++) {
{
{
# 1838 "main.c"
(a__RN_2046[k__RN_2170]) = (a__RN_2046[nza__RN_2169]);
# 1839 "main.c"
(colidx__RN_2047[k__RN_2170]) = (colidx__RN_2047[nza__RN_2169]);
# 1840 "main.c"
nza__RN_2169 = (nza__RN_2169 + (1));
}
}
}
}
}
}
# 1843 "main.c"
for(j__RN_2166 = (1); j__RN_2166 < (nrows__RN_2164 + (1)); j__RN_2166++) {
{
{
# 1844 "main.c"
(rowstr__RN_2048[j__RN_2166]) = ((rowstr__RN_2048[j__RN_2166]) - (nzloc__RN_2057[j__RN_2166 - (1)]));
}
}
}
# 1846 "main.c"
nza__RN_2169 = ((rowstr__RN_2048[nrows__RN_2164]) - (1));
}
# 1859 "main.c"
static void sprnvc(int n__RN_2060, int nz__RN_2061, int nn1__RN_2062, double v__RN_2063[], int iv__RN_2064[])
{
# 1861 "main.c"
int nzv__RN_2179;
# 1861 "main.c"
int ii__RN_2180;
# 1861 "main.c"
int i__RN_2181;
# 1862 "main.c"
double vecelt__RN_2182;
# 1862 "main.c"
double vecloc__RN_2183;
# 1864 "main.c"
nzv__RN_2179 = (0);
# 1866 "main.c"
while(nzv__RN_2179 < nz__RN_2061) {
{
{
# 1867 "main.c"
vecelt__RN_2182 = (randlc(&(tran), amult));
# 1872 "main.c"
vecloc__RN_2183 = (randlc(&(tran), amult));
# 1873 "main.c"
i__RN_2181 = ((icnvrt(vecloc__RN_2183, nn1__RN_2062)) + (1));
# 1874 "main.c"
if(i__RN_2181 > n__RN_2060) {
# 1874 "main.c"
continue;
}
{
# 1879 "main.c"
enum anon_type_31_logical was_gen__RN_2211 = false;
# 1880 "main.c"
for(ii__RN_2180 = (0); ii__RN_2180 < nzv__RN_2179; ii__RN_2180++) {
{
{
# 1881 "main.c"
if((iv__RN_2064[ii__RN_2180]) == i__RN_2181) {
# 1882 "main.c"
was_gen__RN_2211 = true;
# 1883 "main.c"
break;
}
}
}
}
# 1886 "main.c"
if(was_gen__RN_2211) {
# 1886 "main.c"
continue;
}
# 1887 "main.c"
(v__RN_2063[nzv__RN_2179]) = vecelt__RN_2182;
# 1888 "main.c"
(iv__RN_2064[nzv__RN_2179]) = i__RN_2181;
# 1889 "main.c"
nzv__RN_2179 = (nzv__RN_2179 + (1));
}
}
}
}
}
# 1897 "main.c"
static int icnvrt(double x__RN_2065, int ipwr2__RN_2066)
{
# 1899 "main.c"
return (int)(ipwr2__RN_2066 * x__RN_2065);
}
# 1907 "main.c"
static void vecset(int n__RN_2067, double v__RN_2068[], int iv__RN_2069[], int * nzv__RN_2070, int i__RN_2071, double val__RN_2072)
{
# 1909 "main.c"
int k__RN_2184;
# 1910 "main.c"
enum anon_type_31_logical set__RN_2185;
# 1912 "main.c"
set__RN_2185 = false;
# 1913 "main.c"
for(k__RN_2184 = (0); k__RN_2184 < (*(nzv__RN_2070)); k__RN_2184++) {
{
{
# 1914 "main.c"
if((iv__RN_2069[k__RN_2184]) == i__RN_2071) {
# 1915 "main.c"
(v__RN_2068[k__RN_2184]) = val__RN_2072;
# 1916 "main.c"
set__RN_2185 = true;
}
}
}
}
# 1919 "main.c"
if(set__RN_2185 == false) {
# 1920 "main.c"
(v__RN_2068[*(nzv__RN_2070)]) = val__RN_2072;
# 1921 "main.c"
(iv__RN_2069[*(nzv__RN_2070)]) = i__RN_2071;
# 1922 "main.c"
(*(nzv__RN_2070)) = ((*(nzv__RN_2070)) + (1));
}
}
