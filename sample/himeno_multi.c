/*
 * Original Source  : /tmp/tmp.ctiSKezwS2/1.c
 * Language         : C
 * Compiled Time    : 2017-12-03 18:15:37
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.0.3
 */
# 1 "/tmp/tmp.ctiSKezwS2/1.c"
typedef void * omp_lock_t;
typedef void * omp_nest_lock_t;
enum anon_type_1_acc_device_t {
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
typedef enum anon_type_1_acc_device_t acc_device_t;
typedef unsigned long size_t;
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
typedef unsigned int wint_t;
union anon_type_4___value {
unsigned int __wch;
char __wchb[4];
};
typedef struct anon_type_3___mbstate_t __mbstate_t;
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
typedef long off_t;
typedef long ssize_t;
typedef int wchar_t;
enum anon_type_7_idtype_t {
P_ALL = 0,
P_PID = 1,
P_PGID = 2
};
typedef enum anon_type_7_idtype_t idtype_t;
struct anon_type_8___wait_terminated {
unsigned int __w_termsig:7;
unsigned int __w_coredump:1;
unsigned int __w_retcode:8;
unsigned int anon_mem_1:16;
};
struct anon_type_9___wait_stopped {
unsigned int __w_stopval:8;
unsigned int __w_stopsig:8;
unsigned int anon_mem_2:16;
};
struct anon_type_10_div_t {
int quot;
int rem;
};
typedef struct anon_type_10_div_t div_t;
struct anon_type_11_ldiv_t {
long quot;
long rem;
};
typedef struct anon_type_11_ldiv_t ldiv_t;
struct anon_type_12_lldiv_t {
long long quot;
long long rem;
};
typedef struct anon_type_12_lldiv_t lldiv_t;
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
typedef int pid_t;
typedef unsigned int id_t;
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
struct anon_type_13___sigset_t {
unsigned long __val[(1024) / ((8) * (sizeof(unsigned long)))];
};
typedef struct anon_type_13___sigset_t __sigset_t;
typedef struct anon_type_13___sigset_t sigset_t;
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
struct anon_type_14_fd_set {
long __fds_bits[(1024) / ((8) * ((int)(sizeof(long))))];
};
typedef struct anon_type_14_fd_set fd_set;
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
union anon_type_16_pthread_mutexattr_t {
char __size[4];
int __align;
};
typedef union anon_type_16_pthread_mutexattr_t pthread_mutexattr_t;
struct anon_type_18___data {
int __lock;
unsigned int __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void * __mutex;
unsigned int __nwaiters;
unsigned int __broadcast_seq;
};
typedef union anon_type_17_pthread_cond_t pthread_cond_t;
union anon_type_19_pthread_condattr_t {
char __size[4];
int __align;
};
typedef union anon_type_19_pthread_condattr_t pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct anon_type_21___data {
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
typedef union anon_type_20_pthread_rwlock_t pthread_rwlock_t;
union anon_type_22_pthread_rwlockattr_t {
char __size[8];
long __align;
};
typedef union anon_type_22_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef int volatile pthread_spinlock_t;
union anon_type_23_pthread_barrier_t {
char __size[32];
long __align;
};
typedef union anon_type_23_pthread_barrier_t pthread_barrier_t;
union anon_type_24_pthread_barrierattr_t {
char __size[4];
int __align;
};
typedef union anon_type_24_pthread_barrierattr_t pthread_barrierattr_t;
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
struct __locale_data {
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
struct Mat {
float * m;
int mnums;
int mrows;
int mcols;
int mdeps;
};
typedef struct Mat Matrix;
struct _IO_FILE;
struct _IO_marker;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
struct anon_type_3___mbstate_t {
int __count;
union anon_type_4___value __value;
};
struct anon_type_5__G_fpos_t {
long __pos;
struct anon_type_3___mbstate_t __state;
};
typedef struct anon_type_5__G_fpos_t _G_fpos_t;
struct anon_type_6__G_fpos64_t {
long __pos;
struct anon_type_3___mbstate_t __state;
};
typedef struct anon_type_6__G_fpos64_t _G_fpos64_t;
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
typedef struct anon_type_5__G_fpos_t fpos_t;
union wait {
int w_status;
struct anon_type_8___wait_terminated __wait_terminated;
struct anon_type_9___wait_stopped __wait_stopped;
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
typedef union anon_type_15_pthread_mutex_t pthread_mutex_t;
union anon_type_17_pthread_cond_t {
struct anon_type_18___data __data;
char __size[48];
long long __align;
};
union anon_type_20_pthread_rwlock_t {
struct anon_type_21___data __data;
char __size[56];
long __align;
};
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
union anon_type_15_pthread_mutex_t {
struct __pthread_mutex_s __data;
char __size[40];
long __align;
};
void omp_set_num_threads(int num);
int omp_get_num_threads(void);
int omp_get_max_threads(void);
int omp_get_thread_num(void);
int omp_get_num_procs(void);
int omp_in_parallel(void);
void omp_set_dynamic(int dynamic_thds);
int omp_get_dynamic(void);
void omp_set_nested(int n_nested);
int omp_get_nested(void);
double omp_get_wtime(void);
double omp_get_wtick(void);
void omp_init_lock(void * * lock);
void omp_init_nest_lock(void * * lock);
void omp_destroy_lock(void * * lock);
void omp_destroy_nest_lock(void * * lock);
void omp_set_lock(void * * lock);
void omp_set_nest_lock(void * * lock);
void omp_unset_lock(void * * lock);
void omp_unset_nest_lock(void * * lock);
int omp_test_lock(void * * lock);
int omp_test_nest_lock(void * * lock);
void acc_set_default_async(int async);
int acc_get_default_async(void);
extern int acc_get_num_devices(enum anon_type_1_acc_device_t devtype);
extern enum anon_type_1_acc_device_t acc_get_device(void);
extern void acc_set_device_num(int devnum, enum anon_type_1_acc_device_t devtype);
extern int acc_get_device_num(enum anon_type_1_acc_device_t devtype);
extern void acc_init(enum anon_type_1_acc_device_t devtype);
extern void acc_shutdown(enum anon_type_1_acc_device_t devtype);
extern void acc_set_deviceid(int devid);
extern int acc_get_deviceid(int devnum, enum anon_type_1_acc_device_t devtype);
extern int acc_async_test(long async);
extern int acc_async_test_all(void);
extern void acc_async_wait(long async);
extern void acc_async_wait_all(void);
extern void acc_wait(long async);
extern void acc_wait_async(long arg, long async);
extern void acc_wait_all(void);
extern void acc_wait_all_async(long async);
extern int acc_on_device(enum anon_type_1_acc_device_t devtype);
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
extern void acc_set_device_type(enum anon_type_1_acc_device_t devtype);
extern enum anon_type_1_acc_device_t acc_get_device_type(void);
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
extern int fgetpos(struct _IO_FILE * restrict __stream, struct anon_type_5__G_fpos_t * restrict __pos);
extern int fsetpos(struct _IO_FILE * __stream, struct anon_type_5__G_fpos_t const * __pos);
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
extern int select(int __nfds, struct anon_type_14_fd_set * restrict __readfds, struct anon_type_14_fd_set * restrict __writefds, struct anon_type_14_fd_set * restrict __exceptfds, struct timeval * restrict __timeout);
extern int pselect(int __nfds, struct anon_type_14_fd_set * restrict __readfds, struct anon_type_14_fd_set * restrict __writefds, struct anon_type_14_fd_set * restrict __exceptfds, struct timespec const * restrict __timeout, struct anon_type_13___sigset_t const * restrict __sigmask);
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
extern __attribute__((const)) struct anon_type_10_div_t div(int __numer, int __denom);
extern __attribute__((const)) struct anon_type_11_ldiv_t ldiv(long __numer, long __denom);
extern __attribute__((const)) struct anon_type_12_lldiv_t lldiv(long long __numer, long long __denom);
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
# 27 "/tmp/tmp.ctiSKezwS2/1.c"
int __MACC_NUMGPUS = -(1);
# 29 "/tmp/tmp.ctiSKezwS2/1.c"
int __macc_get_num_gpus()
{
# 31 "/tmp/tmp.ctiSKezwS2/1.c"
return acc_get_num_devices(acc_device_nvidia);
}
# 34 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_set_gpu_num(int i)
{
# 36 "/tmp/tmp.ctiSKezwS2/1.c"
acc_set_device_num(i, acc_device_nvidia);
}
# 59 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET;
# 72 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataWrapCache * __MACC_DATA_WRAP_CACHE_SET;
# 74 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_data_table_insert(int gpu_num, void * ptr, int type_size, int entire_lb, int entire_ub)
{
# 77 "/tmp/tmp.ctiSKezwS2/1.c"
int index = (((long)(ptr)) / (16)) % (256);
# 79 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * new_entry = malloc_managed(sizeof(struct __MaccDataTableEntry));
# 81 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->addr) = ptr;
# 82 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->addr_ub) = (ptr + (entire_ub * type_size));
# 83 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->type_size) = type_size;
# 84 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->entire_lb) = entire_lb;
# 85 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->entire_ub) = entire_ub;
# 86 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->dirty) = (0);
# 87 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->dirty_lb) = (-(1));
# 88 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->dirty_ub) = (-(1));
# 89 "/tmp/tmp.ctiSKezwS2/1.c"
(new_entry->next) = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index));
# 91 "/tmp/tmp.ctiSKezwS2/1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = new_entry;
}
# 94 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * __macc_data_table_find(int gpu_num, void * ptr)
{
# 96 "/tmp/tmp.ctiSKezwS2/1.c"
int index = (((long)(ptr)) / (16)) % (256);
# 97 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 99 "/tmp/tmp.ctiSKezwS2/1.c"
while(entry != ((void * )(0))) {
{
# 100 "/tmp/tmp.ctiSKezwS2/1.c"
if((entry->addr) == ptr) {
# 101 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->offset) = (0);
# 102 "/tmp/tmp.ctiSKezwS2/1.c"
return entry;
}
# 105 "/tmp/tmp.ctiSKezwS2/1.c"
entry = (entry->next);
}
}
{
# 108 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataWrapCache wrap_cache = __MACC_DATA_WRAP_CACHE_SET[gpu_num];
# 109 "/tmp/tmp.ctiSKezwS2/1.c"
int lane = (((long)(ptr)) / (16)) % (16);
{
# 111 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 111 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < (*(((&(wrap_cache))->cachenum) + lane)); i++) {
{
# 112 "/tmp/tmp.ctiSKezwS2/1.c"
if(ptr == (*(((&(wrap_cache))->addr) + ((lane * (16)) + i)))) {
# 113 "/tmp/tmp.ctiSKezwS2/1.c"
entry = (*(((&(wrap_cache))->entry) + ((lane * (16)) + i)));
# 114 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->offset) = (*(((&(wrap_cache))->offset) + ((lane * (16)) + i)));
# 115 "/tmp/tmp.ctiSKezwS2/1.c"
return entry;
}
}
}
}
{
# 119 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 119 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < (256); i++) {
{
# 120 "/tmp/tmp.ctiSKezwS2/1.c"
entry = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + i));
# 122 "/tmp/tmp.ctiSKezwS2/1.c"
while(entry != ((void * )(0))) {
{
# 123 "/tmp/tmp.ctiSKezwS2/1.c"
if(((entry->addr) <= ptr) && (ptr <= (entry->addr_ub))) {
# 124 "/tmp/tmp.ctiSKezwS2/1.c"
int offset = (ptr - (entry->addr)) / (entry->type_size);
# 126 "/tmp/tmp.ctiSKezwS2/1.c"
int cachenum = *(((&(wrap_cache))->cachenum) + lane);
# 128 "/tmp/tmp.ctiSKezwS2/1.c"
if(cachenum == (16)) {
# 129 "/tmp/tmp.ctiSKezwS2/1.c"
cachenum = (0);
}
# 132 "/tmp/tmp.ctiSKezwS2/1.c"
(*(((&(wrap_cache))->addr) + ((lane * (16)) + cachenum))) = (entry->addr);
# 133 "/tmp/tmp.ctiSKezwS2/1.c"
(*(((&(wrap_cache))->entry) + ((lane * (16)) + cachenum))) = entry;
# 134 "/tmp/tmp.ctiSKezwS2/1.c"
(*(((&(wrap_cache))->offset) + ((lane * (16)) + cachenum))) = offset;
# 136 "/tmp/tmp.ctiSKezwS2/1.c"
(*(((&(wrap_cache))->cachenum) + lane)) = (cachenum + (1));
# 138 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->offset) = offset;
# 139 "/tmp/tmp.ctiSKezwS2/1.c"
return entry;
}
# 142 "/tmp/tmp.ctiSKezwS2/1.c"
entry = (entry->next);
}
}
}
}
}
# 146 "/tmp/tmp.ctiSKezwS2/1.c"
fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", ptr);
# 147 "/tmp/tmp.ctiSKezwS2/1.c"
exit(-(1));
# 149 "/tmp/tmp.ctiSKezwS2/1.c"
return (void * )(0);
}
}
# 152 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_data_table_delete(int gpu_num, void * ptr)
{
# 154 "/tmp/tmp.ctiSKezwS2/1.c"
int index = (((long)(ptr)) / (16)) % (256);
# 155 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 156 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * pre = (void * )(0);
# 158 "/tmp/tmp.ctiSKezwS2/1.c"
memset((__MACC_DATA_WRAP_CACHE_SET + gpu_num)->cachenum, 0, (16) * (sizeof(int)));
# 160 "/tmp/tmp.ctiSKezwS2/1.c"
if(entry != ((void * )(0))) {
# 161 "/tmp/tmp.ctiSKezwS2/1.c"
if((entry->addr) == ptr) {
# 162 "/tmp/tmp.ctiSKezwS2/1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = (entry->next);
# 163 "/tmp/tmp.ctiSKezwS2/1.c"
free_managed(entry);
# 164 "/tmp/tmp.ctiSKezwS2/1.c"
return ;
}
# 167 "/tmp/tmp.ctiSKezwS2/1.c"
pre = entry;
# 168 "/tmp/tmp.ctiSKezwS2/1.c"
entry = (entry->next);
}
# 171 "/tmp/tmp.ctiSKezwS2/1.c"
while((pre != ((void * )(0))) && (entry != ((void * )(0)))) {
{
# 172 "/tmp/tmp.ctiSKezwS2/1.c"
if((entry->addr) == ptr) {
# 173 "/tmp/tmp.ctiSKezwS2/1.c"
(pre->next) = (entry->next);
# 174 "/tmp/tmp.ctiSKezwS2/1.c"
free_managed(entry);
# 175 "/tmp/tmp.ctiSKezwS2/1.c"
return ;
}
# 178 "/tmp/tmp.ctiSKezwS2/1.c"
pre = entry;
# 179 "/tmp/tmp.ctiSKezwS2/1.c"
entry = (entry->next);
}
}
# 182 "/tmp/tmp.ctiSKezwS2/1.c"
fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", ptr);
# 183 "/tmp/tmp.ctiSKezwS2/1.c"
exit(-(1));
}
# 186 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_delete(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 188 "/tmp/tmp.ctiSKezwS2/1.c"
acc_delete_async(ptr + (lb * type_size), length * type_size, gpu_num);
# 189 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_data_table_delete(gpu_num, ptr);
# 190 "/tmp/tmp.ctiSKezwS2/1.c"
acc_wait(gpu_num);
}
# 193 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_copyout(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 195 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 197 "/tmp/tmp.ctiSKezwS2/1.c"
if(entry->dirty) {
# 198 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_self_async((entry->addr) + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size), gpu_num);
}
# 202 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_delete(gpu_num, ptr, type_size, lb, length);
}
# 205 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_copyin(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 207 "/tmp/tmp.ctiSKezwS2/1.c"
acc_copyin_async(ptr + (lb * type_size), length * type_size, gpu_num);
# 208 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_data_table_insert(gpu_num, ptr, type_size, lb, (lb + length) - (1));
# 209 "/tmp/tmp.ctiSKezwS2/1.c"
acc_wait(gpu_num);
}
# 212 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_create(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 214 "/tmp/tmp.ctiSKezwS2/1.c"
acc_create_async(ptr + (lb * type_size), length * type_size, gpu_num);
# 215 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_data_table_insert(gpu_num, ptr, type_size, lb, (lb + length) - (1));
# 216 "/tmp/tmp.ctiSKezwS2/1.c"
acc_wait(gpu_num);
}
# 219 "/tmp/tmp.ctiSKezwS2/1.c"
void * __macc_malloc(unsigned long size)
{
# 221 "/tmp/tmp.ctiSKezwS2/1.c"
void * ret = malloc_managed(size);
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 225 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_create(omp_get_thread_num(), ret, 1, 0, size);
}
# 228 "/tmp/tmp.ctiSKezwS2/1.c"
return ret;
}
# 231 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_free(void * ptr)
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 235 "/tmp/tmp.ctiSKezwS2/1.c"
int gpu_num = omp_get_thread_num();
# 236 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 238 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_delete(gpu_num, ptr, 1, 0, (entry->entire_ub) + (1));
}
# 240 "/tmp/tmp.ctiSKezwS2/1.c"
free_managed(ptr);
}
# 243 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_update_self(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 245 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 246 "/tmp/tmp.ctiSKezwS2/1.c"
ptr = (entry->addr);
# 247 "/tmp/tmp.ctiSKezwS2/1.c"
lb += (entry->offset);
{
# 248 "/tmp/tmp.ctiSKezwS2/1.c"
int ub = (lb + length) - (1);
# 250 "/tmp/tmp.ctiSKezwS2/1.c"
if((entry->dirty) && (!(((entry->dirty_lb) > ub) || ((entry->dirty_ub) < lb)))) {
# 251 "/tmp/tmp.ctiSKezwS2/1.c"
int new_lb = ((entry->dirty_lb) > lb) ?(entry->dirty_lb) : lb;
# 252 "/tmp/tmp.ctiSKezwS2/1.c"
int new_ub = ((entry->dirty_ub) < ub) ?(entry->dirty_ub) : ub;
# 253 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_self(ptr + (new_lb * type_size), ((new_ub - new_lb) + (1)) * type_size);
}
}
}
# 257 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_update_device(int gpu_num, void * ptr, int type_size, int lb, int length)
{
# 259 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_device(ptr + (lb * type_size), length * type_size);
}
# 262 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_init_access_region(int gpu_num, int * lb_set, int * ub_set)
{
# 264 "/tmp/tmp.ctiSKezwS2/1.c"
(lb_set[gpu_num]) = (2147483647);
# 265 "/tmp/tmp.ctiSKezwS2/1.c"
(ub_set[gpu_num]) = (-(1));
}
# 268 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_update_access_region(int gpu_num, int * lb_set, int * ub_set, int val)
{
# 270 "/tmp/tmp.ctiSKezwS2/1.c"
(lb_set[gpu_num]) = (((lb_set[gpu_num]) < val) ?(lb_set[gpu_num]) : val);
# 271 "/tmp/tmp.ctiSKezwS2/1.c"
(ub_set[gpu_num]) = (((ub_set[gpu_num]) > val) ?(ub_set[gpu_num]) : val);
}
# 274 "/tmp/tmp.ctiSKezwS2/1.c"
int __macc_region_is_overlapping(int * lb_set, int * ub_set)
{
{
# 276 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 276 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < (__MACC_NUMGPUS - (1)); i++) {
{
{
# 277 "/tmp/tmp.ctiSKezwS2/1.c"
int j;
# 277 "/tmp/tmp.ctiSKezwS2/1.c"
for(j = (i + (1)); j < __MACC_NUMGPUS; j++) {
{
# 278 "/tmp/tmp.ctiSKezwS2/1.c"
if(!(((lb_set[i]) > (ub_set[j])) || ((ub_set[i]) < (lb_set[j])))) {
# 279 "/tmp/tmp.ctiSKezwS2/1.c"
return 1;
}
}
}
}
}
}
}
# 281 "/tmp/tmp.ctiSKezwS2/1.c"
return 0;
}
# 285 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_calc_loop_region(int * loop_lb_set, int * loop_ub_set, int entire_start, int entire_end, int step, int until_equal)
{
# 289 "/tmp/tmp.ctiSKezwS2/1.c"
int tmp = entire_start + (step * ((entire_end - entire_start) / step));
# 290 "/tmp/tmp.ctiSKezwS2/1.c"
entire_end = (tmp - ((until_equal || (entire_end != tmp)) ?(0) : step));
{
# 292 "/tmp/tmp.ctiSKezwS2/1.c"
int len = (entire_end - entire_start) + step;
# 293 "/tmp/tmp.ctiSKezwS2/1.c"
int width = (int)(((float)(len)) / __MACC_NUMGPUS);
# 294 "/tmp/tmp.ctiSKezwS2/1.c"
width -= (width % step);
{
# 295 "/tmp/tmp.ctiSKezwS2/1.c"
int rem = (len - (width * __MACC_NUMGPUS)) / step;
# 296 "/tmp/tmp.ctiSKezwS2/1.c"
width -= step;
{
# 298 "/tmp/tmp.ctiSKezwS2/1.c"
int pos = entire_start;
{
# 300 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 300 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 301 "/tmp/tmp.ctiSKezwS2/1.c"
(loop_lb_set[i]) = pos;
# 302 "/tmp/tmp.ctiSKezwS2/1.c"
pos = ((width < (0)) ? pos : ((((pos + width) + ((i < rem) ? step : (0))) < entire_end) ?((pos + width) + ((i < rem) ? step : (0))) : entire_end));
# 303 "/tmp/tmp.ctiSKezwS2/1.c"
(loop_ub_set[i]) = pos;
# 304 "/tmp/tmp.ctiSKezwS2/1.c"
pos = (((pos + step) < entire_end) ?(pos + step) : entire_end);
}
}
}
}
}
}
}
# 308 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_adjust_data_region(void * ptr, int gpu_num, int * lb_set, int * ub_set)
{
# 310 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 312 "/tmp/tmp.ctiSKezwS2/1.c"
(lb_set[gpu_num]) += (entry->offset);
# 313 "/tmp/tmp.ctiSKezwS2/1.c"
(ub_set[gpu_num]) += (entry->offset);
}
# 316 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_rewrite_loop_region_into_single(int * loop_lb_set, int * loop_ub_set)
{
# 318 "/tmp/tmp.ctiSKezwS2/1.c"
(loop_ub_set[(0)]) = (loop_ub_set[(__MACC_NUMGPUS - (1))]);
{
# 320 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 320 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (1); i < __MACC_NUMGPUS; i++) {
{
# 321 "/tmp/tmp.ctiSKezwS2/1.c"
(loop_lb_set[i]) = (1);
# 322 "/tmp/tmp.ctiSKezwS2/1.c"
(loop_ub_set[i]) = (0);
}
}
}
}
# 326 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_rewrite_data_region_into_single(int * lb_set, int * ub_set)
{
# 328 "/tmp/tmp.ctiSKezwS2/1.c"
int gpu_ub = __MACC_NUMGPUS - (1);
# 329 "/tmp/tmp.ctiSKezwS2/1.c"
(lb_set[(0)]) = (((lb_set[(0)]) < (lb_set[gpu_ub])) ?(lb_set[(0)]) : (lb_set[gpu_ub]));
# 330 "/tmp/tmp.ctiSKezwS2/1.c"
(ub_set[(0)]) = (((ub_set[(0)]) > (ub_set[gpu_ub])) ?(ub_set[(0)]) : (ub_set[gpu_ub]));
}
# 333 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_sync_data(int gpu_num, void * ptr, int type_size, int lb, int ub)
{
# 335 "/tmp/tmp.ctiSKezwS2/1.c"
void * update_addr = ptr + (lb * type_size);
# 336 "/tmp/tmp.ctiSKezwS2/1.c"
unsigned long length_b = ((ub - lb) + (1)) * type_size;
# 338 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_self(update_addr, length_b);
{
# 341 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 341 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 344 "/tmp/tmp.ctiSKezwS2/1.c"
if(i != gpu_num) {
# 345 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_gpu_num(i);
# 346 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_device(update_addr, length_b);
}
}
}
}
# 350 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_gpu_num(gpu_num);
}
# 354 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_set_data_region(int gpu_num, void * ptr, int multi, int use_type, int * use_lb_set, int * use_ub_set, int def_type, int * def_lb_set, int * def_ub_set)
{
# 358 "/tmp/tmp.ctiSKezwS2/1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, ptr);
# 359 "/tmp/tmp.ctiSKezwS2/1.c"
ptr = (entry->addr);
# 364 "/tmp/tmp.ctiSKezwS2/1.c"
if(((entry->dirty) && (multi || (gpu_num != (0)))) && (__MACC_NUMGPUS > (1))) {
# 365 "/tmp/tmp.ctiSKezwS2/1.c"
int update_all = 0;
# 366 "/tmp/tmp.ctiSKezwS2/1.c"
int update_all_DtoH = 0;
# 368 "/tmp/tmp.ctiSKezwS2/1.c"
if((use_type == (0)) || (def_type == (0))) {
# 369 "/tmp/tmp.ctiSKezwS2/1.c"
update_all = (1);
}
else {
# 371 "/tmp/tmp.ctiSKezwS2/1.c"
if(def_type == (2)) {
{
# 372 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 372 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 373 "/tmp/tmp.ctiSKezwS2/1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (def_ub_set[i])) || ((entry->dirty_ub) < (def_lb_set[i]))))) {
# 376 "/tmp/tmp.ctiSKezwS2/1.c"
update_all = (1);
# 377 "/tmp/tmp.ctiSKezwS2/1.c"
break;
}
}
}
}
}
}
# 382 "/tmp/tmp.ctiSKezwS2/1.c"
if(! update_all) {
# 383 "/tmp/tmp.ctiSKezwS2/1.c"
int every_whole = 1;
# 384 "/tmp/tmp.ctiSKezwS2/1.c"
int unused_lb = entry->dirty_lb;
# 385 "/tmp/tmp.ctiSKezwS2/1.c"
int unused_ub = entry->dirty_ub;
{
# 387 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 387 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 388 "/tmp/tmp.ctiSKezwS2/1.c"
if(i != gpu_num) {
# 389 "/tmp/tmp.ctiSKezwS2/1.c"
if(((use_lb_set[i]) <= (entry->dirty_lb)) && ((entry->dirty_ub) <= (use_ub_set[i]))) {
# 391 "/tmp/tmp.ctiSKezwS2/1.c"
update_all_DtoH = (1);
}
else {
# 394 "/tmp/tmp.ctiSKezwS2/1.c"
every_whole = (0);
# 396 "/tmp/tmp.ctiSKezwS2/1.c"
if((use_lb_set[i]) <= unused_lb) {
# 397 "/tmp/tmp.ctiSKezwS2/1.c"
unused_lb = ((unused_lb > ((use_ub_set[i]) + (1))) ? unused_lb : ((use_ub_set[i]) + (1)));
}
else {
# 398 "/tmp/tmp.ctiSKezwS2/1.c"
if((use_ub_set[i]) >= unused_ub) {
# 399 "/tmp/tmp.ctiSKezwS2/1.c"
unused_ub = ((unused_ub < ((use_lb_set[i]) - (1))) ? unused_ub : ((use_lb_set[i]) - (1)));
}
}
}
}
}
}
}
# 404 "/tmp/tmp.ctiSKezwS2/1.c"
if(every_whole) {
# 405 "/tmp/tmp.ctiSKezwS2/1.c"
update_all = (1);
}
# 406 "/tmp/tmp.ctiSKezwS2/1.c"
if(unused_ub < unused_lb) {
# 407 "/tmp/tmp.ctiSKezwS2/1.c"
update_all_DtoH = (1);
}
}
# 411 "/tmp/tmp.ctiSKezwS2/1.c"
if(update_all) {
# 412 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 413 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty) = (0);
}
else {
# 417 "/tmp/tmp.ctiSKezwS2/1.c"
if((entry->dirty) && (use_type == (2))) {
# 418 "/tmp/tmp.ctiSKezwS2/1.c"
int thread_num = multi ? __MACC_NUMGPUS : (1);
# 420 "/tmp/tmp.ctiSKezwS2/1.c"
if(update_all_DtoH) {
# 421 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_self(ptr + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size));
}
{
# 425 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 425 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < thread_num; i++) {
{
# 429 "/tmp/tmp.ctiSKezwS2/1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (use_ub_set[i])) || ((entry->dirty_ub) < (use_lb_set[i]))))) {
# 433 "/tmp/tmp.ctiSKezwS2/1.c"
int update_lb = ((entry->dirty_lb) > (use_lb_set[i])) ?(entry->dirty_lb) : (use_lb_set[i]);
# 434 "/tmp/tmp.ctiSKezwS2/1.c"
int update_ub = ((entry->dirty_ub) < (use_ub_set[i])) ?(entry->dirty_ub) : (use_ub_set[i]);
# 435 "/tmp/tmp.ctiSKezwS2/1.c"
void * update_addr = ptr + (update_lb * (entry->type_size));
# 436 "/tmp/tmp.ctiSKezwS2/1.c"
unsigned long length_b = ((update_ub - update_lb) + (1)) * (entry->type_size);
# 438 "/tmp/tmp.ctiSKezwS2/1.c"
if(! update_all_DtoH) {
# 439 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_gpu_num(gpu_num);
# 440 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_self(update_addr, length_b);
}
# 442 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_gpu_num(i);
# 443 "/tmp/tmp.ctiSKezwS2/1.c"
acc_update_device(update_addr, length_b);
}
}
}
}
# 447 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_gpu_num(gpu_num);
}
}
}
# 456 "/tmp/tmp.ctiSKezwS2/1.c"
if((multi || (gpu_num == (0))) && (def_type != (1))) {
# 457 "/tmp/tmp.ctiSKezwS2/1.c"
if(def_type == (0)) {
# 458 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty) = (1);
# 459 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_lb) = (entry->entire_lb);
# 460 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_ub) = (entry->entire_ub);
}
else {
# 463 "/tmp/tmp.ctiSKezwS2/1.c"
if(!(entry->dirty)) {
# 464 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty) = (1);
# 465 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 466 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
else {
# 471 "/tmp/tmp.ctiSKezwS2/1.c"
if(((!(((entry->dirty_lb) > (def_ub_set[gpu_num])) || ((entry->dirty_ub) < (def_lb_set[gpu_num])))) || ((entry->dirty_lb) == ((def_ub_set[gpu_num]) + (1)))) || ((def_lb_set[gpu_num]) == ((entry->dirty_ub) + (1)))) {
# 479 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_lb) = (((entry->dirty_lb) < (def_lb_set[gpu_num])) ?(entry->dirty_lb) : (def_lb_set[gpu_num]));
# 480 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_ub) = (((entry->dirty_ub) > (def_ub_set[gpu_num])) ?(entry->dirty_ub) : (def_ub_set[gpu_num]));
}
else {
# 484 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_sync_data(gpu_num, ptr, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 485 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 486 "/tmp/tmp.ctiSKezwS2/1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
}
}
}
}
# 491 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_set_data_region_multi(int gpu_num, int multi, int len, void * * ptrs, int * use_type, int * * use_lb_set, int * * use_ub_set, int * def_type, int * * def_lb_set, int * * def_ub_set)
{
{
# 497 "/tmp/tmp.ctiSKezwS2/1.c"
int i;
# 497 "/tmp/tmp.ctiSKezwS2/1.c"
for(i = (0); i < len; i++) {
{
# 500 "/tmp/tmp.ctiSKezwS2/1.c"
int tnum = i;
# 502 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_gpu_num(gpu_num);
# 504 "/tmp/tmp.ctiSKezwS2/1.c"
__macc_set_data_region(gpu_num, ptrs[tnum], multi, use_type[tnum], use_lb_set[tnum], use_ub_set[tnum], def_type[tnum], def_lb_set[tnum], def_ub_set[tnum]);
}
}
}
}
# 511 "/tmp/tmp.ctiSKezwS2/1.c"
void __macc_init()
{
# 513 "/tmp/tmp.ctiSKezwS2/1.c"
char * env_macc_numgpus = getenv("MACC_NUMGPUS");
# 515 "/tmp/tmp.ctiSKezwS2/1.c"
if(env_macc_numgpus != ((void * )(0))) {
# 516 "/tmp/tmp.ctiSKezwS2/1.c"
__MACC_NUMGPUS = (atoi(env_macc_numgpus));
}
else {
# 519 "/tmp/tmp.ctiSKezwS2/1.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
}
# 522 "/tmp/tmp.ctiSKezwS2/1.c"
if(__MACC_NUMGPUS <= (0)) {
# 523 "/tmp/tmp.ctiSKezwS2/1.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 524 "/tmp/tmp.ctiSKezwS2/1.c"
exit(-(1));
}
# 540 "/tmp/tmp.ctiSKezwS2/1.c"
__MACC_DATA_TABLE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
# 541 "/tmp/tmp.ctiSKezwS2/1.c"
__MACC_DATA_WRAP_CACHE_SET = (calloc_managed(__MACC_NUMGPUS, sizeof(struct __MaccDataWrapCache)));
{
# 544 "/tmp/tmp.ctiSKezwS2/1.c"
int t;
# 544 "/tmp/tmp.ctiSKezwS2/1.c"
for(t = (0); t < (10); t++) {
{
# 545 "/tmp/tmp.ctiSKezwS2/1.c"
printf("[MACC] Wake up (%d)\n", t);
{
# 547 "/tmp/tmp.ctiSKezwS2/1.c"
int n = ((256) * (1024)) * (1024);
# 548 "/tmp/tmp.ctiSKezwS2/1.c"
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
static void * __macc_ptrs[1];
static int __macc_use_types[1];
static int * __macc_use_lb_sets[1];
static int * __macc_use_ub_sets[1];
static int __macc_def_types[1];
static int * __macc_def_lb_sets[1];
static int * __macc_def_ub_sets[1];
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
(__macc_ptrs[0]) = tmp;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_tmp_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_tmp_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_tmp_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_tmp_def_ub_set;
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
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((512) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : 512 );
#pragma acc parallel present ( tmp ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector
# 554 "/tmp/tmp.ctiSKezwS2/1.c"
# 554 "/tmp/tmp.ctiSKezwS2/1.c"
for(int i= __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 555 "/tmp/tmp.ctiSKezwS2/1.c"
(tmp[i]) = i;
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
(__macc_ptrs[0]) = tmp;
(__macc_use_types[0]) = (2);
(__macc_use_lb_sets[0]) = __macc_tmp_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_tmp_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_tmp_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_tmp_def_ub_set;
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
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 1, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
__macc_num_gangs = ( __macc_multi ? (((512) + __MACC_NUMGPUS) - (1)) / __MACC_NUMGPUS : 512 );
#pragma acc parallel present ( tmp ) num_gangs  (__macc_num_gangs)  vector_length ( 1024 )
#pragma acc loop gang vector
# 559 "/tmp/tmp.ctiSKezwS2/1.c"
# 559 "/tmp/tmp.ctiSKezwS2/1.c"
for(int i= __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 560 "/tmp/tmp.ctiSKezwS2/1.c"
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
# 563 "/tmp/tmp.ctiSKezwS2/1.c"
free_managed(tmp);
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
extern int gettimeofday(struct timeval * restrict __tv, struct timezone * restrict __tz);
extern int settimeofday(struct timeval const * __tv, struct timezone const * __tz);
extern int adjtime(struct timeval const * __delta, struct timeval * __olddelta);
extern int getitimer(int __which, struct itimerval * __value);
extern int setitimer(int __which, struct itimerval const * restrict __new, struct itimerval * restrict __old);
extern int utimes(char const * __file, struct timeval const __tvp[2]);
extern int lutimes(char const * __file, struct timeval const __tvp[2]);
extern int futimes(int __fd, struct timeval const __tvp[2]);
int newMat(struct Mat * Mat, int mnums, int mrows, int mcols, int mdeps);
void clearMat(struct Mat * Mat);
void set_param(int is[], char * size);
void mat_set(struct Mat * Mat, int l, float val);
void mat_set_init(struct Mat * Mat);
float jacobi(int nn, struct Mat * a, struct Mat * b, struct Mat * c, struct Mat * p, struct Mat * bnd, struct Mat * wrk1, struct Mat * wrk2);
double fflop(int mx, int my, int mz);
double mflops(int nn, double cpu, double flop);
# 32 "/tmp/tmp.ctiSKezwS2/in.c"
double second()
{
# 35 "/tmp/tmp.ctiSKezwS2/in.c"
struct timeval tm;
# 36 "/tmp/tmp.ctiSKezwS2/in.c"
double t;
# 38 "/tmp/tmp.ctiSKezwS2/in.c"
static int base_sec = 0;
# 38 "/tmp/tmp.ctiSKezwS2/in.c"
static int base_usec = 0;
# 40 "/tmp/tmp.ctiSKezwS2/in.c"
gettimeofday(&(tm), (void * )(0));
# 42 "/tmp/tmp.ctiSKezwS2/in.c"
if((base_sec == (0)) && (base_usec == (0))) {
# 44 "/tmp/tmp.ctiSKezwS2/in.c"
base_sec = ((&(tm))->tv_sec);
# 45 "/tmp/tmp.ctiSKezwS2/in.c"
base_usec = ((&(tm))->tv_usec);
# 46 "/tmp/tmp.ctiSKezwS2/in.c"
t = (0.0);
}
else {
# 48 "/tmp/tmp.ctiSKezwS2/in.c"
t = (((double)(((&(tm))->tv_sec) - base_sec)) + (((double)(((&(tm))->tv_usec) - base_usec)) / (1.0e6)));
}
# 52 "/tmp/tmp.ctiSKezwS2/in.c"
return t;
}
# 55 "/tmp/tmp.ctiSKezwS2/in.c"
float omega = 0.8;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat a;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat b;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat c;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat p;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat bnd;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat wrk1;
# 56 "/tmp/tmp.ctiSKezwS2/in.c"
struct Mat wrk2;
# 58 "/tmp/tmp.ctiSKezwS2/in.c"
int main(int argc, char * argv[])
{
__macc_init();
{
# 61 "/tmp/tmp.ctiSKezwS2/in.c"
int i;
# 61 "/tmp/tmp.ctiSKezwS2/in.c"
int j;
# 61 "/tmp/tmp.ctiSKezwS2/in.c"
int k;
# 61 "/tmp/tmp.ctiSKezwS2/in.c"
int nn;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int imax;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int jmax;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int kmax;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int mimax;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int mjmax;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int mkmax;
# 62 "/tmp/tmp.ctiSKezwS2/in.c"
int msize[3];
# 63 "/tmp/tmp.ctiSKezwS2/in.c"
float gosa;
# 63 "/tmp/tmp.ctiSKezwS2/in.c"
float target;
# 64 "/tmp/tmp.ctiSKezwS2/in.c"
double cpu0;
# 64 "/tmp/tmp.ctiSKezwS2/in.c"
double cpu1;
# 64 "/tmp/tmp.ctiSKezwS2/in.c"
double cpu;
# 64 "/tmp/tmp.ctiSKezwS2/in.c"
double flop;
# 65 "/tmp/tmp.ctiSKezwS2/in.c"
char size[10];
# 66 "/tmp/tmp.ctiSKezwS2/in.c"
unsigned long bs;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * a_m;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * b_m;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * c_m;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * p_m;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * bnd_m;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * wrk1_m;
# 67 "/tmp/tmp.ctiSKezwS2/in.c"
float * wrk2_m;
# 69 "/tmp/tmp.ctiSKezwS2/in.c"
if(argc == (2)) {
# 70 "/tmp/tmp.ctiSKezwS2/in.c"
strcpy(size, argv[1]);
}
else {
# 72 "/tmp/tmp.ctiSKezwS2/in.c"
printf("For example: \n");
# 73 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Grid-size= XS (32x32x64)\n");
# 74 "/tmp/tmp.ctiSKezwS2/in.c"
printf("\t    S  (64x64x128)\n");
# 75 "/tmp/tmp.ctiSKezwS2/in.c"
printf("\t    M  (128x128x256)\n");
# 76 "/tmp/tmp.ctiSKezwS2/in.c"
printf("\t    L  (256x256x512)\n");
# 77 "/tmp/tmp.ctiSKezwS2/in.c"
printf("\t    XL (512x512x1024)\n\n");
# 78 "/tmp/tmp.ctiSKezwS2/in.c"
printf("Grid-size = ");
# 79 "/tmp/tmp.ctiSKezwS2/in.c"
__isoc99_scanf("%s", size);
# 80 "/tmp/tmp.ctiSKezwS2/in.c"
printf("\n");
}
# 83 "/tmp/tmp.ctiSKezwS2/in.c"
set_param(msize, size);
# 85 "/tmp/tmp.ctiSKezwS2/in.c"
mimax = (msize[0]);
# 86 "/tmp/tmp.ctiSKezwS2/in.c"
mjmax = (msize[1]);
# 87 "/tmp/tmp.ctiSKezwS2/in.c"
mkmax = (msize[2]);
# 88 "/tmp/tmp.ctiSKezwS2/in.c"
imax = (mimax - (1));
# 89 "/tmp/tmp.ctiSKezwS2/in.c"
jmax = (mjmax - (1));
# 90 "/tmp/tmp.ctiSKezwS2/in.c"
kmax = (mkmax - (1));
# 91 "/tmp/tmp.ctiSKezwS2/in.c"
bs = ((mimax * mjmax) * mkmax);
# 93 "/tmp/tmp.ctiSKezwS2/in.c"
target = (60.0);
# 95 "/tmp/tmp.ctiSKezwS2/in.c"
printf("mimax = %d mjmax = %d mkmax = %d\n", mimax, mjmax, mkmax);
# 96 "/tmp/tmp.ctiSKezwS2/in.c"
printf("imax = %d jmax = %d kmax =%d\n", imax, jmax, kmax);
# 101 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(p), 1, mimax, mjmax, mkmax);
# 102 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(bnd), 1, mimax, mjmax, mkmax);
# 103 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(wrk1), 1, mimax, mjmax, mkmax);
# 104 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(wrk2), 1, mimax, mjmax, mkmax);
# 105 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(a), 4, mimax, mjmax, mkmax);
# 106 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(b), 3, mimax, mjmax, mkmax);
# 107 "/tmp/tmp.ctiSKezwS2/in.c"
newMat(&(c), 3, mimax, mjmax, mkmax);
# 109 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set_init(&(p));
# 110 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(bnd), 0, 1.0);
# 111 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(wrk1), 0, 0.0);
# 112 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(wrk2), 0, 0.0);
# 113 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(a), 0, 1.0);
# 114 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(a), 1, 1.0);
# 115 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(a), 2, 1.0);
# 116 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(a), 3, (1.0) / (6.0));
# 117 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(b), 0, 0.0);
# 118 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(b), 1, 0.0);
# 119 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(b), 2, 0.0);
# 120 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(c), 0, 1.0);
# 121 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(c), 1, 1.0);
# 122 "/tmp/tmp.ctiSKezwS2/in.c"
mat_set(&(c), 2, 1.0);
# 128 "/tmp/tmp.ctiSKezwS2/in.c"
a_m = ((&(a))->m);
# 129 "/tmp/tmp.ctiSKezwS2/in.c"
b_m = ((&(b))->m);
# 130 "/tmp/tmp.ctiSKezwS2/in.c"
c_m = ((&(c))->m);
# 131 "/tmp/tmp.ctiSKezwS2/in.c"
p_m = ((&(p))->m);
# 132 "/tmp/tmp.ctiSKezwS2/in.c"
bnd_m = ((&(bnd))->m);
# 133 "/tmp/tmp.ctiSKezwS2/in.c"
wrk1_m = ((&(wrk1))->m);
# 134 "/tmp/tmp.ctiSKezwS2/in.c"
wrk2_m = ((&(wrk2))->m);
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyin(__macc_tnum, p_m, sizeof(float), 0, bs);
}
}
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyin(__macc_tnum, a_m, sizeof(float), 0, bs * (4));
__macc_copyin(__macc_tnum, b_m, sizeof(float), 0, bs * (3));
__macc_copyin(__macc_tnum, c_m, sizeof(float), 0, bs * (3));
__macc_copyin(__macc_tnum, bnd_m, sizeof(float), 0, bs);
__macc_copyin(__macc_tnum, wrk1_m, sizeof(float), 0, bs);
__macc_copyin(__macc_tnum, wrk2_m, sizeof(float), 0, bs);
}
}
{
# 141 "/tmp/tmp.ctiSKezwS2/in.c"
jacobi(1, &(a), &(b), &(c), &(p), &(bnd), &(wrk1), &(wrk2));
# 143 "/tmp/tmp.ctiSKezwS2/in.c"
nn = (3);
# 144 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Start rehearsal measurement process.\n");
# 145 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Measure the performance in %d times.\n\n", nn);
# 147 "/tmp/tmp.ctiSKezwS2/in.c"
cpu0 = (second());
# 148 "/tmp/tmp.ctiSKezwS2/in.c"
gosa = (jacobi(nn, &(a), &(b), &(c), &(p), &(bnd), &(wrk1), &(wrk2)));
# 149 "/tmp/tmp.ctiSKezwS2/in.c"
cpu1 = (second());
# 150 "/tmp/tmp.ctiSKezwS2/in.c"
cpu = (cpu1 - cpu0);
# 151 "/tmp/tmp.ctiSKezwS2/in.c"
flop = (fflop(imax, jmax, kmax));
# 153 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" MFLOPS: %f time(s): %f %e\n\n", mflops(nn, cpu, flop), cpu, gosa);
# 156 "/tmp/tmp.ctiSKezwS2/in.c"
nn = ((int)(target / (cpu / (3.0))));
# 158 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Now, start the actual measurement process.\n");
# 159 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" The loop will be excuted in %d times\n", nn);
# 160 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" This will take about one minute.\n");
# 161 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Wait for a while\n\n");
# 163 "/tmp/tmp.ctiSKezwS2/in.c"
cpu0 = (second());
# 164 "/tmp/tmp.ctiSKezwS2/in.c"
gosa = (jacobi(nn, &(a), &(b), &(c), &(p), &(bnd), &(wrk1), &(wrk2)));
# 165 "/tmp/tmp.ctiSKezwS2/in.c"
cpu1 = (second());
# 166 "/tmp/tmp.ctiSKezwS2/in.c"
cpu = (cpu1 - cpu0);
# 168 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Loop executed for %d times\n", nn);
# 169 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Gosa : %e \n", gosa);
# 170 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" MFLOPS measured : %f\tcpu : %f\n", mflops(nn, cpu, flop), cpu);
# 171 "/tmp/tmp.ctiSKezwS2/in.c"
printf(" Score based on Pentium III 600MHz using Fortran 77: %f\n", (mflops(nn, cpu, flop)) / (82), 84);
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_delete(__macc_tnum, a_m, sizeof(float), 0, bs * (4));
__macc_delete(__macc_tnum, b_m, sizeof(float), 0, bs * (3));
__macc_delete(__macc_tnum, c_m, sizeof(float), 0, bs * (3));
__macc_delete(__macc_tnum, bnd_m, sizeof(float), 0, bs);
__macc_delete(__macc_tnum, wrk1_m, sizeof(float), 0, bs);
__macc_delete(__macc_tnum, wrk2_m, sizeof(float), 0, bs);
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_copyout(__macc_tnum, p_m, sizeof(float), 0, bs);
}
}
}
# 178 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(p));
# 179 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(bnd));
# 180 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(wrk1));
# 181 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(wrk2));
# 182 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(a));
# 183 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(b));
# 184 "/tmp/tmp.ctiSKezwS2/in.c"
clearMat(&(c));
# 186 "/tmp/tmp.ctiSKezwS2/in.c"
return 0;
}
}
# 189 "/tmp/tmp.ctiSKezwS2/in.c"
double fflop(int mx, int my, int mz)
{
# 192 "/tmp/tmp.ctiSKezwS2/in.c"
return ((((double)(mz - (2))) * ((double)(my - (2)))) * ((double)(mx - (2)))) * (34.0);
}
# 195 "/tmp/tmp.ctiSKezwS2/in.c"
double mflops(int nn, double cpu, double flop)
{
# 198 "/tmp/tmp.ctiSKezwS2/in.c"
return ((flop / cpu) * (1.e-6)) * ((double)(nn));
}
# 201 "/tmp/tmp.ctiSKezwS2/in.c"
void set_param(int is[], char * size)
{
# 204 "/tmp/tmp.ctiSKezwS2/in.c"
if((!(strcmp(size, "XS"))) || (!(strcmp(size, "xs")))) {
# 205 "/tmp/tmp.ctiSKezwS2/in.c"
(is[0]) = (32);
# 206 "/tmp/tmp.ctiSKezwS2/in.c"
(is[1]) = (32);
# 207 "/tmp/tmp.ctiSKezwS2/in.c"
(is[2]) = (64);
# 208 "/tmp/tmp.ctiSKezwS2/in.c"
return ;
}
# 210 "/tmp/tmp.ctiSKezwS2/in.c"
if((!(strcmp(size, "S"))) || (!(strcmp(size, "s")))) {
# 211 "/tmp/tmp.ctiSKezwS2/in.c"
(is[0]) = (64);
# 212 "/tmp/tmp.ctiSKezwS2/in.c"
(is[1]) = (64);
# 213 "/tmp/tmp.ctiSKezwS2/in.c"
(is[2]) = (128);
# 214 "/tmp/tmp.ctiSKezwS2/in.c"
return ;
}
# 216 "/tmp/tmp.ctiSKezwS2/in.c"
if((!(strcmp(size, "M"))) || (!(strcmp(size, "m")))) {
# 217 "/tmp/tmp.ctiSKezwS2/in.c"
(is[0]) = (128);
# 218 "/tmp/tmp.ctiSKezwS2/in.c"
(is[1]) = (128);
# 219 "/tmp/tmp.ctiSKezwS2/in.c"
(is[2]) = (256);
# 220 "/tmp/tmp.ctiSKezwS2/in.c"
return ;
}
# 222 "/tmp/tmp.ctiSKezwS2/in.c"
if((!(strcmp(size, "L"))) || (!(strcmp(size, "l")))) {
# 223 "/tmp/tmp.ctiSKezwS2/in.c"
(is[0]) = (256);
# 224 "/tmp/tmp.ctiSKezwS2/in.c"
(is[1]) = (256);
# 225 "/tmp/tmp.ctiSKezwS2/in.c"
(is[2]) = (512);
# 226 "/tmp/tmp.ctiSKezwS2/in.c"
return ;
}
# 228 "/tmp/tmp.ctiSKezwS2/in.c"
if((!(strcmp(size, "XL"))) || (!(strcmp(size, "xl")))) {
# 229 "/tmp/tmp.ctiSKezwS2/in.c"
(is[0]) = (512);
# 230 "/tmp/tmp.ctiSKezwS2/in.c"
(is[1]) = (512);
# 231 "/tmp/tmp.ctiSKezwS2/in.c"
(is[2]) = (1024);
# 232 "/tmp/tmp.ctiSKezwS2/in.c"
return ;
}
else {
# 234 "/tmp/tmp.ctiSKezwS2/in.c"
printf("Invalid input character !!\n");
# 235 "/tmp/tmp.ctiSKezwS2/in.c"
exit(6);
}
}
# 239 "/tmp/tmp.ctiSKezwS2/in.c"
int newMat(struct Mat * Mat, int mnums, int mrows, int mcols, int mdeps)
{
# 242 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mnums) = mnums;
# 243 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mrows) = mrows;
# 244 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mcols) = mcols;
# 245 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mdeps) = mdeps;
# 246 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->m) = ((void * )(0));
# 247 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->m) = ((float * )(malloc_managed((((mnums * mrows) * mcols) * mdeps) * (sizeof(float)))));
# 250 "/tmp/tmp.ctiSKezwS2/in.c"
return ((Mat->m) != ((void * )(0))) ?(1) : (0);
}
# 253 "/tmp/tmp.ctiSKezwS2/in.c"
void clearMat(struct Mat * Mat)
{
# 256 "/tmp/tmp.ctiSKezwS2/in.c"
if(Mat->m) {
# 257 "/tmp/tmp.ctiSKezwS2/in.c"
free_managed(Mat->m);
}
# 258 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->m) = ((void * )(0));
# 259 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mnums) = (0);
# 260 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mcols) = (0);
# 261 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mrows) = (0);
# 262 "/tmp/tmp.ctiSKezwS2/in.c"
(Mat->mdeps) = (0);
}
# 265 "/tmp/tmp.ctiSKezwS2/in.c"
void mat_set(struct Mat * Mat, int l, float val)
{
# 268 "/tmp/tmp.ctiSKezwS2/in.c"
int i;
# 268 "/tmp/tmp.ctiSKezwS2/in.c"
int j;
# 268 "/tmp/tmp.ctiSKezwS2/in.c"
int k;
# 270 "/tmp/tmp.ctiSKezwS2/in.c"
for(i = (0); i < (Mat->mrows); i++) {
{
# 271 "/tmp/tmp.ctiSKezwS2/in.c"
for(j = (0); j < (Mat->mcols); j++) {
{
# 272 "/tmp/tmp.ctiSKezwS2/in.c"
for(k = (0); k < (Mat->mdeps); k++) {
{
# 273 "/tmp/tmp.ctiSKezwS2/in.c"
(*((Mat->m) + ((((((l * (Mat->mrows)) * (Mat->mcols)) * (Mat->mdeps)) + ((i * (Mat->mcols)) * (Mat->mdeps))) + (j * (Mat->mdeps))) + k))) = val;
}
}
}
}
}
}
}
# 276 "/tmp/tmp.ctiSKezwS2/in.c"
void mat_set_init(struct Mat * Mat)
{
# 279 "/tmp/tmp.ctiSKezwS2/in.c"
int i;
# 279 "/tmp/tmp.ctiSKezwS2/in.c"
int j;
# 279 "/tmp/tmp.ctiSKezwS2/in.c"
int k;
# 279 "/tmp/tmp.ctiSKezwS2/in.c"
int l;
# 280 "/tmp/tmp.ctiSKezwS2/in.c"
float tt;
# 282 "/tmp/tmp.ctiSKezwS2/in.c"
for(i = (0); i < (Mat->mrows); i++) {
{
# 283 "/tmp/tmp.ctiSKezwS2/in.c"
for(j = (0); j < (Mat->mcols); j++) {
{
# 284 "/tmp/tmp.ctiSKezwS2/in.c"
for(k = (0); k < (Mat->mdeps); k++) {
{
# 285 "/tmp/tmp.ctiSKezwS2/in.c"
(*((Mat->m) + (((((((0) * (Mat->mrows)) * (Mat->mcols)) * (Mat->mdeps)) + ((i * (Mat->mcols)) * (Mat->mdeps))) + (j * (Mat->mdeps))) + k))) = (((float)(i * i)) / ((float)(((Mat->mrows) - (1)) * ((Mat->mrows) - (1)))));
}
}
}
}
}
}
}
# 300 "/tmp/tmp.ctiSKezwS2/in.c"
float jacobi(int nn, struct Mat * a, struct Mat * b, struct Mat * c, struct Mat * p, struct Mat * bnd, struct Mat * wrk1, struct Mat * wrk2)
{
# 304 "/tmp/tmp.ctiSKezwS2/in.c"
unsigned long mrows = p->mrows;
# 305 "/tmp/tmp.ctiSKezwS2/in.c"
unsigned long mcols = p->mcols;
# 306 "/tmp/tmp.ctiSKezwS2/in.c"
unsigned long mdeps = p->mdeps;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int i;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int j;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int k;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int n;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int imax;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int jmax;
# 308 "/tmp/tmp.ctiSKezwS2/in.c"
int kmax;
# 309 "/tmp/tmp.ctiSKezwS2/in.c"
float gosa;
# 309 "/tmp/tmp.ctiSKezwS2/in.c"
float s0;
# 309 "/tmp/tmp.ctiSKezwS2/in.c"
float ss;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * a_m;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * b_m;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * c_m;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * p_m;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * bnd_m;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * wrk1_m;
# 311 "/tmp/tmp.ctiSKezwS2/in.c"
float * wrk2_m;
# 313 "/tmp/tmp.ctiSKezwS2/in.c"
imax = (mrows - (1));
# 314 "/tmp/tmp.ctiSKezwS2/in.c"
jmax = (mcols - (1));
# 315 "/tmp/tmp.ctiSKezwS2/in.c"
kmax = (mdeps - (1));
# 317 "/tmp/tmp.ctiSKezwS2/in.c"
a_m = (a->m);
# 318 "/tmp/tmp.ctiSKezwS2/in.c"
b_m = (b->m);
# 319 "/tmp/tmp.ctiSKezwS2/in.c"
c_m = (c->m);
# 320 "/tmp/tmp.ctiSKezwS2/in.c"
p_m = (p->m);
# 321 "/tmp/tmp.ctiSKezwS2/in.c"
bnd_m = (bnd->m);
# 322 "/tmp/tmp.ctiSKezwS2/in.c"
wrk1_m = (wrk1->m);
# 323 "/tmp/tmp.ctiSKezwS2/in.c"
wrk2_m = (wrk2->m);
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
}
}
# 326 "/tmp/tmp.ctiSKezwS2/in.c"
for(n = (0); n < nn; n++) {
{
# 327 "/tmp/tmp.ctiSKezwS2/in.c"
gosa = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
static void * __macc_ptrs[7];
static int __macc_use_types[7];
static int * __macc_use_lb_sets[7];
static int * __macc_use_ub_sets[7];
static int __macc_def_types[7];
static int * __macc_def_lb_sets[7];
static int * __macc_def_ub_sets[7];
static int __macc_wrk1_m_def_ub_set[10];
static int __macc_wrk1_m_def_lb_set[10];
static int __macc_wrk1_m_use_ub_set[10];
static int __macc_wrk1_m_use_lb_set[10];
static int __macc_p_m_def_ub_set[10];
static int __macc_p_m_def_lb_set[10];
static int __macc_p_m_use_ub_set[10];
static int __macc_p_m_use_lb_set[10];
static int __macc_c_m_def_ub_set[10];
static int __macc_c_m_def_lb_set[10];
static int __macc_c_m_use_ub_set[10];
static int __macc_c_m_use_lb_set[10];
static int __macc_bnd_m_def_ub_set[10];
static int __macc_bnd_m_def_lb_set[10];
static int __macc_bnd_m_use_ub_set[10];
static int __macc_bnd_m_use_lb_set[10];
static int __macc_b_m_def_ub_set[10];
static int __macc_b_m_def_lb_set[10];
static int __macc_b_m_use_ub_set[10];
static int __macc_b_m_use_lb_set[10];
static int __macc_a_m_def_ub_set[10];
static int __macc_a_m_def_lb_set[10];
static int __macc_a_m_use_ub_set[10];
static int __macc_a_m_use_lb_set[10];
static int __macc_wrk2_m_def_ub_set[10];
static int __macc_wrk2_m_def_lb_set[10];
static int __macc_wrk2_m_use_ub_set[10];
static int __macc_wrk2_m_use_lb_set[10];
static int __macc_imax_last;
static unsigned long __macc_mrows_last;
static unsigned long __macc_mcols_last;
static unsigned long __macc_mdeps_last;
static int __macc_i_loop_lb_set[10];
static int __macc_i_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((mdeps != __macc_mdeps_last) || ((mcols != __macc_mcols_last) || ((mrows != __macc_mrows_last) || (imax != __macc_imax_last)))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_mdeps_last = mdeps;
__macc_mcols_last = mcols;
__macc_mrows_last = mrows;
__macc_imax_last = imax;
}
{
__macc_calc_loop_region(__macc_i_loop_lb_set, __macc_i_loop_ub_set, 1, imax - (1), 1, 1);
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
{
__macc_init_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
__macc_adjust_data_region(wrk2_m, __macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set);
__macc_adjust_data_region(wrk2_m, __macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set);
}
(__macc_ptrs[0]) = wrk2_m;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_wrk2_m_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_wrk2_m_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_wrk2_m_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_wrk2_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_a_m_def_lb_set, __macc_a_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(a_m, __macc_gpu_num, __macc_a_m_use_lb_set, __macc_a_m_use_ub_set);
__macc_adjust_data_region(a_m, __macc_gpu_num, __macc_a_m_def_lb_set, __macc_a_m_def_ub_set);
}
(__macc_ptrs[1]) = a_m;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_a_m_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_a_m_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_a_m_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_a_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_b_m_def_lb_set, __macc_b_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(b_m, __macc_gpu_num, __macc_b_m_use_lb_set, __macc_b_m_use_ub_set);
__macc_adjust_data_region(b_m, __macc_gpu_num, __macc_b_m_def_lb_set, __macc_b_m_def_ub_set);
}
(__macc_ptrs[2]) = b_m;
(__macc_use_types[2]) = (2);
(__macc_use_lb_sets[2]) = __macc_b_m_use_lb_set;
(__macc_use_ub_sets[2]) = __macc_b_m_use_ub_set;
(__macc_def_types[2]) = (1);
(__macc_def_lb_sets[2]) = __macc_b_m_def_lb_set;
(__macc_def_ub_sets[2]) = __macc_b_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_bnd_m_def_lb_set, __macc_bnd_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(bnd_m, __macc_gpu_num, __macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set);
__macc_adjust_data_region(bnd_m, __macc_gpu_num, __macc_bnd_m_def_lb_set, __macc_bnd_m_def_ub_set);
}
(__macc_ptrs[3]) = bnd_m;
(__macc_use_types[3]) = (2);
(__macc_use_lb_sets[3]) = __macc_bnd_m_use_lb_set;
(__macc_use_ub_sets[3]) = __macc_bnd_m_use_ub_set;
(__macc_def_types[3]) = (1);
(__macc_def_lb_sets[3]) = __macc_bnd_m_def_lb_set;
(__macc_def_ub_sets[3]) = __macc_bnd_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_c_m_def_lb_set, __macc_c_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(c_m, __macc_gpu_num, __macc_c_m_use_lb_set, __macc_c_m_use_ub_set);
__macc_adjust_data_region(c_m, __macc_gpu_num, __macc_c_m_def_lb_set, __macc_c_m_def_ub_set);
}
(__macc_ptrs[4]) = c_m;
(__macc_use_types[4]) = (2);
(__macc_use_lb_sets[4]) = __macc_c_m_use_lb_set;
(__macc_use_ub_sets[4]) = __macc_c_m_use_ub_set;
(__macc_def_types[4]) = (1);
(__macc_def_lb_sets[4]) = __macc_c_m_def_lb_set;
(__macc_def_ub_sets[4]) = __macc_c_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((jmax - (1)) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((kmax - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(p_m, __macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set);
__macc_adjust_data_region(p_m, __macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set);
}
(__macc_ptrs[5]) = p_m;
(__macc_use_types[5]) = (2);
(__macc_use_lb_sets[5]) = __macc_p_m_use_lb_set;
(__macc_use_ub_sets[5]) = __macc_p_m_use_ub_set;
(__macc_def_types[5]) = (1);
(__macc_def_lb_sets[5]) = __macc_p_m_def_lb_set;
(__macc_def_ub_sets[5]) = __macc_p_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_wrk1_m_def_lb_set, __macc_wrk1_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(wrk1_m, __macc_gpu_num, __macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set);
__macc_adjust_data_region(wrk1_m, __macc_gpu_num, __macc_wrk1_m_def_lb_set, __macc_wrk1_m_def_ub_set);
}
(__macc_ptrs[6]) = wrk1_m;
(__macc_use_types[6]) = (2);
(__macc_use_lb_sets[6]) = __macc_wrk1_m_use_lb_set;
(__macc_use_ub_sets[6]) = __macc_wrk1_m_use_ub_set;
(__macc_def_types[6]) = (1);
(__macc_def_lb_sets[6]) = __macc_wrk1_m_def_lb_set;
(__macc_def_ub_sets[6]) = __macc_wrk1_m_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i_loop_lb_set, __macc_i_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_wrk1_m_use_lb_set, __macc_wrk1_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_m_use_lb_set, __macc_p_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_c_m_use_lb_set, __macc_c_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_bnd_m_use_lb_set, __macc_bnd_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_b_m_use_lb_set, __macc_b_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_a_m_use_lb_set, __macc_a_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : gosa ) private ( i , j , k )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 7, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
#pragma acc parallel present ( a_m , b_m , c_m , p_m , bnd_m , wrk1_m , wrk2_m ) vector_length ( 256 ) reduction ( + : gosa )
#pragma acc loop independent collapse ( 3 )
# 330 "/tmp/tmp.ctiSKezwS2/in.c"
for(i = __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 331 "/tmp/tmp.ctiSKezwS2/in.c"
for(j = (1); j < jmax; j++) {
{
# 332 "/tmp/tmp.ctiSKezwS2/in.c"
for(k = (1); k < kmax; k++) {
{
# 333 "/tmp/tmp.ctiSKezwS2/in.c"
s0 = (((((((((((a_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + (j * mdeps)) + k)])) + ((a_m[(((((((1) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j + (1)) * mdeps)) + k)]))) + ((a_m[(((((((2) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + (k + (1)))]))) + ((b_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * ((((p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + ((j + (1)) * mdeps)) + k)]) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + ((j - (1)) * mdeps)) + k)])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + ((j + (1)) * mdeps)) + k)])) + (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + ((j - (1)) * mdeps)) + k)])))) + ((b_m[(((((((1) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * ((((p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j + (1)) * mdeps)) + (k + (1)))]) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j - (1)) * mdeps)) + (k + (1)))])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j + (1)) * mdeps)) + (k - (1)))])) + (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j - (1)) * mdeps)) + (k - (1)))])))) + ((b_m[(((((((2) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * ((((p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + (j * mdeps)) + (k + (1)))]) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + (j * mdeps)) + (k + (1)))])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + (j * mdeps)) + (k - (1)))])) + (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + (j * mdeps)) + (k - (1)))])))) + ((c_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + (j * mdeps)) + k)]))) + ((c_m[(((((((1) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j - (1)) * mdeps)) + k)]))) + ((c_m[(((((((2) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + (k - (1)))]))) + (wrk1_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]));
# 350 "/tmp/tmp.ctiSKezwS2/in.c"
ss = (((s0 * (a_m[(((((((3) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)])) * (bnd_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]));
# 352 "/tmp/tmp.ctiSKezwS2/in.c"
gosa += (ss * ss);
# 353 "/tmp/tmp.ctiSKezwS2/in.c"
(wrk2_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) = ((p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) + (omega * ss));
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
static void * __macc_ptrs[2];
static int __macc_use_types[2];
static int * __macc_use_lb_sets[2];
static int * __macc_use_ub_sets[2];
static int __macc_def_types[2];
static int * __macc_def_lb_sets[2];
static int * __macc_def_ub_sets[2];
static int __macc_wrk2_m_def_ub_set[10];
static int __macc_wrk2_m_def_lb_set[10];
static int __macc_wrk2_m_use_ub_set[10];
static int __macc_wrk2_m_use_lb_set[10];
static int __macc_p_m_def_ub_set[10];
static int __macc_p_m_def_lb_set[10];
static int __macc_p_m_use_ub_set[10];
static int __macc_p_m_use_lb_set[10];
static int __macc_imax_last;
static unsigned long __macc_mrows_last;
static unsigned long __macc_mcols_last;
static unsigned long __macc_mdeps_last;
static int __macc_i_loop_lb_set[10];
static int __macc_i_loop_ub_set[10];
__macc_region_is_changed = (__macc_region_is_changed || ((mdeps != __macc_mdeps_last) || ((mcols != __macc_mcols_last) || ((mrows != __macc_mrows_last) || (imax != __macc_imax_last)))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc_mdeps_last = mdeps;
__macc_mcols_last = mcols;
__macc_mrows_last = mrows;
__macc_imax_last = imax;
}
{
__macc_calc_loop_region(__macc_i_loop_lb_set, __macc_i_loop_ub_set, 1, imax - (1), 1, 1);
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
{
__macc_init_access_region(__macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
__macc_adjust_data_region(p_m, __macc_gpu_num, __macc_p_m_use_lb_set, __macc_p_m_use_ub_set);
__macc_adjust_data_region(p_m, __macc_gpu_num, __macc_p_m_def_lb_set, __macc_p_m_def_ub_set);
}
(__macc_ptrs[0]) = p_m;
(__macc_use_types[0]) = (1);
(__macc_use_lb_sets[0]) = __macc_p_m_use_lb_set;
(__macc_use_ub_sets[0]) = __macc_p_m_use_ub_set;
(__macc_def_types[0]) = (2);
(__macc_def_lb_sets[0]) = __macc_p_m_def_lb_set;
(__macc_def_ub_sets[0]) = __macc_p_m_def_ub_set;
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set);
__macc_init_access_region(__macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set);
{
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
}
{
}
__macc_adjust_data_region(wrk2_m, __macc_gpu_num, __macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set);
__macc_adjust_data_region(wrk2_m, __macc_gpu_num, __macc_wrk2_m_def_lb_set, __macc_wrk2_m_def_ub_set);
}
(__macc_ptrs[1]) = wrk2_m;
(__macc_use_types[1]) = (2);
(__macc_use_lb_sets[1]) = __macc_wrk2_m_use_lb_set;
(__macc_use_ub_sets[1]) = __macc_wrk2_m_use_ub_set;
(__macc_def_types[1]) = (1);
(__macc_def_lb_sets[1]) = __macc_wrk2_m_def_lb_set;
(__macc_def_ub_sets[1]) = __macc_wrk2_m_def_ub_set;
}
}
}
if(__macc_region_is_overlapping(__macc_p_m_def_lb_set, __macc_p_m_def_ub_set)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc_i_loop_lb_set, __macc_i_loop_ub_set);
{
__macc_rewrite_data_region_into_single(__macc_wrk2_m_use_lb_set, __macc_wrk2_m_use_ub_set);
__macc_rewrite_data_region_into_single(__macc_p_m_def_lb_set, __macc_p_m_def_ub_set);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i , j , k )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
int __macc_num_gangs;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_top_loop_lb = (__macc_i_loop_lb_set[__macc_tnum]);
__macc_top_loop_ub = (__macc_i_loop_ub_set[__macc_tnum]);
__macc_set_data_region_multi(__macc_tnum, __macc_multi, 2, __macc_ptrs, __macc_use_types, __macc_use_lb_sets, __macc_use_ub_sets, __macc_def_types, __macc_def_lb_sets, __macc_def_ub_sets);
#pragma omp barrier
#pragma acc parallel present ( a_m , b_m , c_m , p_m , bnd_m , wrk1_m , wrk2_m ) vector_length ( 256 )
#pragma acc loop independent collapse ( 3 )
# 357 "/tmp/tmp.ctiSKezwS2/in.c"
for(i = __macc_top_loop_lb; i <= __macc_top_loop_ub; i++) {
{
# 358 "/tmp/tmp.ctiSKezwS2/in.c"
for(j = (1); j < jmax; j++) {
{
# 359 "/tmp/tmp.ctiSKezwS2/in.c"
for(k = (1); k < kmax; k++) {
{
# 360 "/tmp/tmp.ctiSKezwS2/in.c"
(p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) = (wrk2_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]);
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
# 364 "/tmp/tmp.ctiSKezwS2/in.c"
return gosa;
}
