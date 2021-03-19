/**/

#define _GNU_SOURCE

#define _FILE_OFFSET_BITS 64

#define _LARGE_FILES

#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)



#include <unistd.h>

#include <stdlib.h>
/*** typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__))); ununderstood ***/
/*** typedef __float128 _Float128; ununderstood ***/
/*** extern _Float128 strtof128 (const char *restrict __nptr,
			 char **restrict __endptr) ununderstood ***/
/*** extern _Float128 strtof128_l (const char *restrict __nptr,
			 char **restrict __endptr,
			 locale_t __loc) ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>
/*** enum ununderstood ***/
/*** {
 FP_INT_UPWARD =

 0,
 FP_INT_DOWNWARD =

 1,
 FP_INT_TOWARDZERO =

 2,
 FP_INT_TONEARESTFROMZERO =

 3,
 FP_INT_TONEAREST =

 4,
 }; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 acosf128 (_Float128 __x) ;   extern _Float128 __acosf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 asinf128 (_Float128 __x) ;   extern _Float128 __asinf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atanf128 (_Float128 __x) ;   extern _Float128 __atanf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) ;   extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) ; ununderstood ***/
/*** extern _Float128 cosf128 (_Float128 __x) ;   extern _Float128 __cosf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 sinf128 (_Float128 __x) ;   extern _Float128 __sinf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 tanf128 (_Float128 __x) ;   extern _Float128 __tanf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 coshf128 (_Float128 __x) ;   extern _Float128 __coshf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 sinhf128 (_Float128 __x) ;   extern _Float128 __sinhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 tanhf128 (_Float128 __x) ;   extern _Float128 __tanhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 acoshf128 (_Float128 __x) ;   extern _Float128 __acoshf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 asinhf128 (_Float128 __x) ;   extern _Float128 __asinhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atanhf128 (_Float128 __x) ;   extern _Float128 __atanhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 expf128 (_Float128 __x) ;   extern _Float128 __expf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 frexpf128 (_Float128 __x, int *__exponent) ;   extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) ; ununderstood ***/
/*** extern _Float128 ldexpf128 (_Float128 __x, int __exponent) ;   extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) ; ununderstood ***/
/*** extern _Float128 logf128 (_Float128 __x) ;   extern _Float128 __logf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log10f128 (_Float128 __x) ;   extern _Float128 __log10f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) ;   extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr)  ; ununderstood ***/
/*** extern _Float128 exp10f128 (_Float128 __x) ;   extern _Float128 __exp10f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 expm1f128 (_Float128 __x) ;   extern _Float128 __expm1f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log1pf128 (_Float128 __x) ;   extern _Float128 __log1pf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 logbf128 (_Float128 __x) ;   extern _Float128 __logbf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 exp2f128 (_Float128 __x) ;   extern _Float128 __exp2f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log2f128 (_Float128 __x) ;   extern _Float128 __log2f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 powf128 (_Float128 __x, _Float128 __y) ;   extern _Float128 __powf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 sqrtf128 (_Float128 __x) ;   extern _Float128 __sqrtf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) ;   extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 cbrtf128 (_Float128 __x) ;   extern _Float128 __cbrtf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 ceilf128 (_Float128 __x)  __attribute__ ((__const__));   extern _Float128 __ceilf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fabsf128 (_Float128 __x)  __attribute__ ((__const__));   extern _Float128 __fabsf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 floorf128 (_Float128 __x)  __attribute__ ((__const__));   extern _Float128 __floorf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) ;   extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));   extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 nanf128 (const char *__tagb) ;   extern _Float128 __nanf128 (const char *__tagb) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 j0f128 (_Float128) ;   extern _Float128 __j0f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 j1f128 (_Float128) ;   extern _Float128 __j1f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 jnf128 (int, _Float128) ;   extern _Float128 __jnf128 (int, _Float128) ; ununderstood ***/
/*** extern _Float128 y0f128 (_Float128) ;   extern _Float128 __y0f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 y1f128 (_Float128) ;   extern _Float128 __y1f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 ynf128 (int, _Float128) ;   extern _Float128 __ynf128 (int, _Float128) ; ununderstood ***/
/*** extern _Float128 erff128 (_Float128) ;   extern _Float128 __erff128 (_Float128) ; ununderstood ***/
/*** extern _Float128 erfcf128 (_Float128) ;   extern _Float128 __erfcf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 lgammaf128 (_Float128) ;   extern _Float128 __lgammaf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 tgammaf128 (_Float128) ;   extern _Float128 __tgammaf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 lgammaf128_r (_Float128, int *__signgamp) ;   extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) ; ununderstood ***/
/*** extern _Float128 rintf128 (_Float128 __x) ;   extern _Float128 __rintf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) ;   extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 nextdownf128 (_Float128 __x) ;   extern _Float128 __nextdownf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 nextupf128 (_Float128 __x) ;   extern _Float128 __nextupf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) ;   extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 scalbnf128 (_Float128 __x, int __n) ;   extern _Float128 __scalbnf128 (_Float128 __x, int __n) ; ununderstood ***/
/*** extern _Float128 scalblnf128 (_Float128 __x, long int __n) ;   extern _Float128 __scalblnf128 (_Float128 __x, long int __n) ; ununderstood ***/
/*** extern _Float128 nearbyintf128 (_Float128 __x) ;   extern _Float128 __nearbyintf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 roundf128 (_Float128 __x)  __attribute__ ((__const__));   extern _Float128 __roundf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 truncf128 (_Float128 __x)  __attribute__ ((__const__));   extern _Float128 __truncf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) ;   extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) ; ununderstood ***/
/*** extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) ;   extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));   extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));   extern _Float128 __fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) ;   extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) ; ununderstood ***/
/*** extern _Float128 roundevenf128 (_Float128 __x)  __attribute__ ((__const__));   extern _Float128 __roundevenf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));   extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));   extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 getpayloadf128 (const _Float128 *__x) ;   extern _Float128 __getpayloadf128 (const _Float128 *__x) ; ununderstood ***/
/*** extern _Float128 scalbf128 (_Float128 __x, _Float128 __n) ;   extern _Float128 __scalbf128 (_Float128 __x, _Float128 __n) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/

#include <limits.h>

#include <float.h>

#include <string.h>


#include <time.h>

#include <sys/time.h>

#include <sys/types.h>

#include <setjmp.h>

#include <errno.h>

#include <signal.h>
#ifdef nofenv
  #define feenableexcept(fpe)
  #define feclearexcept(fpe)
#else
  #include <fenv.h>
  #ifdef modfenv
    #include "feenableexceptosx.h"
  #endif
  #define fpe FE_INVALID | FE_OVERFLOW | FE_DIVBYZERO
#endif

extern char errortemp_[(80+1)];

struct arrptr{int l,h; ssize_t i; char *a;};struct dynptr{void* p; int t;};extern char INTERRUPT;
extern void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};extern struct freefunc *freestack;

#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}

#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
extern void traprestore(void *ptr);
extern void condfree(void *ptr);
extern int friexecerror(char** s);
extern int (*friexec)(char** s);

#define mmovefrom(var,buf,type) *(type *)(buf)=*var

#define mmoveto(var,buf,type) *var=*(type *)(buf)

#define mainstart void default_traphandler(const char *errormessage){   freemem(NULL);   if(errormessage[0]){     printERR;     exit(EXIT_FAILURE);   }else exit(EXIT_SUCCESS); } int main(int argc, char **argv){ struct freefunc* es; 			{struct sigaction act,oldact; act.sa_sigaction=trapsignal; sigemptyset(&act.sa_mask); act.sa_flags=SA_RESTART|SA_SIGINFO; sigaction(SIGSEGV,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGSEGV,&oldact,NULL); sigaction(SIGFPE,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGFPE,&oldact,NULL); sigaction(SIGILL,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGILL,&oldact,NULL); sigaction(SIGINT,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGINT,&oldact,NULL); /* \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
*/ else {traphandler=default_traphandler;       freestack=NULL;       feenableexcept(fpe);      }; } es=freestack;
extern int dynptrerr(int type);
extern void *errmalloc();
extern void ioerr(FILE *fil);
extern void errfclose(void *voidf);
extern void errfopen(FILE **f, const char *name, int mode);
extern int scanrec(FILE *f, const char *format, void *var) ;
extern int scanbool(FILE *f, const char *format, int *var) ;
extern int myfgets(char *name, char *var, char *varend, FILE *f) ;
extern int mygetline(char *name, char **var, FILE *f) ;
extern void trapsignal(int signum, siginfo_t *info, void *ucontext);






/* INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x) */
/* INTEGER LIBRARY FUNCTION int[(int)](REAL x) */





/* to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
*/
/*"!====================================!" */
/*"!                                    !" */
/*"!  Data structures, subroutines and  !" */
/*"!            definitions             !" */
/*"!                                    !" */
/*"!====================================!" */
/*"! " */
/*"! to cite this software:              " */
/*"! " */
/*"! G. Haller, S. Katsanoulis, M. Holzner, "  */
/*"! B. Frohnapfel and D. Gatti, Objective  " */
/*"! material barriers to the transport of  "  */
/*"! momentum and vorticity. submitted (2020)" */
/*"! " */

/* Fast-Fourier transform library (actually INCLUDed from fft.cmn)   ! */
/* and utilities to read the REAL values encoded in a COMPLEX array. ! */
/* For usage see fft.info.                                           ! */
/*                                                                   ! */
/* Copyright 1997-2020 Paolo Luchini http://CPLcode.net              ! */
/* Released under the attached LICENSE.                              ! */
/*                                                                   ! */
/* Code maturity: green.                                             ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

/* Complex-number type definition and corresponding extensions to the ! */
/* CPL language                                                       ! */
/*                                                                    ! */
/* Copyright 1996-2020 Paolo Luchini http://CPLcode.net               ! */
/* Released under the attached LICENSE.                               ! */
/*                                                                    ! */
/* Code maturity: green.                                              ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

struct COMPLEX_{double REAL_;double IMAG_;};
#define COMPLEX_s (ssize_t)sizeof(struct COMPLEX_)


extern void complex_1INV(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_2EXP(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_3SINH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_4COSH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_5TANH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_6COTH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);






extern void complex_7LOG(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_8POWER(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG,double y_REAL,double y_IMAG);


extern void complex_9SQRT(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_10ACOS(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);




extern void complex_11CRAND(struct COMPLEX_ *RESULT_);

extern void complex_12CGAUSS(struct COMPLEX_ *RESULT_);



void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

extern int fft_9FFTfit(int N_);


extern void fft_fft_10ReverseInc(int *K_,int N_);


extern int fft_fft_LASTN;

extern struct arrptr fft_fft_CEXP;

extern struct arrptr fft_fft_tempVEC;

extern struct arrptr fft_fft_RI;

extern char *fft_fft_RI2;
extern char *fft_fft_RI3;


extern void fft_fft_11SETUP(int N_);


extern double fft_fft_12C3;


extern void fft_fft_13BTFLY(int N_,int M_);




extern void fft_fft_14BTFLYI(int N_);


/*
SUBROUTINE BTFLY2(type R^(*))
  N=R.LENGTH
  INTEGER M=1
  COMPLEX C1=-1
  DO
    COMPLEX C=1
    M2=2*M
    LOOP FOR H=0 TO M-1
      C=C*C1
      DO
        A=C*R(J+M)
        R(J+M)=R(J)-A
        R(J)=R(J)+A
      FOR J=H TO N-1 BY M2
    REPEAT LOOP
    M=M2
    C1=SQRT(C1)
  UNTIL M=N
END BTFLY2

SUBROUTINE BTFLY2I(type R^(*))
  N=R.LENGTH
  INTEGER M2=2
  COMPLEX C1=-1
  DO
    M2=2*M2
    C1=SQRT(C1)
  UNTIL M2=N
  DO
    COMPLEX C=1
    INTEGER M=M2 DIV 2
    INTEGER H
    LOOP FOR H=0 TO M-1
      C=C*CONJG(C1)
      INTEGER J
      DO
	A=R(J)-R(J+M)
	R(J)=R(J)+R(J+M)
	R(J+M)=A*C
      FOR J=H TO N-1 BY M2
    REPEAT LOOP
    M2=M
    C1=C1*C1
  UNTIL M2=1
END BTFLY2I
*/

extern void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

  
extern void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);


extern double *fft_15REALIFIED(const int x_l,const int x_h,const ssize_t x_i,char *x__,int y_);



/* Library of common matrix algebra operations for real-valued matrices ! */
/* including suitable extensions to the CPL language to handle infix    ! */
/* notation for such functions. See matrix.info for usage.              ! */
/*                                                                      ! */
/* Copyright 1997-2020 Paolo Luchini http://CPLcode.net                 ! */
/* Released under the attached LICENSE.                                 ! */
/*                                                                      ! */
/* Code maturity: green.                                                ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

extern double DotProduct(const int a_l,const int a_h,const ssize_t a_i,char *a__,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void rbmat_1LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___);




struct REALINVMAT_{int lo_;int hi_;};
#define REALINVMAT_s (ssize_t)sizeof(struct REALINVMAT_)





extern void rbmat_2MatEqu(const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,char *c___,double a_);


extern void rbmat_3MatEqu(FILE *c_f,const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,off_t c___,double a_);


extern void rbmat_4LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void rbmat_5RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,FILE *B_f,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,off_t B___);


extern void rbmat_6LUdecomp(const int AA_l,const int AA_h,const ssize_t AA_i,const int AA__l,const int AA__h,const ssize_t AA__i,char *AA___);


extern void rbmat_7LUdecomp(FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);


extern void rbmat_8LeftLDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_9LeftUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);




extern void rbmat_10LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_11RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___);


extern void rbmat_12RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);




extern double Lanczos_norm_;

extern void rbmat_13Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,void (*A_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),void (*B_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),const int y1_l,const int y1_h,const ssize_t y1_i,char *y1__,double eps_);


/*
inclusa separatamente in cbmat e rbmat
SUBROUTINE Lanczos(POINTER TO ARRAY(*) OF number x
                   ARRAY(*,*) OF number M
                   ARRAY(*) OF number y1; REAL eps)
  SUBROUTINE A[ARRAY(*) OF number v2^,v1]
    v2=M*v1
  END A  
  SUBROUTINE B[ARRAY(*) OF number v2^,v1]
    v2=v1*M
  END B
  Lanczos(x,A,B,y1,eps)
END Lanczos		   
*/

extern void rbmat_14PLU(const int m_l,const int m_h,const ssize_t m_i,const int m__l,const int m__h,const ssize_t m__i,char *m___,struct REALINVMAT_ *RESULT_);




extern void rbmat_15LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,struct REALINVMAT_ *m_,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_16RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,struct REALINVMAT_ *m_);


extern void rbmat_17INV(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int RESULT_l,const int RESULT_h,const ssize_t RESULT_i,const int RESULT__l,const int RESULT__h,const ssize_t RESULT__i,char *RESULT___);


extern double rbmat_18DET(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___);

void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

struct rbmat_Lanczos_R_s20 {int l,h; ssize_t i;struct arrptr a;};
extern struct rbmat_Lanczos_R_s20 rbmat_Lanczos_R_Lanczos_mat;

extern void rbmat_Lanczos_R_21A(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);

extern void rbmat_Lanczos_R_22B(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);

extern void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);


/* Parallel-computing extensions to the CPL language and ! */
/* definition of SHARED types.                           ! */
/* For usage see parallel.info.                          ! */
/*                                                       !  */
/* Copyright 1999-2020 Paolo Luchini http://CPLcode.net  ! */
/* See attached LICENSE.                                 ! */
/*                                                       ! */
/* Code maturity: green.                                 ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */


#include <sys/mman.h>

#include <sys/wait.h>

#include <sys/shm.h>


#define SHMPAGE 4194304
extern size_t shmavail;
extern char *shmaddr;
extern void *shmalloc(size_t size);
extern sigset_t oldmask;
extern void donothing(int signum);
extern void setup_signal_USR1();



#include <sys/socket.h>

#include <netinet/in.h>

#include <netinet/tcp.h>
/*** # error "Adjust your <bits/endian.h> defines"

	uint16_t window ununderstood ***/
/*** enum ununderstood ***/
/*** {
 TCP_NO_QUEUE,
 TCP_RECV_QUEUE,
 TCP_SEND_QUEUE,
 TCP_QUEUES_NR,
}; ununderstood ***/

#include <netdb.h>
extern int tcpserver(uint16_t port)
;
extern int tcpclient(const char *hostname, uint16_t port) 
;
extern int udpsocket(uint16_t myport, const char *hostname, uint16_t hostport) 
;







extern void barrier_free(void * ptr);
extern struct freefunc barrier_f;
extern volatile int *barrier_;



double wallclock_1wallclock();

extern struct timeval wallclock_wallclock_startim;

  extern double wallclock_1wallclock();


/* Transparently reshapes the operation of the CPL compiler so as to provide ! */
/* array bounds checking and more run-time checks, without any modifications ! */
/* to the original program (at the expense of a slower execution).           ! */
/* To activate, put "USE rtchecks" at the beginning of your program.         ! */
/* See infocpl rtchecks.                                                     ! */
/*                                                                           !  */
/* Copyright 1996-2020 Paolo Luchini http://CPLcode.net                      ! */
/* Released under the attached LICENSE.                                      ! */
/*                                                                           ! */
/* Code maturity: mostly green but the TRACE command is orange.              ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */


#include <sys/ioctl.h>                                                          
/*
<*#ifdef __GNUC__
  const
#endif
int cb(int lb, int ub, int index);
#ifdef __GNUC__
  const
#endif
char* cp(int inputpos);
#ifdef __GNUC__
  const
#endif
char *cr(char *lb, char *ub, char *index);
*>
*/
/* nota: #ifdef non passa in C SECTION */
#undef printERR
#define printERR fprintf(stderr,"\r%s in line %d of %s: PROGRAM HALTED  \n",errormessage,ln,fn);fflush(stderr)
extern volatile int ln;
extern char * volatile fn;
extern const int cb(int lb, int ub, int index);
extern const char * cp(void);
extern const int ca(void);
extern const unsigned char sigNAN[8];


/* CPL interface to the termios functions needed to turn on and off ! */
/* character-by-character terminal input                            ! */
/*                                                                  ! */
/* Copyright 2002-2020 Paolo Luchini http://CPLcode.net             ! */
/* Released under the attached LICENSE.                             ! */
/*                                                                  ! */
/* Code maturity: green.                                            ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */


#include <termios.h>
void CHARbyCHAR_1CHARbyCHAR(int descr_);
void CHARbyCHAR_2LINEbyLINE();

extern struct termios CHARbyCHAR_CHARbyCHAR_newsetting;
extern struct termios CHARbyCHAR_CHARbyCHAR_oldsetting;

extern int CHARbyCHAR_CHARbyCHAR_CbCdescr;

extern void CHARbyCHAR_1CHARbyCHAR(int descr_);


extern void CHARbyCHAR_2LINEbyLINE();

/* Library providing an interface to the select system call ! */
/* in order to detect if input is waiting to be read.       ! */
/* See infocpl INPUTREADY.                                  ! */
/*                                                          !  */
/* Copyright 2008-2020 Paolo Luchini http://CPLcode.net     ! */
/* Released under the attached LICENSE.                     ! */
/*                                                          ! */
/* Code maturity: green.                                    ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

extern int fd_input_ready(int fd, int sec, int usec);








extern int BlockLevel;

void singlestepper(int lineN_,char *line_);






extern FILE *rtchecks_SingleStep_grabin;

extern int rtchecks_SingleStep_StopLevel;
extern char rtchecks_SingleStep_LoopCount[(ssize_t)sizeof(int)*(100+1)];
extern int rtchecks_SingleStep_LastLine;

extern int rtchecks_SingleStep_paused;

extern int rtchecks_SingleStep_lastfnlength;
extern int rtchecks_SingleStep_lastrow;

extern char *rtchecks_SingleStep_lastfn;

extern int rtchecks_SingleStep_termwidth;
extern int rtchecks_SingleStep_termheight;

extern char *rtchecks_SingleStep_hotkeys;


extern void rtchecks_SingleStep_1RestoreScroll();


extern void TRON();


extern void singlestepper(int lineN_,char *line_);



/* Definitions */
/* ------------------------------------------------------------------------------ */
/**/

/*#define vorticity */


/* Chron */
/* ------------------------------------------------------------------------------ */
double clock_;


/* Parallel  (distributed memory - could actually use MPI as well!)  !TODO implement distributed memory */
/* ------------------------------------------------------------------------------ */
int iproc_;
int nproc_;

FILE *prev_;
FILE *next_;

    

/* Parallel (shared memory) */
/* ------------------------------------------------------------------------------ */
int nsmp_ ;


/* Types */
/* ------------------------------------------------------------------------------ */




/* Read input files and set parameters */
/* ------------------------------------------------------------------------------ */
int ny_;
int nx_;
int nz_;
int ox_;
int oy_;
int oz_;
int ofx_;
int ofy_;
int ofz_;
int nxd_;
int nzd_;

double alfa0_;
double beta0_;
double a_;
double ymin_;
double ymax_;
double ni_;
double deltat_;
double deltas_;
double smax_;
double Lx_;
double Lz_;

int nfmin_;
int nfmax_;
int dn_save_;

struct freefunc path_f;char *path_;

void ftledata_3read_initial_data(){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
 FILE *in_data_;

 /*READ BY NAME FROM in_data ny,nx,nz,ox,oy,oz,ofx,ofy,ofz,alfa0,beta0,ymin,ymax,a,ni, deltat, deltas, smax; ni=1/ni */
 
 
 in_data_=NULL;ln=66;errfopen(&in_data_,"ftle.in",O_RDWR|O_CREAT);ln=68;   if(!(scanrec( in_data_ ," ny = %d",&ny_)>0))ioerr( in_data_ );
 ln=69;{do{  }while(   (scanrec( in_data_ ," nx = %d",&nx_ )>0 ||scanrec( in_data_ ," nxd = %d",&nxd_)>0));}  if( nxd_==0 ){ int d4;
nxd_=(d4=3*nx_ ,(d4>=0)==(2 >=0)?d4:d4-(2 )+1)/ 2 - 1; {do{  nxd_ +=1;}while(!(fft_9FFTfit(nxd_)));} nxd_=2*nxd_;};
 ln=70;{do{  }while(   (scanrec( in_data_ ," nz = %d",&nz_ )>0 ||scanrec( in_data_ ," nzd = %d",&nzd_)>0));}  if( nzd_==0 ){ nzd_=3*nz_ - 1; {do{  nzd_ +=1;}while(!(fft_9FFTfit(nzd_)));} };
 ln=71;   if(!(scanrec( in_data_ ," ox = %d",&ox_)>0&&scanrec( in_data_ ," oy = %d",&oy_)>0&&scanrec( in_data_ ," oz = %d",&oz_)>0&&scanrec( in_data_ ," ofx = %d",&ofx_)>0&&scanrec( in_data_ ," ofy = %d",&ofy_)>0&&scanrec( in_data_ ," ofz = %d",&ofz_)>0))ioerr( in_data_ );
 ln=72;{do{  }while(   (scanrec( in_data_ ," alfa0 = %lg",&alfa0_ )>0 ||scanrec( in_data_ ," Lx = %lg",&Lx_)>0));}  if( Lx_==0.){ Lx_=2.*3.14159265358979323846/alfa0_ ;}else{ alfa0_=2.*3.14159265358979323846/Lx_;};
 ln=73;{do{  }while(   (scanrec( in_data_ ," beta0 = %lg",&beta0_ )>0 ||scanrec( in_data_ ," Lz = %lg",&Lz_)>0));}  if( Lz_==0.){ Lz_=2.*3.14159265358979323846/beta0_ ;}else{ beta0_=2.*3.14159265358979323846/Lz_;};
 ln=74;   if(!(scanrec( in_data_ ," ymin = %lg",&ymin_)>0 &&scanrec( in_data_ ," ymax = %lg",&ymax_)>0 &&scanrec( in_data_ ," a = %lg",&a_)>0 &&scanrec( in_data_ ," ni = %lg",&ni_)>0 &&scanrec( in_data_ ," deltat = %lg",&deltat_)>0 &&scanrec( in_data_ ," deltas = %lg",&deltas_)>0 &&scanrec( in_data_ ," smax = %lg",&smax_)>0))ioerr( in_data_ );  ni_=1./ni_;
ln=76;ofx_=1;  ofy_=1;  ofz_=1;
ln=78;   if(!(scanrec( in_data_ ," nfmin = %d",&nfmin_)>0&&scanrec( in_data_ ," nfmax = %d",&nfmax_)>0&&scanrec( in_data_ ," dn_save = %d",&dn_save_)>0))ioerr( in_data_ );
 ln=79;   if(!(mygetline(" path =",&path_, in_data_ )))ioerr( in_data_ );
 ln=80;errfclose(&in_data_);
 ln=88;if( (next_==NULL) ){
   ln=82;   fprintf(stdout,"""nproc=""%d\t""nsmp=""%d",nproc_,nsmp_);putc('\n',stdout);
   ln=83;   fprintf(stdout,"""nx=""%d\t""nz=""%d\t""ny=""%d",nx_ ,nz_ ,ny_);putc('\n',stdout);
   ln=84;   fprintf(stdout,"""ox=""%d\t""oy=""%d\t""oz=""%d",ox_ ,oy_ ,oz_);putc('\n',stdout);
   ln=85;   fprintf(stdout,"""ofx=""%d\t""ofy=""%d\t""ofz=""%d",ofx_ ,ofy_ ,ofz_);putc('\n',stdout);
   ln=86;   fprintf(stdout,"""ymin=""%g\t""ymax=""%g\t""a=""%g\t""alfa0=""%g\t""beta0=""%g\t""1/ni=""%g",ymin_ ,ymax_ ,a_ ,alfa0_ ,beta0_ ,1./ni_);putc('\n',stdout);
   ln=87;   fprintf(stdout,"""deltat=""%g\t""deltas=""%g\t""smax=""%g",deltat_ ,deltas_ ,smax_);putc('\n',stdout);
 };
}fn=savefn; ln=saveln;}
int ftledata_4dir;

int ftledata_5h;
ssize_t ftledata_6i;
ssize_t ftledata_7st;
struct freefunc y_f;char *y_;
  int d9;
int ftledata_10nyl;
int d11;
int ftledata_12nyh;

FILE *coordfile_;

int ftledata_13h;


/* Define velocity fields */
/* ------------------------------------------------------------------------------ */
struct freefunc fieldname_f;char *fieldname_ ;

int ftledata_15h;
int ftledata_16h;
int ftledata_17h;
ssize_t ftledata_18i;
ssize_t ftledata_19i;
ssize_t ftledata_20i;
ssize_t ftledata_21st;
void velocity_free(void * ptr){munmap((char*)ptr+ftledata_21st,ftledata_20i);}struct freefunc velocity_f;char *velocity_;


int ftledata_22h;
int ftledata_23h;
int ftledata_24h;
ssize_t ftledata_25i;
ssize_t ftledata_26i;
ssize_t ftledata_27i;
ssize_t ftledata_28st;
void active_free(void * ptr){munmap((char*)ptr+ftledata_28st,ftledata_27i);}struct freefunc active_f;char *active_;



/* Module for operating with velocity fields */
/* ------------------------------------------------------------------------------ */

/*====================================! */
/*                                    ! */
/*        xCompact3D interface        ! */
/*                                    ! */
/*====================================! */
/*  */
/* This module exposes a single function */
/* that returns the velocity and active field */
/* in phyiscal space */
/*  */
/* to cite this software:               */
/*  */
/* G. Haller, S. Katsanoulis, M. Holzner,   */
/* B. Frohnapfel and D. Gatti, Objective   */
/* material barriers to the transport of    */
/* momentum and vorticity. submitted (2020) */
/*  */

void xCompactInterface_1readVelocityField(char *field_name_,const int Vr_l,const int Vr_h,const ssize_t Vr_i,const int Vr__l,const int Vr__h,const ssize_t Vr__i,const int Vr___l,const int Vr___h,const ssize_t Vr___i,char *Vr____,const int AVFr_l,const int AVFr_h,const ssize_t AVFr_i,const int AVFr__l,const int AVFr__h,const ssize_t AVFr__i,const int AVFr___l,const int AVFr___h,const ssize_t AVFr___i,char *AVFr____);

extern int xCompactInterface_channelInterface_2h;
extern int xCompactInterface_channelInterface_3h;
extern int xCompactInterface_channelInterface_4h;
extern off_t xCompactInterface_channelInterface_5i;
extern off_t xCompactInterface_channelInterface_6i;
extern off_t xCompactInterface_channelInterface_7i;
extern off_t xCompactInterface_channelInterface_9i;
extern off_t xCompactInterface_channelInterface_10i;
extern off_t xCompactInterface_channelInterface_11i;
extern off_t xCompactInterface_channelInterface_12i;
struct xCompactInterface_channelInterface_s8{};
#define xCompactInterface_channelInterface_s8_s (ssize_t)sizeof(struct xCompactInterface_channelInterface_s8)
extern FILE *xCompactInterface_channelInterface_diskfield;


extern void xCompactInterface_channelInterface_13read_field(char *field_name_,const int V_l,const int V_h,const ssize_t V_i,const int V__l,const int V__h,const ssize_t V__i,const int V___l,const int V___h,const ssize_t V___i,char *V____);


/* Coefficients required for derivatives */
extern double xCompactInterface_channelInterface_alfa1;
  extern double xCompactInterface_channelInterface_14a1;
extern double xCompactInterface_channelInterface_15b1;
extern double xCompactInterface_channelInterface_alfa2;
extern double xCompactInterface_channelInterface_a2;

extern double xCompactInterface_channelInterface_b2;
extern double xCompactInterface_channelInterface_c2;

extern double xCompactInterface_channelInterface_dx;
extern double xCompactInterface_channelInterface_dz;
extern double xCompactInterface_channelInterface_dxi;

extern double xCompactInterface_channelInterface_16delta;
extern ssize_t xCompactInterface_channelInterface_17st;
extern ssize_t xCompactInterface_channelInterface_18st;
struct DERIVCOEFFS_{char d01_[(ssize_t)sizeof(double)*(1-(-1)+1)];char d02_[(ssize_t)sizeof(double)*(1-(-1)+1)];char d2_[(ssize_t)sizeof(double)*(3-(-3)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];};
#define DERIVCOEFFS_s (ssize_t)sizeof(struct DERIVCOEFFS_)

extern int xCompactInterface_channelInterface_19h;
extern ssize_t xCompactInterface_channelInterface_20i;
extern struct freefunc xCompactInterface_channelInterface_derivxf;
extern char *xCompactInterface_channelInterface_derivx;
extern int xCompactInterface_channelInterface_21h;
extern ssize_t xCompactInterface_channelInterface_22i;
extern struct freefunc xCompactInterface_channelInterface_derivyf;
extern char *xCompactInterface_channelInterface_derivy;
extern int xCompactInterface_channelInterface_23h;
extern ssize_t xCompactInterface_channelInterface_24i;
extern struct freefunc xCompactInterface_channelInterface_derivzf;
extern char *xCompactInterface_channelInterface_derivz;

/* x-derivatives */
extern int xCompactInterface_channelInterface_25h;
extern ssize_t xCompactInterface_channelInterface_26i;
extern struct freefunc xCompactInterface_channelInterface_uux1f;
extern char *xCompactInterface_channelInterface_uux1;
extern struct freefunc xCompactInterface_channelInterface_uux2f;
extern char *xCompactInterface_channelInterface_uux2;
  extern int xCompactInterface_channelInterface_27h;
extern ssize_t xCompactInterface_channelInterface_28i;
extern struct freefunc xCompactInterface_channelInterface_vvx1f;
extern char *xCompactInterface_channelInterface_vvx1;
extern struct freefunc xCompactInterface_channelInterface_vvx2f;
extern char *xCompactInterface_channelInterface_vvx2;
  extern int xCompactInterface_channelInterface_30h;
extern ssize_t xCompactInterface_channelInterface_31i;
extern struct freefunc xCompactInterface_channelInterface_uuz1f;
extern char *xCompactInterface_channelInterface_uuz1;
extern struct freefunc xCompactInterface_channelInterface_uuz2f;
extern char *xCompactInterface_channelInterface_uuz2;
  extern int xCompactInterface_channelInterface_32h;
extern ssize_t xCompactInterface_channelInterface_33i;
extern struct freefunc xCompactInterface_channelInterface_vvz1f;
extern char *xCompactInterface_channelInterface_vvz1;
extern struct freefunc xCompactInterface_channelInterface_vvz2f;
extern char *xCompactInterface_channelInterface_vvz2;
  extern double xCompactInterface_channelInterface_beta;

extern double xCompactInterface_channelInterface_alfah;

extern int xCompactInterface_channelInterface_46h;
extern ssize_t xCompactInterface_channelInterface_47i;
extern struct freefunc xCompactInterface_channelInterface_hpf;
extern char *xCompactInterface_channelInterface_hp;
extern struct freefunc xCompactInterface_channelInterface_one_hpf;
extern char *xCompactInterface_channelInterface_one_hp;
extern struct freefunc xCompactInterface_channelInterface_one_hp2f;
extern char *xCompactInterface_channelInterface_one_hp2;
extern struct freefunc xCompactInterface_channelInterface_hpp_hp3f;
extern char *xCompactInterface_channelInterface_hpp_hp3;
extern struct freefunc xCompactInterface_channelInterface_hppf;
extern char *xCompactInterface_channelInterface_hpp;

extern void xCompactInterface_channelInterface_54deriv(const int D_l,const int D_h,const ssize_t D_i,const int D__l,const int D__h,const ssize_t D__i,char *D___,const int D0_l,const int D0_h,const ssize_t D0_i,const int D0__l,const int D0__h,const ssize_t D0__i,char *D0___,const int zzz_l,const int zzz_h,const ssize_t zzz_i,char *zzz__,const int vvv_l,const int vvv_h,const ssize_t vvv_i,char *vvv__,const int f_l,const int f_h,const ssize_t f_i,char *f__,const int df_l,const int df_h,const ssize_t df_i,char *df__);





extern void xCompactInterface_channelInterface_55d1y(const int f_l,const int f_h,const ssize_t f_i,char *f__,const int df_l,const int df_h,const ssize_t df_i,char *df__);

extern void xCompactInterface_channelInterface_56d2y(const int f_l,const int f_h,const ssize_t f_i,char *f__,const int df_l,const int df_h,const ssize_t df_i,char *df__);


/* TESTS  */
/*test-x */
extern int xCompactInterface_channelInterface_57h;
extern ssize_t xCompactInterface_channelInterface_58i;
extern struct freefunc xCompactInterface_channelInterface_xtestff;
extern char *xCompactInterface_channelInterface_xtestf;
extern struct freefunc xCompactInterface_channelInterface_xtestdff;
extern char *xCompactInterface_channelInterface_xtestdf;
extern struct freefunc xCompactInterface_channelInterface_xtestd2ff;
extern char *xCompactInterface_channelInterface_xtestd2f;
  extern int xCompactInterface_channelInterface_59h;
extern ssize_t xCompactInterface_channelInterface_60i;
extern struct freefunc xCompactInterface_channelInterface_ztestff;
extern char *xCompactInterface_channelInterface_ztestf;
extern struct freefunc xCompactInterface_channelInterface_ztestdff;
extern char *xCompactInterface_channelInterface_ztestdf;
extern struct freefunc xCompactInterface_channelInterface_ztestd2ff;
extern char *xCompactInterface_channelInterface_ztestd2f;
  extern int xCompactInterface_channelInterface_61h;
extern ssize_t xCompactInterface_channelInterface_62i;
extern struct freefunc xCompactInterface_channelInterface_testff;
extern char *xCompactInterface_channelInterface_testf;
extern struct freefunc xCompactInterface_channelInterface_testdff;
extern char *xCompactInterface_channelInterface_testdf;
extern struct freefunc xCompactInterface_channelInterface_testd2ff;
extern char *xCompactInterface_channelInterface_testd2f;
  extern void xCompactInterface_1readVelocityField(char *field_name_,const int Vr_l,const int Vr_h,const ssize_t Vr_i,const int Vr__l,const int Vr__h,const ssize_t Vr__i,const int Vr___l,const int Vr___h,const ssize_t Vr___i,char *Vr____,const int AVFr_l,const int AVFr_h,const ssize_t AVFr_i,const int AVFr__l,const int AVFr__h,const ssize_t AVFr__i,const int AVFr___l,const int AVFr___h,const ssize_t AVFr___i,char *AVFr____);




/* ODE Library */
/* ------------------------------------------------------------------------------ */
double newcoef_;
double oldcoef_;
double lambda_;

char RK4_[(ssize_t)sizeof(double)*4*4];

void ftledata_31timescheme(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG,int it_){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  double _32r;
double _33r;
double _34r;
ln=136;_32r=(*(double *)(cb(1,4,1)*(ssize_t)sizeof(double)+cb(1,4,it_)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))/deltat_;
ln=136;_33r=(*(double *)(cb(1,4,2)*(ssize_t)sizeof(double)+cb(1,4,it_)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
ln=136;_34r=(*(double *)(cb(1,4,3)*(ssize_t)sizeof(double)+cb(1,4,it_)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
ln=136;{register double temp=(_32r*unkn_REAL)+impl_REAL+(_33r*expl_REAL)+(_34r*(*(struct COMPLEX_*)(cb(old_l,old_h,1)*old_i+old__)).REAL_);(*rhs_).IMAG_=(_32r*unkn_IMAG)+impl_IMAG+(_33r*expl_IMAG)+(_34r*(*(struct COMPLEX_*)(cb(old_l,old_h,1)*old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  ln=137;{register double temp=expl_REAL;(*(struct COMPLEX_ *)(cb(old_l,old_h,1)*old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(cb(old_l,old_h,1)*old_i+old__)).REAL_=temp;};
}fn=savefn; ln=saveln;}

void ftledata_32set_ODE_step(int it_){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  struct COMPLEX_ coef1_;
struct COMPLEX_ coef2_;
struct COMPLEX_ coeft_;

  char vc1_[COMPLEX_s*2];
char vc2_[COMPLEX_s*2];
  memmove(&coef1_.REAL_,&sigNAN,sizeof(double));memmove(&coef1_.IMAG_,&sigNAN,sizeof(double));memmove(&coef2_.REAL_,&sigNAN,sizeof(double));memmove(&coef2_.IMAG_,&sigNAN,sizeof(double));memmove(&coeft_.REAL_,&sigNAN,sizeof(double));memmove(&coeft_.IMAG_,&sigNAN,sizeof(double));ln=142;lambda_=(*(double *)(cb(1,4,4)*(ssize_t)sizeof(double)+cb(1,4,it_)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
  ln=143;memset(COMPLEX_s+vc1_-COMPLEX_s,0,COMPLEX_s*2);ln=143;memset(COMPLEX_s+vc2_-COMPLEX_s,0,COMPLEX_s*2);ln=143;(*(struct COMPLEX_ *)(cb(1,2,1)*COMPLEX_s+vc2_-COMPLEX_s)).REAL_=1.;(*(struct COMPLEX_ *)(cb(1,2,1)*COMPLEX_s+vc2_-COMPLEX_s)).IMAG_=0.;
  ln=144;ftledata_31timescheme(&coeft_,1,2,COMPLEX_s,vc1_-COMPLEX_s,1.,0.,0.,0.,0.,0.,it_);  ftledata_31timescheme(&coef2_,1,2,COMPLEX_s,vc2_-COMPLEX_s,0.,0.,0.,0.,0.,0.,it_);  ftledata_31timescheme(&coef1_,1,2,COMPLEX_s,vc1_-COMPLEX_s,0.,0.,0.,0.,1.,0.,it_);
  ln=145;newcoef_=coef1_.REAL_/coeft_.REAL_/deltat_;  oldcoef_=coef2_.REAL_/coeft_.REAL_/deltat_;
}fn=savefn; ln=saveln;}

/* Velocity field interpolators */
/* ------------------------------------------------------------------------------ */
void ftledata_33linearInterpolator(const int Vi_l,const int Vi_h,const ssize_t Vi_i,const int Vi__l,const int Vi__h,const ssize_t Vi__i,const int Vi___l,const int Vi___h,const ssize_t Vi___i,const int Vi____l,const int Vi____h,const ssize_t Vi____i,char *Vi_____,const int Ve_l,const int Ve_h,const ssize_t Ve_i,const int Ve__l,const int Ve__h,const ssize_t Ve__i,const int Ve___l,const int Ve___h,const ssize_t Ve___i,const int Ve____l,const int Ve____h,const ssize_t Ve____i,char *Ve_____,const int Vo_l,const int Vo_h,const ssize_t Vo_i,const int Vo__l,const int Vo__h,const ssize_t Vo__i,const int Vo___l,const int Vo___h,const ssize_t Vo___i,const int Vo____l,const int Vo____h,const ssize_t Vo____i,char *Vo_____){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  ln=155;fflush(NULL); {int ismp_=0  ;while(ismp_<nsmp_-1&&fork()){ismp_+=1;};{

    int d34;
int d35;
ln=154; {int ix_=(d34=ismp_*(*(&nxd_) ),(d34>=0)==(nsmp_ >=0)?d34:d34-(nsmp_ )+1)/ nsmp_  ;while(ix_<=(d35=(ismp_+1)*(*(&nxd_) ),(d35>=0)==(nsmp_ >=0)?d35:d35-(nsmp_ )+1)/ nsmp_ -1){
       ln=153;  {int iz_=Vo__l;do{{int iy_=Vo___l;do{{int i_=Vo____l;do{{ ln=153; (*(double *)(cb(Vo____l,Vo____h,i_)*Vo____i+cb(Vo___l,Vo___h,iy_)*Vo___i+cb(Vo__l,Vo__h,iz_)*Vo__i+cb(Vo_l,Vo_h,ix_)*Vo_i+Vo_____) )= ( (*(double *)(cb(Vi____l,Vi____h,i_)*Vi____i+cb(Vi___l,Vi___h,iy_)*Vi___i+cb(Vi__l,Vi__h,iz_)*Vi__i+cb(Vi_l,Vi_h,ix_)*Vi_i+Vi_____))*(1.-lambda_) + (*(double *)(cb(Ve____l,Ve____h,i_)*Ve____i+cb(Ve___l,Ve___h,iy_)*Ve___i+cb(Ve__l,Ve__h,iz_)*Ve__i+cb(Ve_l,Ve_h,ix_)*Ve_i+Ve_____))*lambda_ )*(double)(ftledata_4dir);}i_++;}while(i_<=Vo____h);}iy_++;}while(iy_<=Vo___h);}iz_++;}while(iz_<=Vo__h);}
    ix_+=1;};}
  } if(ismp_<nsmp_-1)exit(0);;}
 {int ismp_=0  ;while(ismp_<nsmp_-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;};}
}fn=savefn; ln=saveln;}

/* Particle tracks: definitions */
/* ------------------------------------------------------------------------------ */



int ftledata_36nx_part;
double dx_part_;

int ftledata_37h;
ssize_t ftledata_38i;
struct freefunc xx_f;char *xx_;
  
int ftledata_39nz_part;
double dz_part_;

int ftledata_40h;
ssize_t ftledata_41i;
struct freefunc zz_f;char *zz_;
  int ftledata_42ny_part;
int ftledata_43h;
ssize_t ftledata_44i;
struct freefunc yy_f;char *yy_;

int np_ ;

int extnp_ ;

int ftledata_58h;
int ftledata_59h;
int ftledata_60h;
ssize_t ftledata_61i;
ssize_t ftledata_62i;
ssize_t ftledata_63i;
void particles_free(void * ptr){munmap((char*)ptr+(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1),ftledata_63i);}struct freefunc particles_f;char *particles_;

int ftledata_64h;
int ftledata_65h;
int ftledata_66h;
ssize_t ftledata_67i;
ssize_t ftledata_68i;
ssize_t ftledata_69i;
void hitBoundary_free(void * ptr){munmap((char*)ptr+(ssize_t)sizeof(int)*(5+1),ftledata_69i);}struct freefunc hitBoundary_f;char *hitBoundary_;

/*#ifndef dummy */
/* Particles that I need for the barrier field and the gradient of its dummy flowmap */
int ftledata_70h;
int ftledata_71h;
int ftledata_72h;
ssize_t ftledata_73i;
ssize_t ftledata_74i;
ssize_t ftledata_75i;
void extparticles_free(void * ptr){munmap((char*)ptr+(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1),ftledata_75i);}struct freefunc extparticles_f;char *extparticles_;

int ftledata_76h;
int ftledata_77h;
int ftledata_78h;
ssize_t ftledata_79i;
ssize_t ftledata_80i;
ssize_t ftledata_81i;
void exthitBoundary_free(void * ptr){munmap((char*)ptr+(ssize_t)sizeof(int),ftledata_81i);}struct freefunc exthitBoundary_f;char *exthitBoundary_;

/*#endif */
int ftledata_82h;
int ftledata_83h;
int ftledata_84h;
off_t ftledata_85i;
off_t ftledata_86i;
int ftledata_87h;
int ftledata_88h;
int ftledata_89h;
off_t ftledata_90i;
off_t ftledata_91i;
off_t ftledata_93i;
off_t ftledata_94i;
off_t ftledata_95i;
off_t ftledata_96i;
off_t ftledata_97i;
off_t ftledata_98i;
struct ftledata_s92{};
#define ftledata_s92_s (ssize_t)sizeof(struct ftledata_s92)
FILE *diskparticles_;

int iytr_;

char Wx_[(ssize_t)sizeof(double)*6];
char Wz_[(ssize_t)sizeof(double)*6];
char Wxp_[(ssize_t)sizeof(double)*6];
char Wzp_[(ssize_t)sizeof(double)*6];
  char Wy_[(ssize_t)sizeof(double)*(5+1)];
char Wyp_[(ssize_t)sizeof(double)*(5+1)];
  char ixv_[(ssize_t)sizeof(int)*6];
char izv_[(ssize_t)sizeof(int)*6];

int ordy_;
int ixp_;
int iyp_;
int izp_;
  double vpoldu_;
double vpoldv_;
double vpoldw_;

double dx_;
double dz_;

double ftledata_105;
double ftledata_106epsx;
double ftledata_107epsy;
double ftledata_108;
double ftledata_109epsz;
char eps_[(ssize_t)sizeof(double)*(2+1)*(5+1)];


int ftledata_114h;
int ftledata_115h;
int ftledata_116h;
ssize_t ftledata_117i;
ssize_t ftledata_118i;
ssize_t ftledata_119i;
ssize_t ftledata_120st;
void barrierField_free(void * ptr){munmap((char*)ptr+ftledata_120st,ftledata_119i);}struct freefunc barrierField_f;char *barrierField_;

int ftledata_121h;
int ftledata_122h;
int ftledata_123h;
ssize_t ftledata_124i;
ssize_t ftledata_125i;
ssize_t ftledata_126i;
void barrierFieldIntegrand_free(void * ptr){munmap((char*)ptr+ftledata_120st,ftledata_126i);}struct freefunc barrierFieldIntegrand_f;char *barrierFieldIntegrand_;

int ftledata_127h;
int ftledata_128h;
int ftledata_129h;
off_t ftledata_130i;
off_t ftledata_131i;
FILE *diskBarrierField_;



/* Particle tracks: integration (velocity flowmap only) */
/* ------------------------------------------------------------------------------ */
void ftledata_132advance_trajectories(const int V_l,const int V_h,const ssize_t V_i,const int V__l,const int V__h,const ssize_t V__i,const int V___l,const int V___h,const ssize_t V___i,char *V____){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  ln=262;fflush(NULL); {int ismp_=0  ;while(ismp_<nsmp_-1&&fork()){ismp_+=1;};{

    ln=261; {int iii_=ismp_  ;while(iii_<=np_-1 ){{
     char *_133w;
ln=241;_133w=cb(0,(((ftledata_58h+1)*(ftledata_59h+1))*ftledata_60h-1+1)*(5+1)-1,iii_)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)+particles_;
ln=260;if( !(*(int *)(cb(0,(((ftledata_64h+1)*(ftledata_65h+1))*ftledata_66h-1+1)*(5+1)-1,iii_)*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*(5+1)+hitBoundary_) )){
       ln=243; iyp_ = 0; {do{  iyp_ +=1;}while(!(((*(double *)(cb((-1),ftledata_5h,iyp_)*(ssize_t)sizeof(double)+y_))>(*(double *)(0+(ssize_t)sizeof(double)+_133w)))));}  iyp_ -=3;   ixp_= (int)floor((*(double *)(0+_133w))/dx_)-3;   izp_ = (int)floor((*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))/dz_)-3;
       ln=244;  {int i_=1;do{{ int m134;
int m135;
ln=244; (*(int *)(cb(1,6,i_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int))) )= (m134=(ixp_+i_)%nxd_,m134>=0?m134:m134+nxd_);   (*(int *)(cb(1,6,i_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int))) )= (m135=(izp_+i_)%(*(&nzd_) ),m135>=0?m135:m135+(*(&nzd_) ));}i_++;}while(i_<=6);}
       ln=245;cb(6,6,((ssize_t)sizeof(double)==(ssize_t)sizeof(double))*(6-(1))+1);memcpy(Wxp_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),Wx_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),(ssize_t)sizeof(double)*6);  cb(6,6,((ssize_t)sizeof(double)==(ssize_t)sizeof(double))*(6-(1))+1);memcpy(Wzp_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),Wz_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),(ssize_t)sizeof(double)*6);  cb(5,5,((ssize_t)sizeof(double)==(ssize_t)sizeof(double))*(5-(0))+0);memcpy(Wyp_,Wy_,(ssize_t)sizeof(double)*(5+1));
       ln=246; {int j_=1  ;while(j_<=6 ){ {int i_=1  ;while(i_<=6 ){if(!(j_==i_)){  ln=246;(*(double *)(cb(1,6,j_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))))*=((*(double *)(0+_133w) )-(double)((ixp_+i_))*dx_);  (*(double *)(cb(1,6,j_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))) )*=((*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))-(double)((izp_+i_))*dz_);  }i_+=1;};}j_+=1;};}
       ln=247;if( ((iyp_== - 2 )||( iyp_==ny_-3)) ){ ordy_=3; iyp_+=1 ;}else{  ordy_=5  ;};
       ln=248; {int j_=0  ;while(j_<=ordy_ ){ {int i_=0  ;while(i_<=ordy_ ){if(!(i_==j_)){  ln=248;(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*=((*(double *)(0+(ssize_t)sizeof(double)+_133w) )- (*(double *)(cb((-1),ftledata_5h,iyp_+i_)*(ssize_t)sizeof(double)+y_)))/((*(double *)(cb((-1),ftledata_5h,iyp_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb((-1),ftledata_5h,iyp_+i_)*(ssize_t)sizeof(double)+y_)));  }i_+=1;};}j_+=1;};}
       ln=249;vpoldu_=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w));  vpoldv_=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w));  vpoldw_=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w));  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))=0.;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))=0.;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))=0.;
       ln=254; {int j_=  0  ;while(j_<=ordy_ ){ {int ix_=1  ;while(ix_<=6 ){ {int iz_=1  ;while(iz_<=6){
         ln=251;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+cb(V___l,V___h,iyp_+j_)*V___i+cb(V__l,V__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*V__i+cb(V_l,V_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*V_i+V____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=252;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+(ssize_t)sizeof(double)+cb(V___l,V___h,iyp_+j_)*V___i+cb(V__l,V__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*V__i+cb(V_l,V_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*V_i+V____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=253;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+cb(V___l,V___h,iyp_+j_)*V___i+cb(V__l,V__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*V__i+cb(V_l,V_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*V_i+V____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
       iz_+=1;};}ix_+=1;};}j_+=1;};}
       ln=255;vpoldu_=vpoldu_*oldcoef_+newcoef_*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w));  vpoldv_=vpoldv_*oldcoef_+newcoef_*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w));  vpoldw_=vpoldw_*oldcoef_+newcoef_*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w)); 
       ln=256;(*(double *)(0+_133w) )+=deltat_*vpoldu_;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=deltat_*vpoldu_;  if( (*(double *)(0+_133w))>(double)(nxd_)*dx_ ){ (*(double *)(0+_133w))-=(double)(nxd_)*dx_ ;}else{ if( (*(double *)(0+_133w))<0.){ (*(double *)(0+_133w))+=(double)(nxd_)*dx_ ;};};
       ln=257;(*(double *)(0+(ssize_t)sizeof(double)+_133w) )+=deltat_*vpoldv_;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=deltat_*vpoldv_;
       ln=258;if( ((*(double *)(0+(ssize_t)sizeof(double)+_133w))<(*(double *)(cb((-1),ftledata_43h,1)*(ssize_t)sizeof(double)+yy_) ))||( (*(double *)(0+(ssize_t)sizeof(double)+_133w))>(*(double *)(cb((-1),ftledata_43h,ftledata_42ny_part-1)*(ssize_t)sizeof(double)+yy_) ))){ (*(int *)(cb(0,(((ftledata_64h+1)*(ftledata_65h+1))*ftledata_66h-1+1)*(5+1)-1,iii_)*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*(5+1)+hitBoundary_))=1;};
       ln=259;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w) )+=deltat_*vpoldw_;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=deltat_*vpoldw_;  if( (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))>(double)(nzd_)*dz_ ){ (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))-=(double)(nzd_)*dz_ ;}else{ if( (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))<0.){ (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_133w))+=(double)(nzd_)*dz_ ;};};
     };
    }iii_+= nsmp_;};}
  } if(ismp_<nsmp_-1)exit(0);;}
 {int ismp_=0  ;while(ismp_<nsmp_-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;};}
}fn=savefn; ln=saveln;}


/* Particle tracks: integration (velocity flowmap and barrier field) */
/* ------------------------------------------------------------------------------ */
void ftledata_133advance_trajectories(const int V_l,const int V_h,const ssize_t V_i,const int V__l,const int V__h,const ssize_t V__i,const int V___l,const int V___h,const ssize_t V___i,char *V____,const int F_l,const int F_h,const ssize_t F_i,const int F__l,const int F__h,const ssize_t F__i,const int F___l,const int F___h,const ssize_t F___i,char *F____){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  ln=293;fflush(NULL); {int ismp_=0  ;while(ismp_<nsmp_-1&&fork()){ismp_+=1;};{

    ln=292; {int iii_=ismp_  ;while(iii_<=extnp_-1 ){{
     char *_134w;
ln=270;_134w=cb(0,((ftledata_70h+1)*(ftledata_71h+1)-1+1)*(ftledata_72h-1+1)-1,iii_)*(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+extparticles_;
ln=291;if( !(*(int *)(cb(0,((ftledata_76h+1)*(ftledata_77h+1)-1+1)*(ftledata_78h-1+1)-1,iii_)*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)+exthitBoundary_) )){
       ln=272; iyp_ = 0; {do{  iyp_ +=1;}while(!(((*(double *)(cb((-1),ftledata_5h,iyp_)*(ssize_t)sizeof(double)+y_))>(*(double *)(0+(ssize_t)sizeof(double)+_134w)))));}  iyp_ -=3;   ixp_= (int)floor((*(double *)(0+_134w))/dx_)-3;   izp_ = (int)floor((*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))/dz_)-3;
       ln=273;  {int i_=1;do{{ int m135;
int m136;
ln=273; (*(int *)(cb(1,6,i_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int))) )= (m135=(ixp_+i_)%nxd_,m135>=0?m135:m135+nxd_);   (*(int *)(cb(1,6,i_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int))) )= (m136=(izp_+i_)%(*(&nzd_) ),m136>=0?m136:m136+(*(&nzd_) ));}i_++;}while(i_<=6);}
       ln=274;cb(6,6,((ssize_t)sizeof(double)==(ssize_t)sizeof(double))*(6-(1))+1);memcpy(Wxp_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),Wx_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),(ssize_t)sizeof(double)*6);  cb(6,6,((ssize_t)sizeof(double)==(ssize_t)sizeof(double))*(6-(1))+1);memcpy(Wzp_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),Wz_-((ssize_t)sizeof(double))+(ssize_t)sizeof(double),(ssize_t)sizeof(double)*6);  cb(5,5,((ssize_t)sizeof(double)==(ssize_t)sizeof(double))*(5-(0))+0);memcpy(Wyp_,Wy_,(ssize_t)sizeof(double)*(5+1));
       ln=275; {int j_=1  ;while(j_<=6 ){ {int i_=1  ;while(i_<=6 ){if(!(j_==i_)){  ln=275;(*(double *)(cb(1,6,j_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))))*=((*(double *)(0+_134w) )-(double)((ixp_+i_))*dx_);  (*(double *)(cb(1,6,j_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))) )*=((*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))-(double)((izp_+i_))*dz_);  }i_+=1;};}j_+=1;};}
       ln=276;if( ((iyp_== - 2 )||( iyp_==ny_-3)) ){ ordy_=3; iyp_+=1 ;}else{  ordy_=5  ;};
       ln=277; {int j_=0  ;while(j_<=ordy_ ){ {int i_=0  ;while(i_<=ordy_ ){if(!(i_==j_)){  ln=277;(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*=((*(double *)(0+(ssize_t)sizeof(double)+_134w) )- (*(double *)(cb((-1),ftledata_5h,iyp_+i_)*(ssize_t)sizeof(double)+y_)))/((*(double *)(cb((-1),ftledata_5h,iyp_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb((-1),ftledata_5h,iyp_+i_)*(ssize_t)sizeof(double)+y_)));  }i_+=1;};}j_+=1;};}
       ln=278;vpoldu_=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w));  vpoldv_=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w));  vpoldw_=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w));  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))=0.;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))=0.;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))=0.;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))=0.;  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))=0.;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))=0.;
       ln=286; {int j_=  0  ;while(j_<=ordy_ ){ {int ix_=1  ;while(ix_<=6 ){ {int iz_=1  ;while(iz_<=6){
         ln=280;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+cb(V___l,V___h,iyp_+j_)*V___i+cb(V__l,V__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*V__i+cb(V_l,V_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*V_i+V____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=281;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+(ssize_t)sizeof(double)+cb(V___l,V___h,iyp_+j_)*V___i+cb(V__l,V__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*V__i+cb(V_l,V_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*V_i+V____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=282;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+cb(V___l,V___h,iyp_+j_)*V___i+cb(V__l,V__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*V__i+cb(V_l,V_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*V_i+V____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=283;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+cb(F___l,F___h,iyp_+j_)*F___i+cb(F__l,F__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*F__i+cb(F_l,F_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*F_i+F____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=284;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+(ssize_t)sizeof(double)+cb(F___l,F___h,iyp_+j_)*F___i+cb(F__l,F__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*F__i+cb(F_l,F_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*F_i+F____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
         ln=285;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wyp_))*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+cb(F___l,F___h,iyp_+j_)*F___i+cb(F__l,F__h,(*(int *)(cb(1,6,iz_)*(ssize_t)sizeof(int)+izv_-((ssize_t)sizeof(int)))))*F__i+cb(F_l,F_h,(*(int *)(cb(1,6,ix_)*(ssize_t)sizeof(int)+ixv_-((ssize_t)sizeof(int)))))*F_i+F____))*(*(double *)(cb(1,6,iz_)*(ssize_t)sizeof(double)+Wzp_-((ssize_t)sizeof(double))))*(*(double *)(cb(1,6,ix_)*(ssize_t)sizeof(double)+Wxp_-((ssize_t)sizeof(double))));
       iz_+=1;};}ix_+=1;};}j_+=1;};}
       ln=287;vpoldu_=vpoldu_*oldcoef_+newcoef_*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w));  vpoldv_=vpoldv_*oldcoef_+newcoef_*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w));  vpoldw_=vpoldw_*oldcoef_+newcoef_*(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w)); 
       ln=288;(*(double *)(0+_134w) )+=deltat_*vpoldu_;  if( (*(double *)(0+_134w))>(double)(nxd_)*dx_ ){ (*(double *)(0+_134w))-=(double)(nxd_)*dx_ ;}else{ if( (*(double *)(0+_134w))<0.){ (*(double *)(0+_134w))+=(double)(nxd_)*dx_ ;};};
       ln=289;(*(double *)(0+(ssize_t)sizeof(double)+_134w) )+=deltat_*vpoldv_;  
       ln=290;(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w) )+=deltat_*vpoldw_;  if( (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))>(double)(nzd_)*dz_ ){ (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))-=(double)(nzd_)*dz_ ;}else{ if( (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))<0.){ (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_134w))+=(double)(nzd_)*dz_ ;};};
     };
    }iii_+= nsmp_;};}
  } if(ismp_<nsmp_-1)exit(0);;}
 {int ismp_=0  ;while(ismp_<nsmp_-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;};}
}fn=savefn; ln=saveln;}

/* Compute barrier field */
/* ------------------------------------------------------------------------------ */
void ftledata_134compute_barrier_field(){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  double _135chron;
ln=299;_135chron=wallclock_1wallclock();
ln=299;   if( (next_==NULL) ){  fprintf(stdout,"""Average barrier field...""");putc('\n',stdout);};
  ln=329;fflush(NULL); {int ismp_=0  ;while(ismp_<nsmp_-1&&fork()){ismp_+=1;};{

    /*LOOP FOR iii=ismp TO extnp-1 BY nsmp WITH extparticles(***)(iii): */
    /*LOOP FOR iii=ismp*(extnp) DIV nsmp TO (ismp+1)*(extnp) DIV nsmp -1 WITH extparticles(***)(iii): */
    int d136;
int d137;
ln=328; {int ix_=(d136=ismp_*ftledata_36nx_part ,(d136>=0)==(nsmp_ >=0)?d136:d136-(nsmp_ )+1)/ nsmp_  ;while(ix_<=(d137=(ismp_+1)*ftledata_36nx_part ,(d137>=0)==(nsmp_ >=0)?d137:d137-(nsmp_ )+1)/ nsmp_ -1 ){ {int iz_=0  ;while(iz_<=ftledata_39nz_part-1 ){ {int iy_=1  ;while(iy_<=ftledata_42ny_part-1 ){
      /* Compute the gradient of the flow map for every point at which we have active vector field */
      char gradFlowMap_[(ssize_t)sizeof(double)*(2+1)*(2+1)];

      char avf_[(ssize_t)sizeof(double)*(2+1)];
char bf_[(ssize_t)sizeof(double)*(2+1)];

      ln=305;memset(gradFlowMap_,0,(ssize_t)sizeof(double)*(2+1)*(2+1));ln=306;memset(avf_,0,(ssize_t)sizeof(double)*(2+1));ln=306;memset(bf_,0,(ssize_t)sizeof(double)*(2+1));ln=328;{
       char *_138w;
ln=307;_138w=cb(1,ftledata_72h,iy_)*(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_71h,iz_)*ftledata_73i+cb(0,ftledata_70h,ix_)*ftledata_74i+extparticles_;
ln=308; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+avf_) )= (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_138w));   (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+avf_) )= (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_138w));   (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+avf_) )= (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_138w));
      ln=328;{
       char *_139w;
ln=309;_139w=cb(1,ftledata_60h,iy_)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)+cb(0,ftledata_59h,iz_)*ftledata_61i+cb(0,ftledata_58h,ix_)*ftledata_62i+particles_;
ln=310; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,2,0)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,0)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,1)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_106epsx);
       ln=311; (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,2,0)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,2)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,3)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_107epsy);
       ln=312; (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,2,0)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,4)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,5)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_109epsz);
       ln=313; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,2,1)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,0)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,1)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_106epsx);
       ln=314; (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,2,1)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,2)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,3)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_107epsy);
       ln=315; (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,2,1)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,4)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,5)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_109epsz);
       ln=316; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,2,2)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,0)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,1)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_106epsx);
       ln=317; (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,2,2)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,2)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,3)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_107epsy);
       ln=318; (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,2,2)*(ssize_t)sizeof(double)*(2+1)+gradFlowMap_) )= ((*(double *)(cb(0,5,4)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w) )- (*(double *)(cb(0,5,5)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_139w)))/(2.*ftledata_109epsz);
      ln=319;rbmat_6LUdecomp(0,2,(ssize_t)sizeof(double)*(2+1),0,2,(ssize_t)sizeof(double),gradFlowMap_);
      ln=320;{{ln=320;rbmat_8LeftLDiv(0,2,(ssize_t)sizeof(double),(bf_),0,2,(ssize_t)sizeof(double)*(2+1),0,2,(ssize_t)sizeof(double),(gradFlowMap_),0,2,(ssize_t)sizeof(double),(avf_));  rbmat_9LeftUDiv(0,2,(ssize_t)sizeof(double),(bf_),0,2,(ssize_t)sizeof(double)*(2+1),0,2,(ssize_t)sizeof(double),(gradFlowMap_),0,2,(ssize_t)sizeof(double),(bf_));};}
      ln=328;{
       /*u = ~ + bf(0); v = ~ + bf(1); w = ~ + bf(2) */
       char *_140w;
ln=321;_140w=cb((-1),ftledata_116h,iy_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_115h,iz_)*ftledata_117i+cb(0,ftledata_114h,ix_)*ftledata_118i+barrierField_;
ln=323; (*(double *)(0+_140w) )= (*(double *)(0+_140w)  )+ deltat_*((*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+bf_))*newcoef_ + (*(double *)(0+cb((-1),ftledata_123h,iy_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_122h,iz_)*ftledata_124i+cb(0,ftledata_121h,ix_)*ftledata_125i+barrierFieldIntegrand_))*oldcoef_);
       ln=324; (*(double *)(0+(ssize_t)sizeof(double)+_140w) )= (*(double *)(0+(ssize_t)sizeof(double)+_140w)  )+ deltat_*((*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+bf_))*newcoef_ + (*(double *)(0+(ssize_t)sizeof(double)+cb((-1),ftledata_123h,iy_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_122h,iz_)*ftledata_124i+cb(0,ftledata_121h,ix_)*ftledata_125i+barrierFieldIntegrand_))*oldcoef_);
       ln=325; (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_140w) )= (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_140w)  )+ deltat_*((*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+bf_))*newcoef_ + (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+cb((-1),ftledata_123h,iy_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_122h,iz_)*ftledata_124i+cb(0,ftledata_121h,ix_)*ftledata_125i+barrierFieldIntegrand_))*oldcoef_);
      ln=328;{
       char *_141w;
ln=326;_141w=cb((-1),ftledata_123h,iy_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_122h,iz_)*ftledata_124i+cb(0,ftledata_121h,ix_)*ftledata_125i+barrierFieldIntegrand_;
ln=327; (*(double *)(0+_141w) )= (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+bf_));   (*(double *)(0+(ssize_t)sizeof(double)+_141w) )= (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+bf_));   (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_141w) )= (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+bf_));
    }}}}iy_+=1;};}iz_+=1;};}ix_+=1;};}
  } if(ismp_<nsmp_-1)exit(0);;}
 {int ismp_=0  ;while(ismp_<nsmp_-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;};}
  ln=330;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""",wallclock_1wallclock()-_135chron);putc('\n',stdout);};
}fn=savefn; ln=saveln;}

/* Save Flowmap XXX TODO Make flowmap a structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
void ftledata_135save_flowmap(int nF_){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  struct freefunc filename_f;char *filename_;
ssize_t _137i;
struct freefunc _136f;char *_136;

  FILE *diskparticlesf_;

  filename_=NULL;atblockexit(filename_f,condfree,&filename_);ln=336;_137i=(snprintf((char*)NULL,0,"""particles.""%d"".bin""",nF_)+1+1);

_136=malloc(_137i);if(_136==NULL)_136=errmalloc();atblockexit(_136f,free,_136);snprintf(_136,snprintf((char*)NULL,0,"""particles.""%d"".bin""",nF_)+1+1,"""particles.""%d"".bin""",nF_);ln=336;if(1!=1)traphandler("String must be contiguous");
if(filename_!=NULL)free(filename_);
filename_=strndup(_136+0,snprintf((char*)NULL,0,"""particles.""%d"".bin""",nF_)+1-(0)+1);ln=337; clock_ = wallclock_1wallclock();  if( (next_==NULL) ){  fprintf(stdout,"""Saving flowmap: ""%s",filename_);putc('\n',stdout);};
  diskparticlesf_=NULL;ln=338;errfopen(&diskparticlesf_,filename_,O_RDWR|O_CREAT|O_TRUNC);ln=339;fwrite((ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)+particles_,ftledata_63i,1,diskparticlesf_);
  ln=340;fwrite((ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+extparticles_,ftledata_75i,1,diskparticlesf_);
  ln=341;errfclose(&diskparticlesf_ );
  ln=342;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""", - clock_+wallclock_1wallclock() );putc('\n',stdout);};
/*
  STRING filename=WRITE("particles."nF".bin")
  clock = wallclock(); IF has_terminal THEN WRITE "Saving flowmap: "filename
  diskparticles=CREATE(filename)
  WITH diskparticles:
    particlesimage(*,*,*,*,*)=particles(*,*,*,*,*)
    extparticlesimage(*,*,*,*)=extparticles(*,*,*,*)
  CLOSE diskparticles
  IF has_terminal THEN WRITE " ","took "-clock+wallclock() " seconds"
*/
freemem(es);}fn=savefn; ln=saveln;}

/* Load Flowmap XXX TODO Make flowmap a structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
void ftledata_136load_flowmap(int nF_){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  struct freefunc filename_f;char *filename_;
ssize_t _138i;
struct freefunc _137f;char *_137;

  FILE *diskparticlesf_;

  filename_=NULL;atblockexit(filename_f,condfree,&filename_);ln=358;_138i=(snprintf((char*)NULL,0,"""particles.""%d"".bin""",nF_)+1+1);

_137=malloc(_138i);if(_137==NULL)_137=errmalloc();atblockexit(_137f,free,_137);snprintf(_137,snprintf((char*)NULL,0,"""particles.""%d"".bin""",nF_)+1+1,"""particles.""%d"".bin""",nF_);ln=358;if(1!=1)traphandler("String must be contiguous");
if(filename_!=NULL)free(filename_);
filename_=strndup(_137+0,snprintf((char*)NULL,0,"""particles.""%d"".bin""",nF_)+1-(0)+1);ln=359; clock_ = wallclock_1wallclock();  if( (next_==NULL) ){  fprintf(stdout,"""Saving flowmap: ""%s",filename_);putc('\n',stdout);};
  diskparticlesf_=NULL;ln=360;errfopen(&diskparticlesf_,filename_,O_RDONLY);ln=361;  if(!(fread((ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)+particles_,ftledata_63i,1, diskparticlesf_ )==1))ioerr( diskparticlesf_ );
  ln=362;  if(!(fread((ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+extparticles_,ftledata_75i,1, diskparticlesf_ )==1))ioerr( diskparticlesf_ );
  ln=363;errfclose(&diskparticlesf_ );
  ln=364;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""", - clock_+wallclock_1wallclock() );putc('\n',stdout);};
/*
  STRING filename=WRITE("particles."nF".bin")
  clock = wallclock(); IF has_terminal THEN WRITE "Loading flowmap: "filename
  diskparticles=OPENRO(filename)
  WITH diskparticles:
    particles(*,*,*,*,*)=particlesimage(*,*,*,*,*)
    extparticles(*,*,*,*)=extparticlesimage(*,*,*,*)
  CLOSE diskparticles
  IF has_terminal THEN WRITE " ","took "-clock+wallclock() " seconds"
*/
freemem(es);}fn=savefn; ln=saveln;}

/* Save barrier field XXX TODO Make structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
void ftledata_137save_barrierField(int nF_){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  struct freefunc filename_f;char *filename_;
ssize_t _139i;
struct freefunc _138f;char *_138;

  FILE *_140;
filename_=NULL;atblockexit(filename_f,condfree,&filename_);ln=380;_139i=(snprintf((char*)NULL,0,"""barrierField.""%d"".bin""",nF_)+1+1);

_138=malloc(_139i);if(_138==NULL)_138=errmalloc();atblockexit(_138f,free,_138);snprintf(_138,snprintf((char*)NULL,0,"""barrierField.""%d"".bin""",nF_)+1+1,"""barrierField.""%d"".bin""",nF_);ln=380;if(1!=1)traphandler("String must be contiguous");
if(filename_!=NULL)free(filename_);
filename_=strndup(_138+0,snprintf((char*)NULL,0,"""barrierField.""%d"".bin""",nF_)+1-(0)+1);ln=381; clock_ = wallclock_1wallclock();  if( (next_==NULL) ){  fprintf(stdout,"""Saving barrierField: ""%s",filename_);putc('\n',stdout);};
  _140=NULL;errfopen(&_140,filename_,O_RDWR|O_CREAT|O_TRUNC);ln=382;diskBarrierField_=_140;
  ln=383;  {int _141i_=ftledata_127h;do{{ln=383;  {int _142i_=ftledata_128h;do{{ln=383;if((ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)==(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)&&(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)==(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)){if(!(fseeko(diskBarrierField_,cb(0,ftledata_128h,_142i_)*(off_t)ftledata_130i+cb(0,ftledata_127h,_141i_)*(off_t)ftledata_131i+(-ftledata_120st)+ftledata_120st,SEEK_SET)==0&&fwrite(cb(0,ftledata_115h,_142i_)*ftledata_117i+cb(0,ftledata_114h,_141i_)*ftledata_118i+barrierField_+ftledata_120st,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1),ftledata_129h-(-1)+1,diskBarrierField_)==ftledata_129h-(-1)+1))ioerr(diskBarrierField_);}else{  {int _143i_=(-1);do{{ln=383;if((ssize_t)sizeof(double)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskBarrierField_,cb((-1),ftledata_129h,_143i_)*(off_t)(ssize_t)sizeof(double)*(off_t)(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_128h,_142i_)*(off_t)ftledata_130i+cb(0,ftledata_127h,_141i_)*(off_t)ftledata_131i+(-ftledata_120st),SEEK_SET)==0&&fwrite(cb((-1),ftledata_116h,_143i_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_115h,_142i_)*ftledata_117i+cb(0,ftledata_114h,_141i_)*ftledata_118i+barrierField_,(ssize_t)sizeof(double),/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1,diskBarrierField_)==/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1))ioerr(diskBarrierField_);}else{  {int _144i_=/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1);do{{ln=383;if(!(fseeko(diskBarrierField_,cb(0,/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),_144i_)*(off_t)(ssize_t)sizeof(double)+cb((-1),ftledata_129h,_143i_)*(off_t)(ssize_t)sizeof(double)*(off_t)(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_128h,_142i_)*(off_t)ftledata_130i+cb(0,ftledata_127h,_141i_)*(off_t)ftledata_131i+(-ftledata_120st),SEEK_SET)==0&&fwrite((double*)(cb(0,/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),_144i_)*(ssize_t)sizeof(double)+cb((-1),ftledata_116h,_143i_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_115h,_142i_)*ftledata_117i+cb(0,ftledata_114h,_141i_)*ftledata_118i+barrierField_),(ssize_t)sizeof(double),1,diskBarrierField_)==1))ioerr(diskBarrierField_);}_144i_--;}while(_144i_>=0);}};}_143i_++;}while(_143i_<=ftledata_129h);}};}_142i_--;}while(_142i_>=0);}}_141i_--;}while(_141i_>=0);}
  ln=384;errfclose(&diskBarrierField_);
  ln=385;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""", - clock_+wallclock_1wallclock() );putc('\n',stdout);};
freemem(es);}fn=savefn; ln=saveln;}

/* Load barrier field XXX TODO Make structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
void ftledata_138load_barrierField(int nF_){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="ftledata.cpl";{struct freefunc* es=freestack;
  struct freefunc filename_f;char *filename_;
ssize_t _140i;
struct freefunc _139f;char *_139;

  FILE *_141;
filename_=NULL;atblockexit(filename_f,condfree,&filename_);ln=391;_140i=(snprintf((char*)NULL,0,"""barrierField.""%d"".bin""",nF_)+1+1);

_139=malloc(_140i);if(_139==NULL)_139=errmalloc();atblockexit(_139f,free,_139);snprintf(_139,snprintf((char*)NULL,0,"""barrierField.""%d"".bin""",nF_)+1+1,"""barrierField.""%d"".bin""",nF_);ln=391;if(1!=1)traphandler("String must be contiguous");
if(filename_!=NULL)free(filename_);
filename_=strndup(_139+0,snprintf((char*)NULL,0,"""barrierField.""%d"".bin""",nF_)+1-(0)+1);ln=392; clock_ = wallclock_1wallclock();  if( (next_==NULL) ){  fprintf(stdout,"""Loading barrierField: ""%s",filename_);putc('\n',stdout);};
  _141=NULL;errfopen(&_141,filename_,O_RDONLY);ln=393;diskBarrierField_=_141;
  ln=394;  {int _142i_=ftledata_114h;do{{ln=394;  {int _143i_=ftledata_115h;do{{ln=394;if((ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)==(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)&&(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)==(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)){if(!(fseeko(diskBarrierField_,cb(0,ftledata_128h,_143i_)*(off_t)ftledata_130i+cb(0,ftledata_127h,_142i_)*(off_t)ftledata_131i+(-ftledata_120st)+ftledata_120st,SEEK_SET)==0&&fread(cb(0,ftledata_115h,_143i_)*ftledata_117i+cb(0,ftledata_114h,_142i_)*ftledata_118i+barrierField_+ftledata_120st,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1),ftledata_116h-(-1)+1,diskBarrierField_)==ftledata_116h-(-1)+1))ioerr(diskBarrierField_);}else{  {int _144i_=(-1);do{{ln=394;if((ssize_t)sizeof(double)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskBarrierField_,cb((-1),ftledata_129h,_144i_)*(off_t)(ssize_t)sizeof(double)*(off_t)(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_128h,_143i_)*(off_t)ftledata_130i+cb(0,ftledata_127h,_142i_)*(off_t)ftledata_131i+(-ftledata_120st),SEEK_SET)==0&&fread(cb((-1),ftledata_116h,_144i_)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_115h,_143i_)*ftledata_117i+cb(0,ftledata_114h,_142i_)*ftledata_118i+barrierField_,(ssize_t)sizeof(double),/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1,diskBarrierField_)==/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1))ioerr(diskBarrierField_);}else{  {int _145i_=/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1);do{{double _146;
if(!(fseeko(diskBarrierField_,cb(0, /*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),_145i_)*(off_t)(ssize_t)sizeof(double)+cb((-1),ftledata_129h,_144i_)*(off_t)(ssize_t)sizeof(double)*(off_t)(  /*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_128h,_143i_)*(off_t)ftledata_130i+cb(0,ftledata_127h,_142i_)*(off_t)ftledata_131i+(-(ftledata_120st))    ,SEEK_SET)==0&&fread(&_146,(ssize_t)sizeof(double),1,diskBarrierField_)==1))ioerr(diskBarrierField_);ln=394;(*(double *)(cb(0,/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),_145i_)*(ssize_t)sizeof(double)+cb((-1),ftledata_116h,_144i_)*(ssize_t)sizeof(double)*( /*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_115h,_143i_)*ftledata_117i+cb(0,ftledata_114h,_142i_)*ftledata_118i+barrierField_))=_146;}_145i_--;}while(_145i_>=0);}};}_144i_++;}while(_144i_<=ftledata_116h);}};}_143i_--;}while(_143i_>=0);}}_142i_--;}while(_142i_>=0);}
  ln=395;errfclose(&diskBarrierField_);
  ln=396;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""", - clock_+wallclock_1wallclock() );putc('\n',stdout);};
freemem(es);}fn=savefn; ln=saveln;}

