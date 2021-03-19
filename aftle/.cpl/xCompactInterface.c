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

/*#define vorticity */


/* Chron */
/* ------------------------------------------------------------------------------ */
extern double clock_;


/* Parallel  (distributed memory - could actually use MPI as well!)  !TODO implement distributed memory */
/* ------------------------------------------------------------------------------ */
extern int iproc_;
extern int nproc_;

extern FILE *prev_;
extern FILE *next_;

    

/* Parallel (shared memory) */
/* ------------------------------------------------------------------------------ */
extern int nsmp_;


/* Types */
/* ------------------------------------------------------------------------------ */




/* Read input files and set parameters */
/* ------------------------------------------------------------------------------ */
extern int ny_;
extern int nx_;
extern int nz_;
extern int ox_;
extern int oy_;
extern int oz_;
extern int ofx_;
extern int ofy_;
extern int ofz_;
extern int nxd_;
extern int nzd_;

extern double alfa0_;
extern double beta0_;
extern double a_;
extern double ymin_;
extern double ymax_;
extern double ni_;
extern double deltat_;
extern double deltas_;
extern double smax_;
extern double Lx_;
extern double Lz_;

extern int nfmin_;
extern int nfmax_;
extern int dn_save_;

extern struct freefunc path_f;
extern char *path_;

extern void ftledata_3read_initial_data();

extern int ftledata_4dir;

extern int ftledata_5h;
extern ssize_t ftledata_6i;
extern ssize_t ftledata_7st;
extern struct freefunc y_f;
extern char *y_;
  extern int d9;
;
extern int ftledata_10nyl;
extern int d11;
;
extern int ftledata_12nyh;

extern FILE *coordfile_;

extern int ftledata_13h;


/* Define velocity fields */
/* ------------------------------------------------------------------------------ */
extern struct freefunc fieldname_f;
extern char *fieldname_;

extern int ftledata_15h;
extern int ftledata_16h;
extern int ftledata_17h;
extern ssize_t ftledata_18i;
extern ssize_t ftledata_19i;
extern ssize_t ftledata_20i;
extern ssize_t ftledata_21st;
extern void velocity_free(void * ptr);
extern struct freefunc velocity_f;
extern char *velocity_;


extern int ftledata_22h;
extern int ftledata_23h;
extern int ftledata_24h;
extern ssize_t ftledata_25i;
extern ssize_t ftledata_26i;
extern ssize_t ftledata_27i;
extern ssize_t ftledata_28st;
extern void active_free(void * ptr);
extern struct freefunc active_f;
extern char *active_;



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

/**/
void xCompactInterface_1readVelocityField(char *field_name_,const int Vr_l,const int Vr_h,const ssize_t Vr_i,const int Vr__l,const int Vr__h,const ssize_t Vr__i,const int Vr___l,const int Vr___h,const ssize_t Vr___i,char *Vr____,const int AVFr_l,const int AVFr_h,const ssize_t AVFr_i,const int AVFr__l,const int AVFr__h,const ssize_t AVFr__i,const int AVFr___l,const int AVFr___h,const ssize_t AVFr___i,char *AVFr____);

int xCompactInterface_channelInterface_2h;
int xCompactInterface_channelInterface_3h;
int xCompactInterface_channelInterface_4h;
off_t xCompactInterface_channelInterface_5i;
off_t xCompactInterface_channelInterface_6i;
off_t xCompactInterface_channelInterface_7i;
off_t xCompactInterface_channelInterface_9i;
off_t xCompactInterface_channelInterface_10i;
off_t xCompactInterface_channelInterface_11i;
off_t xCompactInterface_channelInterface_12i;
struct xCompactInterface_channelInterface_s8{};
#define xCompactInterface_channelInterface_s8_s (ssize_t)sizeof(struct xCompactInterface_channelInterface_s8)
FILE *xCompactInterface_channelInterface_diskfield;


void xCompactInterface_channelInterface_13read_field(char *field_name_,const int V_l,const int V_h,const ssize_t V_i,const int V__l,const int V__h,const ssize_t V__i,const int V___l,const int V___h,const ssize_t V___i,char *V____){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="xCompactInterface.cpl";{struct freefunc* es=freestack;
  FILE *_14;
ln=28;if( (next_==NULL) ){  fprintf(stdout,"""Reading velocity field:""\t%s" ,field_name_);putc('\n',stdout);};
  ln=29; clock_ = wallclock_1wallclock();
  _14=NULL;errfopen(&_14,field_name_,O_RDWR|O_CREAT);ln=30;xCompactInterface_channelInterface_diskfield=_14;
  ln=38;{
    ln=35; {int iV_=0  ;while(iV_<=2 ){ {int iz_=0  ;while(iz_<=nzd_-1){
       int _15h;
int _16h;
ssize_t _17i;
ssize_t _18i;
struct freefunc buf_f;char *buf_ ;
 
       ln=33;_15h=ny_;
ln=33;_16h=nxd_-1;
ln=33;_17i=(ssize_t)sizeof(double)*(_16h+1);
ln=33;_18i=_17i*(_15h+1);

buf_=malloc(_18i);if(buf_==NULL)buf_=errmalloc();atblockexit(buf_f,free,buf_);ln=33;   {int _19i_=_15h;do{{ln=33;if((ssize_t)sizeof(double)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(xCompactInterface_channelInterface_diskfield,cb(0,xCompactInterface_channelInterface_3h,_19i_)*(off_t)xCompactInterface_channelInterface_5i+cb(0,xCompactInterface_channelInterface_2h,iz_)*(off_t)xCompactInterface_channelInterface_6i+cb(0,2,iV_)*(off_t)xCompactInterface_channelInterface_7i+(off_t)(xCompactInterface_channelInterface_s8_s+(ssize_t)(char*)(void**)(0)),SEEK_SET)==0&&fread(cb(0,_15h,_19i_)*_17i+buf_,(ssize_t)sizeof(double),_16h+1,xCompactInterface_channelInterface_diskfield)==_16h+1))ioerr(xCompactInterface_channelInterface_diskfield);}else{  {int _20i_=_16h;do{{double _21;
if(!(fseeko(xCompactInterface_channelInterface_diskfield,cb(0,xCompactInterface_channelInterface_4h,_20i_)*(off_t)(ssize_t)sizeof(double)+cb(0,xCompactInterface_channelInterface_3h,_19i_)*(off_t)xCompactInterface_channelInterface_5i+cb(0,xCompactInterface_channelInterface_2h,iz_)*(off_t)xCompactInterface_channelInterface_6i+cb(0,2,iV_)*(off_t)xCompactInterface_channelInterface_7i+(off_t )(xCompactInterface_channelInterface_s8_s+(-(0))+(ssize_t)(char*)((void **)(0)))  ,SEEK_SET)==0&&fread(&_21,(ssize_t)sizeof(double),1,xCompactInterface_channelInterface_diskfield)==1))ioerr(xCompactInterface_channelInterface_diskfield);ln=33;(*(double *)(cb(0,_16h,_20i_)*(ssize_t)sizeof(double)+cb(0,_15h,_19i_)*_17i+buf_))=_21;}_20i_--;}while(_20i_>=0);}};}_19i_--;}while(_19i_>=0);}ln=34; {int iy_=0  ;do{ {int ix_=0  ;do{{ ln=34; (*(double *)(cb(0,/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),iV_)*(ssize_t)sizeof(double)+cb(V___l,V___h,iy_)*V___i+cb(V__l,V__h,iz_)*V__i+cb(V_l,V_h,ix_)*V_i+V____) )= (*(double *)(cb(0,_16h,ix_)*(ssize_t)sizeof(double)+cb(0,_15h,iy_)*_17i+buf_) );}ix_+=1;}while(ix_<=nxd_-1);}iy_+=1;}while(iy_<=ny_ );}
    freemem(es);iz_+=1;};}iV_+=1;};}
    ln=36;errfclose(&xCompactInterface_channelInterface_diskfield);
  ln=37;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""", - clock_+wallclock_1wallclock() );putc('\n',stdout);};
}}fn=savefn; ln=saveln;}

/* Coefficients required for derivatives */
double xCompactInterface_channelInterface_alfa1 ;
  double xCompactInterface_channelInterface_14a1;
double xCompactInterface_channelInterface_15b1;
double xCompactInterface_channelInterface_alfa2;
double xCompactInterface_channelInterface_a2;

double xCompactInterface_channelInterface_b2;
double xCompactInterface_channelInterface_c2;

double xCompactInterface_channelInterface_dx;
double xCompactInterface_channelInterface_dz;
double xCompactInterface_channelInterface_dxi;

double xCompactInterface_channelInterface_16delta;
ssize_t xCompactInterface_channelInterface_17st;
ssize_t xCompactInterface_channelInterface_18st;
struct DERIVCOEFFS_{char d01_[(ssize_t)sizeof(double)*(1-(-1)+1)];char d02_[(ssize_t)sizeof(double)*(1-(-1)+1)];char d2_[(ssize_t)sizeof(double)*(3-(-3)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];};
#define DERIVCOEFFS_s (ssize_t)sizeof(struct DERIVCOEFFS_)

int xCompactInterface_channelInterface_19h;
ssize_t xCompactInterface_channelInterface_20i;
struct freefunc xCompactInterface_channelInterface_derivxf;char *xCompactInterface_channelInterface_derivx;
int xCompactInterface_channelInterface_21h;
ssize_t xCompactInterface_channelInterface_22i;
struct freefunc xCompactInterface_channelInterface_derivyf;char *xCompactInterface_channelInterface_derivy;
int xCompactInterface_channelInterface_23h;
ssize_t xCompactInterface_channelInterface_24i;
struct freefunc xCompactInterface_channelInterface_derivzf;char *xCompactInterface_channelInterface_derivz;

/* x-derivatives */
int xCompactInterface_channelInterface_25h;
ssize_t xCompactInterface_channelInterface_26i;
struct freefunc xCompactInterface_channelInterface_uux1f;char *xCompactInterface_channelInterface_uux1;
struct freefunc xCompactInterface_channelInterface_uux2f;char *xCompactInterface_channelInterface_uux2;
  int xCompactInterface_channelInterface_27h;
ssize_t xCompactInterface_channelInterface_28i;
struct freefunc xCompactInterface_channelInterface_vvx1f;char *xCompactInterface_channelInterface_vvx1;
struct freefunc xCompactInterface_channelInterface_vvx2f;char *xCompactInterface_channelInterface_vvx2;
  int xCompactInterface_channelInterface_30h;
ssize_t xCompactInterface_channelInterface_31i;
struct freefunc xCompactInterface_channelInterface_uuz1f;char *xCompactInterface_channelInterface_uuz1;
struct freefunc xCompactInterface_channelInterface_uuz2f;char *xCompactInterface_channelInterface_uuz2;
  int xCompactInterface_channelInterface_32h;
ssize_t xCompactInterface_channelInterface_33i;
struct freefunc xCompactInterface_channelInterface_vvz1f;char *xCompactInterface_channelInterface_vvz1;
struct freefunc xCompactInterface_channelInterface_vvz2f;char *xCompactInterface_channelInterface_vvz2;
  double xCompactInterface_channelInterface_beta ;

double xCompactInterface_channelInterface_alfah ;

int xCompactInterface_channelInterface_46h;
ssize_t xCompactInterface_channelInterface_47i;
struct freefunc xCompactInterface_channelInterface_hpf;char *xCompactInterface_channelInterface_hp;
struct freefunc xCompactInterface_channelInterface_one_hpf;char *xCompactInterface_channelInterface_one_hp;
struct freefunc xCompactInterface_channelInterface_one_hp2f;char *xCompactInterface_channelInterface_one_hp2;
struct freefunc xCompactInterface_channelInterface_hpp_hp3f;char *xCompactInterface_channelInterface_hpp_hp3;
struct freefunc xCompactInterface_channelInterface_hppf;char *xCompactInterface_channelInterface_hpp;

void xCompactInterface_channelInterface_54deriv(const int D_l,const int D_h,const ssize_t D_i,const int D__l,const int D__h,const ssize_t D__i,char *D___,const int D0_l,const int D0_h,const ssize_t D0_i,const int D0__l,const int D0__h,const ssize_t D0__i,char *D0___,const int zzz_l,const int zzz_h,const ssize_t zzz_i,char *zzz__,const int vvv_l,const int vvv_h,const ssize_t vvv_i,char *vvv__,const int f_l,const int f_h,const ssize_t f_i,char *f__,const int df_l,const int df_h,const ssize_t df_i,char *df__){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="xCompactInterface.cpl";{struct freefunc* es=freestack;
  ssize_t _55i;
ssize_t _56st;
struct freefunc yy_f;char *yy_;
struct freefunc dd_f;char *dd_;

  ln=131;_55i=(ssize_t)sizeof(double)*(f_h-f_l+1);
ln=131;_56st=f_l*(ssize_t)sizeof(double);

yy_=malloc(_55i);if(yy_==NULL)yy_=errmalloc();yy_-=_56st;{int i57;for(i57=f_l;i57<=f_h;i57++){memmove((double *)(yy_+i57*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(yy_f,free,yy_+_56st);
dd_=malloc(_55i);if(dd_==NULL)dd_=errmalloc();dd_-=_56st;{int i58;for(i58=f_l;i58<=f_h;i58++){memmove((double *)(dd_+i58*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(dd_f,free,dd_+_56st);ln=132; {int i_=f_l  ;do{{ ln=132;  (*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+dd_) )=0.;  {int j_=D__l;do{{int m59;
ln=132;(*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+dd_) )+=(*(double *)(cb(D__l,D__h,j_)*D__i+cb(D_l,D_h,i_)*D_i+D___))*(*(double *)(cb(f_l,f_h,(m59=(i_+j_) % (f_h-(f_l)+1),m59>=0?m59:m59+(f_h-(f_l)+1)))*f_i+f__)) ;}j_++;}while(j_<=D__h);} }i_+=1;}while(i_<=f_h );}
  ln=133; {{ln=133;rbmat_8LeftLDiv(f_l,f_h,(ssize_t)sizeof(double),(yy_ ),D0_l,D0_h,D0_i,D0__l,D0__h,D0__i,(D0___),f_l,f_h,(ssize_t)sizeof(double),(dd_));  rbmat_9LeftUDiv(f_l,f_h,(ssize_t)sizeof(double),(yy_ ),D0_l,D0_h,D0_i,D0__l,D0__h,D0__i,(D0___),f_l,f_h,(ssize_t)sizeof(double),(yy_ ));};}
  ln=134;  {int i_=df_l;do{{ double _60;
double _61;
double _62;
double _63;
 _60=0.;  {int j_=f_l;do{{ln=134;(*&_60)+=(*(double *)(cb(f_l,f_h,j_)*(ssize_t)sizeof(double)+yy_))*(*(double *)(cb(vvv_l,vvv_h,j_)*vvv_i+vvv__)) ;}j_++;}while(j_<=f_h);} _61=0.;  {int j_=vvv_l;do{{ln=134;(*&_61)+=(*(double *)(cb(vvv_l,vvv_h,j_)*vvv_i+vvv__))*(*(double *)(cb(zzz_l,zzz_h,j_)*zzz_i+zzz__)) ;}j_++;}while(j_<=vvv_h);} _62=0.;  {int j_=vvv_l;do{{ln=134;(*&_62)+=(*(double *)(cb(vvv_l,vvv_h,j_)*vvv_i+vvv__))*(*(double *)(cb(zzz_l,zzz_h,j_)*zzz_i+zzz__)) ;}j_++;}while(j_<=vvv_h);} _63=0.;  {int j_=vvv_l;do{{ln=134;(*&_63)+=(*(double *)(cb(vvv_l,vvv_h,j_)*vvv_i+vvv__))*(*(double *)(cb(zzz_l,zzz_h,j_)*zzz_i+zzz__)) ;}j_++;}while(j_<=vvv_h);}ln=134; (*(double *)(cb(df_l,df_h,i_)*df_i+df__) )= (*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+yy_) )- (*(double *)(cb(zzz_l,zzz_h,i_)*zzz_i+zzz__))*_60/(1.+_63) ;}i_++;}while(i_<=df_h);}
freemem(es);}fn=savefn; ln=saveln;}




void xCompactInterface_channelInterface_55d1y(const int f_l,const int f_h,const ssize_t f_i,char *f__,const int df_l,const int df_h,const ssize_t df_i,char *df__){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="xCompactInterface.cpl";{struct freefunc* es=freestack;
  ln=141; {int i_=f_l  ;do{{ ln=141;{ struct DERIVCOEFFS_ *_56w;
ln=141;_56w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,i_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
  (*(double *)(cb(df_l,df_h,i_)*df_i+df__) )=0.;  {int j_=(-2);do{ if(!( ((i_+j_)<0 )||( (i_+j_)>ny_))){ln=141;(*(double *)(cb(df_l,df_h,i_)*df_i+df__) )+=(*(double *)(cb((-2),2,j_)*(ssize_t)sizeof(double)+(*_56w).d1_-xCompactInterface_channelInterface_18st))*(*(double *)(cb(f_l,f_h,(i_+j_))*f_i+f__)) ;}j_++;}while(j_<=2);} }}i_+=1;}while(i_<=f_h );}
  ln=142; {{ln=142;rbmat_8LeftLDiv(df_l,df_h,df_i,(df__ ),0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d01_-ftledata_7st),df_l,df_h,df_i,(df__));  rbmat_9LeftUDiv(df_l,df_h,df_i,(df__ ),0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d01_-ftledata_7st),df_l,df_h,df_i,(df__ ));};}
  ln=143;  {int i_=df_l;do{{ ln=143; (*(double *)(cb(df_l,df_h,i_)*df_i+df__) )*= (*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_one_hp) );}i_++;}while(i_<=df_h);}
}fn=savefn; ln=saveln;}
void xCompactInterface_channelInterface_56d2y(const int f_l,const int f_h,const ssize_t f_i,char *f__,const int df_l,const int df_h,const ssize_t df_i,char *df__){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="xCompactInterface.cpl";{struct freefunc* es=freestack;
  ssize_t _57i;
ssize_t _58st;
struct freefunc df_ds_f;char *df_ds_;
struct freefunc d2f_ds2_f;char *d2f_ds2_;

  ln=146;_57i=(ssize_t)sizeof(double)*(f_h-f_l+1);
ln=146;_58st=f_l*(ssize_t)sizeof(double);

df_ds_=malloc(_57i);if(df_ds_==NULL)df_ds_=errmalloc();df_ds_-=_58st;{int i59;for(i59=f_l;i59<=f_h;i59++){memmove((double *)(df_ds_+i59*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(df_ds_f,free,df_ds_+_58st);
d2f_ds2_=malloc(_57i);if(d2f_ds2_==NULL)d2f_ds2_=errmalloc();d2f_ds2_-=_58st;{int i60;for(i60=f_l;i60<=f_h;i60++){memmove((double *)(d2f_ds2_+i60*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(d2f_ds2_f,free,d2f_ds2_+_58st);ln=150; {int i_=f_l  ;do{{ ln=150;{ 
    struct DERIVCOEFFS_ *_61w;
ln=147;_61w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,i_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
ln=148;  (*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+df_ds_)   )=0.;  {int j_=(-2);do{ if(!( ((i_+j_)<0 )||( (i_+j_)>ny_))){ln=148;(*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+df_ds_)   )+=(*(double *)(cb((-2),2,j_)*(ssize_t)sizeof(double)+(*_61w).d1_-xCompactInterface_channelInterface_18st))*(*(double *)(cb(f_l,f_h,(i_+j_))*f_i+f__)) ;}j_++;}while(j_<=2);} 
    ln=149;  (*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+d2f_ds2_) )=0.;  {int j_=(-3);do{ if(!( ((i_+j_)<0 )||( (i_+j_)>ny_))){ln=149;(*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+d2f_ds2_) )+=(*(double *)(cb((-3),3,j_)*(ssize_t)sizeof(double)+(*_61w).d2_-xCompactInterface_channelInterface_17st))*(*(double *)(cb(f_l,f_h,(i_+j_))*f_i+f__)) ;}j_++;}while(j_<=3);} 
  }}i_+=1;}while(i_<=f_h     );}
  ln=151; {{ln=151;rbmat_8LeftLDiv(f_l,f_h,(ssize_t)sizeof(double),(df_ds_ ),0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d01_-ftledata_7st),f_l,f_h,(ssize_t)sizeof(double),(df_ds_ ));  rbmat_9LeftUDiv(f_l,f_h,(ssize_t)sizeof(double),(df_ds_ ),0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d01_-ftledata_7st),f_l,f_h,(ssize_t)sizeof(double),(df_ds_ ));};}   {{rbmat_8LeftLDiv(f_l,f_h,(ssize_t)sizeof(double),(d2f_ds2_ ),0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d02_-ftledata_7st),f_l,f_h,(ssize_t)sizeof(double),(d2f_ds2_ ));  rbmat_9LeftUDiv(f_l,f_h,(ssize_t)sizeof(double),(d2f_ds2_ ),0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d02_-ftledata_7st),f_l,f_h,(ssize_t)sizeof(double),(d2f_ds2_ ));};}
  ln=152;  {int i_=df_l;do{{ ln=152; (*(double *)(cb(df_l,df_h,i_)*df_i+df__) )= (*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+d2f_ds2_))*(*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_one_hp2) )- (*(double *)(cb(f_l,f_h,i_)*(ssize_t)sizeof(double)+df_ds_))*(*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_hpp_hp3) );}i_++;}while(i_<=df_h);}
freemem(es);}fn=savefn; ln=saveln;}

/*
 TESTS  
test-x 
ARRAY(0..nxd-1) OF REAL xtestf=0,xtestdf=0,xtestd2f=0; DO xtestf(i)=SIN(2*PI*i*dx/Lx) FOR ALL i
d1x(xtestf,xtestdf)
d2x(xtestf,xtestd2f)
WRITE \n"x-derivative: tests"
DO WRITE xtestdf(i), 2*PI/Lx*COS(2*PI*i*dx/Lx), xtestd2f(i), -(2*PI/Lx)**2*SIN(2*PI*i*dx/Lx) FOR ALL i
test-z 
ARRAY(0..nzd-1) OF REAL ztestf=0,ztestdf=0,ztestd2f=0; DO ztestf(i)=SIN(2*PI*i*dz/Lz) FOR ALL i
d1z(ztestf,ztestdf)
d2z(ztestf,ztestd2f)
WRITE \n"z-derivative: tests"
DO WRITE ztestdf(i), 2*PI/Lz*COS(2*PI*i*dz/Lz), ztestd2f(i), -(2*PI/Lz)**2*SIN(2*PI*i*dz/Lz) FOR ALL i
test-y 
ARRAY(0..ny) OF REAL testf=0,testdf=0,testd2f=0; DO testf(i)=y(i)**2 FOR i=0 TO ny
d1y(testf,testdf); d2y(testf,testd2f)
ARRAY(0..nxd-1) OF REAL testf=0,testdf=0; DO testf(i)=SIN(2*PI*i/nxd) FOR ALL i 
deriv(derivx.d2,derivx.d0,uuux,vvx,testf,testdf) 
WRITE \n"y-derivative: tests"
DO WRITE testdf(i), 2*y(i), testd2f(i), 2 FOR i=0 TO ny
 This will just stop the code execution, of course remove it when derivative tests are conluded 
STOP
*/

void xCompactInterface_1readVelocityField(char *field_name_,const int Vr_l,const int Vr_h,const ssize_t Vr_i,const int Vr__l,const int Vr__h,const ssize_t Vr__i,const int Vr___l,const int Vr___h,const ssize_t Vr___i,char *Vr____,const int AVFr_l,const int AVFr_h,const ssize_t AVFr_i,const int AVFr__l,const int AVFr__h,const ssize_t AVFr__i,const int AVFr___l,const int AVFr___h,const ssize_t AVFr___i,char *AVFr____){char* volatile savefn; volatile int saveln; savefn=fn; saveln=ln; fn="xCompactInterface.cpl";{struct freefunc* es=freestack;
  /* Load velocity field */
   
  

  ln=182;xCompactInterface_channelInterface_13read_field(field_name_,Vr_l,Vr_h,Vr_i,Vr__l,Vr__h,Vr__i,Vr___l,Vr___h,Vr___i,Vr____);
  /* Compute active field */
  /* XXX SHARED ARRAY(0..nx,-nz..nz,-1..ny+1) OF VELOCITY field=0 */
ln=193;if( (next_==NULL) ){  fprintf(stdout,"""Computing active vector field...""");putc('\n',stdout);};
  ln=194; clock_ = wallclock_1wallclock();
  /* XXX TODO field <-- lapl(field) */
  ln=196;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""", - clock_+wallclock_1wallclock() );putc('\n',stdout);};
}fn=savefn; ln=saveln;}

