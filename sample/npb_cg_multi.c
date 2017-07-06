/*
 * Original Source  : /tmp/tmp.HGpj0gDuBm/cg_1.c
 * Language         : C
 * Compiled Time    : 2017-07-07 07:28:17
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.0.3
 */
# 1 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
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
struct __MaccDataTableEntry;
struct __MaccDataTableEntry {
void * addr;
int type_size;
int entire_lb;
int entire_ub;
int dirty;
int dirty_lb;
int dirty_ub;
struct __MaccDataTableEntry * next;
};
struct __MaccDataTable {
struct __MaccDataTableEntry * entries[256];
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
union anon_type_15_pthread_mutex_t {
struct __pthread_mutex_s __data;
char __size[40];
long __align;
};
int __macc__z_def_ub_set_208[10];
int __macc__z_def_lb_set_207[10];
int __macc__z_use_ub_set_206[10];
int __macc__z_use_lb_set_205[10];
int __macc__x_def_ub_set_204[10];
int __macc__x_def_lb_set_203[10];
int __macc__x_use_ub_set_202[10];
int __macc__x_use_lb_set_201[10];
int __macc__j_loop_ub_set_199[10];
int __macc__j_loop_lb_set_198[10];
int __macc__end_last_200 = -1;
int __macc__z_def_ub_set_197[10];
int __macc__z_def_lb_set_196[10];
int __macc__z_use_ub_set_195[10];
int __macc__z_use_lb_set_194[10];
int __macc__x_def_ub_set_193[10];
int __macc__x_def_lb_set_192[10];
int __macc__x_use_ub_set_191[10];
int __macc__x_use_lb_set_190[10];
int __macc__j_loop_ub_set_188[10];
int __macc__j_loop_lb_set_187[10];
int __macc__end_last_189 = -1;
int __macc__z_def_ub_set_186[10];
int __macc__z_def_lb_set_185[10];
int __macc__z_use_ub_set_184[10];
int __macc__z_use_lb_set_183[10];
int __macc__x_def_ub_set_182[10];
int __macc__x_def_lb_set_181[10];
int __macc__x_use_ub_set_180[10];
int __macc__x_use_lb_set_179[10];
int __macc__j_loop_ub_set_177[10];
int __macc__j_loop_lb_set_176[10];
int __macc__end_last_178 = -1;
int __macc__z_def_ub_set_175[10];
int __macc__z_def_lb_set_174[10];
int __macc__z_use_ub_set_173[10];
int __macc__z_use_lb_set_172[10];
int __macc__j_loop_ub_set_170[10];
int __macc__j_loop_lb_set_169[10];
int __macc__end_last_171 = -1;
int __macc__r_def_ub_set_168[10];
int __macc__r_def_lb_set_167[10];
int __macc__r_use_ub_set_166[10];
int __macc__r_use_lb_set_165[10];
int __macc__p_def_ub_set_164[10];
int __macc__p_def_lb_set_163[10];
int __macc__p_use_ub_set_162[10];
int __macc__p_use_lb_set_161[10];
int __macc__j_loop_ub_set_159[10];
int __macc__j_loop_lb_set_158[10];
int __macc__end_last_160 = -1;
int __macc__r_def_ub_set_157[10];
int __macc__r_def_lb_set_156[10];
int __macc__r_use_ub_set_155[10];
int __macc__r_use_lb_set_154[10];
int __macc__j_loop_ub_set_152[10];
int __macc__j_loop_lb_set_151[10];
int __macc__end_last_153 = -1;
int __macc__q_def_ub_set_150[10];
int __macc__q_def_lb_set_149[10];
int __macc__q_use_ub_set_148[10];
int __macc__q_use_lb_set_147[10];
int __macc__p_def_ub_set_146[10];
int __macc__p_def_lb_set_145[10];
int __macc__p_use_ub_set_144[10];
int __macc__p_use_lb_set_143[10];
int __macc__z_def_ub_set_142[10];
int __macc__z_def_lb_set_141[10];
int __macc__z_use_ub_set_140[10];
int __macc__z_use_lb_set_139[10];
int __macc__r_def_ub_set_138[10];
int __macc__r_def_lb_set_137[10];
int __macc__r_use_ub_set_136[10];
int __macc__r_use_lb_set_135[10];
int __macc__j_loop_ub_set_133[10];
int __macc__j_loop_lb_set_132[10];
int __macc__end_last_134 = -1;
int __macc__q_def_ub_set_131[10];
int __macc__q_def_lb_set_130[10];
int __macc__q_use_ub_set_129[10];
int __macc__q_use_lb_set_128[10];
int __macc__p_def_ub_set_127[10];
int __macc__p_def_lb_set_126[10];
int __macc__p_use_ub_set_125[10];
int __macc__p_use_lb_set_124[10];
int __macc__j_loop_ub_set_122[10];
int __macc__j_loop_lb_set_121[10];
int __macc__end_last_123 = -1;
int __macc__rowstr_def_ub_set_120[10];
int __macc__rowstr_def_lb_set_119[10];
int __macc__rowstr_use_ub_set_118[10];
int __macc__rowstr_use_lb_set_117[10];
int __macc__p_def_ub_set_116[10];
int __macc__p_def_lb_set_115[10];
int __macc__p_use_ub_set_114[10];
int __macc__p_use_lb_set_113[10];
int __macc__colidx_def_ub_set_112[10];
int __macc__colidx_def_lb_set_111[10];
int __macc__colidx_use_ub_set_110[10];
int __macc__colidx_use_lb_set_109[10];
int __macc__a_def_ub_set_108[10];
int __macc__a_def_lb_set_107[10];
int __macc__a_use_ub_set_106[10];
int __macc__a_use_lb_set_105[10];
int __macc__q_def_ub_set_104[10];
int __macc__q_def_lb_set_103[10];
int __macc__q_use_ub_set_102[10];
int __macc__q_use_lb_set_101[10];
int __macc__j_loop_ub_set_99[10];
int __macc__j_loop_lb_set_98[10];
int __macc__end_last_100 = -1;
int __macc__x_def_ub_set_97[10];
int __macc__x_def_lb_set_96[10];
int __macc__x_use_ub_set_95[10];
int __macc__x_use_lb_set_94[10];
int __macc__i_loop_ub_set_93[10];
int __macc__i_loop_lb_set_92[10];
int __macc__z_def_ub_set_91[10];
int __macc__z_def_lb_set_90[10];
int __macc__z_use_ub_set_89[10];
int __macc__z_use_lb_set_88[10];
int __macc__r_def_ub_set_87[10];
int __macc__r_def_lb_set_86[10];
int __macc__r_use_ub_set_85[10];
int __macc__r_use_lb_set_84[10];
int __macc__q_def_ub_set_83[10];
int __macc__q_def_lb_set_82[10];
int __macc__q_use_ub_set_81[10];
int __macc__q_use_lb_set_80[10];
int __macc__p_def_ub_set_79[10];
int __macc__p_def_lb_set_78[10];
int __macc__p_use_ub_set_77[10];
int __macc__p_use_lb_set_76[10];
int __macc__j_loop_ub_set_74[10];
int __macc__j_loop_lb_set_73[10];
int __macc__end_last_75 = -1;
int __macc__x_def_ub_set_72[10];
int __macc__x_def_lb_set_71[10];
int __macc__x_use_ub_set_70[10];
int __macc__x_use_lb_set_69[10];
int __macc__i_loop_ub_set_68[10];
int __macc__i_loop_lb_set_67[10];
int __macc__x_def_ub_set_66[10];
int __macc__x_def_lb_set_65[10];
int __macc__x_use_ub_set_64[10];
int __macc__x_use_lb_set_63[10];
int __macc__r_def_ub_set_62[10];
int __macc__r_def_lb_set_61[10];
int __macc__r_use_ub_set_60[10];
int __macc__r_use_lb_set_59[10];
int __macc__j_loop_ub_set_56[10];
int __macc__j_loop_lb_set_55[10];
int __macc__firstcol_last_58 = -1;
int __macc__lastcol_last_57 = -1;
int __macc__z_def_ub_set_54[10];
int __macc__z_def_lb_set_53[10];
int __macc__z_use_ub_set_52[10];
int __macc__z_use_lb_set_51[10];
int __macc__rowstr_def_ub_set_50[10];
int __macc__rowstr_def_lb_set_49[10];
int __macc__rowstr_use_ub_set_48[10];
int __macc__rowstr_use_lb_set_47[10];
int __macc__colidx_def_ub_set_46[10];
int __macc__colidx_def_lb_set_45[10];
int __macc__colidx_use_ub_set_44[10];
int __macc__colidx_use_lb_set_43[10];
int __macc__a_def_ub_set_42[10];
int __macc__a_def_lb_set_41[10];
int __macc__a_use_ub_set_40[10];
int __macc__a_use_lb_set_39[10];
int __macc__r_def_ub_set_38[10];
int __macc__r_def_lb_set_37[10];
int __macc__r_use_ub_set_36[10];
int __macc__r_use_lb_set_35[10];
int __macc__j_loop_ub_set_33[10];
int __macc__j_loop_lb_set_32[10];
int __macc__end_last_34 = -1;
int __macc__r_def_ub_set_31[10];
int __macc__r_def_lb_set_30[10];
int __macc__r_use_ub_set_29[10];
int __macc__r_use_lb_set_28[10];
int __macc__j_loop_ub_set_25[10];
int __macc__j_loop_lb_set_24[10];
int __macc__firstcol_last_27 = -1;
int __macc__lastcol_last_26 = -1;
int __macc__x_def_ub_set_23[10];
int __macc__x_def_lb_set_22[10];
int __macc__x_use_ub_set_21[10];
int __macc__x_use_lb_set_20[10];
int __macc__z_def_ub_set_19[10];
int __macc__z_def_lb_set_18[10];
int __macc__z_use_ub_set_17[10];
int __macc__z_use_lb_set_16[10];
int __macc__r_def_ub_set_15[10];
int __macc__r_def_lb_set_14[10];
int __macc__r_use_ub_set_13[10];
int __macc__r_use_lb_set_12[10];
int __macc__q_def_ub_set_11[10];
int __macc__q_def_lb_set_10[10];
int __macc__q_use_ub_set_9[10];
int __macc__q_use_lb_set_8[10];
int __macc__p_def_ub_set_7[10];
int __macc__p_def_lb_set_6[10];
int __macc__p_use_ub_set_5[10];
int __macc__p_use_lb_set_4[10];
int __macc__j_loop_ub_set_2[10];
int __macc__j_loop_lb_set_1[10];
int __macc__naa_last_3 = -1;
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
# 26 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int __MACC_NUMGPUS = -(1);
# 28 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int __macc_get_num_gpus()
{
# 30 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return acc_get_num_devices(acc_device_nvidia);
}
# 33 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_set_gpu_num(int i)
{
# 35 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_set_device_num(i, acc_device_nvidia);
}
# 55 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET;
# 57 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_init()
{
# 59 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
char * env_macc_numgpus = getenv("MACC_NUMGPUS");
# 61 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(env_macc_numgpus != ((void * )(0))) {
# 62 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__MACC_NUMGPUS = (atoi(env_macc_numgpus));
}
else {
# 65 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
}
# 68 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(__MACC_NUMGPUS <= (0)) {
# 69 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 70 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
exit(-(1));
}
# 73 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(((getenv("OMP_NESTED")) == ((void * )(0))) || ((getenv("OMP_MAX_ACTIVE_LEVELS")) == ((void * )(0)))) {
# 74 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
fputs("[MACC ERROR] Improper setting.\n\nIn order to make nested-parallel available,\nrun the commands below before running the program.\n\n\texport OMP_NESTED=TRUE\n\texport OMP_MAX_ACTIVE_LEVELS=2\n\n", stderr);
# 83 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
exit(-(1));
}
# 86 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__MACC_DATA_TABLE_SET = (calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
}
# 89 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_data_table_insert(int gpu_num, void * p, int type_size, int entire_lb, int entire_ub)
{
# 92 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int index = ((long)(p)) % (256);
# 94 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * new_entry = malloc(sizeof(struct __MaccDataTableEntry));
# 96 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->addr) = p;
# 97 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->type_size) = type_size;
# 98 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->entire_lb) = entire_lb;
# 99 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->entire_ub) = entire_ub;
# 100 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->dirty) = (0);
# 101 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->dirty_lb) = (-(1));
# 102 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->dirty_ub) = (-(1));
# 103 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(new_entry->next) = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index));
# 105 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = new_entry;
}
# 108 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * __macc_data_table_find(int gpu_num, void * p)
{
# 110 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int index = ((long)(p)) % (256);
# 111 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 113 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
while(entry != ((void * )(0))) {
{
# 115 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((entry->addr) == p) {
# 116 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return entry;
}
# 118 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
entry = (entry->next);
}
}
# 121 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", p);
# 122 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
exit(-(1));
# 124 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return (void * )(0);
}
# 127 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_data_table_delete(int gpu_num, void * p)
{
# 129 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int index = ((long)(p)) % (256);
# 130 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 131 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * pre = (void * )(0);
# 133 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(entry != ((void * )(0))) {
# 134 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((entry->addr) == p) {
# 135 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = (entry->next);
# 136 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return ;
}
# 139 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
pre = entry;
# 140 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
entry = (entry->next);
}
# 143 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
while((pre != ((void * )(0))) && (entry != ((void * )(0)))) {
{
# 145 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((entry->addr) == p) {
# 146 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(pre->next) = (entry->next);
# 147 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
free(entry);
# 148 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return ;
}
# 151 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
pre = entry;
# 152 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
entry = (entry->next);
}
}
# 155 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", p);
# 156 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
exit(-(1));
}
# 159 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_delete(int gpu_num, void * p, int type_size, int lb, int length)
{
# 161 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_delete_async(p + (lb * type_size), length * type_size, gpu_num);
# 162 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_data_table_delete(gpu_num, p);
# 163 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_wait(gpu_num);
}
# 166 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_copyout(int gpu_num, void * p, int type_size, int lb, int length)
{
# 168 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 170 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(entry->dirty) {
# 171 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_self_async((entry->addr) + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size), gpu_num);
}
# 175 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_delete(gpu_num, p, type_size, lb, length);
}
# 178 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_copyin(int gpu_num, void * p, int type_size, int lb, int length)
{
# 180 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_copyin_async(p + (lb * type_size), length * type_size, gpu_num);
# 181 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_data_table_insert(gpu_num, p, type_size, lb, (lb + length) - (1));
# 182 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_wait(gpu_num);
}
# 185 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_create(int gpu_num, void * p, int type_size, int lb, int length)
{
# 187 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_create_async(p + (lb * type_size), length * type_size, gpu_num);
# 188 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_data_table_insert(gpu_num, p, type_size, lb, (lb + length) - (1));
# 189 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_wait(gpu_num);
}
# 192 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_update_self(int gpu_num, void * p, int type_size, int lb, int length)
{
# 194 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 195 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int ub = (lb + length) - (1);
# 197 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((entry->dirty) && (!(((entry->dirty_lb) > ub) || ((entry->dirty_ub) < lb)))) {
# 198 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int new_lb = ((entry->dirty_lb) > lb) ?(entry->dirty_lb) : lb;
# 199 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int new_ub = ((entry->dirty_ub) < ub) ?(entry->dirty_ub) : ub;
# 200 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_self(p + (new_lb * type_size), ((new_ub - new_lb) + (1)) * type_size);
}
}
# 204 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_update_device(int gpu_num, void * p, int type_size, int lb, int length)
{
# 206 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_device(p + (lb * type_size), length * type_size);
}
# 209 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_init_access_region(int gpu_num, int * lb_set, int * ub_set)
{
# 211 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(lb_set[gpu_num]) = (2147483647);
# 212 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(ub_set[gpu_num]) = (-(1));
}
# 215 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_update_access_region(int gpu_num, int * lb_set, int * ub_set, int val)
{
# 217 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(lb_set[gpu_num]) = (((lb_set[gpu_num]) < val) ?(lb_set[gpu_num]) : val);
# 218 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(ub_set[gpu_num]) = (((ub_set[gpu_num]) > val) ?(ub_set[gpu_num]) : val);
}
# 221 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int __macc_region_is_overlapping(int * lb_set, int * ub_set)
{
{
# 223 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i;
# 223 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
for(i = (0); i < (__MACC_NUMGPUS - (1)); i++) {
{
{
# 224 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int j;
# 224 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
for(j = (i + (1)); j < __MACC_NUMGPUS; j++) {
{
# 225 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(!(((lb_set[i]) > (ub_set[j])) || ((ub_set[i]) < (lb_set[j])))) {
# 226 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return 1;
}
}
}
}
}
}
}
# 228 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
return 0;
}
# 232 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_calc_loop_region(int * loop_lb_set, int * loop_ub_set, int entire_start, int entire_end, int step, int until_equal)
{
# 236 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int pos = entire_start;
# 237 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int width = (int)((((((float)(entire_end)) - entire_start) + (until_equal ?(1) : (0))) / __MACC_NUMGPUS) + (0.9));
# 238 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
width -= (width % step);
{
# 240 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i;
# 240 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 241 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_lb_set[i]) = pos;
# 242 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
pos += (width - (1));
# 243 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_ub_set[i]) = pos;
# 244 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
pos += step;
}
}
}
{
# 247 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int tail = __MACC_NUMGPUS - (1);
# 248 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_ub_set[tail]) = entire_end;
# 249 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((! until_equal) && ((loop_ub_set[tail]) == entire_end)) {
# 250 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_ub_set[tail]) -= step;
}
}
}
# 253 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_rewrite_loop_region_into_single(int * loop_lb_set, int * loop_ub_set)
{
# 255 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_ub_set[(0)]) = (loop_ub_set[(__MACC_NUMGPUS - (1))]);
{
# 257 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i;
# 257 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
for(i = (1); i < __MACC_NUMGPUS; i++) {
{
# 258 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_lb_set[i]) = (1);
# 259 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(loop_ub_set[i]) = (0);
}
}
}
}
# 263 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_rewrite_data_region_into_single(int * lb_set, int * ub_set)
{
# 265 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int gpu_ub = __MACC_NUMGPUS - (1);
# 266 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(lb_set[(0)]) = (((lb_set[(0)]) < (lb_set[gpu_ub])) ?(lb_set[(0)]) : (lb_set[gpu_ub]));
# 267 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(ub_set[(0)]) = (((ub_set[(0)]) > (ub_set[gpu_ub])) ?(ub_set[(0)]) : (ub_set[gpu_ub]));
}
# 270 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_sync_data(int gpu_num, void * p, int type_size, int lb, int ub)
{
# 272 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void * update_addr = p + (lb * type_size);
# 273 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
unsigned long length_b = ((ub - lb) + (1)) * type_size;
# 275 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_self(update_addr, length_b);
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 279 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i = omp_get_thread_num();
# 280 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(i != gpu_num) {
# 281 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_set_gpu_num(i);
# 282 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_device(update_addr, length_b);
}
}
# 286 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_set_gpu_num(gpu_num);
}
# 290 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void __macc_set_data_region(int gpu_num, void * p, int multi, int use_type, int * use_lb_set, int * use_ub_set, int def_type, int * def_lb_set, int * def_ub_set)
{
# 294 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 299 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(((entry->dirty) && (multi || (gpu_num != (0)))) && (__MACC_NUMGPUS > (1))) {
# 300 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int update_all = 0;
# 301 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int update_all_DtoH = 0;
# 303 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((use_type == (0)) || (def_type == (0))) {
# 304 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
update_all = (1);
}
else {
# 306 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(def_type == (2)) {
{
# 307 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i;
# 307 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 308 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (def_ub_set[i])) || ((entry->dirty_ub) < (def_lb_set[i]))))) {
# 311 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
update_all = (1);
# 312 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
break;
}
}
}
}
}
}
# 317 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(! update_all) {
# 318 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int every_whole = 1;
# 319 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int unused_lb = entry->dirty_lb;
# 320 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int unused_ub = entry->dirty_ub;
{
# 322 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i;
# 322 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 323 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(i != gpu_num) {
# 324 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(((use_lb_set[i]) <= (entry->dirty_lb)) && ((entry->dirty_ub) <= (use_ub_set[i]))) {
# 326 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
update_all_DtoH = (1);
}
else {
# 329 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
every_whole = (0);
# 331 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((use_lb_set[i]) <= unused_lb) {
# 332 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
unused_lb = ((unused_lb > ((use_ub_set[i]) + (1))) ? unused_lb : ((use_ub_set[i]) + (1)));
}
else {
# 333 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((use_ub_set[i]) >= unused_ub) {
# 334 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
unused_ub = ((unused_ub < ((use_lb_set[i]) - (1))) ? unused_ub : ((use_lb_set[i]) - (1)));
}
}
}
}
}
}
}
# 339 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(every_whole) {
# 340 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
update_all = (1);
}
# 341 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(unused_ub < unused_lb) {
# 342 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
update_all_DtoH = (1);
}
}
# 346 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(update_all) {
# 347 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_sync_data(gpu_num, p, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 348 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty) = (0);
}
else {
# 352 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((entry->dirty) && (use_type == (2))) {
# 353 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int thread_num = multi ? __MACC_NUMGPUS : (1);
# 355 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(update_all_DtoH) {
# 356 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_self(p + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size));
}
#pragma omp parallel num_threads ( thread_num )
{
# 361 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int i = omp_get_thread_num();
# 363 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (use_ub_set[i])) || ((entry->dirty_ub) < (use_lb_set[i]))))) {
# 367 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int update_lb = ((entry->dirty_lb) > (use_lb_set[i])) ?(entry->dirty_lb) : (use_lb_set[i]);
# 368 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
int update_ub = ((entry->dirty_ub) < (use_ub_set[i])) ?(entry->dirty_ub) : (use_ub_set[i]);
# 369 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
void * update_addr = p + (update_lb * (entry->type_size));
# 370 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
unsigned long length_b = ((update_ub - update_lb) + (1)) * (entry->type_size);
# 372 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(! update_all_DtoH) {
# 373 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_set_gpu_num(gpu_num);
# 374 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_self(update_addr, length_b);
}
# 376 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_set_gpu_num(i);
# 377 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
acc_update_device(update_addr, length_b);
}
# 379 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_set_gpu_num(gpu_num);
}
}
}
}
# 389 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if((multi || (gpu_num == (0))) && (def_type != (1))) {
# 390 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(def_type == (0)) {
# 391 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty) = (1);
# 392 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_lb) = (entry->entire_lb);
# 393 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_ub) = (entry->entire_ub);
}
else {
# 396 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(!(entry->dirty)) {
# 397 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty) = (1);
# 398 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 399 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
else {
# 404 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
if(((!(((entry->dirty_lb) > (def_ub_set[gpu_num])) || ((entry->dirty_ub) < (def_lb_set[gpu_num])))) || ((entry->dirty_lb) == ((def_ub_set[gpu_num]) + (1)))) || ((def_lb_set[gpu_num]) == ((entry->dirty_ub) + (1)))) {
# 412 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_lb) = (((entry->dirty_lb) < (def_lb_set[gpu_num])) ?(entry->dirty_lb) : (def_lb_set[gpu_num]));
# 413 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_ub) = (((entry->dirty_ub) > (def_ub_set[gpu_num])) ?(entry->dirty_ub) : (def_ub_set[gpu_num]));
}
else {
# 417 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
__macc_sync_data(gpu_num, p, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 418 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 419 "/tmp/tmp.HGpj0gDuBm/cg_1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
}
}
}
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
#pragma libm ( remainderf , remquof , rintf , rsqrtf )
#pragma libm ( scalblnf , scalbnf , sinf , sinhf , sqrtf )
#pragma libm ( tanf , tanhf , tgammaf , truncf )
#pragma libm ( abs , acos , acosh , asin , asinh , atanh , atan2 )
#pragma libm ( cbrt , ceil , copysign , cos , cosh )
#pragma libm ( erf , erfc , exp , exp2 , exp10 , expm1 )
#pragma libm ( fabs , floor , fma , fmin , fmax )
#pragma libm ( ilogb )
#pragma libm ( ldexp , lgamma , llrint , llround , logb , log1p , log , log2 , log10 , lrint , lround )
#pragma libm ( pow )
#pragma libm ( nan , nearbyint , nextafter )
#pragma libm ( remainder , remquo , rint , rsqrt )
#pragma libm ( scalbln , scalbn , sin , sinh , sqrt )
#pragma libm ( tan , tanh , tgamma , trunc )
double randlc(double * x, double a);
void vranlc(int n, double * x, double a, double y[]);
void timer_clear(int n);
void timer_start(int n);
void timer_stop(int n);
double timer_read(int n);
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_31_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7);
# 74 "./sample/openacc-npb-master/CG/CG/cg.c"
unsigned int nz = ((75000) * ((13) + (1))) * ((13) + (1));
# 75 "./sample/openacc-npb-master/CG/CG/cg.c"
unsigned int naz = (75000) * ((13) + (1));
# 76 "./sample/openacc-npb-master/CG/CG/cg.c"
unsigned int na = 75000;
# 78 "./sample/openacc-npb-master/CG/CG/cg.c"
static int colidx[14700000];
# 79 "./sample/openacc-npb-master/CG/CG/cg.c"
static int rowstr[75001];
# 80 "./sample/openacc-npb-master/CG/CG/cg.c"
static int iv[75000];
# 81 "./sample/openacc-npb-master/CG/CG/cg.c"
static int arow[75000];
# 82 "./sample/openacc-npb-master/CG/CG/cg.c"
static int acol[1050000];
# 85 "./sample/openacc-npb-master/CG/CG/cg.c"
static double aelt[1050000];
# 86 "./sample/openacc-npb-master/CG/CG/cg.c"
static double a[14700000];
# 87 "./sample/openacc-npb-master/CG/CG/cg.c"
static double x[75002];
# 88 "./sample/openacc-npb-master/CG/CG/cg.c"
static double z[75002];
# 89 "./sample/openacc-npb-master/CG/CG/cg.c"
static double p[75002];
# 90 "./sample/openacc-npb-master/CG/CG/cg.c"
static double q[75002];
# 91 "./sample/openacc-npb-master/CG/CG/cg.c"
static double r[75002];
# 94 "./sample/openacc-npb-master/CG/CG/cg.c"
static int naa;
# 95 "./sample/openacc-npb-master/CG/CG/cg.c"
static int nzz;
# 96 "./sample/openacc-npb-master/CG/CG/cg.c"
static int firstrow;
# 97 "./sample/openacc-npb-master/CG/CG/cg.c"
static int lastrow;
# 98 "./sample/openacc-npb-master/CG/CG/cg.c"
static int firstcol;
# 99 "./sample/openacc-npb-master/CG/CG/cg.c"
static int lastcol;
# 102 "./sample/openacc-npb-master/CG/CG/cg.c"
static double amult;
# 103 "./sample/openacc-npb-master/CG/CG/cg.c"
static double tran;
# 106 "./sample/openacc-npb-master/CG/CG/cg.c"
static enum anon_type_31_logical timeron;
static void conj_grad(int colidx[], int rowstr[], double x[], double z[], double a[], double p[], double q[], double r[], double * rnorm);
static void makea(int n, int nz, double a[], int colidx[], int rowstr[], int firstrow, int lastrow, int firstcol, int lastcol, int arow[], int acol[][14], double aelt[][14], int iv[]);
static void sparse(double a[], int colidx[], int rowstr[], int n, int nz, int nozer, int arow[], int acol[][14], double aelt[][14], int firstrow, int lastrow, int nzloc[], double rcond, double shift);
static void sprnvc(int n, int nz, int nn1, double v[], int iv[]);
static int icnvrt(double x, int ipwr2);
static void vecset(int n, double v[], int iv[], int * nzv, int i, double val);
# 150 "./sample/openacc-npb-master/CG/CG/cg.c"
static int conj_calls = 0;
# 151 "./sample/openacc-npb-master/CG/CG/cg.c"
static int loop_iter = 0;
extern void wtime_(double * t);
# 163 "./sample/openacc-npb-master/CG/CG/cg.c"
static double elapsed_time(void)
{
# 165 "./sample/openacc-npb-master/CG/CG/cg.c"
double t;
# 167 "./sample/openacc-npb-master/CG/CG/cg.c"
wtime_(&(t));
# 168 "./sample/openacc-npb-master/CG/CG/cg.c"
return t;
}
# 172 "./sample/openacc-npb-master/CG/CG/cg.c"
static double start[64];
# 172 "./sample/openacc-npb-master/CG/CG/cg.c"
static double elapsed[64];
# 177 "./sample/openacc-npb-master/CG/CG/cg.c"
void timer_clear(int n)
{
# 179 "./sample/openacc-npb-master/CG/CG/cg.c"
(elapsed[n]) = (0.0);
}
# 186 "./sample/openacc-npb-master/CG/CG/cg.c"
void timer_start(int n)
{
# 188 "./sample/openacc-npb-master/CG/CG/cg.c"
(start[n]) = (elapsed_time());
}
# 195 "./sample/openacc-npb-master/CG/CG/cg.c"
void timer_stop(int n)
{
# 197 "./sample/openacc-npb-master/CG/CG/cg.c"
double t;
# 197 "./sample/openacc-npb-master/CG/CG/cg.c"
double now;
# 199 "./sample/openacc-npb-master/CG/CG/cg.c"
now = (elapsed_time());
# 200 "./sample/openacc-npb-master/CG/CG/cg.c"
t = (now - (start[n]));
# 201 "./sample/openacc-npb-master/CG/CG/cg.c"
(elapsed[n]) += t;
}
# 209 "./sample/openacc-npb-master/CG/CG/cg.c"
double timer_read(int n)
{
# 211 "./sample/openacc-npb-master/CG/CG/cg.c"
return elapsed[n];
}
# 218 "./sample/openacc-npb-master/CG/CG/cg.c"
double randlc(double * x, double a)
{
# 250 "./sample/openacc-npb-master/CG/CG/cg.c"
double const r23 = 1.1920928955078125e-07;
# 251 "./sample/openacc-npb-master/CG/CG/cg.c"
double const r46 = r23 * r23;
# 252 "./sample/openacc-npb-master/CG/CG/cg.c"
double const t23 = 8.388608e+06;
# 253 "./sample/openacc-npb-master/CG/CG/cg.c"
double const t46 = t23 * t23;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double t1;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double t2;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double t3;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double t4;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double a1;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double a2;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double x1;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double x2;
# 255 "./sample/openacc-npb-master/CG/CG/cg.c"
double z;
# 256 "./sample/openacc-npb-master/CG/CG/cg.c"
double r;
# 261 "./sample/openacc-npb-master/CG/CG/cg.c"
t1 = (r23 * a);
# 262 "./sample/openacc-npb-master/CG/CG/cg.c"
a1 = ((int)(t1));
# 263 "./sample/openacc-npb-master/CG/CG/cg.c"
a2 = (a - (t23 * a1));
# 270 "./sample/openacc-npb-master/CG/CG/cg.c"
t1 = (r23 * (*(x)));
# 271 "./sample/openacc-npb-master/CG/CG/cg.c"
x1 = ((int)(t1));
# 272 "./sample/openacc-npb-master/CG/CG/cg.c"
x2 = ((*(x)) - (t23 * x1));
# 273 "./sample/openacc-npb-master/CG/CG/cg.c"
t1 = ((a1 * x2) + (a2 * x1));
# 274 "./sample/openacc-npb-master/CG/CG/cg.c"
t2 = ((int)(r23 * t1));
# 275 "./sample/openacc-npb-master/CG/CG/cg.c"
z = (t1 - (t23 * t2));
# 276 "./sample/openacc-npb-master/CG/CG/cg.c"
t3 = ((t23 * z) + (a2 * x2));
# 277 "./sample/openacc-npb-master/CG/CG/cg.c"
t4 = ((int)(r46 * t3));
# 278 "./sample/openacc-npb-master/CG/CG/cg.c"
(*(x)) = (t3 - (t46 * t4));
# 279 "./sample/openacc-npb-master/CG/CG/cg.c"
r = (r46 * (*(x)));
# 281 "./sample/openacc-npb-master/CG/CG/cg.c"
return r;
}
# 285 "./sample/openacc-npb-master/CG/CG/cg.c"
void vranlc(int n, double * x, double a, double y[])
{
# 317 "./sample/openacc-npb-master/CG/CG/cg.c"
double const r23 = 1.1920928955078125e-07;
# 318 "./sample/openacc-npb-master/CG/CG/cg.c"
double const r46 = r23 * r23;
# 319 "./sample/openacc-npb-master/CG/CG/cg.c"
double const t23 = 8.388608e+06;
# 320 "./sample/openacc-npb-master/CG/CG/cg.c"
double const t46 = t23 * t23;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double t1;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double t2;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double t3;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double t4;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double a1;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double a2;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double x1;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double x2;
# 322 "./sample/openacc-npb-master/CG/CG/cg.c"
double z;
# 324 "./sample/openacc-npb-master/CG/CG/cg.c"
int i;
# 329 "./sample/openacc-npb-master/CG/CG/cg.c"
t1 = (r23 * a);
# 330 "./sample/openacc-npb-master/CG/CG/cg.c"
a1 = ((int)(t1));
# 331 "./sample/openacc-npb-master/CG/CG/cg.c"
a2 = (a - (t23 * a1));
# 336 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (0); i < n; i++) {
{
# 342 "./sample/openacc-npb-master/CG/CG/cg.c"
t1 = (r23 * (*(x)));
# 343 "./sample/openacc-npb-master/CG/CG/cg.c"
x1 = ((int)(t1));
# 344 "./sample/openacc-npb-master/CG/CG/cg.c"
x2 = ((*(x)) - (t23 * x1));
# 345 "./sample/openacc-npb-master/CG/CG/cg.c"
t1 = ((a1 * x2) + (a2 * x1));
# 346 "./sample/openacc-npb-master/CG/CG/cg.c"
t2 = ((int)(r23 * t1));
# 347 "./sample/openacc-npb-master/CG/CG/cg.c"
z = (t1 - (t23 * t2));
# 348 "./sample/openacc-npb-master/CG/CG/cg.c"
t3 = ((t23 * z) + (a2 * x2));
# 349 "./sample/openacc-npb-master/CG/CG/cg.c"
t4 = ((int)(r46 * t3));
# 350 "./sample/openacc-npb-master/CG/CG/cg.c"
(*(x)) = (t3 - (t46 * t4));
# 351 "./sample/openacc-npb-master/CG/CG/cg.c"
(y[i]) = (r46 * (*(x)));
}
}
# 354 "./sample/openacc-npb-master/CG/CG/cg.c"
return ;
}
# 364 "./sample/openacc-npb-master/CG/CG/cg.c"
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_31_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7)
{
# 369 "./sample/openacc-npb-master/CG/CG/cg.c"
char size[16];
# 370 "./sample/openacc-npb-master/CG/CG/cg.c"
int j;
# 372 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("\n\n %s Benchmark Completed.\n", name);
# 373 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Class           =             %12c\n", class);
# 380 "./sample/openacc-npb-master/CG/CG/cg.c"
if((n2 == (0)) && (n3 == (0))) {
# 381 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((name[(0)]) == ((char)69)) && ((name[(1)]) == ((char)80))) {
# 382 "./sample/openacc-npb-master/CG/CG/cg.c"
sprintf(size, "%15.0lf", __builtin_pow(2.0, n1));
# 383 "./sample/openacc-npb-master/CG/CG/cg.c"
j = (14);
# 384 "./sample/openacc-npb-master/CG/CG/cg.c"
if((size[j]) == ((char)46)) {
# 385 "./sample/openacc-npb-master/CG/CG/cg.c"
(size[j]) = ((char)32);
# 386 "./sample/openacc-npb-master/CG/CG/cg.c"
j--;
}
# 388 "./sample/openacc-npb-master/CG/CG/cg.c"
(size[j + (1)]) = ((char)0);
# 389 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Size            =          %15s\n", size);
}
else {
# 391 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Size            =             %12d\n", n1);
}
}
else {
# 394 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Size            =           %4dx%4dx%4d\n", n1, n2, n3);
}
# 397 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Iterations      =             %12d\n", niter);
# 398 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Time in seconds =             %12.2lf\n", t);
# 399 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Mop/s total     =          %15.2lf\n", mops);
# 400 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Operation type  = %24s\n", optype);
# 401 "./sample/openacc-npb-master/CG/CG/cg.c"
if(verified) {
# 402 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Verification    =             %12s\n", "SUCCESSFUL");
}
else {
# 404 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Verification    =             %12s\n", "UNSUCCESSFUL");
}
# 405 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Version         =             %12s\n", npbversion);
# 406 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Compile date    =             %12s\n", compiletime);
# 408 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("\n Compile options:\n    CC           = %s\n", cs1);
# 410 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    CLINK        = %s\n", cs2);
# 411 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    C_LIB        = %s\n", cs3);
# 412 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    C_INC        = %s\n", cs4);
# 413 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    CFLAGS       = %s\n", cs5);
# 414 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    CLINKFLAGS   = %s\n", cs6);
# 415 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    RAND         = %s\n", cs7);
# 417 "./sample/openacc-npb-master/CG/CG/cg.c"
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
extern void wtime_(double * t);
# 437 "./sample/openacc-npb-master/CG/CG/cg.c"
extern void wtime_(double * t)
{
# 441 "./sample/openacc-npb-master/CG/CG/cg.c"
static int _w2c_sec2123 = -(1);
# 442 "./sample/openacc-npb-master/CG/CG/cg.c"
struct timeval tv;
# 444 "./sample/openacc-npb-master/CG/CG/cg.c"
gettimeofday(&(tv), (struct timezone * )(0x000000000ull));
# 445 "./sample/openacc-npb-master/CG/CG/cg.c"
if(_w2c_sec2123 < (0)) {
# 447 "./sample/openacc-npb-master/CG/CG/cg.c"
_w2c_sec2123 = ((&(tv))->tv_sec);
}
# 449 "./sample/openacc-npb-master/CG/CG/cg.c"
(*(t)) = (((double)(((&(tv))->tv_sec) - ((long long)(_w2c_sec2123)))) + (((double)((&(tv))->tv_usec)) * (9.99999999999999954748e-07)));
# 450 "./sample/openacc-npb-master/CG/CG/cg.c"
return ;
}
# 456 "./sample/openacc-npb-master/CG/CG/cg.c"
int main(int argc, char * argv[])
{
__macc_init();
{
# 458 "./sample/openacc-npb-master/CG/CG/cg.c"
int i;
# 458 "./sample/openacc-npb-master/CG/CG/cg.c"
int j;
# 458 "./sample/openacc-npb-master/CG/CG/cg.c"
int k;
# 458 "./sample/openacc-npb-master/CG/CG/cg.c"
int it;
# 459 "./sample/openacc-npb-master/CG/CG/cg.c"
int end;
# 461 "./sample/openacc-npb-master/CG/CG/cg.c"
double zeta;
# 462 "./sample/openacc-npb-master/CG/CG/cg.c"
double rnorm;
# 463 "./sample/openacc-npb-master/CG/CG/cg.c"
double norm_temp1;
# 463 "./sample/openacc-npb-master/CG/CG/cg.c"
double norm_temp2;
# 465 "./sample/openacc-npb-master/CG/CG/cg.c"
double t;
# 465 "./sample/openacc-npb-master/CG/CG/cg.c"
double mflops;
# 465 "./sample/openacc-npb-master/CG/CG/cg.c"
double tmax;
# 466 "./sample/openacc-npb-master/CG/CG/cg.c"
char Class;
# 467 "./sample/openacc-npb-master/CG/CG/cg.c"
int verified;
# 468 "./sample/openacc-npb-master/CG/CG/cg.c"
double zeta_verify_value;
# 468 "./sample/openacc-npb-master/CG/CG/cg.c"
double epsilon;
# 468 "./sample/openacc-npb-master/CG/CG/cg.c"
double err;
# 470 "./sample/openacc-npb-master/CG/CG/cg.c"
char * t_names[3];
# 471 "./sample/openacc-npb-master/CG/CG/cg.c"
acc_init(acc_device_default);
# 473 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (0); i < (3); i++) {
{
# 474 "./sample/openacc-npb-master/CG/CG/cg.c"
timer_clear(i);
}
}
{
# 477 "./sample/openacc-npb-master/CG/CG/cg.c"
struct _IO_FILE * fp;
# 478 "./sample/openacc-npb-master/CG/CG/cg.c"
if((fp = (fopen("timer.flag", "r"))) != ((void * )(0))) {
# 479 "./sample/openacc-npb-master/CG/CG/cg.c"
timeron = true;
# 480 "./sample/openacc-npb-master/CG/CG/cg.c"
(t_names[0]) = ("init");
# 481 "./sample/openacc-npb-master/CG/CG/cg.c"
(t_names[1]) = ("benchmk");
# 482 "./sample/openacc-npb-master/CG/CG/cg.c"
(t_names[2]) = ("conjgd");
# 483 "./sample/openacc-npb-master/CG/CG/cg.c"
fclose(fp);
}
else {
# 485 "./sample/openacc-npb-master/CG/CG/cg.c"
timeron = false;
}
# 488 "./sample/openacc-npb-master/CG/CG/cg.c"
timer_start(0);
# 490 "./sample/openacc-npb-master/CG/CG/cg.c"
firstrow = (0);
# 491 "./sample/openacc-npb-master/CG/CG/cg.c"
lastrow = ((75000) - (1));
# 492 "./sample/openacc-npb-master/CG/CG/cg.c"
firstcol = (0);
# 493 "./sample/openacc-npb-master/CG/CG/cg.c"
lastcol = ((75000) - (1));
# 495 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (1400)) && ((13) == (7))) && ((75) == (15))) && ((60.0) == (10))) {
# 496 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)83);
# 497 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (8.5971775078648);
}
else {
# 498 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (7000)) && ((13) == (8))) && ((75) == (15))) && ((60.0) == (12))) {
# 499 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)87);
# 500 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (10.362595087124);
}
else {
# 501 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (14000)) && ((13) == (11))) && ((75) == (15))) && ((60.0) == (20))) {
# 502 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)65);
# 503 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (17.130235054029);
}
else {
# 504 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (75000)) && ((13) == (13))) && ((75) == (75))) && ((60.0) == (60))) {
# 505 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)66);
# 506 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (22.712745482631);
}
else {
# 507 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (150000)) && ((13) == (15))) && ((75) == (75))) && ((60.0) == (110))) {
# 508 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)67);
# 509 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (28.973605592845);
}
else {
# 510 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (1500000)) && ((13) == (21))) && ((75) == (100))) && ((60.0) == (500))) {
# 511 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)68);
# 512 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (52.514532105794);
}
else {
# 513 "./sample/openacc-npb-master/CG/CG/cg.c"
if(((((75000) == (9000000)) && ((13) == (26))) && ((75) == (100))) && ((60.0) == (1500))) {
# 514 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)69);
# 515 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta_verify_value = (77.522164599383);
}
else {
# 517 "./sample/openacc-npb-master/CG/CG/cg.c"
Class = ((char)85);
}
}
}
}
}
}
}
# 520 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("\n\n NAS Parallel Benchmarks (NPB3.3-ACC-C) - CG Benchmark\n\n");
# 521 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Size: %11d\n", 75000);
# 522 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Iterations: %5d\n", 75);
# 523 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("\n");
# 525 "./sample/openacc-npb-master/CG/CG/cg.c"
naa = (75000);
# 526 "./sample/openacc-npb-master/CG/CG/cg.c"
nzz = (((75000) * ((13) + (1))) * ((13) + (1)));
# 531 "./sample/openacc-npb-master/CG/CG/cg.c"
tran = (314159265.0);
# 532 "./sample/openacc-npb-master/CG/CG/cg.c"
amult = (1220703125.0);
# 533 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta = (randlc(&(tran), amult));
# 538 "./sample/openacc-npb-master/CG/CG/cg.c"
makea(naa, nzz, a, colidx, rowstr, firstrow, lastrow, firstcol, lastcol, arow, (int (* )[14])((void * )(acol)), (double (* )[14])((void * )(aelt)), iv);
# 553 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (0); j < ((lastrow - firstrow) + (1)); j++) {
{
# 554 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = (rowstr[j]); k < (rowstr[j + (1)]); k++) {
{
# 555 "./sample/openacc-npb-master/CG/CG/cg.c"
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
# 568 "./sample/openacc-npb-master/CG/CG/cg.c"
int na_gangs = (75000) + (1);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = __macc_region_is_changed;
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
}
{
__macc_calc_loop_region(__macc__i_loop_lb_set_67, __macc__i_loop_ub_set_68, 0, (75000) + (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i_loop_lb_set_67[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i_loop_ub_set_68[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_69, __macc__x_use_ub_set_70);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_71, __macc__x_def_ub_set_72);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_71, __macc__x_def_ub_set_72, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_71, __macc__x_def_ub_set_72, __macc_top_loop_ub);
}
}
}
}
if(__macc_region_is_overlapping(__macc__x_def_lb_set_71, __macc__x_def_ub_set_72)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i_loop_lb_set_67, __macc__i_loop_ub_set_68);
{
__macc_rewrite_data_region_into_single(__macc__x_def_lb_set_71, __macc__x_def_ub_set_72);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc__x_use_lb_set_69, __macc__x_use_ub_set_70, 2, __macc__x_def_lb_set_71, __macc__x_def_ub_set_72);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r )
#pragma acc loop gang vector
# 570 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (__macc__i_loop_lb_set_67[__macc_tnum]); i <= (__macc__i_loop_ub_set_68[__macc_tnum]); i++) {
{
# 571 "./sample/openacc-npb-master/CG/CG/cg.c"
(x[i]) = (1.0);
}
}
}
}
}
# 574 "./sample/openacc-npb-master/CG/CG/cg.c"
end = ((lastcol - firstcol) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_75));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_75 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_73, __macc__j_loop_ub_set_74, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_73[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_74[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__p_use_lb_set_76, __macc__p_use_ub_set_77);
__macc_init_access_region(__macc_gpu_num, __macc__p_def_lb_set_78, __macc__p_def_ub_set_79);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__p_def_lb_set_78, __macc__p_def_ub_set_79, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__p_def_lb_set_78, __macc__p_def_ub_set_79, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__q_use_lb_set_80, __macc__q_use_ub_set_81);
__macc_init_access_region(__macc_gpu_num, __macc__q_def_lb_set_82, __macc__q_def_ub_set_83);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__q_def_lb_set_82, __macc__q_def_ub_set_83, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__q_def_lb_set_82, __macc__q_def_ub_set_83, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_84, __macc__r_use_ub_set_85);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_86, __macc__r_def_ub_set_87);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_86, __macc__r_def_ub_set_87, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_86, __macc__r_def_ub_set_87, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_88, __macc__z_use_ub_set_89);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_90, __macc__z_def_ub_set_91);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__z_def_lb_set_90, __macc__z_def_ub_set_91, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_def_lb_set_90, __macc__z_def_ub_set_91, __macc_top_loop_ub);
}
}
}
}
if((__macc_region_is_overlapping(__macc__z_def_lb_set_90, __macc__z_def_ub_set_91)) || ((__macc_region_is_overlapping(__macc__r_def_lb_set_86, __macc__r_def_ub_set_87)) || ((__macc_region_is_overlapping(__macc__q_def_lb_set_82, __macc__q_def_ub_set_83)) || (__macc_region_is_overlapping(__macc__p_def_lb_set_78, __macc__p_def_ub_set_79))))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_73, __macc__j_loop_ub_set_74);
{
__macc_rewrite_data_region_into_single(__macc__z_def_lb_set_90, __macc__z_def_ub_set_91);
__macc_rewrite_data_region_into_single(__macc__r_def_lb_set_86, __macc__r_def_ub_set_87);
__macc_rewrite_data_region_into_single(__macc__q_def_lb_set_82, __macc__q_def_ub_set_83);
__macc_rewrite_data_region_into_single(__macc__p_def_lb_set_78, __macc__p_def_ub_set_79);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 1, __macc__z_use_lb_set_88, __macc__z_use_ub_set_89, 2, __macc__z_def_lb_set_90, __macc__z_def_ub_set_91);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 1, __macc__r_use_lb_set_84, __macc__r_use_ub_set_85, 2, __macc__r_def_lb_set_86, __macc__r_def_ub_set_87);
__macc_set_data_region(__macc_tnum, q, __macc_multi, 1, __macc__q_use_lb_set_80, __macc__q_use_ub_set_81, 2, __macc__q_def_lb_set_82, __macc__q_def_ub_set_83);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 1, __macc__p_use_lb_set_76, __macc__p_use_ub_set_77, 2, __macc__p_def_lb_set_78, __macc__p_def_ub_set_79);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r )
#pragma acc loop gang vector
# 576 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_73[__macc_tnum]); j <= (__macc__j_loop_ub_set_74[__macc_tnum]); j++) {
{
# 577 "./sample/openacc-npb-master/CG/CG/cg.c"
(q[j]) = (0.0);
# 578 "./sample/openacc-npb-master/CG/CG/cg.c"
(z[j]) = (0.0);
# 579 "./sample/openacc-npb-master/CG/CG/cg.c"
(r[j]) = (0.0);
# 580 "./sample/openacc-npb-master/CG/CG/cg.c"
(p[j]) = (0.0);
}
}
}
}
}
# 583 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta = (0.0);
# 590 "./sample/openacc-npb-master/CG/CG/cg.c"
for(it = (1); it <= (1); it++) {
{
# 594 "./sample/openacc-npb-master/CG/CG/cg.c"
conj_grad(colidx, rowstr, x, z, a, p, q, r, &(rnorm));
# 602 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp1 = (0.0);
# 603 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp2 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_171));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_171 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_169, __macc__j_loop_ub_set_170, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_169[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_170[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_172, __macc__z_use_ub_set_173);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_174, __macc__z_def_ub_set_175);
{
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_172, __macc__z_use_ub_set_173, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_172, __macc__z_use_ub_set_173, __macc_top_loop_ub);
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_169, __macc__j_loop_ub_set_170);
{
__macc_rewrite_data_region_into_single(__macc__z_use_lb_set_172, __macc__z_use_ub_set_173);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : norm_temp2 ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc__z_use_lb_set_172, __macc__z_use_ub_set_173, 1, __macc__z_def_lb_set_174, __macc__z_def_ub_set_175);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) reduction ( + : norm_temp2 )
#pragma acc loop
# 606 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_169[__macc_tnum]); j <= (__macc__j_loop_ub_set_170[__macc_tnum]); j++) {
{
# 608 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp2 = (norm_temp2 + ((z[j]) * (z[j])));
}
}
}
}
}
# 611 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp2 = ((1.0) / (__builtin_sqrt(norm_temp2)));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_178));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_178 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_176, __macc__j_loop_ub_set_177, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_176[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_177[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_179, __macc__x_use_ub_set_180);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_181, __macc__x_def_ub_set_182);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_181, __macc__x_def_ub_set_182, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_181, __macc__x_def_ub_set_182, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_183, __macc__z_use_ub_set_184);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_185, __macc__z_def_ub_set_186);
{
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_183, __macc__z_use_ub_set_184, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_183, __macc__z_use_ub_set_184, __macc_top_loop_ub);
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__x_def_lb_set_181, __macc__x_def_ub_set_182)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_176, __macc__j_loop_ub_set_177);
{
__macc_rewrite_data_region_into_single(__macc__z_use_lb_set_183, __macc__z_use_ub_set_184);
__macc_rewrite_data_region_into_single(__macc__x_def_lb_set_181, __macc__x_def_ub_set_182);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc__z_use_lb_set_183, __macc__z_use_ub_set_184, 1, __macc__z_def_lb_set_185, __macc__z_def_ub_set_186);
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc__x_use_lb_set_179, __macc__x_use_ub_set_180, 2, __macc__x_def_lb_set_181, __macc__x_def_ub_set_182);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r )
#pragma acc loop gang vector
# 617 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_176[__macc_tnum]); j <= (__macc__j_loop_ub_set_177[__macc_tnum]); j++) {
{
# 618 "./sample/openacc-npb-master/CG/CG/cg.c"
(x[j]) = (norm_temp2 * (z[j]));
}
}
}
}
}
}
}
# 626 "./sample/openacc-npb-master/CG/CG/cg.c"
na_gangs = ((75000) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = __macc_region_is_changed;
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
}
{
__macc_calc_loop_region(__macc__i_loop_lb_set_92, __macc__i_loop_ub_set_93, 0, (75000) + (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i_loop_lb_set_92[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i_loop_ub_set_93[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_94, __macc__x_use_ub_set_95);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_96, __macc__x_def_ub_set_97);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_96, __macc__x_def_ub_set_97, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_96, __macc__x_def_ub_set_97, __macc_top_loop_ub);
}
}
}
}
if(__macc_region_is_overlapping(__macc__x_def_lb_set_96, __macc__x_def_ub_set_97)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i_loop_lb_set_92, __macc__i_loop_ub_set_93);
{
__macc_rewrite_data_region_into_single(__macc__x_def_lb_set_96, __macc__x_def_ub_set_97);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc__x_use_lb_set_94, __macc__x_use_ub_set_95, 2, __macc__x_def_lb_set_96, __macc__x_def_ub_set_97);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r )
#pragma acc loop gang vector
# 628 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (__macc__i_loop_lb_set_92[__macc_tnum]); i <= (__macc__i_loop_ub_set_93[__macc_tnum]); i++) {
{
# 629 "./sample/openacc-npb-master/CG/CG/cg.c"
(x[i]) = (1.0);
}
}
}
}
}
# 632 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta = (0.0);
# 634 "./sample/openacc-npb-master/CG/CG/cg.c"
timer_stop(0);
# 636 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Initialization time = %15.3f seconds\n", timer_read(0));
# 638 "./sample/openacc-npb-master/CG/CG/cg.c"
timer_start(1);
# 645 "./sample/openacc-npb-master/CG/CG/cg.c"
for(it = (1); it <= (75); it++) {
{
# 649 "./sample/openacc-npb-master/CG/CG/cg.c"
conj_grad(colidx, rowstr, x, z, a, p, q, r, &(rnorm));
# 657 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp1 = (0.0);
# 658 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp2 = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_189));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_189 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_187, __macc__j_loop_ub_set_188, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_187[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_188[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_190, __macc__x_use_ub_set_191);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_192, __macc__x_def_ub_set_193);
{
__macc_update_access_region(__macc_gpu_num, __macc__x_use_lb_set_190, __macc__x_use_ub_set_191, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_use_lb_set_190, __macc__x_use_ub_set_191, __macc_top_loop_ub);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_194, __macc__z_use_ub_set_195);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_196, __macc__z_def_ub_set_197);
{
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_194, __macc__z_use_ub_set_195, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_194, __macc__z_use_ub_set_195, __macc_top_loop_ub);
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_187, __macc__j_loop_ub_set_188);
{
__macc_rewrite_data_region_into_single(__macc__z_use_lb_set_194, __macc__z_use_ub_set_195);
__macc_rewrite_data_region_into_single(__macc__x_use_lb_set_190, __macc__x_use_ub_set_191);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : norm_temp1 ) reduction ( + : norm_temp2 ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc__z_use_lb_set_194, __macc__z_use_ub_set_195, 1, __macc__z_def_lb_set_196, __macc__z_def_ub_set_197);
__macc_set_data_region(__macc_tnum, x, __macc_multi, 2, __macc__x_use_lb_set_190, __macc__x_use_ub_set_191, 1, __macc__x_def_lb_set_192, __macc__x_def_ub_set_193);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r ) reduction ( + : norm_temp1 , norm_temp2 )
#pragma acc loop gang worker vector
# 661 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_187[__macc_tnum]); j <= (__macc__j_loop_ub_set_188[__macc_tnum]); j++) {
{
# 662 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp1 = (norm_temp1 + ((x[j]) * (z[j])));
# 663 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp2 = (norm_temp2 + ((z[j]) * (z[j])));
}
}
}
}
}
# 666 "./sample/openacc-npb-master/CG/CG/cg.c"
norm_temp2 = ((1.0) / (__builtin_sqrt(norm_temp2)));
# 668 "./sample/openacc-npb-master/CG/CG/cg.c"
zeta = ((60.0) + ((1.0) / norm_temp1));
# 669 "./sample/openacc-npb-master/CG/CG/cg.c"
if(it == (1)) {
# 670 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("\n   iteration           ||r||                 zeta\n");
}
# 671 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    %5d       %20.14E%20.13f\n", it, rnorm, zeta);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_200));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_200 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_198, __macc__j_loop_ub_set_199, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_198[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_199[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_201, __macc__x_use_ub_set_202);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_203, __macc__x_def_ub_set_204);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_203, __macc__x_def_ub_set_204, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_def_lb_set_203, __macc__x_def_ub_set_204, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_205, __macc__z_use_ub_set_206);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_207, __macc__z_def_ub_set_208);
{
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_205, __macc__z_use_ub_set_206, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_205, __macc__z_use_ub_set_206, __macc_top_loop_ub);
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__x_def_lb_set_203, __macc__x_def_ub_set_204)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_198, __macc__j_loop_ub_set_199);
{
__macc_rewrite_data_region_into_single(__macc__z_use_lb_set_205, __macc__z_use_ub_set_206);
__macc_rewrite_data_region_into_single(__macc__x_def_lb_set_203, __macc__x_def_ub_set_204);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc__z_use_lb_set_205, __macc__z_use_ub_set_206, 1, __macc__z_def_lb_set_207, __macc__z_def_ub_set_208);
__macc_set_data_region(__macc_tnum, x, __macc_multi, 1, __macc__x_use_lb_set_201, __macc__x_use_ub_set_202, 2, __macc__x_def_lb_set_203, __macc__x_def_ub_set_204);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , a , rowstr , x , z , p , q , r )
#pragma acc loop gang vector
# 677 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_198[__macc_tnum]); j <= (__macc__j_loop_ub_set_199[__macc_tnum]); j++) {
{
# 678 "./sample/openacc-npb-master/CG/CG/cg.c"
(x[j]) = (norm_temp2 * (z[j]));
}
}
}
}
}
}
}
# 682 "./sample/openacc-npb-master/CG/CG/cg.c"
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
# 688 "./sample/openacc-npb-master/CG/CG/cg.c"
t = (timer_read(1));
# 690 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Benchmark completed\n");
# 692 "./sample/openacc-npb-master/CG/CG/cg.c"
epsilon = (1.0e-10);
# 693 "./sample/openacc-npb-master/CG/CG/cg.c"
if(Class != ((char)85)) {
# 694 "./sample/openacc-npb-master/CG/CG/cg.c"
err = ((__builtin_fabs(zeta - zeta_verify_value)) / zeta_verify_value);
# 695 "./sample/openacc-npb-master/CG/CG/cg.c"
if(err <= epsilon) {
# 696 "./sample/openacc-npb-master/CG/CG/cg.c"
verified = true;
# 697 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" VERIFICATION SUCCESSFUL\n");
# 698 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Zeta is    %20.13E\n", zeta);
# 699 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Error is   %20.13E\n", err);
}
else {
# 701 "./sample/openacc-npb-master/CG/CG/cg.c"
verified = false;
# 702 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" VERIFICATION FAILED\n");
# 703 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Zeta                %20.13E\n", zeta);
# 704 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" The correct zeta is %20.13E\n", zeta_verify_value);
}
}
else {
# 707 "./sample/openacc-npb-master/CG/CG/cg.c"
verified = false;
# 708 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" Problem size unknown\n");
# 709 "./sample/openacc-npb-master/CG/CG/cg.c"
printf(" NO VERIFICATION PERFORMED\n");
}
# 712 "./sample/openacc-npb-master/CG/CG/cg.c"
if(t != (0.0)) {
# 713 "./sample/openacc-npb-master/CG/CG/cg.c"
mflops = (((((double)(((2) * (75)) * (75000))) * ((((3.0) + ((double)((13) * ((13) + (1))))) + ((25.0) * ((5.0) + ((double)((13) * ((13) + (1))))))) + (3.0))) / t) / (1000000.0));
}
else {
# 718 "./sample/openacc-npb-master/CG/CG/cg.c"
mflops = (0.0);
}
# 721 "./sample/openacc-npb-master/CG/CG/cg.c"
print_results("CG", Class, 75000, 0, 0, 75, t, mflops, "          floating point", verified, "3.3.1", "07 Jul 2017", "icc", "icc", "-lm", "-I../common", "-O3 -mcmodel=medium", "-O3 -mcmodel=medium", "randdp");
# 730 "./sample/openacc-npb-master/CG/CG/cg.c"
if(timeron) {
# 731 "./sample/openacc-npb-master/CG/CG/cg.c"
tmax = (timer_read(1));
# 732 "./sample/openacc-npb-master/CG/CG/cg.c"
if(tmax == (0.0)) {
# 732 "./sample/openacc-npb-master/CG/CG/cg.c"
tmax = (1.0);
}
# 733 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("  SECTION   Time (secs)\n");
# 734 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (0); i < (3); i++) {
{
# 735 "./sample/openacc-npb-master/CG/CG/cg.c"
t = (timer_read(i));
# 736 "./sample/openacc-npb-master/CG/CG/cg.c"
if(i == (0)) {
# 737 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("  %8s:%9.3f\n", t_names[i], t);
}
else {
# 739 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("  %8s:%9.3f  (%6.2f%%)\n", t_names[i], t, (t * (100.0)) / tmax);
# 740 "./sample/openacc-npb-master/CG/CG/cg.c"
if(i == (2)) {
# 741 "./sample/openacc-npb-master/CG/CG/cg.c"
t = (tmax - t);
# 742 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("    --> %8s:%9.3f  (%6.2f%%)\n", "rest", t, (t * (100.0)) / tmax);
}
}
}
}
}
# 747 "./sample/openacc-npb-master/CG/CG/cg.c"
acc_shutdown(acc_device_default);
# 748 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("conj calls=%d, loop iter = %d. \n", conj_calls, loop_iter);
# 749 "./sample/openacc-npb-master/CG/CG/cg.c"
return 0;
}
}
}
# 757 "./sample/openacc-npb-master/CG/CG/cg.c"
static void conj_grad(int colidx[], int rowstr[], double x[], double z[], double a[], double p[], double q[], double r[], double * rnorm)
{
# 767 "./sample/openacc-npb-master/CG/CG/cg.c"
int j;
# 767 "./sample/openacc-npb-master/CG/CG/cg.c"
int k;
# 767 "./sample/openacc-npb-master/CG/CG/cg.c"
int tmp1;
# 767 "./sample/openacc-npb-master/CG/CG/cg.c"
int tmp2;
# 767 "./sample/openacc-npb-master/CG/CG/cg.c"
int tmp3;
# 768 "./sample/openacc-npb-master/CG/CG/cg.c"
int end;
# 769 "./sample/openacc-npb-master/CG/CG/cg.c"
int cgit;
# 769 "./sample/openacc-npb-master/CG/CG/cg.c"
int cgitmax = 25;
# 770 "./sample/openacc-npb-master/CG/CG/cg.c"
double d;
# 770 "./sample/openacc-npb-master/CG/CG/cg.c"
double sum;
# 770 "./sample/openacc-npb-master/CG/CG/cg.c"
double rho;
# 770 "./sample/openacc-npb-master/CG/CG/cg.c"
double rho0;
# 770 "./sample/openacc-npb-master/CG/CG/cg.c"
double alpha;
# 770 "./sample/openacc-npb-master/CG/CG/cg.c"
double beta;
# 771 "./sample/openacc-npb-master/CG/CG/cg.c"
double sum_array[75002];
# 772 "./sample/openacc-npb-master/CG/CG/cg.c"
conj_calls++;
# 773 "./sample/openacc-npb-master/CG/CG/cg.c"
rho = (0.0);
{
# 774 "./sample/openacc-npb-master/CG/CG/cg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (naa != __macc__naa_last_3));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__naa_last_3 = naa;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_1, __macc__j_loop_ub_set_2, 0, naa, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_1[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_2[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__p_use_lb_set_4, __macc__p_use_ub_set_5);
__macc_init_access_region(__macc_gpu_num, __macc__p_def_lb_set_6, __macc__p_def_ub_set_7);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__p_def_lb_set_6, __macc__p_def_ub_set_7, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__p_def_lb_set_6, __macc__p_def_ub_set_7, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__q_use_lb_set_8, __macc__q_use_ub_set_9);
__macc_init_access_region(__macc_gpu_num, __macc__q_def_lb_set_10, __macc__q_def_ub_set_11);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__q_def_lb_set_10, __macc__q_def_ub_set_11, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__q_def_lb_set_10, __macc__q_def_ub_set_11, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_12, __macc__r_use_ub_set_13);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_14, __macc__r_def_ub_set_15);
{
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_12, __macc__r_use_ub_set_13, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_12, __macc__r_use_ub_set_13, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_14, __macc__r_def_ub_set_15, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_14, __macc__r_def_ub_set_15, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_16, __macc__z_use_ub_set_17);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_18, __macc__z_def_ub_set_19);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__z_def_lb_set_18, __macc__z_def_ub_set_19, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_def_lb_set_18, __macc__z_def_ub_set_19, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_20, __macc__x_use_ub_set_21);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_22, __macc__x_def_ub_set_23);
{
__macc_update_access_region(__macc_gpu_num, __macc__x_use_lb_set_20, __macc__x_use_ub_set_21, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_use_lb_set_20, __macc__x_use_ub_set_21, __macc_top_loop_ub);
}
{
}
}
}
}
if((__macc_region_is_overlapping(__macc__z_def_lb_set_18, __macc__z_def_ub_set_19)) || ((__macc_region_is_overlapping(__macc__r_def_lb_set_14, __macc__r_def_ub_set_15)) || ((__macc_region_is_overlapping(__macc__q_def_lb_set_10, __macc__q_def_ub_set_11)) || (__macc_region_is_overlapping(__macc__p_def_lb_set_6, __macc__p_def_ub_set_7))))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_1, __macc__j_loop_ub_set_2);
{
__macc_rewrite_data_region_into_single(__macc__x_use_lb_set_20, __macc__x_use_ub_set_21);
__macc_rewrite_data_region_into_single(__macc__z_def_lb_set_18, __macc__z_def_ub_set_19);
__macc_rewrite_data_region_into_single(__macc__r_use_lb_set_12, __macc__r_use_ub_set_13);
__macc_rewrite_data_region_into_single(__macc__r_def_lb_set_14, __macc__r_def_ub_set_15);
__macc_rewrite_data_region_into_single(__macc__q_def_lb_set_10, __macc__q_def_ub_set_11);
__macc_rewrite_data_region_into_single(__macc__p_def_lb_set_6, __macc__p_def_ub_set_7);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 2, __macc__x_use_lb_set_20, __macc__x_use_ub_set_21, 1, __macc__x_def_lb_set_22, __macc__x_def_ub_set_23);
__macc_set_data_region(__macc_tnum, z, __macc_multi, 1, __macc__z_use_lb_set_16, __macc__z_use_ub_set_17, 2, __macc__z_def_lb_set_18, __macc__z_def_ub_set_19);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc__r_use_lb_set_12, __macc__r_use_ub_set_13, 2, __macc__r_def_lb_set_14, __macc__r_def_ub_set_15);
__macc_set_data_region(__macc_tnum, q, __macc_multi, 1, __macc__q_use_lb_set_8, __macc__q_use_ub_set_9, 2, __macc__q_def_lb_set_10, __macc__q_def_ub_set_11);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 1, __macc__p_use_lb_set_4, __macc__p_use_ub_set_5, 2, __macc__p_def_lb_set_6, __macc__p_def_ub_set_7);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang vector independent
# 785 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_1[__macc_tnum]); j <= (__macc__j_loop_ub_set_2[__macc_tnum]); j++) {
{
# 786 "./sample/openacc-npb-master/CG/CG/cg.c"
(q[j]) = (0.0);
# 787 "./sample/openacc-npb-master/CG/CG/cg.c"
(z[j]) = (0.0);
# 788 "./sample/openacc-npb-master/CG/CG/cg.c"
(r[j]) = (x[j]);
# 789 "./sample/openacc-npb-master/CG/CG/cg.c"
(p[j]) = (r[j]);
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
__macc_region_is_changed = (__macc_region_is_changed || ((lastcol != __macc__lastcol_last_26) || (firstcol != __macc__firstcol_last_27)));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__lastcol_last_26 = lastcol;
__macc__firstcol_last_27 = firstcol;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_24, __macc__j_loop_ub_set_25, 0, (lastcol - firstcol) + (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_24[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_25[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_28, __macc__r_use_ub_set_29);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_30, __macc__r_def_ub_set_31);
{
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_28, __macc__r_use_ub_set_29, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_28, __macc__r_use_ub_set_29, __macc_top_loop_ub);
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_24, __macc__j_loop_ub_set_25);
{
__macc_rewrite_data_region_into_single(__macc__r_use_lb_set_28, __macc__r_use_ub_set_29);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : rho ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc__r_use_lb_set_28, __macc__r_use_ub_set_29, 1, __macc__r_def_lb_set_30, __macc__r_def_ub_set_31);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) reduction ( + : rho )
#pragma acc loop gang worker vector
# 799 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_24[__macc_tnum]); j <= (__macc__j_loop_ub_set_25[__macc_tnum]); j++) {
{
# 800 "./sample/openacc-npb-master/CG/CG/cg.c"
rho = (rho + ((r[j]) * (r[j])));
}
}
}
}
}
# 809 "./sample/openacc-npb-master/CG/CG/cg.c"
for(cgit = (1); cgit <= cgitmax; cgit++) {
{
# 836 "./sample/openacc-npb-master/CG/CG/cg.c"
loop_iter++;
# 838 "./sample/openacc-npb-master/CG/CG/cg.c"
end = ((lastrow - firstrow) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_100));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_100 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_98, __macc__j_loop_ub_set_99, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_98[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_99[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__q_use_lb_set_101, __macc__q_use_ub_set_102);
__macc_init_access_region(__macc_gpu_num, __macc__q_def_lb_set_103, __macc__q_def_ub_set_104);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__q_def_lb_set_103, __macc__q_def_ub_set_104, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__q_def_lb_set_103, __macc__q_def_ub_set_104, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__a_use_lb_set_105, __macc__a_use_ub_set_106);
__macc_init_access_region(__macc_gpu_num, __macc__a_def_lb_set_107, __macc__a_def_ub_set_108);
{
__macc_update_access_region(__macc_gpu_num, __macc__a_use_lb_set_105, __macc__a_use_ub_set_106, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc__a_use_lb_set_105, __macc__a_use_ub_set_106, tmp2);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__colidx_use_lb_set_109, __macc__colidx_use_ub_set_110);
__macc_init_access_region(__macc_gpu_num, __macc__colidx_def_lb_set_111, __macc__colidx_def_ub_set_112);
{
__macc_update_access_region(__macc_gpu_num, __macc__colidx_use_lb_set_109, __macc__colidx_use_ub_set_110, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc__colidx_use_lb_set_109, __macc__colidx_use_ub_set_110, tmp2);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__p_use_lb_set_113, __macc__p_use_ub_set_114);
__macc_init_access_region(__macc_gpu_num, __macc__p_def_lb_set_115, __macc__p_def_ub_set_116);
{
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118);
__macc_init_access_region(__macc_gpu_num, __macc__rowstr_def_lb_set_119, __macc__rowstr_def_ub_set_120);
{
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118, __macc_top_loop_lb + (1));
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118, __macc_top_loop_ub + (1));
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118, __macc_top_loop_ub);
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__q_def_lb_set_103, __macc__q_def_ub_set_104)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_98, __macc__j_loop_ub_set_99);
{
__macc_rewrite_data_region_into_single(__macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118);
__macc_rewrite_data_region_into_single(__macc__colidx_use_lb_set_109, __macc__colidx_use_ub_set_110);
__macc_rewrite_data_region_into_single(__macc__a_use_lb_set_105, __macc__a_use_ub_set_106);
__macc_rewrite_data_region_into_single(__macc__q_def_lb_set_103, __macc__q_def_ub_set_104);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : sum ) private ( j , k , tmp1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, rowstr, __macc_multi, 2, __macc__rowstr_use_lb_set_117, __macc__rowstr_use_ub_set_118, 1, __macc__rowstr_def_lb_set_119, __macc__rowstr_def_ub_set_120);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 0, __macc__p_use_lb_set_113, __macc__p_use_ub_set_114, 1, __macc__p_def_lb_set_115, __macc__p_def_ub_set_116);
__macc_set_data_region(__macc_tnum, colidx, __macc_multi, 2, __macc__colidx_use_lb_set_109, __macc__colidx_use_ub_set_110, 1, __macc__colidx_def_lb_set_111, __macc__colidx_def_ub_set_112);
__macc_set_data_region(__macc_tnum, a, __macc_multi, 2, __macc__a_use_lb_set_105, __macc__a_use_ub_set_106, 1, __macc__a_def_lb_set_107, __macc__a_def_ub_set_108);
__macc_set_data_region(__macc_tnum, q, __macc_multi, 1, __macc__q_use_lb_set_101, __macc__q_use_ub_set_102, 2, __macc__q_def_lb_set_103, __macc__q_def_ub_set_104);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang
# 843 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_98[__macc_tnum]); j <= (__macc__j_loop_ub_set_99[__macc_tnum]); j++) {
{
# 844 "./sample/openacc-npb-master/CG/CG/cg.c"
tmp1 = (rowstr[j]);
# 845 "./sample/openacc-npb-master/CG/CG/cg.c"
tmp2 = (rowstr[j + (1)]);
# 846 "./sample/openacc-npb-master/CG/CG/cg.c"
sum = (0.0);
#pragma acc loop worker vector reduction ( + : sum )
# 848 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = tmp1; k < tmp2; k++) {
{
# 849 "./sample/openacc-npb-master/CG/CG/cg.c"
tmp3 = (colidx[k]);
# 850 "./sample/openacc-npb-master/CG/CG/cg.c"
sum = (sum + ((a[k]) * (p[tmp3])));
}
}
# 852 "./sample/openacc-npb-master/CG/CG/cg.c"
(q[j]) = sum;
}
}
}
}
}
# 858 "./sample/openacc-npb-master/CG/CG/cg.c"
d = (0.0);
# 859 "./sample/openacc-npb-master/CG/CG/cg.c"
end = ((lastcol - firstcol) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_123));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_123 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_121, __macc__j_loop_ub_set_122, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_121[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_122[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__p_use_lb_set_124, __macc__p_use_ub_set_125);
__macc_init_access_region(__macc_gpu_num, __macc__p_def_lb_set_126, __macc__p_def_ub_set_127);
{
__macc_update_access_region(__macc_gpu_num, __macc__p_use_lb_set_124, __macc__p_use_ub_set_125, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__p_use_lb_set_124, __macc__p_use_ub_set_125, __macc_top_loop_ub);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__q_use_lb_set_128, __macc__q_use_ub_set_129);
__macc_init_access_region(__macc_gpu_num, __macc__q_def_lb_set_130, __macc__q_def_ub_set_131);
{
__macc_update_access_region(__macc_gpu_num, __macc__q_use_lb_set_128, __macc__q_use_ub_set_129, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__q_use_lb_set_128, __macc__q_use_ub_set_129, __macc_top_loop_ub);
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_121, __macc__j_loop_ub_set_122);
{
__macc_rewrite_data_region_into_single(__macc__q_use_lb_set_128, __macc__q_use_ub_set_129);
__macc_rewrite_data_region_into_single(__macc__p_use_lb_set_124, __macc__p_use_ub_set_125);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : d ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, q, __macc_multi, 2, __macc__q_use_lb_set_128, __macc__q_use_ub_set_129, 1, __macc__q_def_lb_set_130, __macc__q_def_ub_set_131);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 2, __macc__p_use_lb_set_124, __macc__p_use_ub_set_125, 1, __macc__p_def_lb_set_126, __macc__p_def_ub_set_127);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang worker vector reduction ( + : d )
# 863 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_121[__macc_tnum]); j <= (__macc__j_loop_ub_set_122[__macc_tnum]); j++) {
{
# 864 "./sample/openacc-npb-master/CG/CG/cg.c"
d = (d + ((p[j]) * (q[j])));
}
}
}
}
}
# 871 "./sample/openacc-npb-master/CG/CG/cg.c"
alpha = (rho / d);
# 876 "./sample/openacc-npb-master/CG/CG/cg.c"
rho0 = rho;
# 882 "./sample/openacc-npb-master/CG/CG/cg.c"
rho = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_134));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_134 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_132, __macc__j_loop_ub_set_133, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_132[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_133[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_135, __macc__r_use_ub_set_136);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_137, __macc__r_def_ub_set_138);
{
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_135, __macc__r_use_ub_set_136, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_135, __macc__r_use_ub_set_136, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_137, __macc__r_def_ub_set_138, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_137, __macc__r_def_ub_set_138, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_139, __macc__z_use_ub_set_140);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_141, __macc__z_def_ub_set_142);
{
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_139, __macc__z_use_ub_set_140, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_use_lb_set_139, __macc__z_use_ub_set_140, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__z_def_lb_set_141, __macc__z_def_ub_set_142, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__z_def_lb_set_141, __macc__z_def_ub_set_142, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__p_use_lb_set_143, __macc__p_use_ub_set_144);
__macc_init_access_region(__macc_gpu_num, __macc__p_def_lb_set_145, __macc__p_def_ub_set_146);
{
__macc_update_access_region(__macc_gpu_num, __macc__p_use_lb_set_143, __macc__p_use_ub_set_144, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__p_use_lb_set_143, __macc__p_use_ub_set_144, __macc_top_loop_ub);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__q_use_lb_set_147, __macc__q_use_ub_set_148);
__macc_init_access_region(__macc_gpu_num, __macc__q_def_lb_set_149, __macc__q_def_ub_set_150);
{
__macc_update_access_region(__macc_gpu_num, __macc__q_use_lb_set_147, __macc__q_use_ub_set_148, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__q_use_lb_set_147, __macc__q_use_ub_set_148, __macc_top_loop_ub);
}
{
}
}
}
}
if((__macc_region_is_overlapping(__macc__z_def_lb_set_141, __macc__z_def_ub_set_142)) || (__macc_region_is_overlapping(__macc__r_def_lb_set_137, __macc__r_def_ub_set_138))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_132, __macc__j_loop_ub_set_133);
{
__macc_rewrite_data_region_into_single(__macc__q_use_lb_set_147, __macc__q_use_ub_set_148);
__macc_rewrite_data_region_into_single(__macc__p_use_lb_set_143, __macc__p_use_ub_set_144);
__macc_rewrite_data_region_into_single(__macc__z_use_lb_set_139, __macc__z_use_ub_set_140);
__macc_rewrite_data_region_into_single(__macc__z_def_lb_set_141, __macc__z_def_ub_set_142);
__macc_rewrite_data_region_into_single(__macc__r_use_lb_set_135, __macc__r_use_ub_set_136);
__macc_rewrite_data_region_into_single(__macc__r_def_lb_set_137, __macc__r_def_ub_set_138);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, q, __macc_multi, 2, __macc__q_use_lb_set_147, __macc__q_use_ub_set_148, 1, __macc__q_def_lb_set_149, __macc__q_def_ub_set_150);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 2, __macc__p_use_lb_set_143, __macc__p_use_ub_set_144, 1, __macc__p_def_lb_set_145, __macc__p_def_ub_set_146);
__macc_set_data_region(__macc_tnum, z, __macc_multi, 2, __macc__z_use_lb_set_139, __macc__z_use_ub_set_140, 2, __macc__z_def_lb_set_141, __macc__z_def_ub_set_142);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc__r_use_lb_set_135, __macc__r_use_ub_set_136, 2, __macc__r_def_lb_set_137, __macc__r_def_ub_set_138);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang vector independent
# 884 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_132[__macc_tnum]); j <= (__macc__j_loop_ub_set_133[__macc_tnum]); j++) {
{
# 885 "./sample/openacc-npb-master/CG/CG/cg.c"
(z[j]) = ((z[j]) + (alpha * (p[j])));
# 886 "./sample/openacc-npb-master/CG/CG/cg.c"
(r[j]) = ((r[j]) - (alpha * (q[j])));
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
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_153));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_153 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_151, __macc__j_loop_ub_set_152, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_151[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_152[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_154, __macc__r_use_ub_set_155);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_156, __macc__r_def_ub_set_157);
{
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_154, __macc__r_use_ub_set_155, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_154, __macc__r_use_ub_set_155, __macc_top_loop_ub);
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_151, __macc__j_loop_ub_set_152);
{
__macc_rewrite_data_region_into_single(__macc__r_use_lb_set_154, __macc__r_use_ub_set_155);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : rho ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc__r_use_lb_set_154, __macc__r_use_ub_set_155, 1, __macc__r_def_lb_set_156, __macc__r_def_ub_set_157);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang worker vector reduction ( + : rho )
# 896 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_151[__macc_tnum]); j <= (__macc__j_loop_ub_set_152[__macc_tnum]); j++) {
{
# 898 "./sample/openacc-npb-master/CG/CG/cg.c"
rho = (rho + ((r[j]) * (r[j])));
}
}
}
}
}
# 905 "./sample/openacc-npb-master/CG/CG/cg.c"
beta = (rho / rho0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_160));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_160 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_158, __macc__j_loop_ub_set_159, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_158[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_159[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__p_use_lb_set_161, __macc__p_use_ub_set_162);
__macc_init_access_region(__macc_gpu_num, __macc__p_def_lb_set_163, __macc__p_def_ub_set_164);
{
__macc_update_access_region(__macc_gpu_num, __macc__p_use_lb_set_161, __macc__p_use_ub_set_162, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__p_use_lb_set_161, __macc__p_use_ub_set_162, __macc_top_loop_ub);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__p_def_lb_set_163, __macc__p_def_ub_set_164, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__p_def_lb_set_163, __macc__p_def_ub_set_164, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_165, __macc__r_use_ub_set_166);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_167, __macc__r_def_ub_set_168);
{
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_165, __macc__r_use_ub_set_166, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_165, __macc__r_use_ub_set_166, __macc_top_loop_ub);
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__p_def_lb_set_163, __macc__p_def_ub_set_164)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_158, __macc__j_loop_ub_set_159);
{
__macc_rewrite_data_region_into_single(__macc__r_use_lb_set_165, __macc__r_use_ub_set_166);
__macc_rewrite_data_region_into_single(__macc__p_use_lb_set_161, __macc__p_use_ub_set_162);
__macc_rewrite_data_region_into_single(__macc__p_def_lb_set_163, __macc__p_def_ub_set_164);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc__r_use_lb_set_165, __macc__r_use_ub_set_166, 1, __macc__r_def_lb_set_167, __macc__r_def_ub_set_168);
__macc_set_data_region(__macc_tnum, p, __macc_multi, 2, __macc__p_use_lb_set_161, __macc__p_use_ub_set_162, 2, __macc__p_def_lb_set_163, __macc__p_def_ub_set_164);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang vector independent
# 911 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_158[__macc_tnum]); j <= (__macc__j_loop_ub_set_159[__macc_tnum]); j++) {
{
# 912 "./sample/openacc-npb-master/CG/CG/cg.c"
(p[j]) = ((r[j]) + (beta * (p[j])));
}
}
}
}
}
}
}
# 922 "./sample/openacc-npb-master/CG/CG/cg.c"
end = ((lastrow - firstrow) + (1));
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || (end != __macc__end_last_34));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__end_last_34 = end;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_32, __macc__j_loop_ub_set_33, 0, end, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_32[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_33[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_35, __macc__r_use_ub_set_36);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_37, __macc__r_def_ub_set_38);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_37, __macc__r_def_ub_set_38, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_def_lb_set_37, __macc__r_def_ub_set_38, __macc_top_loop_ub);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__a_use_lb_set_39, __macc__a_use_ub_set_40);
__macc_init_access_region(__macc_gpu_num, __macc__a_def_lb_set_41, __macc__a_def_ub_set_42);
{
__macc_update_access_region(__macc_gpu_num, __macc__a_use_lb_set_39, __macc__a_use_ub_set_40, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc__a_use_lb_set_39, __macc__a_use_ub_set_40, tmp2);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__colidx_use_lb_set_43, __macc__colidx_use_ub_set_44);
__macc_init_access_region(__macc_gpu_num, __macc__colidx_def_lb_set_45, __macc__colidx_def_ub_set_46);
{
__macc_update_access_region(__macc_gpu_num, __macc__colidx_use_lb_set_43, __macc__colidx_use_ub_set_44, tmp1);
__macc_update_access_region(__macc_gpu_num, __macc__colidx_use_lb_set_43, __macc__colidx_use_ub_set_44, tmp2);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48);
__macc_init_access_region(__macc_gpu_num, __macc__rowstr_def_lb_set_49, __macc__rowstr_def_ub_set_50);
{
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48, __macc_top_loop_lb + (1));
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48, __macc_top_loop_ub + (1));
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48, __macc_top_loop_ub);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z_use_lb_set_51, __macc__z_use_ub_set_52);
__macc_init_access_region(__macc_gpu_num, __macc__z_def_lb_set_53, __macc__z_def_ub_set_54);
{
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__r_def_lb_set_37, __macc__r_def_ub_set_38)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_32, __macc__j_loop_ub_set_33);
{
__macc_rewrite_data_region_into_single(__macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48);
__macc_rewrite_data_region_into_single(__macc__colidx_use_lb_set_43, __macc__colidx_use_ub_set_44);
__macc_rewrite_data_region_into_single(__macc__a_use_lb_set_39, __macc__a_use_ub_set_40);
__macc_rewrite_data_region_into_single(__macc__r_def_lb_set_37, __macc__r_def_ub_set_38);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : d ) private ( j , k , tmp1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z, __macc_multi, 0, __macc__z_use_lb_set_51, __macc__z_use_ub_set_52, 1, __macc__z_def_lb_set_53, __macc__z_def_ub_set_54);
__macc_set_data_region(__macc_tnum, rowstr, __macc_multi, 2, __macc__rowstr_use_lb_set_47, __macc__rowstr_use_ub_set_48, 1, __macc__rowstr_def_lb_set_49, __macc__rowstr_def_ub_set_50);
__macc_set_data_region(__macc_tnum, colidx, __macc_multi, 2, __macc__colidx_use_lb_set_43, __macc__colidx_use_ub_set_44, 1, __macc__colidx_def_lb_set_45, __macc__colidx_def_ub_set_46);
__macc_set_data_region(__macc_tnum, a, __macc_multi, 2, __macc__a_use_lb_set_39, __macc__a_use_ub_set_40, 1, __macc__a_def_lb_set_41, __macc__a_def_ub_set_42);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 1, __macc__r_use_lb_set_35, __macc__r_use_ub_set_36, 2, __macc__r_def_lb_set_37, __macc__r_def_ub_set_38);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r )
#pragma acc loop gang
# 926 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_32[__macc_tnum]); j <= (__macc__j_loop_ub_set_33[__macc_tnum]); j++) {
{
# 927 "./sample/openacc-npb-master/CG/CG/cg.c"
tmp1 = (rowstr[j]);
# 928 "./sample/openacc-npb-master/CG/CG/cg.c"
tmp2 = (rowstr[j + (1)]);
# 929 "./sample/openacc-npb-master/CG/CG/cg.c"
d = (0.0);
#pragma acc loop worker vector reduction ( + : d )
# 931 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = tmp1; k < tmp2; k++) {
{
# 932 "./sample/openacc-npb-master/CG/CG/cg.c"
tmp3 = (colidx[k]);
# 933 "./sample/openacc-npb-master/CG/CG/cg.c"
d = (d + ((a[k]) * (z[tmp3])));
}
}
# 935 "./sample/openacc-npb-master/CG/CG/cg.c"
(r[j]) = d;
}
}
}
}
}
# 941 "./sample/openacc-npb-master/CG/CG/cg.c"
sum = (0.0);
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((lastcol != __macc__lastcol_last_57) || (firstcol != __macc__firstcol_last_58)));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__lastcol_last_57 = lastcol;
__macc__firstcol_last_58 = firstcol;
}
{
__macc_calc_loop_region(__macc__j_loop_lb_set_55, __macc__j_loop_ub_set_56, 0, (lastcol - firstcol) + (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j_loop_lb_set_55[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j_loop_ub_set_56[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__r_use_lb_set_59, __macc__r_use_ub_set_60);
__macc_init_access_region(__macc_gpu_num, __macc__r_def_lb_set_61, __macc__r_def_ub_set_62);
{
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_59, __macc__r_use_ub_set_60, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__r_use_lb_set_59, __macc__r_use_ub_set_60, __macc_top_loop_ub);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__x_use_lb_set_63, __macc__x_use_ub_set_64);
__macc_init_access_region(__macc_gpu_num, __macc__x_def_lb_set_65, __macc__x_def_ub_set_66);
{
__macc_update_access_region(__macc_gpu_num, __macc__x_use_lb_set_63, __macc__x_use_ub_set_64, __macc_top_loop_lb);
__macc_update_access_region(__macc_gpu_num, __macc__x_use_lb_set_63, __macc__x_use_ub_set_64, __macc_top_loop_ub);
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j_loop_lb_set_55, __macc__j_loop_ub_set_56);
{
__macc_rewrite_data_region_into_single(__macc__x_use_lb_set_63, __macc__x_use_ub_set_64);
__macc_rewrite_data_region_into_single(__macc__r_use_lb_set_59, __macc__r_use_ub_set_60);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : sum ) private ( j )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, x, __macc_multi, 2, __macc__x_use_lb_set_63, __macc__x_use_ub_set_64, 1, __macc__x_def_lb_set_65, __macc__x_def_ub_set_66);
__macc_set_data_region(__macc_tnum, r, __macc_multi, 2, __macc__r_use_lb_set_59, __macc__r_use_ub_set_60, 1, __macc__r_def_lb_set_61, __macc__r_def_ub_set_62);
}
#pragma omp barrier
#pragma acc parallel present ( colidx , rowstr , x , z , a , p , q , r ) reduction ( + : sum )
#pragma acc loop gang worker vector
# 947 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (__macc__j_loop_lb_set_55[__macc_tnum]); j <= (__macc__j_loop_ub_set_56[__macc_tnum]); j++) {
{
# 948 "./sample/openacc-npb-master/CG/CG/cg.c"
d = ((x[j]) - (r[j]));
# 949 "./sample/openacc-npb-master/CG/CG/cg.c"
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
# 953 "./sample/openacc-npb-master/CG/CG/cg.c"
(*(rnorm)) = (__builtin_sqrt(sum));
}
}
# 982 "./sample/openacc-npb-master/CG/CG/cg.c"
static void makea(int n, int nz, double a[], int colidx[], int rowstr[], int firstrow, int lastrow, int firstcol, int lastcol, int arow[], int acol[][14], double aelt[][14], int iv[])
{
# 996 "./sample/openacc-npb-master/CG/CG/cg.c"
int iouter;
# 996 "./sample/openacc-npb-master/CG/CG/cg.c"
int ivelt;
# 996 "./sample/openacc-npb-master/CG/CG/cg.c"
int nzv;
# 996 "./sample/openacc-npb-master/CG/CG/cg.c"
int nn1;
# 997 "./sample/openacc-npb-master/CG/CG/cg.c"
int ivc[14];
# 998 "./sample/openacc-npb-master/CG/CG/cg.c"
double vc[14];
# 1007 "./sample/openacc-npb-master/CG/CG/cg.c"
nn1 = (1);
# 1008 "./sample/openacc-npb-master/CG/CG/cg.c"
do {
{
# 1009 "./sample/openacc-npb-master/CG/CG/cg.c"
nn1 = ((2) * nn1);
}
}
while(nn1 < n);
# 1015 "./sample/openacc-npb-master/CG/CG/cg.c"
for(iouter = (0); iouter < n; iouter++) {
{
# 1016 "./sample/openacc-npb-master/CG/CG/cg.c"
nzv = (13);
# 1017 "./sample/openacc-npb-master/CG/CG/cg.c"
sprnvc(n, nzv, nn1, vc, ivc);
# 1018 "./sample/openacc-npb-master/CG/CG/cg.c"
vecset(n, vc, ivc, &(nzv), iouter + (1), 0.5);
# 1019 "./sample/openacc-npb-master/CG/CG/cg.c"
(arow[iouter]) = nzv;
# 1021 "./sample/openacc-npb-master/CG/CG/cg.c"
for(ivelt = (0); ivelt < nzv; ivelt++) {
{
# 1022 "./sample/openacc-npb-master/CG/CG/cg.c"
(acol[iouter][ivelt]) = ((ivc[ivelt]) - (1));
# 1023 "./sample/openacc-npb-master/CG/CG/cg.c"
(aelt[iouter][ivelt]) = (vc[ivelt]);
}
}
}
}
# 1031 "./sample/openacc-npb-master/CG/CG/cg.c"
sparse(a, colidx, rowstr, n, nz, 13, arow, acol, aelt, firstrow, lastrow, iv, 1.0e-1, 60.0);
}
# 1041 "./sample/openacc-npb-master/CG/CG/cg.c"
static void sparse(double a[], int colidx[], int rowstr[], int n, int nz, int nozer, int arow[], int acol[][14], double aelt[][14], int firstrow, int lastrow, int nzloc[], double rcond, double shift)
{
# 1056 "./sample/openacc-npb-master/CG/CG/cg.c"
int nrows;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int i;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int j;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int j1;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int j2;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int nza;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int k;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int kk;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int nzrow;
# 1062 "./sample/openacc-npb-master/CG/CG/cg.c"
int jcol;
# 1063 "./sample/openacc-npb-master/CG/CG/cg.c"
double size;
# 1063 "./sample/openacc-npb-master/CG/CG/cg.c"
double scale;
# 1063 "./sample/openacc-npb-master/CG/CG/cg.c"
double ratio;
# 1063 "./sample/openacc-npb-master/CG/CG/cg.c"
double va;
# 1064 "./sample/openacc-npb-master/CG/CG/cg.c"
enum anon_type_31_logical cont40;
# 1069 "./sample/openacc-npb-master/CG/CG/cg.c"
nrows = ((lastrow - firstrow) + (1));
# 1074 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (0); j < (nrows + (1)); j++) {
{
# 1075 "./sample/openacc-npb-master/CG/CG/cg.c"
(rowstr[j]) = (0);
}
}
# 1078 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (0); i < n; i++) {
{
# 1079 "./sample/openacc-npb-master/CG/CG/cg.c"
for(nza = (0); nza < (arow[i]); nza++) {
{
# 1080 "./sample/openacc-npb-master/CG/CG/cg.c"
j = ((acol[i][nza]) + (1));
# 1081 "./sample/openacc-npb-master/CG/CG/cg.c"
(rowstr[j]) = ((rowstr[j]) + (arow[i]));
}
}
}
}
# 1085 "./sample/openacc-npb-master/CG/CG/cg.c"
(rowstr[0]) = (0);
# 1086 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (1); j < (nrows + (1)); j++) {
{
# 1087 "./sample/openacc-npb-master/CG/CG/cg.c"
(rowstr[j]) = ((rowstr[j]) + (rowstr[j - (1)]));
}
}
# 1089 "./sample/openacc-npb-master/CG/CG/cg.c"
nza = ((rowstr[nrows]) - (1));
# 1095 "./sample/openacc-npb-master/CG/CG/cg.c"
if(nza > nz) {
# 1096 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("Space for matrix elements exceeded in sparse\n");
# 1097 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("nza, nzmax = %d, %d\n", nza, nz);
# 1098 "./sample/openacc-npb-master/CG/CG/cg.c"
exit(1);
}
# 1104 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (0); j < nrows; j++) {
{
# 1105 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = (rowstr[j]); k < (rowstr[j + (1)]); k++) {
{
# 1106 "./sample/openacc-npb-master/CG/CG/cg.c"
(a[k]) = (0.0);
# 1107 "./sample/openacc-npb-master/CG/CG/cg.c"
(colidx[k]) = (-(1));
}
}
# 1109 "./sample/openacc-npb-master/CG/CG/cg.c"
(nzloc[j]) = (0);
}
}
# 1115 "./sample/openacc-npb-master/CG/CG/cg.c"
size = (1.0);
# 1116 "./sample/openacc-npb-master/CG/CG/cg.c"
ratio = (__builtin_pow(rcond, (1.0) / ((double)(n))));
# 1118 "./sample/openacc-npb-master/CG/CG/cg.c"
for(i = (0); i < n; i++) {
{
# 1119 "./sample/openacc-npb-master/CG/CG/cg.c"
for(nza = (0); nza < (arow[i]); nza++) {
{
# 1120 "./sample/openacc-npb-master/CG/CG/cg.c"
j = (acol[i][nza]);
# 1122 "./sample/openacc-npb-master/CG/CG/cg.c"
scale = (size * (aelt[i][nza]));
# 1123 "./sample/openacc-npb-master/CG/CG/cg.c"
for(nzrow = (0); nzrow < (arow[i]); nzrow++) {
{
# 1124 "./sample/openacc-npb-master/CG/CG/cg.c"
jcol = (acol[i][nzrow]);
# 1125 "./sample/openacc-npb-master/CG/CG/cg.c"
va = ((aelt[i][nzrow]) * scale);
# 1131 "./sample/openacc-npb-master/CG/CG/cg.c"
if((jcol == j) && (j == i)) {
# 1132 "./sample/openacc-npb-master/CG/CG/cg.c"
va = ((va + rcond) - shift);
}
# 1135 "./sample/openacc-npb-master/CG/CG/cg.c"
cont40 = false;
# 1136 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = (rowstr[j]); k < (rowstr[j + (1)]); k++) {
{
# 1137 "./sample/openacc-npb-master/CG/CG/cg.c"
if((colidx[k]) > jcol) {
# 1141 "./sample/openacc-npb-master/CG/CG/cg.c"
for(kk = ((rowstr[j + (1)]) - (2)); kk >= k; kk--) {
{
# 1142 "./sample/openacc-npb-master/CG/CG/cg.c"
if((colidx[kk]) > (-(1))) {
# 1143 "./sample/openacc-npb-master/CG/CG/cg.c"
(a[kk + (1)]) = (a[kk]);
# 1144 "./sample/openacc-npb-master/CG/CG/cg.c"
(colidx[kk + (1)]) = (colidx[kk]);
}
}
}
# 1147 "./sample/openacc-npb-master/CG/CG/cg.c"
(colidx[k]) = jcol;
# 1148 "./sample/openacc-npb-master/CG/CG/cg.c"
(a[k]) = (0.0);
# 1149 "./sample/openacc-npb-master/CG/CG/cg.c"
cont40 = true;
# 1150 "./sample/openacc-npb-master/CG/CG/cg.c"
break;
}
else {
# 1151 "./sample/openacc-npb-master/CG/CG/cg.c"
if((colidx[k]) == (-(1))) {
# 1152 "./sample/openacc-npb-master/CG/CG/cg.c"
(colidx[k]) = jcol;
# 1153 "./sample/openacc-npb-master/CG/CG/cg.c"
cont40 = true;
# 1154 "./sample/openacc-npb-master/CG/CG/cg.c"
break;
}
else {
# 1155 "./sample/openacc-npb-master/CG/CG/cg.c"
if((colidx[k]) == jcol) {
# 1159 "./sample/openacc-npb-master/CG/CG/cg.c"
(nzloc[j]) = ((nzloc[j]) + (1));
# 1160 "./sample/openacc-npb-master/CG/CG/cg.c"
cont40 = true;
# 1161 "./sample/openacc-npb-master/CG/CG/cg.c"
break;
}
}
}
}
}
# 1164 "./sample/openacc-npb-master/CG/CG/cg.c"
if(cont40 == false) {
# 1165 "./sample/openacc-npb-master/CG/CG/cg.c"
printf("internal error in sparse: i=%d\n", i);
# 1166 "./sample/openacc-npb-master/CG/CG/cg.c"
exit(1);
}
# 1168 "./sample/openacc-npb-master/CG/CG/cg.c"
(a[k]) = ((a[k]) + va);
}
}
}
}
# 1171 "./sample/openacc-npb-master/CG/CG/cg.c"
size = (size * ratio);
}
}
# 1177 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (1); j < nrows; j++) {
{
# 1178 "./sample/openacc-npb-master/CG/CG/cg.c"
(nzloc[j]) = ((nzloc[j]) + (nzloc[j - (1)]));
}
}
# 1181 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (0); j < nrows; j++) {
{
# 1182 "./sample/openacc-npb-master/CG/CG/cg.c"
if(j > (0)) {
# 1183 "./sample/openacc-npb-master/CG/CG/cg.c"
j1 = ((rowstr[j]) - (nzloc[j - (1)]));
}
else {
# 1185 "./sample/openacc-npb-master/CG/CG/cg.c"
j1 = (0);
}
# 1187 "./sample/openacc-npb-master/CG/CG/cg.c"
j2 = ((rowstr[j + (1)]) - (nzloc[j]));
# 1188 "./sample/openacc-npb-master/CG/CG/cg.c"
nza = (rowstr[j]);
# 1189 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = j1; k < j2; k++) {
{
# 1190 "./sample/openacc-npb-master/CG/CG/cg.c"
(a[k]) = (a[nza]);
# 1191 "./sample/openacc-npb-master/CG/CG/cg.c"
(colidx[k]) = (colidx[nza]);
# 1192 "./sample/openacc-npb-master/CG/CG/cg.c"
nza = (nza + (1));
}
}
}
}
# 1195 "./sample/openacc-npb-master/CG/CG/cg.c"
for(j = (1); j < (nrows + (1)); j++) {
{
# 1196 "./sample/openacc-npb-master/CG/CG/cg.c"
(rowstr[j]) = ((rowstr[j]) - (nzloc[j - (1)]));
}
}
# 1198 "./sample/openacc-npb-master/CG/CG/cg.c"
nza = ((rowstr[nrows]) - (1));
}
# 1211 "./sample/openacc-npb-master/CG/CG/cg.c"
static void sprnvc(int n, int nz, int nn1, double v[], int iv[])
{
# 1213 "./sample/openacc-npb-master/CG/CG/cg.c"
int nzv;
# 1213 "./sample/openacc-npb-master/CG/CG/cg.c"
int ii;
# 1213 "./sample/openacc-npb-master/CG/CG/cg.c"
int i;
# 1214 "./sample/openacc-npb-master/CG/CG/cg.c"
double vecelt;
# 1214 "./sample/openacc-npb-master/CG/CG/cg.c"
double vecloc;
# 1216 "./sample/openacc-npb-master/CG/CG/cg.c"
nzv = (0);
# 1218 "./sample/openacc-npb-master/CG/CG/cg.c"
while(nzv < nz) {
{
# 1219 "./sample/openacc-npb-master/CG/CG/cg.c"
vecelt = (randlc(&(tran), amult));
# 1224 "./sample/openacc-npb-master/CG/CG/cg.c"
vecloc = (randlc(&(tran), amult));
# 1225 "./sample/openacc-npb-master/CG/CG/cg.c"
i = ((icnvrt(vecloc, nn1)) + (1));
# 1226 "./sample/openacc-npb-master/CG/CG/cg.c"
if(i > n) {
# 1226 "./sample/openacc-npb-master/CG/CG/cg.c"
continue;
}
{
# 1231 "./sample/openacc-npb-master/CG/CG/cg.c"
enum anon_type_31_logical was_gen = false;
# 1232 "./sample/openacc-npb-master/CG/CG/cg.c"
for(ii = (0); ii < nzv; ii++) {
{
# 1233 "./sample/openacc-npb-master/CG/CG/cg.c"
if((iv[ii]) == i) {
# 1234 "./sample/openacc-npb-master/CG/CG/cg.c"
was_gen = true;
# 1235 "./sample/openacc-npb-master/CG/CG/cg.c"
break;
}
}
}
# 1238 "./sample/openacc-npb-master/CG/CG/cg.c"
if(was_gen) {
# 1238 "./sample/openacc-npb-master/CG/CG/cg.c"
continue;
}
# 1239 "./sample/openacc-npb-master/CG/CG/cg.c"
(v[nzv]) = vecelt;
# 1240 "./sample/openacc-npb-master/CG/CG/cg.c"
(iv[nzv]) = i;
# 1241 "./sample/openacc-npb-master/CG/CG/cg.c"
nzv = (nzv + (1));
}
}
}
}
# 1249 "./sample/openacc-npb-master/CG/CG/cg.c"
static int icnvrt(double x, int ipwr2)
{
# 1251 "./sample/openacc-npb-master/CG/CG/cg.c"
return (int)(ipwr2 * x);
}
# 1259 "./sample/openacc-npb-master/CG/CG/cg.c"
static void vecset(int n, double v[], int iv[], int * nzv, int i, double val)
{
# 1261 "./sample/openacc-npb-master/CG/CG/cg.c"
int k;
# 1262 "./sample/openacc-npb-master/CG/CG/cg.c"
enum anon_type_31_logical set;
# 1264 "./sample/openacc-npb-master/CG/CG/cg.c"
set = false;
# 1265 "./sample/openacc-npb-master/CG/CG/cg.c"
for(k = (0); k < (*(nzv)); k++) {
{
# 1266 "./sample/openacc-npb-master/CG/CG/cg.c"
if((iv[k]) == i) {
# 1267 "./sample/openacc-npb-master/CG/CG/cg.c"
(v[k]) = val;
# 1268 "./sample/openacc-npb-master/CG/CG/cg.c"
set = true;
}
}
}
# 1271 "./sample/openacc-npb-master/CG/CG/cg.c"
if(set == false) {
# 1272 "./sample/openacc-npb-master/CG/CG/cg.c"
(v[*(nzv)]) = val;
# 1273 "./sample/openacc-npb-master/CG/CG/cg.c"
(iv[*(nzv)]) = i;
# 1274 "./sample/openacc-npb-master/CG/CG/cg.c"
(*(nzv)) = ((*(nzv)) + (1));
}
}
