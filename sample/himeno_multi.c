/*
 * Original Source  : /tmp/tmp.UCkBIl5BgF/himeno_1.c
 * Language         : C
 * Compiled Time    : 2017-01-13 08:03:28
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.1.0
 */
# 1 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
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
typedef unsigned long long u_int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
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
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
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
struct _IO_marker;
struct _IO_FILE;
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
struct __MaccDataTableEntry;
struct __MaccDataTableEntry {
void * addr;
int type_size;
int entire_lb;
int entire_ub;
_Bool dirty;
int dirty_lb;
int dirty_ub;
struct __MaccDataTableEntry * next;
};
struct __MaccDataTable {
struct __MaccDataTableEntry * entries[256];
};
int __macc__wrk2_m_def_ub_set_48[10];
int __macc__wrk2_m_def_lb_set_47[10];
int __macc__wrk2_m_use_ub_set_46[10];
int __macc__wrk2_m_use_lb_set_45[10];
int __macc__p_m_def_ub_set_44[10];
int __macc__p_m_def_lb_set_43[10];
int __macc__p_m_use_ub_set_42[10];
int __macc__p_m_use_lb_set_41[10];
int __macc__i_loop_ub_set_36[10];
int __macc__i_loop_lb_set_35[10];
int __macc__imax_last_40 = -1;
unsigned long __macc__mrows_last_39 = -1;
unsigned long __macc__mcols_last_38 = -1;
unsigned long __macc__mdeps_last_37 = -1;
int __macc__wrk2_m_def_ub_set_34[10];
int __macc__wrk2_m_def_lb_set_33[10];
int __macc__wrk2_m_use_ub_set_32[10];
int __macc__wrk2_m_use_lb_set_31[10];
int __macc__bnd_m_def_ub_set_30[10];
int __macc__bnd_m_def_lb_set_29[10];
int __macc__bnd_m_use_ub_set_28[10];
int __macc__bnd_m_use_lb_set_27[10];
int __macc__wrk1_m_def_ub_set_26[10];
int __macc__wrk1_m_def_lb_set_25[10];
int __macc__wrk1_m_use_ub_set_24[10];
int __macc__wrk1_m_use_lb_set_23[10];
int __macc__c_m_def_ub_set_22[10];
int __macc__c_m_def_lb_set_21[10];
int __macc__c_m_use_ub_set_20[10];
int __macc__c_m_use_lb_set_19[10];
int __macc__b_m_def_ub_set_18[10];
int __macc__b_m_def_lb_set_17[10];
int __macc__b_m_use_ub_set_16[10];
int __macc__b_m_use_lb_set_15[10];
int __macc__p_m_def_ub_set_14[10];
int __macc__p_m_def_lb_set_13[10];
int __macc__p_m_use_ub_set_12[10];
int __macc__p_m_use_lb_set_11[10];
int __macc__a_m_def_ub_set_10[10];
int __macc__a_m_def_lb_set_9[10];
int __macc__a_m_use_ub_set_8[10];
int __macc__a_m_use_lb_set_7[10];
int __macc__i_loop_ub_set_2[10];
int __macc__i_loop_lb_set_1[10];
int __macc__imax_last_6 = -1;
unsigned long __macc__mrows_last_5 = -1;
unsigned long __macc__mcols_last_4 = -1;
unsigned long __macc__mdeps_last_3 = -1;
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
extern void acc_free(void * );
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
extern void acc_set_device_type(enum anon_type_1_acc_device_t devtype);
extern enum anon_type_1_acc_device_t acc_get_device_type(void);
extern void * acc_malloc(unsigned long);
extern void * acc_deviceptr(void * hostptr);
extern void * acc_hostptr(void * devptr);
extern void acc_map_data(void * hostptr, void * devptr, unsigned long bytes);
extern void acc_unmap_data(void * hostptr);
extern int acc_is_present(void * hostptr, unsigned long bytes);
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
# 320 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 321 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 322 "/usr/include/libio.h"
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
# 22 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int __MACC_NUMGPUS = -(1);
# 24 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int __macc_get_num_gpus()
{
# 26 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return acc_get_num_devices(acc_device_nvidia);
}
# 29 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_set_gpu_num(int i)
{
# 31 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_set_device_num(i, acc_device_nvidia);
}
# 51 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET;
# 53 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_init()
{
# 55 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
# 57 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(__MACC_NUMGPUS == (0)) {
# 58 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 59 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
exit(-(1));
}
# 62 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(((getenv("OMP_NESTED")) == ((void * )(0))) || ((getenv("OMP_MAX_ACTIVE_LEVELS")) == ((void * )(0)))) {
# 63 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
fputs("[MACC ERROR] Improper setting.\n\nIn order to make nested-parallel available,\nrun the commands below before running the program.\n\n\texport OMP_NESTED=TRUE\n\texport OMP_MAX_ACTIVE_LEVELS=2\n\n", stderr);
# 72 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
exit(-(1));
}
# 75 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__MACC_DATA_TABLE_SET = (calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
}
# 78 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_data_table_insert(int gpu_num, void * p, int type_size, int entire_lb, int entire_ub)
{
# 81 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int index = ((long)(p)) % (256);
# 83 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * new_entry = malloc(sizeof(struct __MaccDataTableEntry));
# 85 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->addr) = p;
# 86 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->type_size) = type_size;
# 87 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->entire_lb) = entire_lb;
# 88 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->entire_ub) = entire_ub;
# 89 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->dirty) = (0);
# 90 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->dirty_lb) = (-(1));
# 91 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->dirty_ub) = (-(1));
# 92 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(new_entry->next) = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index));
# 94 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = new_entry;
}
# 97 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * __macc_data_table_find(int gpu_num, void * p)
{
# 99 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int index = ((long)(p)) % (256);
# 100 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 102 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
while(entry != ((void * )(0))) {
{
# 104 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((entry->addr) == p) {
# 105 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return entry;
}
# 107 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
entry = (entry->next);
}
}
# 110 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", p);
# 111 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
exit(-(1));
# 113 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return (void * )(0);
}
# 116 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_data_table_delete(int gpu_num, void * p)
{
# 118 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int index = ((long)(p)) % (256);
# 119 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 120 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * pre = (void * )(0);
# 122 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(entry != ((void * )(0))) {
# 123 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((entry->addr) == p) {
# 124 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = (entry->next);
# 125 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return ;
}
# 128 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
pre = entry;
# 129 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
entry = (entry->next);
}
# 132 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
while((pre != ((void * )(0))) && (entry != ((void * )(0)))) {
{
# 134 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((entry->addr) == p) {
# 135 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(pre->next) = (entry->next);
# 136 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
free(entry);
# 137 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return ;
}
# 140 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
pre = entry;
# 141 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
entry = (entry->next);
}
}
# 144 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", p);
# 145 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
exit(-(1));
}
# 148 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_delete(int gpu_num, void * p, int type_size, int lb, int length)
{
# 150 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_delete_async(p + (lb * type_size), length * type_size, gpu_num);
# 151 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_data_table_delete(gpu_num, p);
# 152 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_wait(gpu_num);
}
# 155 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_copyout(int gpu_num, void * p, int type_size, int lb, int length)
{
# 157 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 159 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(entry->dirty) {
# 160 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_update_self_async((entry->addr) + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size), gpu_num);
}
# 164 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_delete(gpu_num, p, type_size, lb, length);
}
# 167 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_copyin(int gpu_num, void * p, int type_size, int lb, int length)
{
# 169 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_copyin_async(p + (lb * type_size), length * type_size, gpu_num);
# 170 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_data_table_insert(gpu_num, p, type_size, lb, (lb + length) - (1));
# 171 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_wait(gpu_num);
}
# 174 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_create(int gpu_num, void * p, int type_size, int lb, int length)
{
# 176 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_create_async(p + (lb * type_size), length * type_size, gpu_num);
# 177 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_data_table_insert(gpu_num, p, type_size, lb, (lb + length) - (1));
# 178 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_wait(gpu_num);
}
# 181 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_init_access_region(int gpu_num, int * lb_set, int * ub_set)
{
# 183 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(lb_set[gpu_num]) = (2147483647);
# 184 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(ub_set[gpu_num]) = (-(1));
}
# 187 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_update_access_region(int gpu_num, int * lb_set, int * ub_set, int val)
{
# 189 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(lb_set[gpu_num]) = (((lb_set[gpu_num]) < val) ?(lb_set[gpu_num]) : val);
# 190 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(ub_set[gpu_num]) = (((ub_set[gpu_num]) > val) ?(ub_set[gpu_num]) : val);
}
# 193 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
_Bool __macc_region_is_overlapping(int * lb_set, int * ub_set)
{
{
# 195 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int i;
# 195 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
for(i = (0); i < (__MACC_NUMGPUS - (1)); i++) {
{
{
# 196 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int j;
# 196 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
for(j = (i + (1)); j < __MACC_NUMGPUS; j++) {
{
# 197 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(!(((lb_set[i]) > (ub_set[j])) || ((ub_set[i]) < (lb_set[j])))) {
# 198 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return 1;
}
}
}
}
}
}
}
# 200 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
return 0;
}
# 204 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_calc_loop_region(int * loop_lb_set, int * loop_ub_set, int entire_start, int entire_end, int step, int until_equal)
{
# 208 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int pos = entire_start;
# 209 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int width = (int)((((((float)(entire_end)) - entire_start) + (until_equal ?(1) : (0))) / __MACC_NUMGPUS) + (0.9));
# 210 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
width -= (width % step);
{
# 212 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int i;
# 212 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 213 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_lb_set[i]) = pos;
# 214 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
pos += (width - (1));
# 215 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_ub_set[i]) = pos;
# 216 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
pos += step;
}
}
}
{
# 219 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int tail = __MACC_NUMGPUS - (1);
# 220 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_ub_set[tail]) = entire_end;
# 221 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((! until_equal) && ((loop_ub_set[tail]) == entire_end)) {
# 222 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_ub_set[tail]) -= step;
}
}
}
# 225 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_rewrite_loop_region_into_single(int * loop_lb_set, int * loop_ub_set)
{
# 227 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_ub_set[(0)]) = (loop_ub_set[(__MACC_NUMGPUS - (1))]);
{
# 229 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int i;
# 229 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
for(i = (1); i < __MACC_NUMGPUS; i++) {
{
# 230 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_lb_set[i]) = (1);
# 231 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(loop_ub_set[i]) = (0);
}
}
}
}
# 235 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_rewrite_data_region_into_single(int * lb_set, int * ub_set)
{
# 237 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int gpu_ub = __MACC_NUMGPUS - (1);
# 238 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(lb_set[(0)]) = (((lb_set[(0)]) < (lb_set[gpu_ub])) ?(lb_set[(0)]) : (lb_set[gpu_ub]));
# 239 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(ub_set[(0)]) = (((ub_set[(0)]) > (ub_set[gpu_ub])) ?(ub_set[(0)]) : (ub_set[gpu_ub]));
}
# 242 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_sync_data(int gpu_num, void * p, int type_size, int lb, int ub)
{
# 244 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void * update_addr = p + (lb * type_size);
# 245 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
unsigned long length_b = ((ub - lb) + (1)) * type_size;
# 247 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_update_self(update_addr, length_b);
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 251 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int i = omp_get_thread_num();
# 252 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(i != gpu_num) {
# 253 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_set_gpu_num(i);
# 254 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_update_device(update_addr, length_b);
}
}
# 258 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_set_gpu_num(gpu_num);
}
# 262 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void __macc_set_data_region(int gpu_num, void * p, int multi, int use_type, int * use_lb_set, int * use_ub_set, int def_type, int * def_lb_set, int * def_ub_set)
{
# 266 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 271 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((entry->dirty) && (multi || (gpu_num != (0)))) {
# 272 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
_Bool update_all = 0;
# 274 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((use_type == (0)) || (def_type == (0))) {
# 275 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_all = (1);
}
else {
# 277 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(def_type == (2)) {
{
# 278 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int i;
# 278 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 279 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (def_ub_set[i])) || ((entry->dirty_ub) < (def_lb_set[i]))))) {
# 282 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_all = (1);
# 283 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
break;
}
}
}
}
}
}
# 289 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(update_all) {
# 290 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_sync_data(gpu_num, p, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 291 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty) = (0);
}
# 295 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((entry->dirty) && (use_type == (2))) {
# 296 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int thread_num = multi ? __MACC_NUMGPUS : (1);
#pragma omp parallel num_threads ( thread_num )
{
# 300 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int i = omp_get_thread_num();
# 302 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (use_ub_set[i])) || ((entry->dirty_ub) < (use_lb_set[i]))))) {
# 306 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int update_lb = ((entry->dirty_lb) > (use_lb_set[i])) ?(entry->dirty_lb) : (use_lb_set[i]);
# 307 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int update_ub = ((entry->dirty_ub) < (use_ub_set[i])) ?(entry->dirty_ub) : (use_ub_set[i]);
# 308 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
void * update_addr = p + (update_lb * (entry->type_size));
# 309 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
unsigned long length_b = ((update_ub - update_lb) + (1)) * (entry->type_size);
# 311 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_update_self(update_addr, length_b);
# 312 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_set_gpu_num(i);
# 313 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
acc_update_device(update_addr, length_b);
# 314 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_set_gpu_num(gpu_num);
}
}
}
}
# 325 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((multi || (gpu_num == (0))) && (def_type != (1))) {
# 326 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(def_type == (0)) {
# 327 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty) = (1);
# 328 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_lb) = (entry->entire_lb);
# 329 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_ub) = (entry->entire_ub);
}
else {
# 334 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((!(entry->dirty)) || (((def_lb_set[gpu_num]) <= (entry->dirty_lb)) && ((entry->dirty_ub) <= (def_ub_set[gpu_num])))) {
# 338 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty) = (1);
# 339 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 340 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
else {
# 344 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int update_lb;
# 344 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
int update_ub;
# 347 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if(!(!(((entry->dirty_lb) > (def_ub_set[gpu_num])) || ((entry->dirty_ub) < (def_lb_set[gpu_num]))))) {
# 351 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_lb = (entry->dirty_lb);
# 352 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_ub = (entry->dirty_ub);
# 353 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 354 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
else {
# 360 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
if((entry->dirty_lb) < (def_lb_set[gpu_num])) {
# 361 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_lb = (entry->dirty_lb);
# 362 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_ub = ((def_lb_set[gpu_num]) - (1));
}
else {
# 366 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_lb = ((def_ub_set[gpu_num]) + (1));
# 367 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
update_ub = (entry->dirty_ub);
}
# 370 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 371 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
# 374 "/tmp/tmp.UCkBIl5BgF/himeno_1.c"
__macc_sync_data(gpu_num, p, entry->type_size, update_lb, update_ub);
}
}
}
}
extern int gettimeofday(struct timeval * restrict __tv, struct timezone * restrict __tz);
extern int settimeofday(struct timeval const * __tv, struct timezone const * __tz);
extern int adjtime(struct timeval const * __delta, struct timeval * __olddelta);
extern int getitimer(int __which, struct itimerval * __value);
extern int setitimer(int __which, struct itimerval const * restrict __new, struct itimerval * restrict __old);
extern int utimes(char const * __file, struct timeval const __tvp[2]);
extern int lutimes(char const * __file, struct timeval const __tvp[2]);
extern int futimes(int __fd, struct timeval const __tvp[2]);
# 4 "../../acc_sample/common.h"
double second()
{
# 7 "../../acc_sample/common.h"
struct timeval tm;
# 8 "../../acc_sample/common.h"
double t;
# 10 "../../acc_sample/common.h"
static int base_sec = 0;
# 10 "../../acc_sample/common.h"
static int base_usec = 0;
# 12 "../../acc_sample/common.h"
gettimeofday(&(tm), (void * )(0));
# 14 "../../acc_sample/common.h"
if((base_sec == (0)) && (base_usec == (0))) {
# 16 "../../acc_sample/common.h"
base_sec = ((&(tm))->tv_sec);
# 17 "../../acc_sample/common.h"
base_usec = ((&(tm))->tv_usec);
# 18 "../../acc_sample/common.h"
t = (0.0);
}
else {
# 20 "../../acc_sample/common.h"
t = (((double)(((&(tm))->tv_sec) - base_sec)) + (((double)(((&(tm))->tv_usec) - base_usec)) / (1.0e6)));
}
# 24 "../../acc_sample/common.h"
return t;
}
int newMat(struct Mat * Mat, int mnums, int mrows, int mcols, int mdeps);
void clearMat(struct Mat * Mat);
void set_param(int is[], char * size);
void mat_set(struct Mat * Mat, int l, float val);
void mat_set_init(struct Mat * Mat);
float jacobi(int nn, struct Mat * a, struct Mat * b, struct Mat * c, struct Mat * p, struct Mat * bnd, struct Mat * wrk1, struct Mat * wrk2);
double fflop(int mx, int my, int mz);
double mflops(int nn, double cpu, double flop);
double second();
# 34 "../../acc_sample/himeno.c"
float omega = 0.8;
# 35 "../../acc_sample/himeno.c"
struct Mat a;
# 35 "../../acc_sample/himeno.c"
struct Mat b;
# 35 "../../acc_sample/himeno.c"
struct Mat c;
# 35 "../../acc_sample/himeno.c"
struct Mat p;
# 35 "../../acc_sample/himeno.c"
struct Mat bnd;
# 35 "../../acc_sample/himeno.c"
struct Mat wrk1;
# 35 "../../acc_sample/himeno.c"
struct Mat wrk2;
# 37 "../../acc_sample/himeno.c"
int main(int argc, char * argv[])
{
__macc_init();
{
# 40 "../../acc_sample/himeno.c"
int i;
# 40 "../../acc_sample/himeno.c"
int j;
# 40 "../../acc_sample/himeno.c"
int k;
# 40 "../../acc_sample/himeno.c"
int nn;
# 41 "../../acc_sample/himeno.c"
int imax;
# 41 "../../acc_sample/himeno.c"
int jmax;
# 41 "../../acc_sample/himeno.c"
int kmax;
# 41 "../../acc_sample/himeno.c"
int mimax;
# 41 "../../acc_sample/himeno.c"
int mjmax;
# 41 "../../acc_sample/himeno.c"
int mkmax;
# 41 "../../acc_sample/himeno.c"
int msize[3];
# 42 "../../acc_sample/himeno.c"
float gosa;
# 42 "../../acc_sample/himeno.c"
float target;
# 43 "../../acc_sample/himeno.c"
double cpu0;
# 43 "../../acc_sample/himeno.c"
double cpu1;
# 43 "../../acc_sample/himeno.c"
double cpu;
# 43 "../../acc_sample/himeno.c"
double flop;
# 44 "../../acc_sample/himeno.c"
char size[10];
# 46 "../../acc_sample/himeno.c"
if(argc == (2)) {
# 47 "../../acc_sample/himeno.c"
strcpy(size, argv[1]);
}
else {
# 49 "../../acc_sample/himeno.c"
printf("For example: \n");
# 50 "../../acc_sample/himeno.c"
printf(" Grid-size= XS (32x32x64)\n");
# 51 "../../acc_sample/himeno.c"
printf("\t    S  (64x64x128)\n");
# 52 "../../acc_sample/himeno.c"
printf("\t    M  (128x128x256)\n");
# 53 "../../acc_sample/himeno.c"
printf("\t    L  (256x256x512)\n");
# 54 "../../acc_sample/himeno.c"
printf("\t    XL (512x512x1024)\n\n");
# 55 "../../acc_sample/himeno.c"
printf("Grid-size = ");
# 56 "../../acc_sample/himeno.c"
__isoc99_scanf("%s", size);
# 57 "../../acc_sample/himeno.c"
printf("\n");
}
# 60 "../../acc_sample/himeno.c"
set_param(msize, size);
# 62 "../../acc_sample/himeno.c"
mimax = (msize[0]);
# 63 "../../acc_sample/himeno.c"
mjmax = (msize[1]);
# 64 "../../acc_sample/himeno.c"
mkmax = (msize[2]);
# 65 "../../acc_sample/himeno.c"
imax = (mimax - (1));
# 66 "../../acc_sample/himeno.c"
jmax = (mjmax - (1));
# 67 "../../acc_sample/himeno.c"
kmax = (mkmax - (1));
# 69 "../../acc_sample/himeno.c"
target = (60.0);
# 71 "../../acc_sample/himeno.c"
printf("mimax = %d mjmax = %d mkmax = %d\n", mimax, mjmax, mkmax);
# 72 "../../acc_sample/himeno.c"
printf("imax = %d jmax = %d kmax =%d\n", imax, jmax, kmax);
# 77 "../../acc_sample/himeno.c"
newMat(&(p), 1, mimax, mjmax, mkmax);
# 78 "../../acc_sample/himeno.c"
newMat(&(bnd), 1, mimax, mjmax, mkmax);
# 79 "../../acc_sample/himeno.c"
newMat(&(wrk1), 1, mimax, mjmax, mkmax);
# 80 "../../acc_sample/himeno.c"
newMat(&(wrk2), 1, mimax, mjmax, mkmax);
# 81 "../../acc_sample/himeno.c"
newMat(&(a), 4, mimax, mjmax, mkmax);
# 82 "../../acc_sample/himeno.c"
newMat(&(b), 3, mimax, mjmax, mkmax);
# 83 "../../acc_sample/himeno.c"
newMat(&(c), 3, mimax, mjmax, mkmax);
# 85 "../../acc_sample/himeno.c"
mat_set_init(&(p));
# 86 "../../acc_sample/himeno.c"
mat_set(&(bnd), 0, 1.0);
# 87 "../../acc_sample/himeno.c"
mat_set(&(wrk1), 0, 0.0);
# 88 "../../acc_sample/himeno.c"
mat_set(&(wrk2), 0, 0.0);
# 89 "../../acc_sample/himeno.c"
mat_set(&(a), 0, 1.0);
# 90 "../../acc_sample/himeno.c"
mat_set(&(a), 1, 1.0);
# 91 "../../acc_sample/himeno.c"
mat_set(&(a), 2, 1.0);
# 92 "../../acc_sample/himeno.c"
mat_set(&(a), 3, (1.0) / (6.0));
# 93 "../../acc_sample/himeno.c"
mat_set(&(b), 0, 0.0);
# 94 "../../acc_sample/himeno.c"
mat_set(&(b), 1, 0.0);
# 95 "../../acc_sample/himeno.c"
mat_set(&(b), 2, 0.0);
# 96 "../../acc_sample/himeno.c"
mat_set(&(c), 0, 1.0);
# 97 "../../acc_sample/himeno.c"
mat_set(&(c), 1, 1.0);
# 98 "../../acc_sample/himeno.c"
mat_set(&(c), 2, 1.0);
# 103 "../../acc_sample/himeno.c"
jacobi(1, &(a), &(b), &(c), &(p), &(bnd), &(wrk1), &(wrk2));
# 105 "../../acc_sample/himeno.c"
nn = (3);
# 106 "../../acc_sample/himeno.c"
printf(" Start rehearsal measurement process.\n");
# 107 "../../acc_sample/himeno.c"
printf(" Measure the performance in %d times.\n\n", nn);
# 109 "../../acc_sample/himeno.c"
cpu0 = (second());
# 110 "../../acc_sample/himeno.c"
gosa = (jacobi(nn, &(a), &(b), &(c), &(p), &(bnd), &(wrk1), &(wrk2)));
# 111 "../../acc_sample/himeno.c"
cpu1 = (second());
# 112 "../../acc_sample/himeno.c"
cpu = (cpu1 - cpu0);
# 113 "../../acc_sample/himeno.c"
flop = (fflop(imax, jmax, kmax));
# 115 "../../acc_sample/himeno.c"
printf(" MFLOPS: %f time(s): %f %e\n\n", mflops(nn, cpu, flop), cpu, gosa);
# 118 "../../acc_sample/himeno.c"
nn = ((int)(target / (cpu / (3.0))));
# 120 "../../acc_sample/himeno.c"
printf(" Now, start the actual measurement process.\n");
# 121 "../../acc_sample/himeno.c"
printf(" The loop will be excuted in %d times\n", nn);
# 122 "../../acc_sample/himeno.c"
printf(" This will take about one minute.\n");
# 123 "../../acc_sample/himeno.c"
printf(" Wait for a while\n\n");
# 125 "../../acc_sample/himeno.c"
cpu0 = (second());
# 126 "../../acc_sample/himeno.c"
gosa = (jacobi(nn, &(a), &(b), &(c), &(p), &(bnd), &(wrk1), &(wrk2)));
# 127 "../../acc_sample/himeno.c"
cpu1 = (second());
# 128 "../../acc_sample/himeno.c"
cpu = (cpu1 - cpu0);
# 130 "../../acc_sample/himeno.c"
printf(" Loop executed for %d times\n", nn);
# 131 "../../acc_sample/himeno.c"
printf(" Gosa : %e \n", gosa);
# 132 "../../acc_sample/himeno.c"
printf(" MFLOPS measured : %f\tcpu : %f\n", mflops(nn, cpu, flop), cpu);
# 133 "../../acc_sample/himeno.c"
printf(" Score based on Pentium III 600MHz using Fortran 77: %f\n", (mflops(nn, cpu, flop)) / (82), 84);
# 139 "../../acc_sample/himeno.c"
clearMat(&(p));
# 140 "../../acc_sample/himeno.c"
clearMat(&(bnd));
# 141 "../../acc_sample/himeno.c"
clearMat(&(wrk1));
# 142 "../../acc_sample/himeno.c"
clearMat(&(wrk2));
# 143 "../../acc_sample/himeno.c"
clearMat(&(a));
# 144 "../../acc_sample/himeno.c"
clearMat(&(b));
# 145 "../../acc_sample/himeno.c"
clearMat(&(c));
# 147 "../../acc_sample/himeno.c"
return 0;
}
}
# 150 "../../acc_sample/himeno.c"
double fflop(int mx, int my, int mz)
{
# 153 "../../acc_sample/himeno.c"
return ((((double)(mz - (2))) * ((double)(my - (2)))) * ((double)(mx - (2)))) * (34.0);
}
# 156 "../../acc_sample/himeno.c"
double mflops(int nn, double cpu, double flop)
{
# 159 "../../acc_sample/himeno.c"
return ((flop / cpu) * (1.e-6)) * ((double)(nn));
}
# 162 "../../acc_sample/himeno.c"
void set_param(int is[], char * size)
{
# 165 "../../acc_sample/himeno.c"
if((!(strcmp(size, "XS"))) || (!(strcmp(size, "xs")))) {
# 166 "../../acc_sample/himeno.c"
(is[0]) = (32);
# 167 "../../acc_sample/himeno.c"
(is[1]) = (32);
# 168 "../../acc_sample/himeno.c"
(is[2]) = (64);
# 169 "../../acc_sample/himeno.c"
return ;
}
# 171 "../../acc_sample/himeno.c"
if((!(strcmp(size, "S"))) || (!(strcmp(size, "s")))) {
# 172 "../../acc_sample/himeno.c"
(is[0]) = (64);
# 173 "../../acc_sample/himeno.c"
(is[1]) = (64);
# 174 "../../acc_sample/himeno.c"
(is[2]) = (128);
# 175 "../../acc_sample/himeno.c"
return ;
}
# 177 "../../acc_sample/himeno.c"
if((!(strcmp(size, "M"))) || (!(strcmp(size, "m")))) {
# 178 "../../acc_sample/himeno.c"
(is[0]) = (128);
# 179 "../../acc_sample/himeno.c"
(is[1]) = (128);
# 180 "../../acc_sample/himeno.c"
(is[2]) = (256);
# 181 "../../acc_sample/himeno.c"
return ;
}
# 183 "../../acc_sample/himeno.c"
if((!(strcmp(size, "L"))) || (!(strcmp(size, "l")))) {
# 184 "../../acc_sample/himeno.c"
(is[0]) = (256);
# 185 "../../acc_sample/himeno.c"
(is[1]) = (256);
# 186 "../../acc_sample/himeno.c"
(is[2]) = (512);
# 187 "../../acc_sample/himeno.c"
return ;
}
# 189 "../../acc_sample/himeno.c"
if((!(strcmp(size, "XL"))) || (!(strcmp(size, "xl")))) {
# 190 "../../acc_sample/himeno.c"
(is[0]) = (512);
# 191 "../../acc_sample/himeno.c"
(is[1]) = (512);
# 192 "../../acc_sample/himeno.c"
(is[2]) = (1024);
# 193 "../../acc_sample/himeno.c"
return ;
}
else {
# 195 "../../acc_sample/himeno.c"
printf("Invalid input character !!\n");
# 196 "../../acc_sample/himeno.c"
exit(6);
}
}
# 200 "../../acc_sample/himeno.c"
int newMat(struct Mat * Mat, int mnums, int mrows, int mcols, int mdeps)
{
# 203 "../../acc_sample/himeno.c"
(Mat->mnums) = mnums;
# 204 "../../acc_sample/himeno.c"
(Mat->mrows) = mrows;
# 205 "../../acc_sample/himeno.c"
(Mat->mcols) = mcols;
# 206 "../../acc_sample/himeno.c"
(Mat->mdeps) = mdeps;
# 207 "../../acc_sample/himeno.c"
(Mat->m) = ((void * )(0));
# 208 "../../acc_sample/himeno.c"
(Mat->m) = ((float * )(malloc((((mnums * mrows) * mcols) * mdeps) * (sizeof(float)))));
# 211 "../../acc_sample/himeno.c"
return ((Mat->m) != ((void * )(0))) ?(1) : (0);
}
# 214 "../../acc_sample/himeno.c"
void clearMat(struct Mat * Mat)
{
# 217 "../../acc_sample/himeno.c"
if(Mat->m) {
# 218 "../../acc_sample/himeno.c"
free(Mat->m);
}
# 219 "../../acc_sample/himeno.c"
(Mat->m) = ((void * )(0));
# 220 "../../acc_sample/himeno.c"
(Mat->mnums) = (0);
# 221 "../../acc_sample/himeno.c"
(Mat->mcols) = (0);
# 222 "../../acc_sample/himeno.c"
(Mat->mrows) = (0);
# 223 "../../acc_sample/himeno.c"
(Mat->mdeps) = (0);
}
# 226 "../../acc_sample/himeno.c"
void mat_set(struct Mat * Mat, int l, float val)
{
# 229 "../../acc_sample/himeno.c"
int i;
# 229 "../../acc_sample/himeno.c"
int j;
# 229 "../../acc_sample/himeno.c"
int k;
# 231 "../../acc_sample/himeno.c"
for(i = (0); i < (Mat->mrows); i++) {
{
# 232 "../../acc_sample/himeno.c"
for(j = (0); j < (Mat->mcols); j++) {
{
# 233 "../../acc_sample/himeno.c"
for(k = (0); k < (Mat->mdeps); k++) {
{
# 234 "../../acc_sample/himeno.c"
(*((Mat->m) + ((((((l * (Mat->mrows)) * (Mat->mcols)) * (Mat->mdeps)) + ((i * (Mat->mcols)) * (Mat->mdeps))) + (j * (Mat->mdeps))) + k))) = val;
}
}
}
}
}
}
}
# 237 "../../acc_sample/himeno.c"
void mat_set_init(struct Mat * Mat)
{
# 240 "../../acc_sample/himeno.c"
int i;
# 240 "../../acc_sample/himeno.c"
int j;
# 240 "../../acc_sample/himeno.c"
int k;
# 240 "../../acc_sample/himeno.c"
int l;
# 241 "../../acc_sample/himeno.c"
float tt;
# 243 "../../acc_sample/himeno.c"
for(i = (0); i < (Mat->mrows); i++) {
{
# 244 "../../acc_sample/himeno.c"
for(j = (0); j < (Mat->mcols); j++) {
{
# 245 "../../acc_sample/himeno.c"
for(k = (0); k < (Mat->mdeps); k++) {
{
# 246 "../../acc_sample/himeno.c"
(*((Mat->m) + (((((((0) * (Mat->mrows)) * (Mat->mcols)) * (Mat->mdeps)) + ((i * (Mat->mcols)) * (Mat->mdeps))) + (j * (Mat->mdeps))) + k))) = (((float)(i * i)) / ((float)(((Mat->mrows) - (1)) * ((Mat->mrows) - (1)))));
}
}
}
}
}
}
}
# 261 "../../acc_sample/himeno.c"
float jacobi(int nn, struct Mat * a, struct Mat * b, struct Mat * c, struct Mat * p, struct Mat * bnd, struct Mat * wrk1, struct Mat * wrk2)
{
# 265 "../../acc_sample/himeno.c"
unsigned long mrows = p->mrows;
# 266 "../../acc_sample/himeno.c"
unsigned long mcols = p->mcols;
# 267 "../../acc_sample/himeno.c"
unsigned long mdeps = p->mdeps;
# 269 "../../acc_sample/himeno.c"
int i;
# 269 "../../acc_sample/himeno.c"
int j;
# 269 "../../acc_sample/himeno.c"
int k;
# 269 "../../acc_sample/himeno.c"
int n;
# 269 "../../acc_sample/himeno.c"
int imax;
# 269 "../../acc_sample/himeno.c"
int jmax;
# 269 "../../acc_sample/himeno.c"
int kmax;
# 270 "../../acc_sample/himeno.c"
float gosa;
# 270 "../../acc_sample/himeno.c"
float s0;
# 270 "../../acc_sample/himeno.c"
float ss;
# 272 "../../acc_sample/himeno.c"
float * a_m;
# 272 "../../acc_sample/himeno.c"
float * b_m;
# 272 "../../acc_sample/himeno.c"
float * c_m;
# 272 "../../acc_sample/himeno.c"
float * p_m;
# 272 "../../acc_sample/himeno.c"
float * bnd_m;
# 272 "../../acc_sample/himeno.c"
float * wrk1_m;
# 272 "../../acc_sample/himeno.c"
float * wrk2_m;
# 273 "../../acc_sample/himeno.c"
unsigned long bs;
# 275 "../../acc_sample/himeno.c"
imax = (mrows - (1));
# 276 "../../acc_sample/himeno.c"
jmax = (mcols - (1));
# 277 "../../acc_sample/himeno.c"
kmax = (mdeps - (1));
# 279 "../../acc_sample/himeno.c"
a_m = (a->m);
# 280 "../../acc_sample/himeno.c"
b_m = (b->m);
# 281 "../../acc_sample/himeno.c"
c_m = (c->m);
# 282 "../../acc_sample/himeno.c"
p_m = (p->m);
# 283 "../../acc_sample/himeno.c"
bnd_m = (bnd->m);
# 284 "../../acc_sample/himeno.c"
wrk1_m = (wrk1->m);
# 285 "../../acc_sample/himeno.c"
wrk2_m = (wrk2->m);
# 287 "../../acc_sample/himeno.c"
bs = ((mrows * mcols) * mdeps);
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
# 293 "../../acc_sample/himeno.c"
for(n = (0); n < nn; n++) {
{
# 294 "../../acc_sample/himeno.c"
gosa = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((mdeps != __macc__mdeps_last_3) || ((mcols != __macc__mcols_last_4) || ((mrows != __macc__mrows_last_5) || (imax != __macc__imax_last_6)))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__mdeps_last_3 = mdeps;
__macc__mcols_last_4 = mcols;
__macc__mrows_last_5 = mrows;
__macc__imax_last_6 = imax;
}
__macc_calc_loop_region(__macc__i_loop_lb_set_1, __macc__i_loop_ub_set_2, 1, imax, 1, 0);
for(__macc_gpu_num = (0); __macc_gpu_num <= __MACC_NUMGPUS; __macc_gpu_num++) {
__macc_top_loop_lb = (__macc__i_loop_lb_set_1[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i_loop_ub_set_2[__macc_gpu_num]);
{
{
__macc_init_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8);
__macc_init_access_region(__macc_gpu_num, __macc__a_m_def_lb_set_9, __macc__a_m_def_ub_set_10);
{
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((3) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12);
__macc_init_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_13, __macc__p_m_def_ub_set_14);
{
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (kmax - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb - (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub - (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax - (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (kmax + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (((1) + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((jmax + (1)) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_lb + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, ((((((0) * mrows) * mcols) * mdeps) + (((__macc_top_loop_ub + (1)) * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16);
__macc_init_access_region(__macc_gpu_num, __macc__b_m_def_lb_set_17, __macc__b_m_def_ub_set_18);
{
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20);
__macc_init_access_region(__macc_gpu_num, __macc__c_m_def_lb_set_21, __macc__c_m_def_ub_set_22);
{
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((2) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((1) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24);
__macc_init_access_region(__macc_gpu_num, __macc__wrk1_m_def_lb_set_25, __macc__wrk1_m_def_ub_set_26);
{
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28);
__macc_init_access_region(__macc_gpu_num, __macc__bnd_m_def_lb_set_29, __macc__bnd_m_def_ub_set_30);
{
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_31, __macc__wrk2_m_use_ub_set_32);
__macc_init_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
}
}
}
if(__macc_region_is_overlapping(__macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34)) {
__macc_multi = (0);
__macc_rewrite_loop_region_into_single(__macc__i_loop_lb_set_1, __macc__i_loop_ub_set_2);
__macc_rewrite_data_region_into_single(__macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34);
__macc_rewrite_data_region_into_single(__macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28);
__macc_rewrite_data_region_into_single(__macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24);
__macc_rewrite_data_region_into_single(__macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20);
__macc_rewrite_data_region_into_single(__macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16);
__macc_rewrite_data_region_into_single(__macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12);
__macc_rewrite_data_region_into_single(__macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8);
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : gosa ) private ( i , j , k )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, wrk2_m, __macc_multi, 1, __macc__wrk2_m_use_lb_set_31, __macc__wrk2_m_use_ub_set_32, 2, __macc__wrk2_m_def_lb_set_33, __macc__wrk2_m_def_ub_set_34);
__macc_set_data_region(__macc_tnum, bnd_m, __macc_multi, 2, __macc__bnd_m_use_lb_set_27, __macc__bnd_m_use_ub_set_28, 1, __macc__bnd_m_def_lb_set_29, __macc__bnd_m_def_ub_set_30);
__macc_set_data_region(__macc_tnum, wrk1_m, __macc_multi, 2, __macc__wrk1_m_use_lb_set_23, __macc__wrk1_m_use_ub_set_24, 1, __macc__wrk1_m_def_lb_set_25, __macc__wrk1_m_def_ub_set_26);
__macc_set_data_region(__macc_tnum, c_m, __macc_multi, 2, __macc__c_m_use_lb_set_19, __macc__c_m_use_ub_set_20, 1, __macc__c_m_def_lb_set_21, __macc__c_m_def_ub_set_22);
__macc_set_data_region(__macc_tnum, b_m, __macc_multi, 2, __macc__b_m_use_lb_set_15, __macc__b_m_use_ub_set_16, 1, __macc__b_m_def_lb_set_17, __macc__b_m_def_ub_set_18);
__macc_set_data_region(__macc_tnum, p_m, __macc_multi, 2, __macc__p_m_use_lb_set_11, __macc__p_m_use_ub_set_12, 1, __macc__p_m_def_lb_set_13, __macc__p_m_def_ub_set_14);
__macc_set_data_region(__macc_tnum, a_m, __macc_multi, 2, __macc__a_m_use_lb_set_7, __macc__a_m_use_ub_set_8, 1, __macc__a_m_def_lb_set_9, __macc__a_m_def_ub_set_10);
}
#pragma omp barrier
#pragma acc parallel present ( a_m , b_m , c_m , bnd_m , wrk1_m , wrk2_m , p_m ) reduction ( + : gosa )
#pragma acc loop
# 297 "../../acc_sample/himeno.c"
for(i = (__macc__i_loop_lb_set_1[__macc_tnum]); i <= (__macc__i_loop_ub_set_2[__macc_tnum]); i++) {
#pragma acc loop
# 299 "../../acc_sample/himeno.c"
for(j = (1); j < jmax; j++) {
#pragma acc loop
# 301 "../../acc_sample/himeno.c"
for(k = (1); k < kmax; k++) {
{
# 302 "../../acc_sample/himeno.c"
s0 = (((((((((((a_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + (j * mdeps)) + k)])) + ((a_m[(((((((1) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j + (1)) * mdeps)) + k)]))) + ((a_m[(((((((2) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + (k + (1)))]))) + ((b_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * ((((p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + ((j + (1)) * mdeps)) + k)]) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + ((j - (1)) * mdeps)) + k)])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + ((j + (1)) * mdeps)) + k)])) + (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + ((j - (1)) * mdeps)) + k)])))) + ((b_m[(((((((1) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * ((((p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j + (1)) * mdeps)) + (k + (1)))]) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j - (1)) * mdeps)) + (k + (1)))])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j + (1)) * mdeps)) + (k - (1)))])) + (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j - (1)) * mdeps)) + (k - (1)))])))) + ((b_m[(((((((2) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * ((((p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + (j * mdeps)) + (k + (1)))]) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + (j * mdeps)) + (k + (1)))])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i + (1)) * mcols) * mdeps)) + (j * mdeps)) + (k - (1)))])) + (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + (j * mdeps)) + (k - (1)))])))) + ((c_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + (((i - (1)) * mcols) * mdeps)) + (j * mdeps)) + k)]))) + ((c_m[(((((((1) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + ((j - (1)) * mdeps)) + k)]))) + ((c_m[(((((((2) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) * (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + (k - (1)))]))) + (wrk1_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]));
# 319 "../../acc_sample/himeno.c"
ss = (((s0 * (a_m[(((((((3) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)])) - (p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)])) * (bnd_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]));
# 321 "../../acc_sample/himeno.c"
gosa += (ss * ss);
# 322 "../../acc_sample/himeno.c"
(wrk2_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) = ((p_m[(((((((0) * mrows) * mcols) * mdeps) + ((i * mcols) * mdeps)) + (j * mdeps)) + k)]) + (omega * ss));
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((mdeps != __macc__mdeps_last_37) || ((mcols != __macc__mcols_last_38) || ((mrows != __macc__mrows_last_39) || (imax != __macc__imax_last_40)))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__mdeps_last_37 = mdeps;
__macc__mcols_last_38 = mcols;
__macc__mrows_last_39 = mrows;
__macc__imax_last_40 = imax;
}
__macc_calc_loop_region(__macc__i_loop_lb_set_35, __macc__i_loop_ub_set_36, 1, imax, 1, 0);
for(__macc_gpu_num = (0); __macc_gpu_num <= __MACC_NUMGPUS; __macc_gpu_num++) {
__macc_top_loop_lb = (__macc__i_loop_lb_set_35[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i_loop_ub_set_36[__macc_gpu_num]);
{
{
__macc_init_access_region(__macc_gpu_num, __macc__p_m_use_lb_set_41, __macc__p_m_use_ub_set_42);
__macc_init_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46);
__macc_init_access_region(__macc_gpu_num, __macc__wrk2_m_def_lb_set_47, __macc__wrk2_m_def_ub_set_48);
{
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_lb * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + ((1) * mdeps)) + kmax);
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, ((((((0) * mrows) * mcols) * mdeps) + ((__macc_top_loop_ub * mcols) * mdeps)) + (jmax * mdeps)) + kmax);
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44)) {
__macc_multi = (0);
__macc_rewrite_loop_region_into_single(__macc__i_loop_lb_set_35, __macc__i_loop_ub_set_36);
__macc_rewrite_data_region_into_single(__macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46);
__macc_rewrite_data_region_into_single(__macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44);
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i , j , k )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, wrk2_m, __macc_multi, 2, __macc__wrk2_m_use_lb_set_45, __macc__wrk2_m_use_ub_set_46, 1, __macc__wrk2_m_def_lb_set_47, __macc__wrk2_m_def_ub_set_48);
__macc_set_data_region(__macc_tnum, p_m, __macc_multi, 1, __macc__p_m_use_lb_set_41, __macc__p_m_use_ub_set_42, 2, __macc__p_m_def_lb_set_43, __macc__p_m_def_ub_set_44);
}
#pragma omp barrier
#pragma acc parallel present ( a_m , b_m , c_m , bnd_m , wrk1_m , wrk2_m , p_m )
#pragma acc loop independent
# 326 "../../acc_sample/himeno.c"
for(i = (__macc__i_loop_lb_set_35[__macc_tnum]); i <= (__macc__i_loop_ub_set_36[__macc_tnum]); i++) {
#pragma acc loop independent
# 328 "../../acc_sample/himeno.c"
for(j = (1); j < jmax; j++) {
#pragma acc loop independent
# 330 "../../acc_sample/himeno.c"
for(k = (1); k < kmax; k++) {
{
# 331 "../../acc_sample/himeno.c"
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
# 335 "../../acc_sample/himeno.c"
return gosa;
}
