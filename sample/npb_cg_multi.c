/*
  Generated from
  https://github.com/uhhpctools/openacc-npb/blob/master/CG/CG/cg.c
*/ 
/*
 * Original Source  : /tmp/tmp.fPViXZ07z4/mg_1.c
 * Language         : C
 * Compiled Time    : 2017-02-25 02:01:43
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.1.0
 */
# 1 "/tmp/tmp.fPViXZ07z4/mg_1.c"
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
union anon_type_15___huge_val_t {
unsigned char __c[8];
double __d;
};
typedef union anon_type_15___huge_val_t __huge_val_t;
union anon_type_16___huge_valf_t {
unsigned char __c[4];
float __f;
};
typedef union anon_type_16___huge_valf_t __huge_valf_t;
union anon_type_17 {
unsigned char __c[12];
long double __ld;
};
union anon_type_18 {
unsigned char __c[4];
float __d;
};
typedef float float_t;
typedef double double_t;
enum anon_type_19 {
FP_NAN = 0,
FP_INFINITE = 1,
FP_ZERO = 2,
FP_SUBNORMAL = 3,
FP_NORMAL = 4
};
enum anon_type_20__LIB_VERSION_TYPE {
_IEEE_ = -1,
_SVID_ = 0,
_XOPEN_ = 1,
_POSIX_ = 2,
_ISOC_ = 3
};
typedef enum anon_type_20__LIB_VERSION_TYPE _LIB_VERSION_TYPE;
struct exception {
int type;
char * name;
double arg1;
double arg2;
double retval;
};
enum anon_type_21_logical {
false = 0,
true = 1
};
typedef enum anon_type_21_logical logical;
struct anon_type_22_dcomplex {
double real;
double imag;
};
typedef struct anon_type_22_dcomplex dcomplex;
typedef long clock_t;
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
int __macc__oz_def_ub_set_392[10];
int __macc__oz_def_lb_set_391[10];
int __macc__oz_use_ub_set_390[10];
int __macc__oz_use_lb_set_389[10];
int __macc__ou_def_ub_set_388[10];
int __macc__ou_def_lb_set_387[10];
int __macc__ou_use_ub_set_386[10];
int __macc__ou_use_lb_set_385[10];
int __macc__i3_loop_ub_set_376[10];
int __macc__i3_loop_lb_set_375[10];
int __macc__mm3_last_384 = -1;
int __macc__mm2_last_383 = -1;
int __macc__mm1_last_382 = -1;
int __macc__t3_last_381 = -1;
int __macc__t2_last_380 = -1;
int __macc__n2_last_379 = -1;
int __macc__t1_last_378 = -1;
int __macc__n1_last_377 = -1;
int __macc__oz_def_ub_set_374[10];
int __macc__oz_def_lb_set_373[10];
int __macc__oz_use_ub_set_372[10];
int __macc__oz_use_lb_set_371[10];
int __macc__ou_def_ub_set_370[10];
int __macc__ou_def_lb_set_369[10];
int __macc__ou_use_ub_set_368[10];
int __macc__ou_use_lb_set_367[10];
int __macc__i3_loop_ub_set_358[10];
int __macc__i3_loop_lb_set_357[10];
int __macc__mm3_last_366 = -1;
int __macc__mm2_last_365 = -1;
int __macc__mm1_last_364 = -1;
int __macc__t3_last_363 = -1;
int __macc__t2_last_362 = -1;
int __macc__n2_last_361 = -1;
int __macc__d1_last_360 = -1;
int __macc__n1_last_359 = -1;
int __macc__oz_def_ub_set_356[10];
int __macc__oz_def_lb_set_355[10];
int __macc__oz_use_ub_set_354[10];
int __macc__oz_use_lb_set_353[10];
int __macc__ou_def_ub_set_352[10];
int __macc__ou_def_lb_set_351[10];
int __macc__ou_use_ub_set_350[10];
int __macc__ou_use_lb_set_349[10];
int __macc__i3_loop_ub_set_340[10];
int __macc__i3_loop_lb_set_339[10];
int __macc__mm3_last_348 = -1;
int __macc__mm2_last_347 = -1;
int __macc__mm1_last_346 = -1;
int __macc__t3_last_345 = -1;
int __macc__d2_last_344 = -1;
int __macc__n2_last_343 = -1;
int __macc__t1_last_342 = -1;
int __macc__n1_last_341 = -1;
int __macc__oz_def_ub_set_338[10];
int __macc__oz_def_lb_set_337[10];
int __macc__oz_use_ub_set_336[10];
int __macc__oz_use_lb_set_335[10];
int __macc__ou_def_ub_set_334[10];
int __macc__ou_def_lb_set_333[10];
int __macc__ou_use_ub_set_332[10];
int __macc__ou_use_lb_set_331[10];
int __macc__i3_loop_ub_set_322[10];
int __macc__i3_loop_lb_set_321[10];
int __macc__mm3_last_330 = -1;
int __macc__mm2_last_329 = -1;
int __macc__mm1_last_328 = -1;
int __macc__t3_last_327 = -1;
int __macc__d2_last_326 = -1;
int __macc__n2_last_325 = -1;
int __macc__d1_last_324 = -1;
int __macc__n1_last_323 = -1;
int __macc__oz_def_ub_set_320[10];
int __macc__oz_def_lb_set_319[10];
int __macc__oz_use_ub_set_318[10];
int __macc__oz_use_lb_set_317[10];
int __macc__ou_def_ub_set_316[10];
int __macc__ou_def_lb_set_315[10];
int __macc__ou_use_ub_set_314[10];
int __macc__ou_use_lb_set_313[10];
int __macc__i3_loop_ub_set_304[10];
int __macc__i3_loop_lb_set_303[10];
int __macc__mm3_last_312 = -1;
int __macc__mm2_last_311 = -1;
int __macc__mm1_last_310 = -1;
int __macc__d3_last_309 = -1;
int __macc__t2_last_308 = -1;
int __macc__n2_last_307 = -1;
int __macc__t1_last_306 = -1;
int __macc__n1_last_305 = -1;
int __macc__oz_def_ub_set_302[10];
int __macc__oz_def_lb_set_301[10];
int __macc__oz_use_ub_set_300[10];
int __macc__oz_use_lb_set_299[10];
int __macc__ou_def_ub_set_298[10];
int __macc__ou_def_lb_set_297[10];
int __macc__ou_use_ub_set_296[10];
int __macc__ou_use_lb_set_295[10];
int __macc__i3_loop_ub_set_286[10];
int __macc__i3_loop_lb_set_285[10];
int __macc__mm3_last_294 = -1;
int __macc__mm2_last_293 = -1;
int __macc__mm1_last_292 = -1;
int __macc__d3_last_291 = -1;
int __macc__t2_last_290 = -1;
int __macc__n2_last_289 = -1;
int __macc__d1_last_288 = -1;
int __macc__n1_last_287 = -1;
int __macc__oz_def_ub_set_284[10];
int __macc__oz_def_lb_set_283[10];
int __macc__oz_use_ub_set_282[10];
int __macc__oz_use_lb_set_281[10];
int __macc__ou_def_ub_set_280[10];
int __macc__ou_def_lb_set_279[10];
int __macc__ou_use_ub_set_278[10];
int __macc__ou_use_lb_set_277[10];
int __macc__i3_loop_ub_set_268[10];
int __macc__i3_loop_lb_set_267[10];
int __macc__mm3_last_276 = -1;
int __macc__mm2_last_275 = -1;
int __macc__mm1_last_274 = -1;
int __macc__d3_last_273 = -1;
int __macc__d2_last_272 = -1;
int __macc__n2_last_271 = -1;
int __macc__t1_last_270 = -1;
int __macc__n1_last_269 = -1;
int __macc__ou_def_ub_set_266[10];
int __macc__ou_def_lb_set_265[10];
int __macc__ou_use_ub_set_264[10];
int __macc__ou_use_lb_set_263[10];
int __macc__i3_loop_ub_set_254[10];
int __macc__i3_loop_lb_set_253[10];
int __macc__mm3_last_262 = -1;
int __macc__d3_last_261 = -1;
int __macc__d2_last_260 = -1;
int __macc__n2_last_259 = -1;
int __macc__d1_last_258 = -1;
int __macc__n1_last_257 = -1;
int __macc__mm2_last_256 = -1;
int __macc__mm1_last_255 = -1;
int __macc__z3_def_ub_set_252[10];
int __macc__z3_def_lb_set_251[10];
int __macc__z3_use_ub_set_250[10];
int __macc__z3_use_lb_set_249[10];
int __macc__ou_def_ub_set_248[10];
int __macc__ou_def_lb_set_247[10];
int __macc__ou_use_ub_set_246[10];
int __macc__ou_use_lb_set_245[10];
int __macc__i3_loop_ub_set_239[10];
int __macc__i3_loop_lb_set_238[10];
int __macc__mm3_last_244 = -1;
int __macc__mm2_last_243 = -1;
int __macc__mm1_last_242 = -1;
int __macc__n2_last_241 = -1;
int __macc__n1_last_240 = -1;
int __macc__z2_def_ub_set_237[10];
int __macc__z2_def_lb_set_236[10];
int __macc__z2_use_ub_set_235[10];
int __macc__z2_use_lb_set_234[10];
int __macc__ou_def_ub_set_233[10];
int __macc__ou_def_lb_set_232[10];
int __macc__ou_use_ub_set_231[10];
int __macc__ou_use_lb_set_230[10];
int __macc__i3_loop_ub_set_224[10];
int __macc__i3_loop_lb_set_223[10];
int __macc__mm3_last_229 = -1;
int __macc__mm2_last_228 = -1;
int __macc__mm1_last_227 = -1;
int __macc__n2_last_226 = -1;
int __macc__n1_last_225 = -1;
int __macc__z1_def_ub_set_222[10];
int __macc__z1_def_lb_set_221[10];
int __macc__z1_use_ub_set_220[10];
int __macc__z1_use_lb_set_219[10];
int __macc__ou_def_ub_set_218[10];
int __macc__ou_def_lb_set_217[10];
int __macc__ou_use_ub_set_216[10];
int __macc__ou_use_lb_set_215[10];
int __macc__i3_loop_ub_set_209[10];
int __macc__i3_loop_lb_set_208[10];
int __macc__mm3_last_214 = -1;
int __macc__mm2_last_213 = -1;
int __macc__mm1_last_212 = -1;
int __macc__n2_last_211 = -1;
int __macc__n1_last_210 = -1;
int __macc__oz_def_ub_set_207[10];
int __macc__oz_def_lb_set_206[10];
int __macc__oz_use_ub_set_205[10];
int __macc__oz_use_lb_set_204[10];
int __macc__ou_def_ub_set_203[10];
int __macc__ou_def_lb_set_202[10];
int __macc__ou_use_ub_set_201[10];
int __macc__ou_use_lb_set_200[10];
int __macc__i3_loop_ub_set_194[10];
int __macc__i3_loop_lb_set_193[10];
int __macc__mm3_last_199 = -1;
int __macc__mm2_last_198 = -1;
int __macc__mm1_last_197 = -1;
int __macc__n2_last_196 = -1;
int __macc__n1_last_195 = -1;
int __macc__z3_def_ub_set_192[10];
int __macc__z3_def_lb_set_191[10];
int __macc__z3_use_ub_set_190[10];
int __macc__z3_use_lb_set_189[10];
int __macc__z2_def_ub_set_188[10];
int __macc__z2_def_lb_set_187[10];
int __macc__z2_use_ub_set_186[10];
int __macc__z2_use_lb_set_185[10];
int __macc__oz_def_ub_set_184[10];
int __macc__oz_def_lb_set_183[10];
int __macc__oz_use_ub_set_182[10];
int __macc__oz_use_lb_set_181[10];
int __macc__z1_def_ub_set_180[10];
int __macc__z1_def_lb_set_179[10];
int __macc__z1_use_ub_set_178[10];
int __macc__z1_use_lb_set_177[10];
int __macc__i3_loop_ub_set_173[10];
int __macc__i3_loop_lb_set_172[10];
int __macc__mm3_last_176 = -1;
int __macc__mm2_last_175 = -1;
int __macc__mm1_last_174 = -1;
int __macc__ou_def_ub_set_171[10];
int __macc__ou_def_lb_set_170[10];
int __macc__ou_use_ub_set_169[10];
int __macc__ou_use_lb_set_168[10];
int __macc__i2_loop_ub_set_164[10];
int __macc__i2_loop_lb_set_163[10];
int __macc__n3_last_167 = -1;
int __macc__n2_last_166 = -1;
int __macc__n1_last_165 = -1;
int __macc__ou_def_ub_set_162[10];
int __macc__ou_def_lb_set_161[10];
int __macc__ou_use_ub_set_160[10];
int __macc__ou_use_lb_set_159[10];
int __macc__i3_loop_ub_set_155[10];
int __macc__i3_loop_lb_set_154[10];
int __macc__n3_last_158 = -1;
int __macc__n2_last_157 = -1;
int __macc__n1_last_156 = -1;
int __macc__ou_def_ub_set_153[10];
int __macc__ou_def_lb_set_152[10];
int __macc__ou_use_ub_set_151[10];
int __macc__ou_use_lb_set_150[10];
int __macc__i3_loop_ub_set_146[10];
int __macc__i3_loop_lb_set_145[10];
int __macc__n3_last_149 = -1;
int __macc__n2_last_148 = -1;
int __macc__n1_last_147 = -1;
int __macc__or_def_ub_set_144[10];
int __macc__or_def_lb_set_143[10];
int __macc__or_use_ub_set_142[10];
int __macc__or_use_lb_set_141[10];
int __macc__i3_loop_ub_set_137[10];
int __macc__i3_loop_lb_set_136[10];
int __macc__n3_last_140 = -1;
int __macc__n2_last_139 = -1;
int __macc__n1_last_138 = -1;
int __macc__y1_def_ub_set_135[10];
int __macc__y1_def_lb_set_134[10];
int __macc__y1_use_ub_set_133[10];
int __macc__y1_use_lb_set_132[10];
int __macc__x1_def_ub_set_131[10];
int __macc__x1_def_lb_set_130[10];
int __macc__x1_use_ub_set_129[10];
int __macc__x1_use_lb_set_128[10];
int __macc__os_def_ub_set_127[10];
int __macc__os_def_lb_set_126[10];
int __macc__os_use_ub_set_125[10];
int __macc__os_use_lb_set_124[10];
int __macc__or_def_ub_set_123[10];
int __macc__or_def_lb_set_122[10];
int __macc__or_use_ub_set_121[10];
int __macc__or_use_lb_set_120[10];
int __macc__j3_loop_ub_set_111[10];
int __macc__j3_loop_lb_set_110[10];
int __macc__m3j_last_119 = -1;
int __macc__m2j_last_118 = -1;
int __macc__m1j_last_117 = -1;
int __macc__d3_last_116 = -1;
int __macc__d2_last_115 = -1;
int __macc__m2k_last_114 = -1;
int __macc__d1_last_113 = -1;
int __macc__m1k_last_112 = -1;
int __macc__y1_def_ub_set_109[10];
int __macc__y1_def_lb_set_108[10];
int __macc__y1_use_ub_set_107[10];
int __macc__y1_use_lb_set_106[10];
int __macc__or_def_ub_set_105[10];
int __macc__or_def_lb_set_104[10];
int __macc__or_use_ub_set_103[10];
int __macc__or_use_lb_set_102[10];
int __macc__x1_def_ub_set_101[10];
int __macc__x1_def_lb_set_100[10];
int __macc__x1_use_ub_set_99[10];
int __macc__x1_use_lb_set_98[10];
int __macc__j3_loop_ub_set_91[10];
int __macc__j3_loop_lb_set_90[10];
int __macc__m3j_last_97 = -1;
int __macc__d3_last_96 = -1;
int __macc__d2_last_95 = -1;
int __macc__m2k_last_94 = -1;
int __macc__m1k_last_93 = -1;
int __macc__d1_last_92 = -1;
int __macc__u1_def_ub_set_89[10];
int __macc__u1_def_lb_set_88[10];
int __macc__u1_use_ub_set_87[10];
int __macc__u1_use_lb_set_86[10];
int __macc__u2_def_ub_set_85[10];
int __macc__u2_def_lb_set_84[10];
int __macc__u2_use_ub_set_83[10];
int __macc__u2_use_lb_set_82[10];
int __macc__ou_def_ub_set_81[10];
int __macc__ou_def_lb_set_80[10];
int __macc__ou_use_ub_set_79[10];
int __macc__ou_use_lb_set_78[10];
int __macc__ov_def_ub_set_77[10];
int __macc__ov_def_lb_set_76[10];
int __macc__ov_use_ub_set_75[10];
int __macc__ov_use_lb_set_74[10];
int __macc__or_def_ub_set_73[10];
int __macc__or_def_lb_set_72[10];
int __macc__or_use_ub_set_71[10];
int __macc__or_use_lb_set_70[10];
int __macc__i3_loop_ub_set_66[10];
int __macc__i3_loop_lb_set_65[10];
int __macc__n3_last_69 = -1;
int __macc__n2_last_68 = -1;
int __macc__n1_last_67 = -1;
int __macc__u2_def_ub_set_64[10];
int __macc__u2_def_lb_set_63[10];
int __macc__u2_use_ub_set_62[10];
int __macc__u2_use_lb_set_61[10];
int __macc__ou_def_ub_set_60[10];
int __macc__ou_def_lb_set_59[10];
int __macc__ou_use_ub_set_58[10];
int __macc__ou_use_lb_set_57[10];
int __macc__u1_def_ub_set_56[10];
int __macc__u1_def_lb_set_55[10];
int __macc__u1_use_ub_set_54[10];
int __macc__u1_use_lb_set_53[10];
int __macc__i3_loop_ub_set_49[10];
int __macc__i3_loop_lb_set_48[10];
int __macc__n3_last_52 = -1;
int __macc__n2_last_51 = -1;
int __macc__n1_last_50 = -1;
int __macc__r2_def_ub_set_47[10];
int __macc__r2_def_lb_set_46[10];
int __macc__r2_use_ub_set_45[10];
int __macc__r2_use_lb_set_44[10];
int __macc__r1_def_ub_set_43[10];
int __macc__r1_def_lb_set_42[10];
int __macc__r1_use_ub_set_41[10];
int __macc__r1_use_lb_set_40[10];
int __macc__or_def_ub_set_39[10];
int __macc__or_def_lb_set_38[10];
int __macc__or_use_ub_set_37[10];
int __macc__or_use_lb_set_36[10];
int __macc__ou_def_ub_set_35[10];
int __macc__ou_def_lb_set_34[10];
int __macc__ou_use_ub_set_33[10];
int __macc__ou_use_lb_set_32[10];
int __macc__i3_loop_ub_set_28[10];
int __macc__i3_loop_lb_set_27[10];
int __macc__n3_last_31 = -1;
int __macc__n2_last_30 = -1;
int __macc__n1_last_29 = -1;
int __macc__r2_def_ub_set_26[10];
int __macc__r2_def_lb_set_25[10];
int __macc__r2_use_ub_set_24[10];
int __macc__r2_use_lb_set_23[10];
int __macc__or_def_ub_set_22[10];
int __macc__or_def_lb_set_21[10];
int __macc__or_use_ub_set_20[10];
int __macc__or_use_lb_set_19[10];
int __macc__r1_def_ub_set_18[10];
int __macc__r1_def_lb_set_17[10];
int __macc__r1_use_ub_set_16[10];
int __macc__r1_use_lb_set_15[10];
int __macc__i3_loop_ub_set_11[10];
int __macc__i3_loop_lb_set_10[10];
int __macc__n3_last_14 = -1;
int __macc__n2_last_13 = -1;
int __macc__n1_last_12 = -1;
int __macc__oz_def_ub_set_9[10];
int __macc__oz_def_lb_set_8[10];
int __macc__oz_use_ub_set_7[10];
int __macc__oz_use_lb_set_6[10];
int __macc__i3_loop_ub_set_2[10];
int __macc__i3_loop_lb_set_1[10];
int __macc__n3_last_5 = -1;
int __macc__n2_last_4 = -1;
int __macc__n1_last_3 = -1;
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
# 26 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int __MACC_NUMGPUS = -(1);
# 28 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int __macc_get_num_gpus()
{
# 30 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return acc_get_num_devices(acc_device_nvidia);
}
# 33 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_set_gpu_num(int i)
{
# 35 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_set_device_num(i, acc_device_nvidia);
}
# 55 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET;
# 57 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_init()
{
# 59 "/tmp/tmp.fPViXZ07z4/mg_1.c"
char * env_macc_numgpus = getenv("MACC_NUMGPUS");
# 61 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(env_macc_numgpus != ((void * )(0))) {
# 62 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__MACC_NUMGPUS = (atoi(env_macc_numgpus));
}
else {
# 65 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__MACC_NUMGPUS = (__macc_get_num_gpus());
}
# 68 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(__MACC_NUMGPUS <= (0)) {
# 69 "/tmp/tmp.fPViXZ07z4/mg_1.c"
fputs("[MACC ERROR] No GPU device found.", stderr);
# 70 "/tmp/tmp.fPViXZ07z4/mg_1.c"
exit(-(1));
}
# 73 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(((getenv("OMP_NESTED")) == ((void * )(0))) || ((getenv("OMP_MAX_ACTIVE_LEVELS")) == ((void * )(0)))) {
# 74 "/tmp/tmp.fPViXZ07z4/mg_1.c"
fputs("[MACC ERROR] Improper setting.\n\nIn order to make nested-parallel available,\nrun the commands below before running the program.\n\n\texport OMP_NESTED=TRUE\n\texport OMP_MAX_ACTIVE_LEVELS=2\n\n", stderr);
# 83 "/tmp/tmp.fPViXZ07z4/mg_1.c"
exit(-(1));
}
# 86 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__MACC_DATA_TABLE_SET = (calloc(__MACC_NUMGPUS, sizeof(struct __MaccDataTable)));
}
# 89 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_data_table_insert(int gpu_num, void * p, int type_size, int entire_lb, int entire_ub)
{
# 92 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int index = ((long)(p)) % (256);
# 94 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * new_entry = malloc(sizeof(struct __MaccDataTableEntry));
# 96 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->addr) = p;
# 97 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->type_size) = type_size;
# 98 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->entire_lb) = entire_lb;
# 99 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->entire_ub) = entire_ub;
# 100 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->dirty) = (0);
# 101 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->dirty_lb) = (-(1));
# 102 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->dirty_ub) = (-(1));
# 103 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(new_entry->next) = (*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index));
# 105 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = new_entry;
}
# 108 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * __macc_data_table_find(int gpu_num, void * p)
{
# 110 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int index = ((long)(p)) % (256);
# 111 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 113 "/tmp/tmp.fPViXZ07z4/mg_1.c"
while(entry != ((void * )(0))) {
{
# 115 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((entry->addr) == p) {
# 116 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return entry;
}
# 118 "/tmp/tmp.fPViXZ07z4/mg_1.c"
entry = (entry->next);
}
}
# 121 "/tmp/tmp.fPViXZ07z4/mg_1.c"
fprintf(stderr, "Error on __macc_data_table_find: Not found the item %p\n", p);
# 122 "/tmp/tmp.fPViXZ07z4/mg_1.c"
exit(-(1));
# 124 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return (void * )(0);
}
# 127 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_data_table_delete(int gpu_num, void * p)
{
# 129 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int index = ((long)(p)) % (256);
# 130 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * entry = *(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index);
# 131 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * pre = (void * )(0);
# 133 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(entry != ((void * )(0))) {
# 134 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((entry->addr) == p) {
# 135 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(*(((__MACC_DATA_TABLE_SET + gpu_num)->entries) + index)) = (entry->next);
# 136 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return ;
}
# 139 "/tmp/tmp.fPViXZ07z4/mg_1.c"
pre = entry;
# 140 "/tmp/tmp.fPViXZ07z4/mg_1.c"
entry = (entry->next);
}
# 143 "/tmp/tmp.fPViXZ07z4/mg_1.c"
while((pre != ((void * )(0))) && (entry != ((void * )(0)))) {
{
# 145 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((entry->addr) == p) {
# 146 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(pre->next) = (entry->next);
# 147 "/tmp/tmp.fPViXZ07z4/mg_1.c"
free(entry);
# 148 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return ;
}
# 151 "/tmp/tmp.fPViXZ07z4/mg_1.c"
pre = entry;
# 152 "/tmp/tmp.fPViXZ07z4/mg_1.c"
entry = (entry->next);
}
}
# 155 "/tmp/tmp.fPViXZ07z4/mg_1.c"
fprintf(stderr, "Error on __macc_data_table_delete: Not found the item %p\n", p);
# 156 "/tmp/tmp.fPViXZ07z4/mg_1.c"
exit(-(1));
}
# 159 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_delete(int gpu_num, void * p, int type_size, int lb, int length)
{
# 161 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_delete_async(p + (lb * type_size), length * type_size, gpu_num);
# 162 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_data_table_delete(gpu_num, p);
# 163 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_wait(gpu_num);
}
# 166 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_copyout(int gpu_num, void * p, int type_size, int lb, int length)
{
# 168 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 170 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(entry->dirty) {
# 171 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_self_async((entry->addr) + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size), gpu_num);
}
# 175 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_delete(gpu_num, p, type_size, lb, length);
}
# 178 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_copyin(int gpu_num, void * p, int type_size, int lb, int length)
{
# 180 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_copyin_async(p + (lb * type_size), length * type_size, gpu_num);
# 181 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_data_table_insert(gpu_num, p, type_size, lb, (lb + length) - (1));
# 182 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_wait(gpu_num);
}
# 185 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_create(int gpu_num, void * p, int type_size, int lb, int length)
{
# 187 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_create_async(p + (lb * type_size), length * type_size, gpu_num);
# 188 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_data_table_insert(gpu_num, p, type_size, lb, (lb + length) - (1));
# 189 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_wait(gpu_num);
}
# 192 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_update_self(int gpu_num, void * p, int type_size, int lb, int length)
{
# 194 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_self(p + (lb * type_size), length * type_size);
}
# 197 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_update_device(int gpu_num, void * p, int type_size, int lb, int length)
{
# 199 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_device(p + (lb * type_size), length * type_size);
}
# 202 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_init_access_region(int gpu_num, int * lb_set, int * ub_set)
{
# 204 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(lb_set[gpu_num]) = (2147483647);
# 205 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(ub_set[gpu_num]) = (-(1));
}
# 208 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_update_access_region(int gpu_num, int * lb_set, int * ub_set, int val)
{
# 210 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(lb_set[gpu_num]) = (((lb_set[gpu_num]) < val) ?(lb_set[gpu_num]) : val);
# 211 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(ub_set[gpu_num]) = (((ub_set[gpu_num]) > val) ?(ub_set[gpu_num]) : val);
}
# 214 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int __macc_region_is_overlapping(int * lb_set, int * ub_set)
{
{
# 216 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i;
# 216 "/tmp/tmp.fPViXZ07z4/mg_1.c"
for(i = (0); i < (__MACC_NUMGPUS - (1)); i++) {
{
{
# 217 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int j;
# 217 "/tmp/tmp.fPViXZ07z4/mg_1.c"
for(j = (i + (1)); j < __MACC_NUMGPUS; j++) {
{
# 218 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(!(((lb_set[i]) > (ub_set[j])) || ((ub_set[i]) < (lb_set[j])))) {
# 219 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return 1;
}
}
}
}
}
}
}
# 221 "/tmp/tmp.fPViXZ07z4/mg_1.c"
return 0;
}
# 225 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_calc_loop_region(int * loop_lb_set, int * loop_ub_set, int entire_start, int entire_end, int step, int until_equal)
{
# 229 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int pos = entire_start;
# 230 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int width = (int)((((((float)(entire_end)) - entire_start) + (until_equal ?(1) : (0))) / __MACC_NUMGPUS) + (0.9));
# 231 "/tmp/tmp.fPViXZ07z4/mg_1.c"
width -= (width % step);
{
# 233 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i;
# 233 "/tmp/tmp.fPViXZ07z4/mg_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 234 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_lb_set[i]) = pos;
# 235 "/tmp/tmp.fPViXZ07z4/mg_1.c"
pos += (width - (1));
# 236 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_ub_set[i]) = pos;
# 237 "/tmp/tmp.fPViXZ07z4/mg_1.c"
pos += step;
}
}
}
{
# 240 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int tail = __MACC_NUMGPUS - (1);
# 241 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_ub_set[tail]) = entire_end;
# 242 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((! until_equal) && ((loop_ub_set[tail]) == entire_end)) {
# 243 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_ub_set[tail]) -= step;
}
}
}
# 246 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_rewrite_loop_region_into_single(int * loop_lb_set, int * loop_ub_set)
{
# 248 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_ub_set[(0)]) = (loop_ub_set[(__MACC_NUMGPUS - (1))]);
{
# 250 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i;
# 250 "/tmp/tmp.fPViXZ07z4/mg_1.c"
for(i = (1); i < __MACC_NUMGPUS; i++) {
{
# 251 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_lb_set[i]) = (1);
# 252 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(loop_ub_set[i]) = (0);
}
}
}
}
# 256 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_rewrite_data_region_into_single(int * lb_set, int * ub_set)
{
# 258 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int gpu_ub = __MACC_NUMGPUS - (1);
# 259 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(lb_set[(0)]) = (((lb_set[(0)]) < (lb_set[gpu_ub])) ?(lb_set[(0)]) : (lb_set[gpu_ub]));
# 260 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(ub_set[(0)]) = (((ub_set[(0)]) > (ub_set[gpu_ub])) ?(ub_set[(0)]) : (ub_set[gpu_ub]));
}
# 263 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_sync_data(int gpu_num, void * p, int type_size, int lb, int ub)
{
# 265 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void * update_addr = p + (lb * type_size);
# 266 "/tmp/tmp.fPViXZ07z4/mg_1.c"
unsigned long length_b = ((ub - lb) + (1)) * type_size;
# 268 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_self(update_addr, length_b);
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
# 272 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i = omp_get_thread_num();
# 273 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(i != gpu_num) {
# 274 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_set_gpu_num(i);
# 275 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_device(update_addr, length_b);
}
}
# 279 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_set_gpu_num(gpu_num);
}
# 283 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void __macc_set_data_region(int gpu_num, void * p, int multi, int use_type, int * use_lb_set, int * use_ub_set, int def_type, int * def_lb_set, int * def_ub_set)
{
# 287 "/tmp/tmp.fPViXZ07z4/mg_1.c"
struct __MaccDataTableEntry * entry = __macc_data_table_find(gpu_num, p);
# 292 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(((entry->dirty) && (multi || (gpu_num != (0)))) && (__MACC_NUMGPUS > (1))) {
# 293 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int update_all = 0;
# 294 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int update_all_DtoH = 0;
# 296 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((use_type == (0)) || (def_type == (0))) {
# 297 "/tmp/tmp.fPViXZ07z4/mg_1.c"
update_all = (1);
}
else {
# 299 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(def_type == (2)) {
{
# 300 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i;
# 300 "/tmp/tmp.fPViXZ07z4/mg_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 301 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (def_ub_set[i])) || ((entry->dirty_ub) < (def_lb_set[i]))))) {
# 304 "/tmp/tmp.fPViXZ07z4/mg_1.c"
update_all = (1);
# 305 "/tmp/tmp.fPViXZ07z4/mg_1.c"
break;
}
}
}
}
}
}
# 310 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(! update_all) {
# 311 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int every_whole = 1;
# 312 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int unused_lb = entry->dirty_lb;
# 313 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int unused_ub = entry->dirty_ub;
{
# 315 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i;
# 315 "/tmp/tmp.fPViXZ07z4/mg_1.c"
for(i = (0); i < __MACC_NUMGPUS; i++) {
{
# 316 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(i != gpu_num) {
# 317 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(((use_lb_set[i]) <= (entry->dirty_lb)) && ((entry->dirty_ub) <= (use_ub_set[i]))) {
# 319 "/tmp/tmp.fPViXZ07z4/mg_1.c"
update_all_DtoH = (1);
}
else {
# 322 "/tmp/tmp.fPViXZ07z4/mg_1.c"
every_whole = (0);
# 324 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((use_lb_set[i]) <= unused_lb) {
# 325 "/tmp/tmp.fPViXZ07z4/mg_1.c"
unused_lb = ((unused_lb > ((use_ub_set[i]) + (1))) ? unused_lb : ((use_ub_set[i]) + (1)));
}
else {
# 326 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((use_ub_set[i]) >= unused_ub) {
# 327 "/tmp/tmp.fPViXZ07z4/mg_1.c"
unused_ub = ((unused_ub < ((use_lb_set[i]) - (1))) ? unused_ub : ((use_lb_set[i]) - (1)));
}
}
}
}
}
}
}
# 332 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(every_whole) {
# 333 "/tmp/tmp.fPViXZ07z4/mg_1.c"
update_all = (1);
}
# 334 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(unused_ub < unused_lb) {
# 335 "/tmp/tmp.fPViXZ07z4/mg_1.c"
update_all_DtoH = (1);
}
}
# 339 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(update_all) {
# 340 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_sync_data(gpu_num, p, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 341 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty) = (0);
}
else {
# 345 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((entry->dirty) && (use_type == (2))) {
# 346 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int thread_num = multi ? __MACC_NUMGPUS : (1);
# 348 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(update_all_DtoH) {
# 349 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_self(p + ((entry->dirty_lb) * (entry->type_size)), (((entry->dirty_ub) - (entry->dirty_lb)) + (1)) * (entry->type_size));
}
#pragma omp parallel num_threads ( thread_num )
{
# 354 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int i = omp_get_thread_num();
# 356 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((i != gpu_num) && (!(((entry->dirty_lb) > (use_ub_set[i])) || ((entry->dirty_ub) < (use_lb_set[i]))))) {
# 360 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int update_lb = ((entry->dirty_lb) > (use_lb_set[i])) ?(entry->dirty_lb) : (use_lb_set[i]);
# 361 "/tmp/tmp.fPViXZ07z4/mg_1.c"
int update_ub = ((entry->dirty_ub) < (use_ub_set[i])) ?(entry->dirty_ub) : (use_ub_set[i]);
# 362 "/tmp/tmp.fPViXZ07z4/mg_1.c"
void * update_addr = p + (update_lb * (entry->type_size));
# 363 "/tmp/tmp.fPViXZ07z4/mg_1.c"
unsigned long length_b = ((update_ub - update_lb) + (1)) * (entry->type_size);
# 365 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(! update_all_DtoH) {
# 366 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_set_gpu_num(gpu_num);
# 367 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_self(update_addr, length_b);
}
# 369 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_set_gpu_num(i);
# 370 "/tmp/tmp.fPViXZ07z4/mg_1.c"
acc_update_device(update_addr, length_b);
}
# 372 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_set_gpu_num(gpu_num);
}
}
}
}
# 382 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if((multi || (gpu_num == (0))) && (def_type != (1))) {
# 383 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(def_type == (0)) {
# 384 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty) = (1);
# 385 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_lb) = (entry->entire_lb);
# 386 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_ub) = (entry->entire_ub);
}
else {
# 389 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(!(entry->dirty)) {
# 390 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty) = (1);
# 391 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 392 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_ub) = (def_ub_set[gpu_num]);
}
else {
# 397 "/tmp/tmp.fPViXZ07z4/mg_1.c"
if(((!(((entry->dirty_lb) > (def_ub_set[gpu_num])) || ((entry->dirty_ub) < (def_lb_set[gpu_num])))) || ((entry->dirty_lb) == ((def_ub_set[gpu_num]) + (1)))) || ((def_lb_set[gpu_num]) == ((entry->dirty_ub) + (1)))) {
# 405 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_lb) = (((entry->dirty_lb) < (def_lb_set[gpu_num])) ?(entry->dirty_lb) : (def_lb_set[gpu_num]));
# 406 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_ub) = (((entry->dirty_ub) > (def_ub_set[gpu_num])) ?(entry->dirty_ub) : (def_ub_set[gpu_num]));
}
else {
# 410 "/tmp/tmp.fPViXZ07z4/mg_1.c"
__macc_sync_data(gpu_num, p, entry->type_size, entry->dirty_lb, entry->dirty_ub);
# 411 "/tmp/tmp.fPViXZ07z4/mg_1.c"
(entry->dirty_lb) = (def_lb_set[gpu_num]);
# 412 "/tmp/tmp.fPViXZ07z4/mg_1.c"
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
static union anon_type_15___huge_val_t __huge_val = {{0, 0, 0, 0, 0, 0, 240, 127}};
# 48 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h"
static union anon_type_16___huge_valf_t __huge_valf = {{0, 0, 128, 127}};
# 37 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h"
static union anon_type_17 __huge_vall = {{0, 0, 0, 0, 0, 0, 0, 128, 255, 127, 0, 0}};
# 48 "/usr/include/x86_64-linux-gnu/bits/nan.h"
static __attribute__((unused)) union anon_type_18 __qnan_union = {{0, 0, 192, 127}};
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
# 148 "/usr/include/math.h"
extern int signgam;
# 313 "/usr/include/math.h"
extern enum anon_type_20__LIB_VERSION_TYPE _LIB_VERSION;
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
# 62 "openacc-npb/MG/MG/globals.h"
static int nx[11];
# 63 "openacc-npb/MG/MG/globals.h"
static int ny[11];
# 64 "openacc-npb/MG/MG/globals.h"
static int nz[11];
# 67 "openacc-npb/MG/MG/globals.h"
static char Class;
# 70 "openacc-npb/MG/MG/globals.h"
static int debug_vec[8];
# 73 "openacc-npb/MG/MG/globals.h"
static int m1[11];
# 74 "openacc-npb/MG/MG/globals.h"
static int m2[11];
# 75 "openacc-npb/MG/MG/globals.h"
static int m3[11];
# 76 "openacc-npb/MG/MG/globals.h"
static int ir[11];
# 77 "openacc-npb/MG/MG/globals.h"
static int lt;
# 77 "openacc-npb/MG/MG/globals.h"
static int lb;
# 78 "openacc-npb/MG/MG/globals.h"
static int m1lt;
# 78 "openacc-npb/MG/MG/globals.h"
static int m2lt;
# 78 "openacc-npb/MG/MG/globals.h"
static int m3lt;
# 91 "openacc-npb/MG/MG/globals.h"
static enum anon_type_21_logical timeron;
void timer_clear(int n);
void timer_start(int n);
void timer_stop(int n);
double timer_read(int n);
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_21_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7);
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
# 106 "openacc-npb/MG/MG/mg.c"
static double u[155501232];
# 107 "openacc-npb/MG/MG/mg.c"
static double v[155501232];
# 108 "openacc-npb/MG/MG/mg.c"
static double r[155501232];
# 109 "openacc-npb/MG/MG/mg.c"
int gnr = (((((((((1) * ((2) + ((1) << (9)))) * ((2) + ((1) << (9)))) * ((2) + ((1) << (9)))) + (((2) + ((1) << (9))) * ((2) + ((1) << (9))))) + ((5) * ((2) + ((1) << (9))))) + ((7) * (9))) + (6)) / (7)) * (8);
# 112 "openacc-npb/MG/MG/mg.c"
static int is1;
# 112 "openacc-npb/MG/MG/mg.c"
static int is2;
# 112 "openacc-npb/MG/MG/mg.c"
static int is3;
# 112 "openacc-npb/MG/MG/mg.c"
static int ie1;
# 112 "openacc-npb/MG/MG/mg.c"
static int ie2;
# 112 "openacc-npb/MG/MG/mg.c"
static int ie3;
# 121 "openacc-npb/MG/MG/mg.c"
void print_results(char * name, char class, int n1, int n2, int n3, int niter, double t, double mops, char * optype, enum anon_type_21_logical verified, char * npbversion, char * compiletime, char * cs1, char * cs2, char * cs3, char * cs4, char * cs5, char * cs6, char * cs7)
{
# 126 "openacc-npb/MG/MG/mg.c"
char size[16];
# 127 "openacc-npb/MG/MG/mg.c"
int j;
# 129 "openacc-npb/MG/MG/mg.c"
printf("\n\n %s Benchmark Completed.\n", name);
# 130 "openacc-npb/MG/MG/mg.c"
printf(" Class           =             %12c\n", class);
# 137 "openacc-npb/MG/MG/mg.c"
if((n2 == (0)) && (n3 == (0))) {
# 138 "openacc-npb/MG/MG/mg.c"
if(((name[(0)]) == ((char)69)) && ((name[(1)]) == ((char)80))) {
# 139 "openacc-npb/MG/MG/mg.c"
sprintf(size, "%15.0lf", __builtin_pow(2.0, n1));
# 140 "openacc-npb/MG/MG/mg.c"
j = (14);
# 141 "openacc-npb/MG/MG/mg.c"
if((size[j]) == ((char)46)) {
# 142 "openacc-npb/MG/MG/mg.c"
(size[j]) = ((char)32);
# 143 "openacc-npb/MG/MG/mg.c"
j--;
}
# 145 "openacc-npb/MG/MG/mg.c"
(size[j + (1)]) = ((char)0);
# 146 "openacc-npb/MG/MG/mg.c"
printf(" Size            =          %15s\n", size);
}
else {
# 148 "openacc-npb/MG/MG/mg.c"
printf(" Size            =             %12d\n", n1);
}
}
else {
# 151 "openacc-npb/MG/MG/mg.c"
printf(" Size            =           %4dx%4dx%4d\n", n1, n2, n3);
}
# 154 "openacc-npb/MG/MG/mg.c"
printf(" Iterations      =             %12d\n", niter);
# 155 "openacc-npb/MG/MG/mg.c"
printf(" Time in seconds =             %12.2lf\n", t);
# 156 "openacc-npb/MG/MG/mg.c"
printf(" Mop/s total     =          %15.2lf\n", mops);
# 157 "openacc-npb/MG/MG/mg.c"
printf(" Operation type  = %24s\n", optype);
# 158 "openacc-npb/MG/MG/mg.c"
if(verified) {
# 159 "openacc-npb/MG/MG/mg.c"
printf(" Verification    =             %12s\n", "SUCCESSFUL");
}
else {
# 161 "openacc-npb/MG/MG/mg.c"
printf(" Verification    =             %12s\n", "UNSUCCESSFUL");
}
# 162 "openacc-npb/MG/MG/mg.c"
printf(" Version         =             %12s\n", npbversion);
# 163 "openacc-npb/MG/MG/mg.c"
printf(" Compile date    =             %12s\n", compiletime);
# 165 "openacc-npb/MG/MG/mg.c"
printf("\n Compile options:\n    CC           = %s\n", cs1);
# 167 "openacc-npb/MG/MG/mg.c"
printf("    CLINK        = %s\n", cs2);
# 168 "openacc-npb/MG/MG/mg.c"
printf("    C_LIB        = %s\n", cs3);
# 169 "openacc-npb/MG/MG/mg.c"
printf("    C_INC        = %s\n", cs4);
# 170 "openacc-npb/MG/MG/mg.c"
printf("    CFLAGS       = %s\n", cs5);
# 171 "openacc-npb/MG/MG/mg.c"
printf("    CLINKFLAGS   = %s\n", cs6);
# 172 "openacc-npb/MG/MG/mg.c"
printf("    RAND         = %s\n", cs7);
# 174 "openacc-npb/MG/MG/mg.c"
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
void wtime_(double * t);
# 189 "openacc-npb/MG/MG/mg.c"
void wtime_(double * t)
{
# 193 "openacc-npb/MG/MG/mg.c"
static int _w2c_sec2123 = -(1);
# 194 "openacc-npb/MG/MG/mg.c"
struct timeval tv;
# 196 "openacc-npb/MG/MG/mg.c"
gettimeofday(&(tv), (struct timezone * )(0x000000000ull));
# 197 "openacc-npb/MG/MG/mg.c"
if(_w2c_sec2123 < (0)) {
# 199 "openacc-npb/MG/MG/mg.c"
_w2c_sec2123 = ((&(tv))->tv_sec);
}
# 201 "openacc-npb/MG/MG/mg.c"
(*(t)) = (((double)(((&(tv))->tv_sec) - ((long long)(_w2c_sec2123)))) + (((double)((&(tv))->tv_usec)) * (9.99999999999999954748e-07)));
# 202 "openacc-npb/MG/MG/mg.c"
return ;
}
void wtime_(double * t);
# 217 "openacc-npb/MG/MG/mg.c"
static double elapsed_time(void)
{
# 219 "openacc-npb/MG/MG/mg.c"
double t;
# 221 "openacc-npb/MG/MG/mg.c"
wtime_(&(t));
# 222 "openacc-npb/MG/MG/mg.c"
return t;
}
# 226 "openacc-npb/MG/MG/mg.c"
static double start[64];
# 226 "openacc-npb/MG/MG/mg.c"
static double elapsed[64];
# 231 "openacc-npb/MG/MG/mg.c"
void timer_clear(int n)
{
# 233 "openacc-npb/MG/MG/mg.c"
(elapsed[n]) = (0.0);
}
# 240 "openacc-npb/MG/MG/mg.c"
void timer_start(int n)
{
# 242 "openacc-npb/MG/MG/mg.c"
(start[n]) = (elapsed_time());
}
# 249 "openacc-npb/MG/MG/mg.c"
void timer_stop(int n)
{
# 251 "openacc-npb/MG/MG/mg.c"
double t;
# 251 "openacc-npb/MG/MG/mg.c"
double now;
# 253 "openacc-npb/MG/MG/mg.c"
now = (elapsed_time());
# 254 "openacc-npb/MG/MG/mg.c"
t = (now - (start[n]));
# 255 "openacc-npb/MG/MG/mg.c"
(elapsed[n]) += t;
}
# 263 "openacc-npb/MG/MG/mg.c"
double timer_read(int n)
{
# 265 "openacc-npb/MG/MG/mg.c"
return elapsed[n];
}
# 270 "openacc-npb/MG/MG/mg.c"
int main()
{
__macc_init();
{
# 276 "openacc-npb/MG/MG/mg.c"
int k;
# 276 "openacc-npb/MG/MG/mg.c"
int it;
# 277 "openacc-npb/MG/MG/mg.c"
double t;
# 277 "openacc-npb/MG/MG/mg.c"
double tinit;
# 277 "openacc-npb/MG/MG/mg.c"
double mflops;
# 279 "openacc-npb/MG/MG/mg.c"
double a[4];
# 279 "openacc-npb/MG/MG/mg.c"
double c[4];
# 281 "openacc-npb/MG/MG/mg.c"
double rnm2;
# 281 "openacc-npb/MG/MG/mg.c"
double rnmu;
# 281 "openacc-npb/MG/MG/mg.c"
double old2;
# 281 "openacc-npb/MG/MG/mg.c"
double oldu;
# 281 "openacc-npb/MG/MG/mg.c"
double epsilon;
# 282 "openacc-npb/MG/MG/mg.c"
int n1;
# 282 "openacc-npb/MG/MG/mg.c"
int n2;
# 282 "openacc-npb/MG/MG/mg.c"
int n3;
# 282 "openacc-npb/MG/MG/mg.c"
int nit;
# 283 "openacc-npb/MG/MG/mg.c"
double nn;
# 283 "openacc-npb/MG/MG/mg.c"
double verify_value;
# 283 "openacc-npb/MG/MG/mg.c"
double err;
# 284 "openacc-npb/MG/MG/mg.c"
enum anon_type_21_logical verified;
# 286 "openacc-npb/MG/MG/mg.c"
int i;
# 287 "openacc-npb/MG/MG/mg.c"
char * t_names[10];
# 288 "openacc-npb/MG/MG/mg.c"
double tmax;
# 290 "openacc-npb/MG/MG/mg.c"
for(i = (0); i < (10); i++) {
{
# 291 "openacc-npb/MG/MG/mg.c"
timer_clear(i);
}
}
# 293 "openacc-npb/MG/MG/mg.c"
acc_init(acc_device_default);
# 294 "openacc-npb/MG/MG/mg.c"
timer_start(0);
{
# 299 "openacc-npb/MG/MG/mg.c"
struct _IO_FILE * fp;
# 300 "openacc-npb/MG/MG/mg.c"
if((fp = (fopen("timer.flag", "r"))) != ((void * )(0))) {
# 301 "openacc-npb/MG/MG/mg.c"
timeron = true;
# 302 "openacc-npb/MG/MG/mg.c"
(t_names[0]) = ("init");
# 303 "openacc-npb/MG/MG/mg.c"
(t_names[1]) = ("benchmk");
# 304 "openacc-npb/MG/MG/mg.c"
(t_names[2]) = ("mg3P");
# 305 "openacc-npb/MG/MG/mg.c"
(t_names[3]) = ("psinv");
# 306 "openacc-npb/MG/MG/mg.c"
(t_names[4]) = ("resid");
# 307 "openacc-npb/MG/MG/mg.c"
(t_names[6]) = ("rprj3");
# 308 "openacc-npb/MG/MG/mg.c"
(t_names[7]) = ("interp");
# 309 "openacc-npb/MG/MG/mg.c"
(t_names[8]) = ("norm2");
# 310 "openacc-npb/MG/MG/mg.c"
(t_names[9]) = ("comm3");
# 311 "openacc-npb/MG/MG/mg.c"
fclose(fp);
}
else {
# 313 "openacc-npb/MG/MG/mg.c"
timeron = false;
}
# 316 "openacc-npb/MG/MG/mg.c"
printf("\n\n NAS Parallel Benchmarks (NPB3.3-ACC-C) - MG Benchmark\n\n");
# 318 "openacc-npb/MG/MG/mg.c"
if((fp = (fopen("mg.input", "r"))) != ((void * )(0))) {
# 319 "openacc-npb/MG/MG/mg.c"
int result;
# 320 "openacc-npb/MG/MG/mg.c"
printf(" Reading from input file mg.input\n");
# 321 "openacc-npb/MG/MG/mg.c"
result = (__isoc99_fscanf(fp, "%d\n", &(lt)));
# 322 "openacc-npb/MG/MG/mg.c"
while((fgetc(fp)) != ((char)10)) {
{
}
}
# 323 "openacc-npb/MG/MG/mg.c"
result = (__isoc99_fscanf(fp, "%d%d%d", &(nx[lt]), &(ny[lt]), &(nz[lt])));
# 324 "openacc-npb/MG/MG/mg.c"
while((fgetc(fp)) != ((char)10)) {
{
}
}
# 325 "openacc-npb/MG/MG/mg.c"
result = (__isoc99_fscanf(fp, "%d", &(nit)));
# 326 "openacc-npb/MG/MG/mg.c"
while((fgetc(fp)) != ((char)10)) {
{
}
}
# 327 "openacc-npb/MG/MG/mg.c"
for(i = (0); i <= (7); i++) {
{
# 328 "openacc-npb/MG/MG/mg.c"
result = (__isoc99_fscanf(fp, "%d", &(debug_vec[i])));
}
}
# 330 "openacc-npb/MG/MG/mg.c"
fclose(fp);
}
else {
# 332 "openacc-npb/MG/MG/mg.c"
printf(" No input file. Using compiled defaults \n");
# 333 "openacc-npb/MG/MG/mg.c"
lt = (9);
# 334 "openacc-npb/MG/MG/mg.c"
nit = (20);
# 335 "openacc-npb/MG/MG/mg.c"
(nx[lt]) = (512);
# 336 "openacc-npb/MG/MG/mg.c"
(ny[lt]) = (512);
# 337 "openacc-npb/MG/MG/mg.c"
(nz[lt]) = (512);
# 339 "openacc-npb/MG/MG/mg.c"
for(i = (0); i <= (7); i++) {
{
# 340 "openacc-npb/MG/MG/mg.c"
(debug_vec[i]) = (0);
}
}
}
# 344 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) != (ny[lt])) || ((nx[lt]) != (nz[lt]))) {
# 345 "openacc-npb/MG/MG/mg.c"
Class = ((char)85);
}
else {
# 346 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (32)) && (nit == (4))) {
# 347 "openacc-npb/MG/MG/mg.c"
Class = ((char)83);
}
else {
# 348 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (128)) && (nit == (4))) {
# 349 "openacc-npb/MG/MG/mg.c"
Class = ((char)87);
}
else {
# 350 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (256)) && (nit == (4))) {
# 351 "openacc-npb/MG/MG/mg.c"
Class = ((char)65);
}
else {
# 352 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (256)) && (nit == (20))) {
# 353 "openacc-npb/MG/MG/mg.c"
Class = ((char)66);
}
else {
# 354 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (512)) && (nit == (20))) {
# 355 "openacc-npb/MG/MG/mg.c"
Class = ((char)67);
}
else {
# 356 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (1024)) && (nit == (50))) {
# 357 "openacc-npb/MG/MG/mg.c"
Class = ((char)68);
}
else {
# 358 "openacc-npb/MG/MG/mg.c"
if(((nx[lt]) == (2048)) && (nit == (50))) {
# 359 "openacc-npb/MG/MG/mg.c"
Class = ((char)69);
}
else {
# 361 "openacc-npb/MG/MG/mg.c"
Class = ((char)85);
}
}
}
}
}
}
}
}
# 377 "openacc-npb/MG/MG/mg.c"
(a[0]) = ((-(8.0)) / (3.0));
# 378 "openacc-npb/MG/MG/mg.c"
(a[1]) = (0.0);
# 379 "openacc-npb/MG/MG/mg.c"
(a[2]) = ((1.0) / (6.0));
# 380 "openacc-npb/MG/MG/mg.c"
(a[3]) = ((1.0) / (12.0));
# 382 "openacc-npb/MG/MG/mg.c"
if(((Class == ((char)65)) || (Class == ((char)83))) || (Class == ((char)87))) {
# 386 "openacc-npb/MG/MG/mg.c"
(c[0]) = ((-(3.0)) / (8.0));
# 387 "openacc-npb/MG/MG/mg.c"
(c[1]) = ((1.0) / (32.0));
# 388 "openacc-npb/MG/MG/mg.c"
(c[2]) = ((-(1.0)) / (64.0));
# 389 "openacc-npb/MG/MG/mg.c"
(c[3]) = (0.0);
}
else {
# 394 "openacc-npb/MG/MG/mg.c"
(c[0]) = ((-(3.0)) / (17.0));
# 395 "openacc-npb/MG/MG/mg.c"
(c[1]) = ((1.0) / (33.0));
# 396 "openacc-npb/MG/MG/mg.c"
(c[2]) = ((-(1.0)) / (61.0));
# 397 "openacc-npb/MG/MG/mg.c"
(c[3]) = (0.0);
}
# 399 "openacc-npb/MG/MG/mg.c"
lb = (1);
# 400 "openacc-npb/MG/MG/mg.c"
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
# 405 "openacc-npb/MG/MG/mg.c"
setup(&(n1), &(n2), &(n3));
# 406 "openacc-npb/MG/MG/mg.c"
zero3(u, n1, n2, n3);
# 407 "openacc-npb/MG/MG/mg.c"
zran3(v, n1, n2, n3, nx[lt], ny[lt], k);
# 409 "openacc-npb/MG/MG/mg.c"
norm2u3(v, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
# 411 "openacc-npb/MG/MG/mg.c"
printf(" Size: %4dx%4dx%4d  (class %c)\n", nx[lt], ny[lt], nz[lt], Class);
# 412 "openacc-npb/MG/MG/mg.c"
printf(" Iterations: %3d\n", nit);
# 413 "openacc-npb/MG/MG/mg.c"
printf("\n");
# 415 "openacc-npb/MG/MG/mg.c"
resid(u, v, r, n1, n2, n3, a, k);
# 416 "openacc-npb/MG/MG/mg.c"
norm2u3(r, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
# 417 "openacc-npb/MG/MG/mg.c"
old2 = rnm2;
# 418 "openacc-npb/MG/MG/mg.c"
oldu = rnmu;
# 423 "openacc-npb/MG/MG/mg.c"
mg3P(u, v, r, a, c, n1, n2, n3);
# 424 "openacc-npb/MG/MG/mg.c"
resid(u, v, r, n1, n2, n3, a, k);
# 425 "openacc-npb/MG/MG/mg.c"
setup(&(n1), &(n2), &(n3));
# 426 "openacc-npb/MG/MG/mg.c"
zero3(u, n1, n2, n3);
# 427 "openacc-npb/MG/MG/mg.c"
zran3(v, n1, n2, n3, nx[lt], ny[lt], k);
# 429 "openacc-npb/MG/MG/mg.c"
timer_stop(0);
# 430 "openacc-npb/MG/MG/mg.c"
tinit = (timer_read(0));
# 432 "openacc-npb/MG/MG/mg.c"
printf(" Initialization time: %15.3f seconds\n\n", tinit);
# 434 "openacc-npb/MG/MG/mg.c"
for(i = (1); i < (10); i++) {
{
# 435 "openacc-npb/MG/MG/mg.c"
timer_clear(i);
}
}
# 438 "openacc-npb/MG/MG/mg.c"
timer_start(1);
# 440 "openacc-npb/MG/MG/mg.c"
resid(u, v, r, n1, n2, n3, a, k);
# 441 "openacc-npb/MG/MG/mg.c"
norm2u3(r, n1, n2, n3, &(rnm2), &(rnmu), nx[lt], ny[lt], nz[lt]);
# 442 "openacc-npb/MG/MG/mg.c"
old2 = rnm2;
# 443 "openacc-npb/MG/MG/mg.c"
oldu = rnmu;
# 445 "openacc-npb/MG/MG/mg.c"
for(it = (1); it <= nit; it++) {
{
# 446 "openacc-npb/MG/MG/mg.c"
if(((it == (1)) || (it == nit)) || ((it % (100)) == (0))) {
# 447 "openacc-npb/MG/MG/mg.c"
printf("  iter %3d\n", it);
}
# 449 "openacc-npb/MG/MG/mg.c"
mg3P(u, v, r, a, c, n1, n2, n3);
# 450 "openacc-npb/MG/MG/mg.c"
resid(u, v, r, n1, n2, n3, a, k);
}
}
# 453 "openacc-npb/MG/MG/mg.c"
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
# 455 "openacc-npb/MG/MG/mg.c"
timer_stop(1);
# 457 "openacc-npb/MG/MG/mg.c"
t = (timer_read(1));
# 459 "openacc-npb/MG/MG/mg.c"
verified = false;
# 460 "openacc-npb/MG/MG/mg.c"
verify_value = (0.0);
# 462 "openacc-npb/MG/MG/mg.c"
printf("\n Benchmark completed\n");
# 464 "openacc-npb/MG/MG/mg.c"
epsilon = (1.0e-8);
# 465 "openacc-npb/MG/MG/mg.c"
if(Class != ((char)85)) {
# 466 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)83)) {
# 467 "openacc-npb/MG/MG/mg.c"
verify_value = (0.5307707005734e-04);
}
else {
# 468 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)87)) {
# 469 "openacc-npb/MG/MG/mg.c"
verify_value = (0.6467329375339e-05);
}
else {
# 470 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)65)) {
# 471 "openacc-npb/MG/MG/mg.c"
verify_value = (0.2433365309069e-05);
}
else {
# 472 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)66)) {
# 473 "openacc-npb/MG/MG/mg.c"
verify_value = (0.1800564401355e-05);
}
else {
# 474 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)67)) {
# 475 "openacc-npb/MG/MG/mg.c"
verify_value = (0.5706732285740e-06);
}
else {
# 476 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)68)) {
# 477 "openacc-npb/MG/MG/mg.c"
verify_value = (0.1583275060440e-09);
}
else {
# 478 "openacc-npb/MG/MG/mg.c"
if(Class == ((char)69)) {
# 479 "openacc-npb/MG/MG/mg.c"
verify_value = (0.8157592357404e-10);
}
}
}
}
}
}
}
# 482 "openacc-npb/MG/MG/mg.c"
err = ((__builtin_fabs(rnm2 - verify_value)) / verify_value);
# 484 "openacc-npb/MG/MG/mg.c"
if(err <= epsilon) {
# 485 "openacc-npb/MG/MG/mg.c"
verified = true;
# 486 "openacc-npb/MG/MG/mg.c"
printf(" VERIFICATION SUCCESSFUL\n");
# 487 "openacc-npb/MG/MG/mg.c"
printf(" L2 Norm is %20.13E\n", rnm2);
# 488 "openacc-npb/MG/MG/mg.c"
printf(" Error is   %20.13E\n", err);
}
else {
# 490 "openacc-npb/MG/MG/mg.c"
verified = false;
# 491 "openacc-npb/MG/MG/mg.c"
printf(" VERIFICATION FAILED\n");
# 492 "openacc-npb/MG/MG/mg.c"
printf(" L2 Norm is             %20.13E\n", rnm2);
# 493 "openacc-npb/MG/MG/mg.c"
printf(" The correct L2 Norm is %20.13E\n", verify_value);
}
}
else {
# 496 "openacc-npb/MG/MG/mg.c"
verified = false;
# 497 "openacc-npb/MG/MG/mg.c"
printf(" Problem size unknown\n");
# 498 "openacc-npb/MG/MG/mg.c"
printf(" NO VERIFICATION PERFORMED\n");
# 499 "openacc-npb/MG/MG/mg.c"
printf(" L2 Norm is %20.13E\n", rnm2);
}
# 502 "openacc-npb/MG/MG/mg.c"
nn = ((((1.0) * (nx[lt])) * (ny[lt])) * (nz[lt]));
# 504 "openacc-npb/MG/MG/mg.c"
if(t != (0.0)) {
# 505 "openacc-npb/MG/MG/mg.c"
mflops = (((((58.0) * nit) * nn) * (1.0e-6)) / t);
}
else {
# 507 "openacc-npb/MG/MG/mg.c"
mflops = (0.0);
}
# 510 "openacc-npb/MG/MG/mg.c"
print_results("MG", Class, nx[lt], ny[lt], nz[lt], nit, t, mflops, "          floating point", verified, "3.3.1", "17 Jan 2017", "icc", "icc", "-lm", "-I../common", "-O3 -mcmodel=medium", "-O3 -mcmodel=medium", "randdp");
# 519 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 520 "openacc-npb/MG/MG/mg.c"
tmax = (timer_read(1));
# 521 "openacc-npb/MG/MG/mg.c"
if(tmax == (0.0)) {
# 521 "openacc-npb/MG/MG/mg.c"
tmax = (1.0);
}
# 523 "openacc-npb/MG/MG/mg.c"
printf("  SECTION   Time (secs)\n");
# 524 "openacc-npb/MG/MG/mg.c"
for(i = (1); i < (10); i++) {
{
# 525 "openacc-npb/MG/MG/mg.c"
t = (timer_read(i));
# 526 "openacc-npb/MG/MG/mg.c"
if(i == (5)) {
# 527 "openacc-npb/MG/MG/mg.c"
t = ((timer_read(4)) - t);
# 528 "openacc-npb/MG/MG/mg.c"
printf("    --> %8s:%9.3f  (%6.2f%%)\n", "mg-resid", t, (t * (100.)) / tmax);
}
else {
# 530 "openacc-npb/MG/MG/mg.c"
printf("  %-8s:%9.3f  (%6.2f%%)\n", t_names[i], t, (t * (100.)) / tmax);
}
}
}
}
# 534 "openacc-npb/MG/MG/mg.c"
acc_shutdown(acc_device_default);
# 535 "openacc-npb/MG/MG/mg.c"
return 0;
}
}
}
# 539 "openacc-npb/MG/MG/mg.c"
static void setup(int * n1, int * n2, int * n3)
{
# 541 "openacc-npb/MG/MG/mg.c"
int k;
# 541 "openacc-npb/MG/MG/mg.c"
int j;
# 543 "openacc-npb/MG/MG/mg.c"
int ax;
# 543 "openacc-npb/MG/MG/mg.c"
int mi[11][3];
# 544 "openacc-npb/MG/MG/mg.c"
int ng[11][3];
# 546 "openacc-npb/MG/MG/mg.c"
(ng[lt][0]) = (nx[lt]);
# 547 "openacc-npb/MG/MG/mg.c"
(ng[lt][1]) = (ny[lt]);
# 548 "openacc-npb/MG/MG/mg.c"
(ng[lt][2]) = (nz[lt]);
# 549 "openacc-npb/MG/MG/mg.c"
for(k = (lt - (1)); k >= (1); k--) {
{
# 550 "openacc-npb/MG/MG/mg.c"
for(ax = (0); ax < (3); ax++) {
{
# 551 "openacc-npb/MG/MG/mg.c"
(ng[k][ax]) = ((ng[k + (1)][ax]) / (2));
}
}
}
}
# 554 "openacc-npb/MG/MG/mg.c"
for(k = lt; k >= (1); k--) {
{
# 555 "openacc-npb/MG/MG/mg.c"
(nx[k]) = (ng[k][0]);
# 556 "openacc-npb/MG/MG/mg.c"
(ny[k]) = (ng[k][1]);
# 557 "openacc-npb/MG/MG/mg.c"
(nz[k]) = (ng[k][2]);
}
}
# 560 "openacc-npb/MG/MG/mg.c"
for(k = lt; k >= (1); k--) {
{
# 561 "openacc-npb/MG/MG/mg.c"
for(ax = (0); ax < (3); ax++) {
{
# 562 "openacc-npb/MG/MG/mg.c"
(mi[k][ax]) = ((2) + (ng[k][ax]));
}
}
# 565 "openacc-npb/MG/MG/mg.c"
(m1[k]) = (mi[k][0]);
# 566 "openacc-npb/MG/MG/mg.c"
(m2[k]) = (mi[k][1]);
# 567 "openacc-npb/MG/MG/mg.c"
(m3[k]) = (mi[k][2]);
}
}
# 570 "openacc-npb/MG/MG/mg.c"
k = lt;
# 571 "openacc-npb/MG/MG/mg.c"
is1 = (((2) + (ng[k][0])) - (ng[lt][0]));
# 572 "openacc-npb/MG/MG/mg.c"
ie1 = ((1) + (ng[k][0]));
# 573 "openacc-npb/MG/MG/mg.c"
(*(n1)) = (((3) + ie1) - is1);
# 574 "openacc-npb/MG/MG/mg.c"
is2 = (((2) + (ng[k][1])) - (ng[lt][1]));
# 575 "openacc-npb/MG/MG/mg.c"
ie2 = ((1) + (ng[k][1]));
# 576 "openacc-npb/MG/MG/mg.c"
(*(n2)) = (((3) + ie2) - is2);
# 577 "openacc-npb/MG/MG/mg.c"
is3 = (((2) + (ng[k][2])) - (ng[lt][2]));
# 578 "openacc-npb/MG/MG/mg.c"
ie3 = ((1) + (ng[k][2]));
# 579 "openacc-npb/MG/MG/mg.c"
(*(n3)) = (((3) + ie3) - is3);
# 581 "openacc-npb/MG/MG/mg.c"
(ir[lt]) = (0);
# 582 "openacc-npb/MG/MG/mg.c"
for(j = (lt - (1)); j >= (1); j--) {
{
# 583 "openacc-npb/MG/MG/mg.c"
(ir[j]) = ((ir[j + (1)]) + ((((1) * (m1[j + (1)])) * (m2[j + (1)])) * (m3[j + (1)])));
}
}
# 586 "openacc-npb/MG/MG/mg.c"
if((debug_vec[1]) >= (1)) {
# 587 "openacc-npb/MG/MG/mg.c"
printf(" in setup, \n");
# 588 "openacc-npb/MG/MG/mg.c"
printf(" k  lt  nx  ny  nz  n1  n2  n3 is1 is2 is3 ie1 ie2 ie3\n");
# 589 "openacc-npb/MG/MG/mg.c"
printf("%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d%4d\n", k, lt, ng[k][0], ng[k][1], ng[k][2], *(n1), *(n2), *(n3), is1, is2, is3, ie1, ie2, ie3);
}
}
# 598 "openacc-npb/MG/MG/mg.c"
static void mg3P(double u[], double v[], double r[], double a[4], double c[4], int n1, int n2, int n3)
{
# 601 "openacc-npb/MG/MG/mg.c"
int j;
# 601 "openacc-npb/MG/MG/mg.c"
int k;
# 607 "openacc-npb/MG/MG/mg.c"
for(k = lt; k >= (lb + (1)); k--) {
{
# 608 "openacc-npb/MG/MG/mg.c"
j = (k - (1));
# 609 "openacc-npb/MG/MG/mg.c"
rprj3(&(r[ir[k]]), m1[k], m2[k], m3[k], &(r[ir[j]]), m1[j], m2[j], m3[j], k);
}
}
# 613 "openacc-npb/MG/MG/mg.c"
k = lb;
# 617 "openacc-npb/MG/MG/mg.c"
zero3(&(u[ir[k]]), m1[k], m2[k], m3[k]);
# 618 "openacc-npb/MG/MG/mg.c"
psinv(&(r[ir[k]]), &(u[ir[k]]), m1[k], m2[k], m3[k], c, k);
# 620 "openacc-npb/MG/MG/mg.c"
for(k = (lb + (1)); k <= (lt - (1)); k++) {
{
# 621 "openacc-npb/MG/MG/mg.c"
j = (k - (1));
# 626 "openacc-npb/MG/MG/mg.c"
zero3(&(u[ir[k]]), m1[k], m2[k], m3[k]);
# 627 "openacc-npb/MG/MG/mg.c"
interp(&(u[ir[j]]), m1[j], m2[j], m3[j], &(u[ir[k]]), m1[k], m2[k], m3[k], k);
# 632 "openacc-npb/MG/MG/mg.c"
resid(&(u[ir[k]]), &(r[ir[k]]), &(r[ir[k]]), m1[k], m2[k], m3[k], a, k);
# 637 "openacc-npb/MG/MG/mg.c"
psinv(&(r[ir[k]]), &(u[ir[k]]), m1[k], m2[k], m3[k], c, k);
}
}
# 640 "openacc-npb/MG/MG/mg.c"
j = (lt - (1));
# 641 "openacc-npb/MG/MG/mg.c"
k = lt;
# 642 "openacc-npb/MG/MG/mg.c"
interp(&(u[ir[j]]), m1[j], m2[j], m3[j], u, n1, n2, n3, k);
# 643 "openacc-npb/MG/MG/mg.c"
resid(u, v, r, n1, n2, n3, a, k);
# 644 "openacc-npb/MG/MG/mg.c"
psinv(r, u, n1, n2, n3, c, k);
}
# 659 "openacc-npb/MG/MG/mg.c"
static void psinv(double * restrict or, double * restrict ou, int n1, int n2, int n3, double c[4], int k)
{
# 665 "openacc-npb/MG/MG/mg.c"
int i3;
# 665 "openacc-npb/MG/MG/mg.c"
int i2;
# 665 "openacc-npb/MG/MG/mg.c"
int i1;
# 666 "openacc-npb/MG/MG/mg.c"
double c0;
# 666 "openacc-npb/MG/MG/mg.c"
double c1;
# 666 "openacc-npb/MG/MG/mg.c"
double c2;
# 669 "openacc-npb/MG/MG/mg.c"
double * restrict r1;
# 669 "openacc-npb/MG/MG/mg.c"
double * restrict r2;
# 671 "openacc-npb/MG/MG/mg.c"
c0 = (c[0]);
# 672 "openacc-npb/MG/MG/mg.c"
c1 = (c[1]);
# 673 "openacc-npb/MG/MG/mg.c"
c2 = (c[2]);
# 675 "openacc-npb/MG/MG/mg.c"
r1 = ((double * )(malloc(((n3 * n2) * n1) * (sizeof(double)))));
# 676 "openacc-npb/MG/MG/mg.c"
r2 = ((double * )(malloc(((n3 * n2) * n1) * (sizeof(double)))));
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_create(__macc_tnum, r1, sizeof(double), 0, (n3 * n2) * n1);
__macc_create(__macc_tnum, r2, sizeof(double), 0, (n3 * n2) * n1);
}
}
{
# 682 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 682 "openacc-npb/MG/MG/mg.c"
timer_start(3);
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_12) || ((n2 != __macc__n2_last_13) || (n3 != __macc__n3_last_14))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_12 = n1;
__macc__n2_last_13 = n2;
__macc__n3_last_14 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_10, __macc__i3_loop_ub_set_11, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_10[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_11[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__r1_use_lb_set_15, __macc__r1_use_ub_set_16);
__macc_init_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + n1);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20);
__macc_init_access_region(__macc_gpu_num, __macc__or_def_lb_set_21, __macc__or_def_ub_set_22);
{
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__r2_use_lb_set_23, __macc__r2_use_ub_set_24);
__macc_init_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + n1);
}
}
}
}
if((__macc_region_is_overlapping(__macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26)) || (__macc_region_is_overlapping(__macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_10, __macc__i3_loop_ub_set_11);
{
__macc_rewrite_data_region_into_single(__macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26);
__macc_rewrite_data_region_into_single(__macc__or_use_lb_set_19, __macc__or_use_ub_set_20);
__macc_rewrite_data_region_into_single(__macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, r2, __macc_multi, 1, __macc__r2_use_lb_set_23, __macc__r2_use_ub_set_24, 2, __macc__r2_def_lb_set_25, __macc__r2_def_ub_set_26);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc__or_use_lb_set_19, __macc__or_use_ub_set_20, 1, __macc__or_def_lb_set_21, __macc__or_def_ub_set_22);
__macc_set_data_region(__macc_tnum, r1, __macc_multi, 1, __macc__r1_use_lb_set_15, __macc__r1_use_ub_set_16, 2, __macc__r1_def_lb_set_17, __macc__r1_def_ub_set_18);
}
#pragma omp barrier
#pragma acc parallel present ( r1 , r2 , ou , or )
#pragma acc loop
# 685 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_10[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_11[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 687 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 689 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 696 "openacc-npb/MG/MG/mg.c"
(r1[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((or[((((i3 * n2) * n1) + ((i2 - (1)) * n1)) + i1)]) + (or[((((i3 * n2) * n1) + ((i2 + (1)) * n1)) + i1)])) + (or[(((((i3 - (1)) * n2) * n1) + (i2 * n1)) + i1)])) + (or[(((((i3 + (1)) * n2) * n1) + (i2 * n1)) + i1)]));
# 698 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_29) || ((n2 != __macc__n2_last_30) || (n3 != __macc__n3_last_31))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_29 = n1;
__macc__n2_last_30 = n2;
__macc__n3_last_31 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_27, __macc__i3_loop_ub_set_28, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_27[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_28[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37);
__macc_init_access_region(__macc_gpu_num, __macc__or_def_lb_set_38, __macc__or_def_ub_set_39);
{
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41);
__macc_init_access_region(__macc_gpu_num, __macc__r1_def_lb_set_42, __macc__r1_def_ub_set_43);
{
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45);
__macc_init_access_region(__macc_gpu_num, __macc__r2_def_lb_set_46, __macc__r2_def_ub_set_47);
{
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_27, __macc__i3_loop_ub_set_28);
{
__macc_rewrite_data_region_into_single(__macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45);
__macc_rewrite_data_region_into_single(__macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41);
__macc_rewrite_data_region_into_single(__macc__or_use_lb_set_36, __macc__or_use_ub_set_37);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, r2, __macc_multi, 2, __macc__r2_use_lb_set_44, __macc__r2_use_ub_set_45, 1, __macc__r2_def_lb_set_46, __macc__r2_def_ub_set_47);
__macc_set_data_region(__macc_tnum, r1, __macc_multi, 2, __macc__r1_use_lb_set_40, __macc__r1_use_ub_set_41, 1, __macc__r1_def_lb_set_42, __macc__r1_def_ub_set_43);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc__or_use_lb_set_36, __macc__or_use_ub_set_37, 1, __macc__or_def_lb_set_38, __macc__or_def_ub_set_39);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_32, __macc__ou_use_ub_set_33, 2, __macc__ou_def_lb_set_34, __macc__ou_def_ub_set_35);
}
#pragma omp barrier
#pragma acc parallel present ( r1 , r2 , ou , or )
#pragma acc loop
# 705 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_27[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_28[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 707 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 709 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 717 "openacc-npb/MG/MG/mg.c"
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
__macc_delete(__macc_tnum, r1, sizeof(double), 0, (n3 * n2) * n1);
__macc_delete(__macc_tnum, r2, sizeof(double), 0, (n3 * n2) * n1);
}
}
}
# 736 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 736 "openacc-npb/MG/MG/mg.c"
timer_stop(3);
}
# 737 "openacc-npb/MG/MG/mg.c"
free(r1);
# 738 "openacc-npb/MG/MG/mg.c"
free(r2);
# 744 "openacc-npb/MG/MG/mg.c"
comm3(ou, n1, n2, n3, k);
# 746 "openacc-npb/MG/MG/mg.c"
if((debug_vec[0]) >= (1)) {
# 748 "openacc-npb/MG/MG/mg.c"
rep_nrm(ou, n1, n2, n3, "   psinv", k);
}
# 751 "openacc-npb/MG/MG/mg.c"
if((debug_vec[3]) >= k) {
# 753 "openacc-npb/MG/MG/mg.c"
showall(ou, n1, n2, n3);
}
}
# 770 "openacc-npb/MG/MG/mg.c"
static void resid(double * ou, double * ov, double * or, int n1, int n2, int n3, double a[4], int k)
{
# 778 "openacc-npb/MG/MG/mg.c"
int i3;
# 778 "openacc-npb/MG/MG/mg.c"
int i2;
# 778 "openacc-npb/MG/MG/mg.c"
int i1;
# 779 "openacc-npb/MG/MG/mg.c"
double a0;
# 779 "openacc-npb/MG/MG/mg.c"
double a2;
# 779 "openacc-npb/MG/MG/mg.c"
double a3;
# 781 "openacc-npb/MG/MG/mg.c"
double * restrict u1;
# 781 "openacc-npb/MG/MG/mg.c"
double * restrict u2;
# 783 "openacc-npb/MG/MG/mg.c"
a0 = (a[0]);
# 784 "openacc-npb/MG/MG/mg.c"
a2 = (a[2]);
# 785 "openacc-npb/MG/MG/mg.c"
a3 = (a[3]);
# 787 "openacc-npb/MG/MG/mg.c"
u1 = ((double * )(malloc(((n3 * n2) * n1) * (sizeof(double)))));
# 788 "openacc-npb/MG/MG/mg.c"
u2 = ((double * )(malloc(((n3 * n2) * n1) * (sizeof(double)))));
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_create(__macc_tnum, u1, sizeof(double), 0, (n3 * n2) * n1);
__macc_create(__macc_tnum, u2, sizeof(double), 0, (n3 * n2) * n1);
}
}
{
# 795 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 795 "openacc-npb/MG/MG/mg.c"
timer_start(4);
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_50) || ((n2 != __macc__n2_last_51) || (n3 != __macc__n3_last_52))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_50 = n1;
__macc__n2_last_51 = n2;
__macc__n3_last_52 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_48, __macc__i3_loop_ub_set_49, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_48[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_49[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__u1_use_lb_set_53, __macc__u1_use_ub_set_54);
__macc_init_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + n1);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_59, __macc__ou_def_ub_set_60);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub + (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_lb - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, ((((__macc_top_loop_ub - (1)) * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((1) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) + (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_lb * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((1) - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, (((__macc_top_loop_ub * n2) * n1) + (((n2 - (1)) - (1)) * n1)) + n1);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__u2_use_lb_set_61, __macc__u2_use_ub_set_62);
__macc_init_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + n1);
}
}
}
}
if((__macc_region_is_overlapping(__macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64)) || (__macc_region_is_overlapping(__macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_48, __macc__i3_loop_ub_set_49);
{
__macc_rewrite_data_region_into_single(__macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58);
__macc_rewrite_data_region_into_single(__macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, u2, __macc_multi, 1, __macc__u2_use_lb_set_61, __macc__u2_use_ub_set_62, 2, __macc__u2_def_lb_set_63, __macc__u2_def_ub_set_64);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_57, __macc__ou_use_ub_set_58, 1, __macc__ou_def_lb_set_59, __macc__ou_def_ub_set_60);
__macc_set_data_region(__macc_tnum, u1, __macc_multi, 1, __macc__u1_use_lb_set_53, __macc__u1_use_ub_set_54, 2, __macc__u1_def_lb_set_55, __macc__u1_def_ub_set_56);
}
#pragma omp barrier
#pragma acc parallel present ( u1 , u2 , ou , ov , or )
#pragma acc loop gang
# 800 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_48[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_49[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 802 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 804 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 811 "openacc-npb/MG/MG/mg.c"
(u1[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = ((((ou[((((i3 * n2) * n1) + ((i2 - (1)) * n1)) + i1)]) + (ou[((((i3 * n2) * n1) + ((i2 + (1)) * n1)) + i1)])) + (ou[(((((i3 - (1)) * n2) * n1) + (i2 * n1)) + i1)])) + (ou[(((((i3 + (1)) * n2) * n1) + (i2 * n1)) + i1)]));
# 813 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_67) || ((n2 != __macc__n2_last_68) || (n3 != __macc__n3_last_69))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_67 = n1;
__macc__n2_last_68 = n2;
__macc__n3_last_69 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_65, __macc__i3_loop_ub_set_66, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_65[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_66[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__or_use_lb_set_70, __macc__or_use_ub_set_71);
__macc_init_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75);
__macc_init_access_region(__macc_gpu_num, __macc__ov_def_lb_set_76, __macc__ov_def_ub_set_77);
{
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_80, __macc__ou_def_ub_set_81);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83);
__macc_init_access_region(__macc_gpu_num, __macc__u2_def_lb_set_84, __macc__u2_def_ub_set_85);
{
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87);
__macc_init_access_region(__macc_gpu_num, __macc__u1_def_lb_set_88, __macc__u1_def_ub_set_89);
{
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + ((n1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + ((n1 - (1)) - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__or_def_lb_set_72, __macc__or_def_ub_set_73)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_65, __macc__i3_loop_ub_set_66);
{
__macc_rewrite_data_region_into_single(__macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87);
__macc_rewrite_data_region_into_single(__macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79);
__macc_rewrite_data_region_into_single(__macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75);
__macc_rewrite_data_region_into_single(__macc__or_def_lb_set_72, __macc__or_def_ub_set_73);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, u1, __macc_multi, 2, __macc__u1_use_lb_set_86, __macc__u1_use_ub_set_87, 1, __macc__u1_def_lb_set_88, __macc__u1_def_ub_set_89);
__macc_set_data_region(__macc_tnum, u2, __macc_multi, 2, __macc__u2_use_lb_set_82, __macc__u2_use_ub_set_83, 1, __macc__u2_def_lb_set_84, __macc__u2_def_ub_set_85);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_78, __macc__ou_use_ub_set_79, 1, __macc__ou_def_lb_set_80, __macc__ou_def_ub_set_81);
__macc_set_data_region(__macc_tnum, ov, __macc_multi, 2, __macc__ov_use_lb_set_74, __macc__ov_use_ub_set_75, 1, __macc__ov_def_lb_set_76, __macc__ov_def_ub_set_77);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 1, __macc__or_use_lb_set_70, __macc__or_use_ub_set_71, 2, __macc__or_def_lb_set_72, __macc__or_def_ub_set_73);
}
#pragma omp barrier
#pragma acc parallel present ( u1 , u2 , ou , ov , or )
#pragma acc loop gang
# 823 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_65[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_66[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 825 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 827 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 832 "openacc-npb/MG/MG/mg.c"
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
__macc_delete(__macc_tnum, u1, sizeof(double), 0, (n3 * n2) * n1);
__macc_delete(__macc_tnum, u2, sizeof(double), 0, (n3 * n2) * n1);
}
}
}
# 852 "openacc-npb/MG/MG/mg.c"
free(u1);
# 853 "openacc-npb/MG/MG/mg.c"
free(u2);
# 854 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 854 "openacc-npb/MG/MG/mg.c"
timer_stop(4);
}
# 860 "openacc-npb/MG/MG/mg.c"
comm3(or, n1, n2, n3, k);
# 862 "openacc-npb/MG/MG/mg.c"
if((debug_vec[0]) >= (1)) {
# 864 "openacc-npb/MG/MG/mg.c"
rep_nrm(or, n1, n2, n3, "   resid", k);
}
# 867 "openacc-npb/MG/MG/mg.c"
if((debug_vec[2]) >= k) {
# 869 "openacc-npb/MG/MG/mg.c"
showall(or, n1, n2, n3);
}
}
# 883 "openacc-npb/MG/MG/mg.c"
static void rprj3(double * or, int m1k, int m2k, int m3k, double * os, int m1j, int m2j, int m3j, int k)
{
# 890 "openacc-npb/MG/MG/mg.c"
int j3;
# 890 "openacc-npb/MG/MG/mg.c"
int j2;
# 890 "openacc-npb/MG/MG/mg.c"
int j1;
# 890 "openacc-npb/MG/MG/mg.c"
int i3;
# 890 "openacc-npb/MG/MG/mg.c"
int i2;
# 890 "openacc-npb/MG/MG/mg.c"
int i1;
# 890 "openacc-npb/MG/MG/mg.c"
int d1;
# 890 "openacc-npb/MG/MG/mg.c"
int d2;
# 890 "openacc-npb/MG/MG/mg.c"
int d3;
# 890 "openacc-npb/MG/MG/mg.c"
int j;
# 893 "openacc-npb/MG/MG/mg.c"
double * x1;
# 893 "openacc-npb/MG/MG/mg.c"
double * y1;
# 893 "openacc-npb/MG/MG/mg.c"
double x2;
# 893 "openacc-npb/MG/MG/mg.c"
double y2;
# 894 "openacc-npb/MG/MG/mg.c"
x1 = ((double * )(malloc(((m3k * m2k) * m1k) * (sizeof(double)))));
# 895 "openacc-npb/MG/MG/mg.c"
y1 = ((double * )(malloc(((m3k * m2k) * m1k) * (sizeof(double)))));
# 897 "openacc-npb/MG/MG/mg.c"
if(m1k == (3)) {
# 898 "openacc-npb/MG/MG/mg.c"
d1 = (2);
}
else {
# 900 "openacc-npb/MG/MG/mg.c"
d1 = (1);
}
# 903 "openacc-npb/MG/MG/mg.c"
if(m2k == (3)) {
# 904 "openacc-npb/MG/MG/mg.c"
d2 = (2);
}
else {
# 906 "openacc-npb/MG/MG/mg.c"
d2 = (1);
}
# 909 "openacc-npb/MG/MG/mg.c"
if(m3k == (3)) {
# 910 "openacc-npb/MG/MG/mg.c"
d3 = (2);
}
else {
# 912 "openacc-npb/MG/MG/mg.c"
d3 = (1);
}
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_create(__macc_tnum, x1, sizeof(double), 0, (m3k * m2k) * m1k);
__macc_create(__macc_tnum, y1, sizeof(double), 0, (m3k * m2k) * m1k);
}
}
{
# 919 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 919 "openacc-npb/MG/MG/mg.c"
timer_start(6);
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((d1 != __macc__d1_last_92) || ((m1k != __macc__m1k_last_93) || ((m2k != __macc__m2k_last_94) || ((d2 != __macc__d2_last_95) || ((d3 != __macc__d3_last_96) || (m3j != __macc__m3j_last_97)))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__d1_last_92 = d1;
__macc__m1k_last_93 = m1k;
__macc__m2k_last_94 = m2k;
__macc__d2_last_95 = d2;
__macc__d3_last_96 = d3;
__macc__m3j_last_97 = m3j;
}
{
__macc_calc_loop_region(__macc__j3_loop_lb_set_90, __macc__j3_loop_ub_set_91, 1, m3j - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j3_loop_lb_set_90[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j3_loop_ub_set_91[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__x1_use_lb_set_98, __macc__x1_use_ub_set_99);
__macc_init_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103);
__macc_init_access_region(__macc_gpu_num, __macc__or_def_lb_set_104, __macc__or_def_ub_set_105);
{
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__y1_use_lb_set_106, __macc__y1_use_ub_set_107);
__macc_init_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * m1j) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * m1j) - d1));
}
}
}
}
if((__macc_region_is_overlapping(__macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109)) || (__macc_region_is_overlapping(__macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j3_loop_lb_set_90, __macc__j3_loop_ub_set_91);
{
__macc_rewrite_data_region_into_single(__macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109);
__macc_rewrite_data_region_into_single(__macc__or_use_lb_set_102, __macc__or_use_ub_set_103);
__macc_rewrite_data_region_into_single(__macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j3 , j2 , j1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, y1, __macc_multi, 1, __macc__y1_use_lb_set_106, __macc__y1_use_ub_set_107, 2, __macc__y1_def_lb_set_108, __macc__y1_def_ub_set_109);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc__or_use_lb_set_102, __macc__or_use_ub_set_103, 1, __macc__or_def_lb_set_104, __macc__or_def_ub_set_105);
__macc_set_data_region(__macc_tnum, x1, __macc_multi, 1, __macc__x1_use_lb_set_98, __macc__x1_use_ub_set_99, 2, __macc__x1_def_lb_set_100, __macc__x1_def_ub_set_101);
}
#pragma omp barrier
#pragma acc parallel present ( x1 , y1 , or , os )
#pragma acc loop
# 921 "openacc-npb/MG/MG/mg.c"
for(j3 = (__macc__j3_loop_lb_set_90[__macc_tnum]); j3 <= (__macc__j3_loop_ub_set_91[__macc_tnum]); j3++) {
{
# 922 "openacc-npb/MG/MG/mg.c"
i3 = (((2) * j3) - d3);
#pragma acc loop worker
# 924 "openacc-npb/MG/MG/mg.c"
for(j2 = (1); j2 < (m2j - (1)); j2++) {
{
# 925 "openacc-npb/MG/MG/mg.c"
i2 = (((2) * j2) - d2);
#pragma acc loop vector
# 927 "openacc-npb/MG/MG/mg.c"
for(j1 = (1); j1 < m1j; j1++) {
{
# 928 "openacc-npb/MG/MG/mg.c"
i1 = (((2) * j1) - d1);
# 935 "openacc-npb/MG/MG/mg.c"
(x1[((((i3 * m2k) * m1k) + (i2 * m1k)) + i1)]) = ((((or[(((((i3 + (1)) * m2k) * m1k) + (i2 * m1k)) + i1)]) + (or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + i1)])) + (or[((((i3 * m2k) * m1k) + ((i2 + (1)) * m1k)) + i1)])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + i1)]));
# 937 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((m1k != __macc__m1k_last_112) || ((d1 != __macc__d1_last_113) || ((m2k != __macc__m2k_last_114) || ((d2 != __macc__d2_last_115) || ((d3 != __macc__d3_last_116) || ((m1j != __macc__m1j_last_117) || ((m2j != __macc__m2j_last_118) || (m3j != __macc__m3j_last_119)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__m1k_last_112 = m1k;
__macc__d1_last_113 = d1;
__macc__m2k_last_114 = m2k;
__macc__d2_last_115 = d2;
__macc__d3_last_116 = d3;
__macc__m1j_last_117 = m1j;
__macc__m2j_last_118 = m2j;
__macc__m3j_last_119 = m3j;
}
{
__macc_calc_loop_region(__macc__j3_loop_lb_set_110, __macc__j3_loop_ub_set_111, 1, m3j - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__j3_loop_lb_set_110[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__j3_loop_ub_set_111[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121);
__macc_init_access_region(__macc_gpu_num, __macc__or_def_lb_set_122, __macc__or_def_ub_set_123);
{
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (1)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (1)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (1)) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + (((((2) * (m2j - (1))) - d2) + (2)) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_lb) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, (((((((2) * __macc_top_loop_ub) - d3) + (2)) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (1)));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__os_use_lb_set_124, __macc__os_use_ub_set_125);
__macc_init_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_lb * m2j) * m1j) + ((1) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_lb * m2j) * m1j) + ((1) * m1j)) + (m1j - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_lb * m2j) * m1j) + ((m2j - (1)) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_lb * m2j) * m1j) + ((m2j - (1)) * m1j)) + (m1j - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_ub * m2j) * m1j) + ((1) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_ub * m2j) * m1j) + ((1) * m1j)) + (m1j - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_ub * m2j) * m1j) + ((m2j - (1)) * m1j)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127, (((__macc_top_loop_ub * m2j) * m1j) + ((m2j - (1)) * m1j)) + (m1j - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129);
__macc_init_access_region(__macc_gpu_num, __macc__x1_def_lb_set_130, __macc__x1_def_ub_set_131);
{
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133);
__macc_init_access_region(__macc_gpu_num, __macc__y1_def_lb_set_134, __macc__y1_def_ub_set_135);
{
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (1)) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + ((((2) * (m1j - (1))) - d1) + (2)));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_lb) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (1)) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (1)) - d1));
__macc_update_access_region(__macc_gpu_num, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, ((((((2) * __macc_top_loop_ub) - d3) * m2k) * m1k) + ((((2) * (m2j - (1))) - d2) * m1k)) + (((2) * (m1j - (1))) - d1));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__os_def_lb_set_126, __macc__os_def_ub_set_127)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__j3_loop_lb_set_110, __macc__j3_loop_ub_set_111);
{
__macc_rewrite_data_region_into_single(__macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133);
__macc_rewrite_data_region_into_single(__macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129);
__macc_rewrite_data_region_into_single(__macc__os_def_lb_set_126, __macc__os_def_ub_set_127);
__macc_rewrite_data_region_into_single(__macc__or_use_lb_set_120, __macc__or_use_ub_set_121);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( j3 , j2 , j1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, y1, __macc_multi, 2, __macc__y1_use_lb_set_132, __macc__y1_use_ub_set_133, 1, __macc__y1_def_lb_set_134, __macc__y1_def_ub_set_135);
__macc_set_data_region(__macc_tnum, x1, __macc_multi, 2, __macc__x1_use_lb_set_128, __macc__x1_use_ub_set_129, 1, __macc__x1_def_lb_set_130, __macc__x1_def_ub_set_131);
__macc_set_data_region(__macc_tnum, os, __macc_multi, 1, __macc__os_use_lb_set_124, __macc__os_use_ub_set_125, 2, __macc__os_def_lb_set_126, __macc__os_def_ub_set_127);
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc__or_use_lb_set_120, __macc__or_use_ub_set_121, 1, __macc__or_def_lb_set_122, __macc__or_def_ub_set_123);
}
#pragma omp barrier
#pragma acc parallel present ( x1 , y1 , or , os )
#pragma acc loop
# 944 "openacc-npb/MG/MG/mg.c"
for(j3 = (__macc__j3_loop_lb_set_110[__macc_tnum]); j3 <= (__macc__j3_loop_ub_set_111[__macc_tnum]); j3++) {
{
# 945 "openacc-npb/MG/MG/mg.c"
i3 = (((2) * j3) - d3);
#pragma acc loop worker
# 947 "openacc-npb/MG/MG/mg.c"
for(j2 = (1); j2 < (m2j - (1)); j2++) {
{
# 948 "openacc-npb/MG/MG/mg.c"
i2 = (((2) * j2) - d2);
#pragma acc loop vector
# 950 "openacc-npb/MG/MG/mg.c"
for(j1 = (1); j1 < (m1j - (1)); j1++) {
{
# 951 "openacc-npb/MG/MG/mg.c"
i1 = (((2) * j1) - d1);
# 963 "openacc-npb/MG/MG/mg.c"
y2 = ((((or[((((i3 * m2k) * m1k) + (i2 * m1k)) + (i1 + (1)))]) + (or[(((((i3 + (2)) * m2k) * m1k) + (i2 * m1k)) + (i1 + (1)))])) + (or[((((i3 * m2k) * m1k) + ((i2 + (2)) * m1k)) + (i1 + (1)))])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + (i1 + (1)))]));
# 965 "openacc-npb/MG/MG/mg.c"
x2 = ((((or[(((((i3 + (1)) * m2k) * m1k) + (i2 * m1k)) + (i1 + (1)))]) + (or[(((((i3 + (1)) * m2k) * m1k) + ((i2 + (2)) * m1k)) + (i1 + (1)))])) + (or[((((i3 * m2k) * m1k) + ((i2 + (1)) * m1k)) + (i1 + (1)))])) + (or[(((((i3 + (2)) * m2k) * m1k) + ((i2 + (1)) * m1k)) + (i1 + (1)))]));
# 967 "openacc-npb/MG/MG/mg.c"
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
__macc_delete(__macc_tnum, x1, sizeof(double), 0, (m3k * m2k) * m1k);
__macc_delete(__macc_tnum, y1, sizeof(double), 0, (m3k * m2k) * m1k);
}
}
}
# 976 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 976 "openacc-npb/MG/MG/mg.c"
timer_stop(6);
}
# 978 "openacc-npb/MG/MG/mg.c"
j = (k - (1));
# 980 "openacc-npb/MG/MG/mg.c"
comm3(os, m1j, m2j, m3j, j);
# 982 "openacc-npb/MG/MG/mg.c"
if((debug_vec[0]) >= (1)) {
# 984 "openacc-npb/MG/MG/mg.c"
rep_nrm(os, m1j, m2j, m3j, "   rprj3", k - (1));
}
# 987 "openacc-npb/MG/MG/mg.c"
if((debug_vec[4]) >= k) {
# 989 "openacc-npb/MG/MG/mg.c"
showall(os, m1j, m2j, m3j);
}
# 991 "openacc-npb/MG/MG/mg.c"
free(x1);
# 992 "openacc-npb/MG/MG/mg.c"
free(y1);
}
# 1006 "openacc-npb/MG/MG/mg.c"
static void interp(double * oz, int mm1, int mm2, int mm3, double * ou, int n1, int n2, int n3, int k)
{
# 1013 "openacc-npb/MG/MG/mg.c"
int i3;
# 1013 "openacc-npb/MG/MG/mg.c"
int i2;
# 1013 "openacc-npb/MG/MG/mg.c"
int i1;
# 1013 "openacc-npb/MG/MG/mg.c"
int d1;
# 1013 "openacc-npb/MG/MG/mg.c"
int d2;
# 1013 "openacc-npb/MG/MG/mg.c"
int d3;
# 1013 "openacc-npb/MG/MG/mg.c"
int t1;
# 1013 "openacc-npb/MG/MG/mg.c"
int t2;
# 1013 "openacc-npb/MG/MG/mg.c"
int t3;
# 1020 "openacc-npb/MG/MG/mg.c"
static double * z1;
# 1020 "openacc-npb/MG/MG/mg.c"
static double * z2;
# 1020 "openacc-npb/MG/MG/mg.c"
static double * z3;
# 1023 "openacc-npb/MG/MG/mg.c"
z1 = ((double * )(malloc(((mm3 * mm2) * mm1) * (sizeof(double)))));
# 1024 "openacc-npb/MG/MG/mg.c"
z2 = ((double * )(malloc(((mm3 * mm2) * mm1) * (sizeof(double)))));
# 1025 "openacc-npb/MG/MG/mg.c"
z3 = ((double * )(malloc(((mm3 * mm2) * mm1) * (sizeof(double)))));
{
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
__macc_create(__macc_tnum, z1, sizeof(double), 0, (mm3 * mm2) * mm1);
__macc_create(__macc_tnum, z2, sizeof(double), 0, (mm3 * mm2) * mm1);
__macc_create(__macc_tnum, z3, sizeof(double), 0, (mm3 * mm2) * mm1);
}
}
{
# 1031 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 1031 "openacc-npb/MG/MG/mg.c"
timer_start(7);
}
# 1035 "openacc-npb/MG/MG/mg.c"
if(((n1 != (3)) && (n2 != (3))) && (n3 != (3))) {
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((mm1 != __macc__mm1_last_174) || ((mm2 != __macc__mm2_last_175) || (mm3 != __macc__mm3_last_176))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__mm1_last_174 = mm1;
__macc__mm2_last_175 = mm2;
__macc__mm3_last_176 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_172, __macc__i3_loop_ub_set_173, 0, mm3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_172[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_173[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178);
__macc_init_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180);
{
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_183, __macc__oz_def_ub_set_184);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((0) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_lb + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, ((((__macc_top_loop_ub + (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + (((0) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + (((0) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + (((0) + (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) + (1)) * mm1)) + mm1);
}
{
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z2_use_lb_set_185, __macc__z2_use_ub_set_186);
__macc_init_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z3_use_lb_set_189, __macc__z3_use_ub_set_190);
__macc_init_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + mm1);
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + mm1);
}
}
}
}
if((__macc_region_is_overlapping(__macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192)) || ((__macc_region_is_overlapping(__macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188)) || (__macc_region_is_overlapping(__macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180)))) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_172, __macc__i3_loop_ub_set_173);
{
__macc_rewrite_data_region_into_single(__macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192);
__macc_rewrite_data_region_into_single(__macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188);
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182);
__macc_rewrite_data_region_into_single(__macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178);
__macc_rewrite_data_region_into_single(__macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z3, __macc_multi, 1, __macc__z3_use_lb_set_189, __macc__z3_use_ub_set_190, 2, __macc__z3_def_lb_set_191, __macc__z3_def_ub_set_192);
__macc_set_data_region(__macc_tnum, z2, __macc_multi, 1, __macc__z2_use_lb_set_185, __macc__z2_use_ub_set_186, 2, __macc__z2_def_lb_set_187, __macc__z2_def_ub_set_188);
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_181, __macc__oz_use_ub_set_182, 1, __macc__oz_def_lb_set_183, __macc__oz_def_ub_set_184);
__macc_set_data_region(__macc_tnum, z1, __macc_multi, 2, __macc__z1_use_lb_set_177, __macc__z1_use_ub_set_178, 2, __macc__z1_def_lb_set_179, __macc__z1_def_ub_set_180);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1038 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_172[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_173[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1040 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1042 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < mm1; i1++) {
{
# 1048 "openacc-npb/MG/MG/mg.c"
(z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) = ((oz[((((i3 * mm2) * mm1) + ((i2 + (1)) * mm1)) + i1)]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
# 1050 "openacc-npb/MG/MG/mg.c"
(z2[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]) = ((oz[(((((i3 + (1)) * mm2) * mm1) + (i2 * mm1)) + i1)]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
# 1052 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_195) || ((n2 != __macc__n2_last_196) || ((mm1 != __macc__mm1_last_197) || ((mm2 != __macc__mm2_last_198) || (mm3 != __macc__mm3_last_199))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_195 = n1;
__macc__n2_last_196 = n2;
__macc__mm1_last_197 = mm1;
__macc__mm2_last_198 = mm2;
__macc__mm3_last_199 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_193, __macc__i3_loop_ub_set_194, 0, mm3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_193[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_194[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_lb) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203, (((((2) * __macc_top_loop_ub) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_206, __macc__oz_def_ub_set_207);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_193, __macc__i3_loop_ub_set_194);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_204, __macc__oz_use_ub_set_205, 1, __macc__oz_def_lb_set_206, __macc__oz_def_ub_set_207);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_200, __macc__ou_use_ub_set_201, 2, __macc__ou_def_lb_set_202, __macc__ou_def_ub_set_203);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1060 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_193[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_194[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1062 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1064 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1071 "openacc-npb/MG/MG/mg.c"
(ou[((((((2) * i3) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) = ((ou[((((((2) * i3) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) + (oz[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)]));
# 1073 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_210) || ((n2 != __macc__n2_last_211) || ((mm1 != __macc__mm1_last_212) || ((mm2 != __macc__mm2_last_213) || (mm3 != __macc__mm3_last_214))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_210 = n1;
__macc__n2_last_211 = n2;
__macc__mm1_last_212 = mm1;
__macc__mm2_last_213 = mm2;
__macc__mm3_last_214 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_208, __macc__i3_loop_ub_set_209, 0, mm3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_208[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_209[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_lb) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218, (((((2) * __macc_top_loop_ub) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220);
__macc_init_access_region(__macc_gpu_num, __macc__z1_def_lb_set_221, __macc__z1_def_ub_set_222);
{
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_208, __macc__i3_loop_ub_set_209);
{
__macc_rewrite_data_region_into_single(__macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z1, __macc_multi, 2, __macc__z1_use_lb_set_219, __macc__z1_use_ub_set_220, 1, __macc__z1_def_lb_set_221, __macc__z1_def_ub_set_222);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_215, __macc__ou_use_ub_set_216, 2, __macc__ou_def_lb_set_217, __macc__ou_def_ub_set_218);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1081 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_208[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_209[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1083 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1085 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1092 "openacc-npb/MG/MG/mg.c"
(ou[((((((2) * i3) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) = ((ou[((((((2) * i3) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) + ((0.5) * (z1[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)])));
# 1094 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_225) || ((n2 != __macc__n2_last_226) || ((mm1 != __macc__mm1_last_227) || ((mm2 != __macc__mm2_last_228) || (mm3 != __macc__mm3_last_229))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_225 = n1;
__macc__n2_last_226 = n2;
__macc__mm1_last_227 = mm1;
__macc__mm2_last_228 = mm2;
__macc__mm3_last_229 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_223, __macc__i3_loop_ub_set_224, 0, mm3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_223[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_224[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (0)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + (((2) * (mm2 - (1))) * n1)) + ((2) * (mm1 - (1))));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235);
__macc_init_access_region(__macc_gpu_num, __macc__z2_def_lb_set_236, __macc__z2_def_ub_set_237);
{
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_223, __macc__i3_loop_ub_set_224);
{
__macc_rewrite_data_region_into_single(__macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z2, __macc_multi, 2, __macc__z2_use_lb_set_234, __macc__z2_use_ub_set_235, 1, __macc__z2_def_lb_set_236, __macc__z2_def_ub_set_237);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_230, __macc__ou_use_ub_set_231, 2, __macc__ou_def_lb_set_232, __macc__ou_def_ub_set_233);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1101 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_223[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_224[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1103 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1105 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1112 "openacc-npb/MG/MG/mg.c"
(ou[(((((((2) * i3) + (1)) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) = ((ou[(((((((2) * i3) + (1)) * n2) * n1) + (((2) * i2) * n1)) + ((2) * i1))]) + ((0.5) * (z2[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)])));
# 1114 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_240) || ((n2 != __macc__n2_last_241) || ((mm1 != __macc__mm1_last_242) || ((mm2 != __macc__mm2_last_243) || (mm3 != __macc__mm3_last_244))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_240 = n1;
__macc__n2_last_241 = n2;
__macc__mm1_last_242 = mm1;
__macc__mm2_last_243 = mm2;
__macc__mm3_last_244 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_238, __macc__i3_loop_ub_set_239, 0, mm3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_238[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_239[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (0)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + (((2) * (mm1 - (1))) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_lb) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (0)) + (1)) * n1)) + ((2) * (mm1 - (1))));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (0)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248, ((((((2) * __macc_top_loop_ub) + (1)) * n2) * n1) + ((((2) * (mm2 - (1))) + (1)) * n1)) + ((2) * (mm1 - (1))));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250);
__macc_init_access_region(__macc_gpu_num, __macc__z3_def_lb_set_251, __macc__z3_def_ub_set_252);
{
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((0) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) + (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((0) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_238, __macc__i3_loop_ub_set_239);
{
__macc_rewrite_data_region_into_single(__macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, z3, __macc_multi, 2, __macc__z3_use_lb_set_249, __macc__z3_use_ub_set_250, 1, __macc__z3_def_lb_set_251, __macc__z3_def_ub_set_252);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_245, __macc__ou_use_ub_set_246, 2, __macc__ou_def_lb_set_247, __macc__ou_def_ub_set_248);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1122 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_238[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_239[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1124 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1126 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < (mm1 - (1)); i1++) {
{
# 1133 "openacc-npb/MG/MG/mg.c"
(ou[(((((((2) * i3) + (1)) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) = ((ou[(((((((2) * i3) + (1)) * n2) * n1) + ((((2) * i2) + (1)) * n1)) + ((2) * i1))]) + ((0.25) * (z3[((((i3 * mm2) * mm1) + (i2 * mm1)) + i1)])));
# 1135 "openacc-npb/MG/MG/mg.c"
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
# 1142 "openacc-npb/MG/MG/mg.c"
if(n1 == (3)) {
# 1143 "openacc-npb/MG/MG/mg.c"
d1 = (2);
# 1144 "openacc-npb/MG/MG/mg.c"
t1 = (1);
}
else {
# 1146 "openacc-npb/MG/MG/mg.c"
d1 = (1);
# 1147 "openacc-npb/MG/MG/mg.c"
t1 = (0);
}
# 1150 "openacc-npb/MG/MG/mg.c"
if(n2 == (3)) {
# 1151 "openacc-npb/MG/MG/mg.c"
d2 = (2);
# 1152 "openacc-npb/MG/MG/mg.c"
t2 = (1);
}
else {
# 1154 "openacc-npb/MG/MG/mg.c"
d2 = (1);
# 1155 "openacc-npb/MG/MG/mg.c"
t2 = (0);
}
# 1158 "openacc-npb/MG/MG/mg.c"
if(n3 == (3)) {
# 1159 "openacc-npb/MG/MG/mg.c"
d3 = (2);
# 1160 "openacc-npb/MG/MG/mg.c"
t3 = (1);
}
else {
# 1162 "openacc-npb/MG/MG/mg.c"
d3 = (1);
# 1163 "openacc-npb/MG/MG/mg.c"
t3 = (0);
}
{
static int __macc_region_is_changed = 1;
static int __macc_multi = 1;
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((mm1 != __macc__mm1_last_255) || ((mm2 != __macc__mm2_last_256) || ((n1 != __macc__n1_last_257) || ((d1 != __macc__d1_last_258) || ((n2 != __macc__n2_last_259) || ((d2 != __macc__d2_last_260) || ((d3 != __macc__d3_last_261) || (mm3 != __macc__mm3_last_262)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__mm1_last_255 = mm1;
__macc__mm2_last_256 = mm2;
__macc__n1_last_257 = n1;
__macc__d1_last_258 = d1;
__macc__n2_last_259 = n2;
__macc__d2_last_260 = d2;
__macc__d3_last_261 = d3;
__macc__mm3_last_262 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_253, __macc__i3_loop_ub_set_254, d3, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_253[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_254[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_253, __macc__i3_loop_ub_set_254);
{
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , d2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_263, __macc__ou_use_ub_set_264, 2, __macc__ou_def_lb_set_265, __macc__ou_def_ub_set_266);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1167 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_253[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_254[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1169 "openacc-npb/MG/MG/mg.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1171 "openacc-npb/MG/MG/mg.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1177 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_269) || ((t1 != __macc__t1_last_270) || ((n2 != __macc__n2_last_271) || ((d2 != __macc__d2_last_272) || ((d3 != __macc__d3_last_273) || ((mm1 != __macc__mm1_last_274) || ((mm2 != __macc__mm2_last_275) || (mm3 != __macc__mm3_last_276)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_269 = n1;
__macc__t1_last_270 = t1;
__macc__n2_last_271 = n2;
__macc__d2_last_272 = d2;
__macc__d3_last_273 = d3;
__macc__mm1_last_274 = mm1;
__macc__mm2_last_275 = mm2;
__macc__mm3_last_276 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_267, __macc__i3_loop_ub_set_268, d3, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_267[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_268[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_283, __macc__oz_def_ub_set_284);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_267, __macc__i3_loop_ub_set_268);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , d2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_281, __macc__oz_use_ub_set_282, 1, __macc__oz_def_lb_set_283, __macc__oz_def_ub_set_284);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_277, __macc__ou_use_ub_set_278, 2, __macc__ou_def_lb_set_279, __macc__ou_def_ub_set_280);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1184 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_267[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_268[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1186 "openacc-npb/MG/MG/mg.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1188 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1194 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_287) || ((d1 != __macc__d1_last_288) || ((n2 != __macc__n2_last_289) || ((t2 != __macc__t2_last_290) || ((d3 != __macc__d3_last_291) || ((mm1 != __macc__mm1_last_292) || ((mm2 != __macc__mm2_last_293) || (mm3 != __macc__mm3_last_294)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_287 = n1;
__macc__d1_last_288 = d1;
__macc__n2_last_289 = n2;
__macc__t2_last_290 = t2;
__macc__d3_last_291 = d3;
__macc__mm1_last_292 = mm1;
__macc__mm2_last_293 = mm2;
__macc__mm3_last_294 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_285, __macc__i3_loop_ub_set_286, d3, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_285[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_286[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_301, __macc__oz_def_ub_set_302);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_285, __macc__i3_loop_ub_set_286);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_299, __macc__oz_use_ub_set_300, 1, __macc__oz_def_lb_set_301, __macc__oz_def_ub_set_302);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_295, __macc__ou_use_ub_set_296, 2, __macc__ou_def_lb_set_297, __macc__ou_def_ub_set_298);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1202 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_285[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_286[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1204 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1206 "openacc-npb/MG/MG/mg.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1212 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_305) || ((t1 != __macc__t1_last_306) || ((n2 != __macc__n2_last_307) || ((t2 != __macc__t2_last_308) || ((d3 != __macc__d3_last_309) || ((mm1 != __macc__mm1_last_310) || ((mm2 != __macc__mm2_last_311) || (mm3 != __macc__mm3_last_312)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_305 = n1;
__macc__t1_last_306 = t1;
__macc__n2_last_307 = n2;
__macc__t2_last_308 = t2;
__macc__d3_last_309 = d3;
__macc__mm1_last_310 = mm1;
__macc__mm2_last_311 = mm2;
__macc__mm3_last_312 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_303, __macc__i3_loop_ub_set_304, d3, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_303[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_304[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_lb) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316, (((((((2) * __macc_top_loop_ub) - d3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_319, __macc__oz_def_ub_set_320);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_303, __macc__i3_loop_ub_set_304);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , d3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_317, __macc__oz_use_ub_set_318, 1, __macc__oz_def_lb_set_319, __macc__oz_def_ub_set_320);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_313, __macc__ou_use_ub_set_314, 2, __macc__ou_def_lb_set_315, __macc__ou_def_ub_set_316);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1220 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_303[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_304[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1222 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1224 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1231 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_323) || ((d1 != __macc__d1_last_324) || ((n2 != __macc__n2_last_325) || ((d2 != __macc__d2_last_326) || ((t3 != __macc__t3_last_327) || ((mm1 != __macc__mm1_last_328) || ((mm2 != __macc__mm2_last_329) || (mm3 != __macc__mm3_last_330)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_323 = n1;
__macc__d1_last_324 = d1;
__macc__n2_last_325 = n2;
__macc__d2_last_326 = d2;
__macc__t3_last_327 = t3;
__macc__mm1_last_328 = mm1;
__macc__mm2_last_329 = mm2;
__macc__mm3_last_330 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_321, __macc__i3_loop_ub_set_322, 1, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_321[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_322[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_337, __macc__oz_def_ub_set_338);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_321, __macc__i3_loop_ub_set_322);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , d2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_335, __macc__oz_use_ub_set_336, 1, __macc__oz_def_lb_set_337, __macc__oz_def_ub_set_338);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_331, __macc__ou_use_ub_set_332, 2, __macc__ou_def_lb_set_333, __macc__ou_def_ub_set_334);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1242 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_321[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_322[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1244 "openacc-npb/MG/MG/mg.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1246 "openacc-npb/MG/MG/mg.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1252 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_341) || ((t1 != __macc__t1_last_342) || ((n2 != __macc__n2_last_343) || ((d2 != __macc__d2_last_344) || ((t3 != __macc__t3_last_345) || ((mm1 != __macc__mm1_last_346) || ((mm2 != __macc__mm2_last_347) || (mm3 != __macc__mm3_last_348)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_341 = n1;
__macc__t1_last_342 = t1;
__macc__n2_last_343 = n2;
__macc__d2_last_344 = d2;
__macc__t3_last_345 = t3;
__macc__mm1_last_346 = mm1;
__macc__mm2_last_347 = mm2;
__macc__mm3_last_348 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_339, __macc__i3_loop_ub_set_340, 1, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_339[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_340[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * d2) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - d2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_355, __macc__oz_def_ub_set_356);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + ((d2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_339, __macc__i3_loop_ub_set_340);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , d2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_353, __macc__oz_use_ub_set_354, 1, __macc__oz_def_lb_set_355, __macc__oz_def_ub_set_356);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_349, __macc__ou_use_ub_set_350, 2, __macc__ou_def_lb_set_351, __macc__ou_def_ub_set_352);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1260 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_339[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_340[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1262 "openacc-npb/MG/MG/mg.c"
for(i2 = d2; i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1264 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1271 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_359) || ((d1 != __macc__d1_last_360) || ((n2 != __macc__n2_last_361) || ((t2 != __macc__t2_last_362) || ((t3 != __macc__t3_last_363) || ((mm1 != __macc__mm1_last_364) || ((mm2 != __macc__mm2_last_365) || (mm3 != __macc__mm3_last_366)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_359 = n1;
__macc__d1_last_360 = d1;
__macc__n2_last_361 = n2;
__macc__t2_last_362 = t2;
__macc__t3_last_363 = t3;
__macc__mm1_last_364 = mm1;
__macc__mm2_last_365 = mm2;
__macc__mm3_last_366 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_357, __macc__i3_loop_ub_set_358, 1, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_357[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_358[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * d1) - d1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - d1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_373, __macc__oz_def_ub_set_374);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (d1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_357, __macc__i3_loop_ub_set_358);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 , d1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_371, __macc__oz_use_ub_set_372, 1, __macc__oz_def_lb_set_373, __macc__oz_def_ub_set_374);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_367, __macc__ou_use_ub_set_368, 2, __macc__ou_def_lb_set_369, __macc__ou_def_ub_set_370);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1281 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_357[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_358[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1283 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1285 "openacc-npb/MG/MG/mg.c"
for(i1 = d1; i1 <= (mm1 - (1)); i1++) {
{
# 1292 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_377) || ((t1 != __macc__t1_last_378) || ((n2 != __macc__n2_last_379) || ((t2 != __macc__t2_last_380) || ((t3 != __macc__t3_last_381) || ((mm1 != __macc__mm1_last_382) || ((mm2 != __macc__mm2_last_383) || (mm3 != __macc__mm3_last_384)))))))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_377 = n1;
__macc__t1_last_378 = t1;
__macc__n2_last_379 = n2;
__macc__t2_last_380 = t2;
__macc__t3_last_381 = t3;
__macc__mm1_last_382 = mm1;
__macc__mm2_last_383 = mm2;
__macc__mm3_last_384 = mm3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_375, __macc__i3_loop_ub_set_376, 1, mm3 - (1), 1, 1);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_375[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_376[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_lb) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (1)) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (1)) - t1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388, (((((((2) * __macc_top_loop_ub) - t3) - (1)) * n2) * n1) + (((((2) * (mm2 - (1))) - t2) - (1)) * n1)) + ((((2) * (mm1 - (1))) - t1) - (1)));
}
}
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_391, __macc__oz_def_ub_set_392);
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_lb - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, ((((__macc_top_loop_ub - (1)) * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((1) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + ((mm1 - (1)) - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((1) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + (((mm2 - (1)) - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_lb * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((1) * mm1)) + (mm1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, (((__macc_top_loop_ub * mm2) * mm1) + ((mm2 - (1)) * mm1)) + (mm1 - (1)));
}
{
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_375, __macc__i3_loop_ub_set_376);
{
__macc_rewrite_data_region_into_single(__macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390);
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 2, __macc__oz_use_lb_set_389, __macc__oz_use_ub_set_390, 1, __macc__oz_def_lb_set_391, __macc__oz_def_ub_set_392);
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_385, __macc__ou_use_ub_set_386, 2, __macc__ou_def_lb_set_387, __macc__ou_def_ub_set_388);
}
#pragma omp barrier
#pragma acc parallel
#pragma acc loop
# 1302 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_375[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_376[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1304 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 <= (mm2 - (1)); i2++) {
{
#pragma acc loop vector
# 1306 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 <= (mm1 - (1)); i1++) {
{
# 1315 "openacc-npb/MG/MG/mg.c"
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
__macc_delete(__macc_tnum, z1, sizeof(double), 0, (mm3 * mm2) * mm1);
__macc_delete(__macc_tnum, z2, sizeof(double), 0, (mm3 * mm2) * mm1);
__macc_delete(__macc_tnum, z3, sizeof(double), 0, (mm3 * mm2) * mm1);
}
}
}
# 1332 "openacc-npb/MG/MG/mg.c"
free(z1);
# 1333 "openacc-npb/MG/MG/mg.c"
free(z2);
# 1334 "openacc-npb/MG/MG/mg.c"
free(z3);
# 1335 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 1335 "openacc-npb/MG/MG/mg.c"
timer_stop(7);
}
# 1337 "openacc-npb/MG/MG/mg.c"
if((debug_vec[0]) >= (1)) {
# 1340 "openacc-npb/MG/MG/mg.c"
rep_nrm(oz, mm1, mm2, mm3, "z: inter", k - (1));
# 1341 "openacc-npb/MG/MG/mg.c"
rep_nrm(ou, n1, n2, n3, "u: inter", k);
}
# 1344 "openacc-npb/MG/MG/mg.c"
if((debug_vec[5]) >= k) {
# 1347 "openacc-npb/MG/MG/mg.c"
showall(oz, mm1, mm2, mm3);
# 1348 "openacc-npb/MG/MG/mg.c"
showall(ou, n1, n2, n3);
}
}
# 1360 "openacc-npb/MG/MG/mg.c"
static void norm2u3(double * or, int n1, int n2, int n3, double * rnm2, double * rnmu, int nx, int ny, int nz)
{
# 1366 "openacc-npb/MG/MG/mg.c"
double s;
# 1366 "openacc-npb/MG/MG/mg.c"
double a;
# 1367 "openacc-npb/MG/MG/mg.c"
double temp;
# 1368 "openacc-npb/MG/MG/mg.c"
int i3;
# 1368 "openacc-npb/MG/MG/mg.c"
int i2;
# 1368 "openacc-npb/MG/MG/mg.c"
int i1;
# 1370 "openacc-npb/MG/MG/mg.c"
double dn;
# 1372 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 1372 "openacc-npb/MG/MG/mg.c"
timer_start(8);
}
# 1373 "openacc-npb/MG/MG/mg.c"
dn = ((((1.0) * nx) * ny) * nz);
# 1375 "openacc-npb/MG/MG/mg.c"
s = (0.0);
# 1376 "openacc-npb/MG/MG/mg.c"
(*(rnmu)) = (0.0);
# 1377 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_138) || ((n2 != __macc__n2_last_139) || (n3 != __macc__n3_last_140))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_138 = n1;
__macc__n2_last_139 = n2;
__macc__n3_last_140 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_136, __macc__i3_loop_ub_set_137, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_136[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_137[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142);
__macc_init_access_region(__macc_gpu_num, __macc__or_def_lb_set_143, __macc__or_def_ub_set_144);
{
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
}
{
}
}
}
}
if(0) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_136, __macc__i3_loop_ub_set_137);
{
__macc_rewrite_data_region_into_single(__macc__or_use_lb_set_141, __macc__or_use_ub_set_142);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) reduction ( + : s ) reduction ( max : temp ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, or, __macc_multi, 2, __macc__or_use_lb_set_141, __macc__or_use_ub_set_142, 1, __macc__or_def_lb_set_143, __macc__or_def_ub_set_144);
}
#pragma omp barrier
#pragma acc parallel present ( or ) reduction ( + : s ) reduction ( max : temp )
#pragma acc loop
# 1382 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_136[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_137[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1384 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
#pragma acc loop vector
# 1386 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 1389 "openacc-npb/MG/MG/mg.c"
s = (s + (__builtin_pow(or[((((i3 * n2) * n1) + (i2 * n1)) + i1)], 2.0)));
# 1390 "openacc-npb/MG/MG/mg.c"
a = (__builtin_fabs(or[((((i3 * n2) * n1) + (i2 * n1)) + i1)]));
# 1392 "openacc-npb/MG/MG/mg.c"
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
# 1397 "openacc-npb/MG/MG/mg.c"
(*(rnmu)) = temp;
# 1398 "openacc-npb/MG/MG/mg.c"
(*(rnm2)) = (__builtin_sqrt(s / dn));
# 1399 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 1399 "openacc-npb/MG/MG/mg.c"
timer_stop(8);
}
}
# 1406 "openacc-npb/MG/MG/mg.c"
static void rep_nrm(double * u, int n1, int n2, int n3, char * title, int kk)
{
# 1408 "openacc-npb/MG/MG/mg.c"
double rnm2;
# 1408 "openacc-npb/MG/MG/mg.c"
double rnmu;
# 1410 "openacc-npb/MG/MG/mg.c"
norm2u3(u, n1, n2, n3, &(rnm2), &(rnmu), nx[kk], ny[kk], nz[kk]);
# 1411 "openacc-npb/MG/MG/mg.c"
printf(" Level%2d in %8s: norms =%21.14E%21.14E\n", kk, title, rnm2, rnmu);
}
# 1418 "openacc-npb/MG/MG/mg.c"
static void comm3(double * ou, int n1, int n2, int n3, int kk)
{
# 1422 "openacc-npb/MG/MG/mg.c"
int i1;
# 1422 "openacc-npb/MG/MG/mg.c"
int i2;
# 1422 "openacc-npb/MG/MG/mg.c"
int i3;
# 1423 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 1423 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_147) || ((n2 != __macc__n2_last_148) || (n3 != __macc__n3_last_149))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_147 = n1;
__macc__n2_last_148 = n2;
__macc__n3_last_149 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_145, __macc__i3_loop_ub_set_146, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_145[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_146[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (1));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (2)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (2)));
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (n1 - (1)));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_145, __macc__i3_loop_ub_set_146);
{
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_150, __macc__ou_use_ub_set_151, 2, __macc__ou_def_lb_set_152, __macc__ou_def_ub_set_153);
}
#pragma omp barrier
#pragma acc parallel present ( ou )
#pragma acc loop
# 1427 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_145[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_146[__macc_tnum]); i3++) {
{
#pragma acc loop vector
# 1429 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
# 1434 "openacc-npb/MG/MG/mg.c"
(ou[((((i3 * n2) * n1) + (i2 * n1)) + (0))]) = (ou[((((i3 * n2) * n1) + (i2 * n1)) + (n1 - (2)))]);
# 1435 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_156) || ((n2 != __macc__n2_last_157) || (n3 != __macc__n3_last_158))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_156 = n1;
__macc__n2_last_157 = n2;
__macc__n3_last_158 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_154, __macc__i3_loop_ub_set_155, 1, n3 - (1), 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_154[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_155[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_lb * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_ub * n2) * n1) + ((1) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (2)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (2)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (2)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (2)) * n1)) + n1);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_lb * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_ub * n2) * n1) + ((n2 - (1)) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + n1);
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_154, __macc__i3_loop_ub_set_155);
{
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_159, __macc__ou_use_ub_set_160, 2, __macc__ou_def_lb_set_161, __macc__ou_def_ub_set_162);
}
#pragma omp barrier
#pragma acc parallel present ( ou )
#pragma acc loop
# 1440 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_154[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_155[__macc_tnum]); i3++) {
{
#pragma acc loop vector
# 1442 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 1447 "openacc-npb/MG/MG/mg.c"
(ou[((((i3 * n2) * n1) + ((0) * n1)) + i1)]) = (ou[((((i3 * n2) * n1) + ((n2 - (2)) * n1)) + i1)]);
# 1448 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_165) || ((n2 != __macc__n2_last_166) || (n3 != __macc__n3_last_167))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_165 = n1;
__macc__n2_last_166 = n2;
__macc__n3_last_167 = n3;
}
{
__macc_calc_loop_region(__macc__i2_loop_lb_set_163, __macc__i2_loop_ub_set_164, 0, n2, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i2_loop_lb_set_163[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i2_loop_ub_set_164[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169);
__macc_init_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171);
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((1) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((1) * n2) * n1) + (__macc_top_loop_lb * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((1) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((1) * n2) * n1) + (__macc_top_loop_ub * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_lb * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, ((((n3 - (2)) * n2) * n1) + (__macc_top_loop_ub * n1)) + n1);
}
{
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_lb * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((n3 - (1)) * n2) * n1) + (__macc_top_loop_ub * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((0) * n2) * n1) + (__macc_top_loop_lb * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((0) * n2) * n1) + (__macc_top_loop_lb * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((0) * n2) * n1) + (__macc_top_loop_ub * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171, ((((0) * n2) * n1) + (__macc_top_loop_ub * n1)) + n1);
}
}
}
}
if(__macc_region_is_overlapping(__macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i2_loop_lb_set_163, __macc__i2_loop_ub_set_164);
{
__macc_rewrite_data_region_into_single(__macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169);
__macc_rewrite_data_region_into_single(__macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, ou, __macc_multi, 2, __macc__ou_use_lb_set_168, __macc__ou_use_ub_set_169, 2, __macc__ou_def_lb_set_170, __macc__ou_def_ub_set_171);
}
#pragma omp barrier
#pragma acc parallel present ( ou )
#pragma acc loop
# 1453 "openacc-npb/MG/MG/mg.c"
for(i2 = (__macc__i2_loop_lb_set_163[__macc_tnum]); i2 <= (__macc__i2_loop_ub_set_164[__macc_tnum]); i2++) {
{
#pragma acc loop vector
# 1455 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 1460 "openacc-npb/MG/MG/mg.c"
(ou[(((((0) * n2) * n1) + (i2 * n1)) + i1)]) = (ou[(((((n3 - (2)) * n2) * n1) + (i2 * n1)) + i1)]);
# 1461 "openacc-npb/MG/MG/mg.c"
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
# 1465 "openacc-npb/MG/MG/mg.c"
if(timeron) {
# 1465 "openacc-npb/MG/MG/mg.c"
timer_stop(9);
}
}
# 1469 "openacc-npb/MG/MG/mg.c"
inline double randlc(double * x, double a)
{
# 1471 "openacc-npb/MG/MG/mg.c"
double const r23 = 1.1920928955078125e-07;
# 1472 "openacc-npb/MG/MG/mg.c"
double const r46 = r23 * r23;
# 1473 "openacc-npb/MG/MG/mg.c"
double const t23 = 8.388608e+06;
# 1474 "openacc-npb/MG/MG/mg.c"
double const t46 = t23 * t23;
# 1476 "openacc-npb/MG/MG/mg.c"
double t1;
# 1476 "openacc-npb/MG/MG/mg.c"
double t2;
# 1476 "openacc-npb/MG/MG/mg.c"
double t3;
# 1476 "openacc-npb/MG/MG/mg.c"
double t4;
# 1476 "openacc-npb/MG/MG/mg.c"
double a1;
# 1476 "openacc-npb/MG/MG/mg.c"
double a2;
# 1476 "openacc-npb/MG/MG/mg.c"
double x1;
# 1476 "openacc-npb/MG/MG/mg.c"
double x2;
# 1476 "openacc-npb/MG/MG/mg.c"
double z;
# 1477 "openacc-npb/MG/MG/mg.c"
double r;
# 1478 "openacc-npb/MG/MG/mg.c"
t1 = (r23 * a);
# 1479 "openacc-npb/MG/MG/mg.c"
a1 = ((int)(t1));
# 1480 "openacc-npb/MG/MG/mg.c"
a2 = (a - (t23 * a1));
# 1482 "openacc-npb/MG/MG/mg.c"
t1 = (r23 * (*(x)));
# 1483 "openacc-npb/MG/MG/mg.c"
x1 = ((int)(t1));
# 1484 "openacc-npb/MG/MG/mg.c"
x2 = ((*(x)) - (t23 * x1));
# 1485 "openacc-npb/MG/MG/mg.c"
t1 = ((a1 * x2) + (a2 * x1));
# 1486 "openacc-npb/MG/MG/mg.c"
t2 = ((int)(r23 * t1));
# 1487 "openacc-npb/MG/MG/mg.c"
z = (t1 - (t23 * t2));
# 1488 "openacc-npb/MG/MG/mg.c"
t3 = ((t23 * z) + (a2 * x2));
# 1489 "openacc-npb/MG/MG/mg.c"
t4 = ((int)(r46 * t3));
# 1490 "openacc-npb/MG/MG/mg.c"
(*(x)) = (t3 - (t46 * t4));
# 1491 "openacc-npb/MG/MG/mg.c"
r = (r46 * (*(x)));
# 1493 "openacc-npb/MG/MG/mg.c"
return r;
}
# 1496 "openacc-npb/MG/MG/mg.c"
inline void vranlc(int n, double * x, double a, double y[])
{
# 1499 "openacc-npb/MG/MG/mg.c"
double const r23 = 1.1920928955078125e-07;
# 1500 "openacc-npb/MG/MG/mg.c"
double const r46 = r23 * r23;
# 1501 "openacc-npb/MG/MG/mg.c"
double const t23 = 8.388608e+06;
# 1502 "openacc-npb/MG/MG/mg.c"
double const t46 = t23 * t23;
# 1504 "openacc-npb/MG/MG/mg.c"
double t1;
# 1504 "openacc-npb/MG/MG/mg.c"
double t2;
# 1504 "openacc-npb/MG/MG/mg.c"
double t3;
# 1504 "openacc-npb/MG/MG/mg.c"
double t4;
# 1504 "openacc-npb/MG/MG/mg.c"
double a1;
# 1504 "openacc-npb/MG/MG/mg.c"
double a2;
# 1504 "openacc-npb/MG/MG/mg.c"
double x1;
# 1504 "openacc-npb/MG/MG/mg.c"
double x2;
# 1504 "openacc-npb/MG/MG/mg.c"
double z;
# 1506 "openacc-npb/MG/MG/mg.c"
int i;
# 1507 "openacc-npb/MG/MG/mg.c"
t1 = (r23 * a);
# 1508 "openacc-npb/MG/MG/mg.c"
a1 = ((int)(t1));
# 1509 "openacc-npb/MG/MG/mg.c"
a2 = (a - (t23 * a1));
# 1510 "openacc-npb/MG/MG/mg.c"
for(i = (0); i < n; i++) {
{
# 1511 "openacc-npb/MG/MG/mg.c"
t1 = (r23 * (*(x)));
# 1512 "openacc-npb/MG/MG/mg.c"
x1 = ((int)(t1));
# 1513 "openacc-npb/MG/MG/mg.c"
x2 = ((*(x)) - (t23 * x1));
# 1514 "openacc-npb/MG/MG/mg.c"
t1 = ((a1 * x2) + (a2 * x1));
# 1515 "openacc-npb/MG/MG/mg.c"
t2 = ((int)(r23 * t1));
# 1516 "openacc-npb/MG/MG/mg.c"
z = (t1 - (t23 * t2));
# 1517 "openacc-npb/MG/MG/mg.c"
t3 = ((t23 * z) + (a2 * x2));
# 1518 "openacc-npb/MG/MG/mg.c"
t4 = ((int)(r46 * t3));
# 1519 "openacc-npb/MG/MG/mg.c"
(*(x)) = (t3 - (t46 * t4));
# 1520 "openacc-npb/MG/MG/mg.c"
(y[i]) = (r46 * (*(x)));
}
}
}
# 1529 "openacc-npb/MG/MG/mg.c"
static void zran3(double * oz, int n1, int n2, int n3, int nx, int ny, int k)
{
# 1533 "openacc-npb/MG/MG/mg.c"
int i0;
# 1533 "openacc-npb/MG/MG/mg.c"
int m0;
# 1533 "openacc-npb/MG/MG/mg.c"
int m1;
# 1535 "openacc-npb/MG/MG/mg.c"
int i1;
# 1535 "openacc-npb/MG/MG/mg.c"
int i2;
# 1535 "openacc-npb/MG/MG/mg.c"
int i3;
# 1535 "openacc-npb/MG/MG/mg.c"
int d1;
# 1535 "openacc-npb/MG/MG/mg.c"
int e1;
# 1535 "openacc-npb/MG/MG/mg.c"
int e2;
# 1535 "openacc-npb/MG/MG/mg.c"
int e3;
# 1536 "openacc-npb/MG/MG/mg.c"
double xx;
# 1536 "openacc-npb/MG/MG/mg.c"
double x0;
# 1536 "openacc-npb/MG/MG/mg.c"
double x1;
# 1536 "openacc-npb/MG/MG/mg.c"
double a1;
# 1536 "openacc-npb/MG/MG/mg.c"
double a2;
# 1536 "openacc-npb/MG/MG/mg.c"
double ai;
# 1538 "openacc-npb/MG/MG/mg.c"
int const mm = 10;
# 1539 "openacc-npb/MG/MG/mg.c"
double const a = __builtin_pow(5.0, 13.0);
# 1540 "openacc-npb/MG/MG/mg.c"
double const x = 314159265.0;
# 1541 "openacc-npb/MG/MG/mg.c"
double ten[mm][2];
# 1541 "openacc-npb/MG/MG/mg.c"
double best;
# 1542 "openacc-npb/MG/MG/mg.c"
int i;
# 1542 "openacc-npb/MG/MG/mg.c"
int j1[mm][2];
# 1542 "openacc-npb/MG/MG/mg.c"
int j2[mm][2];
# 1542 "openacc-npb/MG/MG/mg.c"
int j3[mm][2];
# 1543 "openacc-npb/MG/MG/mg.c"
int jg[4][mm][2];
# 1545 "openacc-npb/MG/MG/mg.c"
double rdummy;
# 1547 "openacc-npb/MG/MG/mg.c"
a1 = (power(a, nx));
# 1548 "openacc-npb/MG/MG/mg.c"
a2 = (power(a, nx * ny));
# 1551 "openacc-npb/MG/MG/mg.c"
zero3(oz, n1, n2, n3);
# 1553 "openacc-npb/MG/MG/mg.c"
i = ((is1 - (2)) + (nx * ((is2 - (2)) + (ny * (is3 - (2))))));
# 1555 "openacc-npb/MG/MG/mg.c"
ai = (power(a, i));
# 1556 "openacc-npb/MG/MG/mg.c"
d1 = ((ie1 - is1) + (1));
# 1557 "openacc-npb/MG/MG/mg.c"
e1 = ((ie1 - is1) + (2));
# 1558 "openacc-npb/MG/MG/mg.c"
e2 = ((ie2 - is2) + (2));
# 1559 "openacc-npb/MG/MG/mg.c"
e3 = ((ie3 - is3) + (2));
# 1560 "openacc-npb/MG/MG/mg.c"
x0 = x;
# 1561 "openacc-npb/MG/MG/mg.c"
rdummy = (randlc(&(x0), ai));
# 1563 "openacc-npb/MG/MG/mg.c"
for(i3 = (1); i3 < e3; i3++) {
{
# 1564 "openacc-npb/MG/MG/mg.c"
x1 = x0;
# 1565 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < e2; i2++) {
{
# 1566 "openacc-npb/MG/MG/mg.c"
xx = x1;
# 1568 "openacc-npb/MG/MG/mg.c"
vranlc(d1, &(xx), a, oz + ((((i3 * n2) * n1) + (i2 * n1)) + (1)));
# 1569 "openacc-npb/MG/MG/mg.c"
rdummy = (randlc(&(x1), a1));
}
}
# 1571 "openacc-npb/MG/MG/mg.c"
rdummy = (randlc(&(x0), a2));
}
}
# 1582 "openacc-npb/MG/MG/mg.c"
for(i = (0); i < mm; i++) {
{
# 1583 "openacc-npb/MG/MG/mg.c"
(ten[i][1]) = (0.0);
# 1584 "openacc-npb/MG/MG/mg.c"
(j1[i][1]) = (0);
# 1585 "openacc-npb/MG/MG/mg.c"
(j2[i][1]) = (0);
# 1586 "openacc-npb/MG/MG/mg.c"
(j3[i][1]) = (0);
# 1587 "openacc-npb/MG/MG/mg.c"
(ten[i][0]) = (1.0);
# 1588 "openacc-npb/MG/MG/mg.c"
(j1[i][0]) = (0);
# 1589 "openacc-npb/MG/MG/mg.c"
(j2[i][0]) = (0);
# 1590 "openacc-npb/MG/MG/mg.c"
(j3[i][0]) = (0);
}
}
# 1593 "openacc-npb/MG/MG/mg.c"
for(i3 = (1); i3 < (n3 - (1)); i3++) {
{
# 1594 "openacc-npb/MG/MG/mg.c"
for(i2 = (1); i2 < (n2 - (1)); i2++) {
{
# 1595 "openacc-npb/MG/MG/mg.c"
for(i1 = (1); i1 < (n1 - (1)); i1++) {
{
# 1597 "openacc-npb/MG/MG/mg.c"
if((oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) > (ten[0][1])) {
# 1599 "openacc-npb/MG/MG/mg.c"
(ten[0][1]) = (oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]);
# 1600 "openacc-npb/MG/MG/mg.c"
(j1[0][1]) = i1;
# 1601 "openacc-npb/MG/MG/mg.c"
(j2[0][1]) = i2;
# 1602 "openacc-npb/MG/MG/mg.c"
(j3[0][1]) = i3;
# 1603 "openacc-npb/MG/MG/mg.c"
bubble(ten, j1, j2, j3, mm, 1);
}
# 1606 "openacc-npb/MG/MG/mg.c"
if((oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) < (ten[0][0])) {
# 1608 "openacc-npb/MG/MG/mg.c"
(ten[0][0]) = (oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]);
# 1609 "openacc-npb/MG/MG/mg.c"
(j1[0][0]) = i1;
# 1610 "openacc-npb/MG/MG/mg.c"
(j2[0][0]) = i2;
# 1611 "openacc-npb/MG/MG/mg.c"
(j3[0][0]) = i3;
# 1612 "openacc-npb/MG/MG/mg.c"
bubble(ten, j1, j2, j3, mm, 0);
}
}
}
}
}
}
}
# 1622 "openacc-npb/MG/MG/mg.c"
i1 = (mm - (1));
# 1623 "openacc-npb/MG/MG/mg.c"
i0 = (mm - (1));
# 1624 "openacc-npb/MG/MG/mg.c"
for(i = (mm - (1)); i >= (0); i--) {
{
# 1625 "openacc-npb/MG/MG/mg.c"
best = (0.0);
# 1626 "openacc-npb/MG/MG/mg.c"
if(best < (ten[i1][1])) {
# 1627 "openacc-npb/MG/MG/mg.c"
(jg[0][i][1]) = (0);
# 1628 "openacc-npb/MG/MG/mg.c"
(jg[1][i][1]) = ((is1 - (2)) + (j1[i1][1]));
# 1629 "openacc-npb/MG/MG/mg.c"
(jg[2][i][1]) = ((is2 - (2)) + (j2[i1][1]));
# 1630 "openacc-npb/MG/MG/mg.c"
(jg[3][i][1]) = ((is3 - (2)) + (j3[i1][1]));
# 1631 "openacc-npb/MG/MG/mg.c"
i1 = (i1 - (1));
}
else {
# 1633 "openacc-npb/MG/MG/mg.c"
(jg[0][i][1]) = (0);
# 1634 "openacc-npb/MG/MG/mg.c"
(jg[1][i][1]) = (0);
# 1635 "openacc-npb/MG/MG/mg.c"
(jg[2][i][1]) = (0);
# 1636 "openacc-npb/MG/MG/mg.c"
(jg[3][i][1]) = (0);
}
# 1639 "openacc-npb/MG/MG/mg.c"
best = (1.0);
# 1640 "openacc-npb/MG/MG/mg.c"
if(best > (ten[i0][0])) {
# 1641 "openacc-npb/MG/MG/mg.c"
(jg[0][i][0]) = (0);
# 1642 "openacc-npb/MG/MG/mg.c"
(jg[1][i][0]) = ((is1 - (2)) + (j1[i0][0]));
# 1643 "openacc-npb/MG/MG/mg.c"
(jg[2][i][0]) = ((is2 - (2)) + (j2[i0][0]));
# 1644 "openacc-npb/MG/MG/mg.c"
(jg[3][i][0]) = ((is3 - (2)) + (j3[i0][0]));
# 1645 "openacc-npb/MG/MG/mg.c"
i0 = (i0 - (1));
}
else {
# 1647 "openacc-npb/MG/MG/mg.c"
(jg[0][i][0]) = (0);
# 1648 "openacc-npb/MG/MG/mg.c"
(jg[1][i][0]) = (0);
# 1649 "openacc-npb/MG/MG/mg.c"
(jg[2][i][0]) = (0);
# 1650 "openacc-npb/MG/MG/mg.c"
(jg[3][i][0]) = (0);
}
}
}
# 1656 "openacc-npb/MG/MG/mg.c"
m1 = (0);
# 1657 "openacc-npb/MG/MG/mg.c"
m0 = (0);
# 1704 "openacc-npb/MG/MG/mg.c"
for(i3 = (0); i3 < n3; i3++) {
{
# 1705 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < n2; i2++) {
{
# 1706 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 1708 "openacc-npb/MG/MG/mg.c"
(oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = (0.0);
}
}
}
}
}
}
# 1713 "openacc-npb/MG/MG/mg.c"
for(i = (mm - (1)); i >= m0; i--) {
{
# 1715 "openacc-npb/MG/MG/mg.c"
i3 = (jg[3][i][0]);
# 1716 "openacc-npb/MG/MG/mg.c"
i2 = (jg[2][i][0]);
# 1717 "openacc-npb/MG/MG/mg.c"
i1 = (jg[1][i][0]);
# 1718 "openacc-npb/MG/MG/mg.c"
(oz[((((i3 * n2) * n1) + (i2 * n1)) + i1)]) = (-(1.0));
}
}
# 1721 "openacc-npb/MG/MG/mg.c"
for(i = (mm - (1)); i >= m1; i--) {
{
# 1723 "openacc-npb/MG/MG/mg.c"
i3 = (jg[3][i][1]);
# 1724 "openacc-npb/MG/MG/mg.c"
i2 = (jg[2][i][1]);
# 1725 "openacc-npb/MG/MG/mg.c"
i1 = (jg[1][i][1]);
# 1726 "openacc-npb/MG/MG/mg.c"
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
# 1731 "openacc-npb/MG/MG/mg.c"
comm3(oz, n1, n2, n3, k);
}
# 1739 "openacc-npb/MG/MG/mg.c"
static void showall(double * oz, int n1, int n2, int n3)
{
# 1743 "openacc-npb/MG/MG/mg.c"
int i1;
# 1743 "openacc-npb/MG/MG/mg.c"
int i2;
# 1743 "openacc-npb/MG/MG/mg.c"
int i3;
# 1744 "openacc-npb/MG/MG/mg.c"
int m1;
# 1744 "openacc-npb/MG/MG/mg.c"
int m2;
# 1744 "openacc-npb/MG/MG/mg.c"
int m3;
# 1746 "openacc-npb/MG/MG/mg.c"
m1 = ((n1 < (18)) ? n1 : (18));
# 1747 "openacc-npb/MG/MG/mg.c"
m2 = ((n2 < (14)) ? n2 : (14));
# 1748 "openacc-npb/MG/MG/mg.c"
m3 = ((n3 < (18)) ? n3 : (18));
# 1750 "openacc-npb/MG/MG/mg.c"
printf("   \n");
# 1751 "openacc-npb/MG/MG/mg.c"
for(i3 = (0); i3 < m3; i3++) {
{
# 1752 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < m1; i1++) {
{
# 1753 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < m2; i2++) {
{
# 1755 "openacc-npb/MG/MG/mg.c"
printf("%6.3f", oz[((((i3 * n2) * n1) + (i2 * n1)) + i2)]);
}
}
# 1757 "openacc-npb/MG/MG/mg.c"
printf("\n");
}
}
# 1759 "openacc-npb/MG/MG/mg.c"
printf("  - - - - - - - \n");
}
}
# 1761 "openacc-npb/MG/MG/mg.c"
printf("   \n");
}
# 1769 "openacc-npb/MG/MG/mg.c"
static double power(double a, int n)
{
# 1771 "openacc-npb/MG/MG/mg.c"
double aj;
# 1772 "openacc-npb/MG/MG/mg.c"
int nj;
# 1773 "openacc-npb/MG/MG/mg.c"
double rdummy;
# 1774 "openacc-npb/MG/MG/mg.c"
double power;
# 1776 "openacc-npb/MG/MG/mg.c"
power = (1.0);
# 1777 "openacc-npb/MG/MG/mg.c"
nj = n;
# 1778 "openacc-npb/MG/MG/mg.c"
aj = a;
# 1780 "openacc-npb/MG/MG/mg.c"
while(nj != (0)) {
{
# 1781 "openacc-npb/MG/MG/mg.c"
if((nj % (2)) == (1)) {
# 1781 "openacc-npb/MG/MG/mg.c"
rdummy = (randlc(&(power), aj));
}
# 1782 "openacc-npb/MG/MG/mg.c"
rdummy = (randlc(&(aj), aj));
# 1783 "openacc-npb/MG/MG/mg.c"
nj = (nj / (2));
}
}
# 1786 "openacc-npb/MG/MG/mg.c"
return power;
}
# 1793 "openacc-npb/MG/MG/mg.c"
static void bubble(double ten[][2], int j1[][2], int j2[][2], int j3[][2], int m, int ind)
{
# 1796 "openacc-npb/MG/MG/mg.c"
double temp;
# 1797 "openacc-npb/MG/MG/mg.c"
int i;
# 1797 "openacc-npb/MG/MG/mg.c"
int j_temp;
# 1799 "openacc-npb/MG/MG/mg.c"
if(ind == (1)) {
# 1800 "openacc-npb/MG/MG/mg.c"
for(i = (0); i < (m - (1)); i++) {
{
# 1801 "openacc-npb/MG/MG/mg.c"
if((ten[i][ind]) > (ten[i + (1)][ind])) {
# 1802 "openacc-npb/MG/MG/mg.c"
temp = (ten[i + (1)][ind]);
# 1803 "openacc-npb/MG/MG/mg.c"
(ten[i + (1)][ind]) = (ten[i][ind]);
# 1804 "openacc-npb/MG/MG/mg.c"
(ten[i][ind]) = temp;
# 1806 "openacc-npb/MG/MG/mg.c"
j_temp = (j1[i + (1)][ind]);
# 1807 "openacc-npb/MG/MG/mg.c"
(j1[i + (1)][ind]) = (j1[i][ind]);
# 1808 "openacc-npb/MG/MG/mg.c"
(j1[i][ind]) = j_temp;
# 1810 "openacc-npb/MG/MG/mg.c"
j_temp = (j2[i + (1)][ind]);
# 1811 "openacc-npb/MG/MG/mg.c"
(j2[i + (1)][ind]) = (j2[i][ind]);
# 1812 "openacc-npb/MG/MG/mg.c"
(j2[i][ind]) = j_temp;
# 1814 "openacc-npb/MG/MG/mg.c"
j_temp = (j3[i + (1)][ind]);
# 1815 "openacc-npb/MG/MG/mg.c"
(j3[i + (1)][ind]) = (j3[i][ind]);
# 1816 "openacc-npb/MG/MG/mg.c"
(j3[i][ind]) = j_temp;
}
else {
# 1818 "openacc-npb/MG/MG/mg.c"
return ;
}
}
}
}
else {
# 1822 "openacc-npb/MG/MG/mg.c"
for(i = (0); i < (m - (1)); i++) {
{
# 1823 "openacc-npb/MG/MG/mg.c"
if((ten[i][ind]) < (ten[i + (1)][ind])) {
# 1825 "openacc-npb/MG/MG/mg.c"
temp = (ten[i + (1)][ind]);
# 1826 "openacc-npb/MG/MG/mg.c"
(ten[i + (1)][ind]) = (ten[i][ind]);
# 1827 "openacc-npb/MG/MG/mg.c"
(ten[i][ind]) = temp;
# 1829 "openacc-npb/MG/MG/mg.c"
j_temp = (j1[i + (1)][ind]);
# 1830 "openacc-npb/MG/MG/mg.c"
(j1[i + (1)][ind]) = (j1[i][ind]);
# 1831 "openacc-npb/MG/MG/mg.c"
(j1[i][ind]) = j_temp;
# 1833 "openacc-npb/MG/MG/mg.c"
j_temp = (j2[i + (1)][ind]);
# 1834 "openacc-npb/MG/MG/mg.c"
(j2[i + (1)][ind]) = (j2[i][ind]);
# 1835 "openacc-npb/MG/MG/mg.c"
(j2[i][ind]) = j_temp;
# 1837 "openacc-npb/MG/MG/mg.c"
j_temp = (j3[i + (1)][ind]);
# 1838 "openacc-npb/MG/MG/mg.c"
(j3[i + (1)][ind]) = (j3[i][ind]);
# 1839 "openacc-npb/MG/MG/mg.c"
(j3[i][ind]) = j_temp;
}
else {
# 1841 "openacc-npb/MG/MG/mg.c"
return ;
}
}
}
}
}
# 1848 "openacc-npb/MG/MG/mg.c"
static void zero3(double * oz, int n1, int n2, int n3)
{
# 1852 "openacc-npb/MG/MG/mg.c"
int i1;
# 1852 "openacc-npb/MG/MG/mg.c"
int i2;
# 1852 "openacc-npb/MG/MG/mg.c"
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
int __macc_gpu_num;
int __macc_top_loop_lb;
int __macc_top_loop_ub;
__macc_region_is_changed = (__macc_region_is_changed || ((n1 != __macc__n1_last_3) || ((n2 != __macc__n2_last_4) || (n3 != __macc__n3_last_5))));
if(__macc_region_is_changed) {
__macc_multi = (1);
__macc_region_is_changed = (0);
{
__macc__n1_last_3 = n1;
__macc__n2_last_4 = n2;
__macc__n3_last_5 = n3;
}
{
__macc_calc_loop_region(__macc__i3_loop_lb_set_1, __macc__i3_loop_ub_set_2, 0, n3, 1, 0);
}
for(__macc_gpu_num = (0); __macc_gpu_num < __MACC_NUMGPUS; __macc_gpu_num++) {
{
__macc_top_loop_lb = (__macc__i3_loop_lb_set_1[__macc_gpu_num]);
__macc_top_loop_ub = (__macc__i3_loop_ub_set_2[__macc_gpu_num]);
}
{
{
__macc_init_access_region(__macc_gpu_num, __macc__oz_use_lb_set_6, __macc__oz_use_ub_set_7);
__macc_init_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9);
{
}
{
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_lb * n2) * n1) + ((0) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_lb * n2) * n1) + (n2 * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_lb * n2) * n1) + (n2 * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_ub * n2) * n1) + ((0) * n1)) + n1);
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_ub * n2) * n1) + (n2 * n1)) + (0));
__macc_update_access_region(__macc_gpu_num, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9, (((__macc_top_loop_ub * n2) * n1) + (n2 * n1)) + n1);
}
}
}
}
if(__macc_region_is_overlapping(__macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9)) {
__macc_multi = (0);
{
__macc_rewrite_loop_region_into_single(__macc__i3_loop_lb_set_1, __macc__i3_loop_ub_set_2);
{
__macc_rewrite_data_region_into_single(__macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9);
}
}
}
}
#pragma omp parallel num_threads ( __MACC_NUMGPUS ) private ( i3 , i2 , i1 )
{
int __macc_tnum = omp_get_thread_num();
__macc_set_gpu_num(__macc_tnum);
{
{
__macc_set_data_region(__macc_tnum, oz, __macc_multi, 1, __macc__oz_use_lb_set_6, __macc__oz_use_ub_set_7, 2, __macc__oz_def_lb_set_8, __macc__oz_def_ub_set_9);
}
#pragma omp barrier
#pragma acc parallel present ( oz )
#pragma acc loop gang
# 1857 "openacc-npb/MG/MG/mg.c"
for(i3 = (__macc__i3_loop_lb_set_1[__macc_tnum]); i3 <= (__macc__i3_loop_ub_set_2[__macc_tnum]); i3++) {
{
#pragma acc loop worker
# 1859 "openacc-npb/MG/MG/mg.c"
for(i2 = (0); i2 < n2; i2++) {
{
#pragma acc loop vector
# 1861 "openacc-npb/MG/MG/mg.c"
for(i1 = (0); i1 < n1; i1++) {
{
# 1863 "openacc-npb/MG/MG/mg.c"
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
