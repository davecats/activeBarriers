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

char errortemp_[(80+1)];


struct arrptr{int l,h; ssize_t i; char *a;};
struct dynptr{void* p; int t;};
char INTERRUPT=0;
void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};
struct freefunc *freestack;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}
#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
void traprestore(void *ptr){traphandler=ptr;}
void condfree(void *ptr){if(*(void **)ptr!=NULL)free(*(void **)ptr);}
int friexecerror(char** s){
  fprintf(stderr,"\rprogram must be run under icpl\n");
  sleep(1);
  return 0;
}
int (*friexec)(char** s)=friexecerror;

int dynptrerr(int type){
  snprintf(errortemp_,sizeof(errortemp_),"Argument of incompatible TYPE %d",type);
  traphandler(errortemp_);
  return 0;
}
void *errmalloc(){
  traphandler("Not enough memory");
  return NULL;
}
void ioerr(FILE *fil){
  char where[11];
  off_t cn;
  int fn;
  fn=fileno(fil);
  cn=ftello(fil);
  if(ferror(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"%s in fd %d char %ld",strerror(errno),fn,(long)cn);
  } else if(feof(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"End of file in fd %d char %ld",fn,(long)cn);
  } else {
    if(!(cn>=0 && fscanf(fil,"%10s",where)>0)) where[0]=0;
    snprintf(errortemp_,sizeof(errortemp_),"Unrecognized input \"%s\" from fd %d char %ld",where,fn,(long)cn);
  }
  traphandler(errortemp_);
}
void errfclose(void *voidf){
  FILE **f=(FILE **)voidf;
  int fn;
  if(*f==NULL)return;
  fn=fileno(*f);
  if(fn>=0 && ftell(*f)>=0 && fclose(*f)!=0){
    snprintf(errortemp_,sizeof(errortemp_),"Error in closing fd %d: %s",fn,strerror(errno));
    traphandler(errortemp_);
    }
  *f=NULL;
}
void errfopen(FILE **f, const char *name, int mode){
  int fd;
/*  if(*f)errfclose(f);  causes segfault if used on copies of closed FILE descriptors */
  fd=open(name,mode,0666);
  if(fd>0 || mode==O_RDONLY){
    *f=fdopen(fd,mode==O_RDONLY?"r":"r+");
    if(*f!=NULL || mode==O_RDONLY)return;
    } 
  snprintf(errortemp_,sizeof(errortemp_),"Error in opening %s: %s",name,strerror(errno));
  traphandler(errortemp_);
}
int scanrec(FILE *f, const char *format, void *var) {
  off_t pos; int res;
  register int c;
  if (friexec!=friexecerror && isatty(fileno(f))){
    char *s="\357\201i\362\371\376";
    if (friexec(&s) && sscanf(s,format,var)==1) return 1;
  }
  pos=ftello(f);
  while((c=getc(f))<=' '&&(c!='\n')&&(c!=EOF)){};
  if(c!='\n')ungetc(c,f);
  while((c=getc(f))=='!') {while(!feof(f)&&getc(f)!='\n'){};};
  ungetc(c,f);
  res=fscanf(f,format,var);
  if (res<=0) fseeko(f,pos,SEEK_SET);
  return res;
}
int scanbool(FILE *f, const char *format, int *var) {
  char c;
  return scanrec(f,format,&c)&&((*var=(c=='T')||(c=='Y')||(c=='t')||(c=='y'))||(c=='F')||(c=='N')||(c=='f')||(c=='n'));
  }
int myfgets(char *name, char *var, char *varend, FILE *f) {
  off_t pos;
  register int c;
  pos=ftello(f);
  if(feof(f))return 0;
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  if(var<varend){
    do{c=getc(f); *var=c;}while(c!=EOF && c!='\n' && ++var < varend);
    *var=0;
  }
  return 1;
}
int mygetline(char *name, char **var, FILE *f) {
  off_t pos;
  int c,oldc;
  pos=ftello(f);
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  c=32; oldc=0;
  while(1){
  *var=realloc(*var,c);
  if (fgets(*var+oldc,c-oldc,f)==NULL) {fseeko(f,pos,SEEK_SET);return 0;};
  {char* c1=memchr(*var+oldc,'\n',c-oldc-1); if(c1) {*c1=0; return 1;}}
  oldc=c-1; c=2*c;
  }
  /*
  c=0;
  getline(var,&c,f);
  {char* c1=strchr(*var,'\n'); if(c1) *c1=0;}
  return 1;
  */
}
/* Note: fetestexcept always returns zero. Detecting the type of floating point
   exception requires testing the si_code field of sig_info (man sigaction) */
void trapsignal(int signum, siginfo_t *info, void *ucontext){
  feclearexcept(FE_ALL_EXCEPT);
  feenableexcept(fpe);
  if(signum==SIGINT) traphandler(&INTERRUPT);
  else if (signum==SIGFPE){
    switch(info->si_code){
    case FPE_INTDIV: traphandler("*** ERROR: integer division by zero");
    case FPE_FLTDIV: traphandler("*** ERROR: floating-point division by zero");
    case FPE_FLTOVF: traphandler("*** ERROR: floating-point overflow");
    case FPE_FLTINV: traphandler("*** ERROR: invalid or unassigned value");
    }
  }
  else traphandler(strsignal(signum));
}
#if (defined __i386__ || defined __x86_64__)
#define mmovefrom(var,buf,type) *(type *)(buf)=*var
#define mmoveto(var,buf,type) *var=*(type *)(buf)
#else
#define mmovefrom(var,buf,type) memmove(buf,var,sizeof(type))
#define mmoveto(var,buf,type) memmove(var,buf,sizeof(type))
#endif
#define mainstart \
void default_traphandler(const char *errormessage){ \
  freemem(NULL); \
  if(errormessage[0]){ \
    printERR; \
    exit(EXIT_FAILURE); \
  }else exit(EXIT_SUCCESS); \
} \
int main(int argc, char **argv){ \
struct freefunc* es; \
			\
{struct sigaction act,oldact; \
act.sa_sigaction=trapsignal; \
sigemptyset(&act.sa_mask); \
act.sa_flags=SA_RESTART|SA_SIGINFO; \
sigaction(SIGSEGV,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGSEGV,&oldact,NULL); \
sigaction(SIGFPE,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGFPE,&oldact,NULL); \
sigaction(SIGILL,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGILL,&oldact,NULL); \
sigaction(SIGINT,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGINT,&oldact,NULL); \
/* \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
*/ \
else {traphandler=default_traphandler; \
      freestack=NULL; \
      feenableexcept(fpe); \
     }; \
} \
es=freestack;






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

extern void xCompactInterface_1readVelocityField(char *field_name_,const int Vr_l,const int Vr_h,const ssize_t Vr_i,const int Vr__l,const int Vr__h,const ssize_t Vr__i,const int Vr___l,const int Vr___h,const ssize_t Vr___i,char *Vr____,const int AVFr_l,const int AVFr_h,const ssize_t AVFr_i,const int AVFr__l,const int AVFr__h,const ssize_t AVFr__i,const int AVFr___l,const int AVFr___h,const ssize_t AVFr___i,char *AVFr____);




/* ODE Library */
/* ------------------------------------------------------------------------------ */
extern double newcoef_;
extern double oldcoef_;
extern double lambda_;

extern char RK4_[(ssize_t)sizeof(double)*4*4];

extern void ftledata_31timescheme(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG,int it_);


extern void ftledata_32set_ODE_step(int it_);


/* Velocity field interpolators */
/* ------------------------------------------------------------------------------ */
extern void ftledata_33linearInterpolator(const int Vi_l,const int Vi_h,const ssize_t Vi_i,const int Vi__l,const int Vi__h,const ssize_t Vi__i,const int Vi___l,const int Vi___h,const ssize_t Vi___i,const int Vi____l,const int Vi____h,const ssize_t Vi____i,char *Vi_____,const int Ve_l,const int Ve_h,const ssize_t Ve_i,const int Ve__l,const int Ve__h,const ssize_t Ve__i,const int Ve___l,const int Ve___h,const ssize_t Ve___i,const int Ve____l,const int Ve____h,const ssize_t Ve____i,char *Ve_____,const int Vo_l,const int Vo_h,const ssize_t Vo_i,const int Vo__l,const int Vo__h,const ssize_t Vo__i,const int Vo___l,const int Vo___h,const ssize_t Vo___i,const int Vo____l,const int Vo____h,const ssize_t Vo____i,char *Vo_____);


/* Particle tracks: definitions */
/* ------------------------------------------------------------------------------ */



extern int ftledata_36nx_part;
extern double dx_part_;

extern int ftledata_37h;
extern ssize_t ftledata_38i;
extern struct freefunc xx_f;
extern char *xx_;
  
extern int ftledata_39nz_part;
extern double dz_part_;

extern int ftledata_40h;
extern ssize_t ftledata_41i;
extern struct freefunc zz_f;
extern char *zz_;
  extern int ftledata_42ny_part;
extern int ftledata_43h;
extern ssize_t ftledata_44i;
extern struct freefunc yy_f;
extern char *yy_;

extern int np_;

extern int extnp_;

extern int ftledata_58h;
extern int ftledata_59h;
extern int ftledata_60h;
extern ssize_t ftledata_61i;
extern ssize_t ftledata_62i;
extern ssize_t ftledata_63i;
extern void particles_free(void * ptr);
extern struct freefunc particles_f;
extern char *particles_;

extern int ftledata_64h;
extern int ftledata_65h;
extern int ftledata_66h;
extern ssize_t ftledata_67i;
extern ssize_t ftledata_68i;
extern ssize_t ftledata_69i;
extern void hitBoundary_free(void * ptr);
extern struct freefunc hitBoundary_f;
extern char *hitBoundary_;

/*#ifndef dummy */
/* Particles that I need for the barrier field and the gradient of its dummy flowmap */
extern int ftledata_70h;
extern int ftledata_71h;
extern int ftledata_72h;
extern ssize_t ftledata_73i;
extern ssize_t ftledata_74i;
extern ssize_t ftledata_75i;
extern void extparticles_free(void * ptr);
extern struct freefunc extparticles_f;
extern char *extparticles_;

extern int ftledata_76h;
extern int ftledata_77h;
extern int ftledata_78h;
extern ssize_t ftledata_79i;
extern ssize_t ftledata_80i;
extern ssize_t ftledata_81i;
extern void exthitBoundary_free(void * ptr);
extern struct freefunc exthitBoundary_f;
extern char *exthitBoundary_;

/*#endif */
extern int ftledata_82h;
extern int ftledata_83h;
extern int ftledata_84h;
extern off_t ftledata_85i;
extern off_t ftledata_86i;
extern int ftledata_87h;
extern int ftledata_88h;
extern int ftledata_89h;
extern off_t ftledata_90i;
extern off_t ftledata_91i;
extern off_t ftledata_93i;
extern off_t ftledata_94i;
extern off_t ftledata_95i;
extern off_t ftledata_96i;
extern off_t ftledata_97i;
extern off_t ftledata_98i;
struct ftledata_s92{};
#define ftledata_s92_s (ssize_t)sizeof(struct ftledata_s92)
extern FILE *diskparticles_;

extern int iytr_;

extern char Wx_[(ssize_t)sizeof(double)*6];
extern char Wz_[(ssize_t)sizeof(double)*6];
extern char Wxp_[(ssize_t)sizeof(double)*6];
extern char Wzp_[(ssize_t)sizeof(double)*6];
  extern char Wy_[(ssize_t)sizeof(double)*(5+1)];
extern char Wyp_[(ssize_t)sizeof(double)*(5+1)];
  extern char ixv_[(ssize_t)sizeof(int)*6];
extern char izv_[(ssize_t)sizeof(int)*6];

extern int ordy_;
extern int ixp_;
extern int iyp_;
extern int izp_;
  extern double vpoldu_;
extern double vpoldv_;
extern double vpoldw_;

extern double dx_;
extern double dz_;

extern double ftledata_105;
extern double ftledata_106epsx;
extern double ftledata_107epsy;
extern double ftledata_108;
extern double ftledata_109epsz;
extern char eps_[(ssize_t)sizeof(double)*(2+1)*(5+1)];


extern int ftledata_114h;
extern int ftledata_115h;
extern int ftledata_116h;
extern ssize_t ftledata_117i;
extern ssize_t ftledata_118i;
extern ssize_t ftledata_119i;
extern ssize_t ftledata_120st;
extern void barrierField_free(void * ptr);
extern struct freefunc barrierField_f;
extern char *barrierField_;

extern int ftledata_121h;
extern int ftledata_122h;
extern int ftledata_123h;
extern ssize_t ftledata_124i;
extern ssize_t ftledata_125i;
extern ssize_t ftledata_126i;
extern void barrierFieldIntegrand_free(void * ptr);
extern struct freefunc barrierFieldIntegrand_f;
extern char *barrierFieldIntegrand_;

extern int ftledata_127h;
extern int ftledata_128h;
extern int ftledata_129h;
extern off_t ftledata_130i;
extern off_t ftledata_131i;
extern FILE *diskBarrierField_;



/* Particle tracks: integration (velocity flowmap only) */
/* ------------------------------------------------------------------------------ */
extern void ftledata_132advance_trajectories(const int V_l,const int V_h,const ssize_t V_i,const int V__l,const int V__h,const ssize_t V__i,const int V___l,const int V___h,const ssize_t V___i,char *V____);



/* Particle tracks: integration (velocity flowmap and barrier field) */
/* ------------------------------------------------------------------------------ */
extern void ftledata_133advance_trajectories(const int V_l,const int V_h,const ssize_t V_i,const int V__l,const int V__h,const ssize_t V__i,const int V___l,const int V___h,const ssize_t V___i,char *V____,const int F_l,const int F_h,const ssize_t F_i,const int F__l,const int F__h,const ssize_t F__i,const int F___l,const int F___h,const ssize_t F___i,char *F____);


/* Compute barrier field */
/* ------------------------------------------------------------------------------ */
extern void ftledata_134compute_barrier_field();


/* Save Flowmap XXX TODO Make flowmap a structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
extern void ftledata_135save_flowmap(int nF_);


/* Load Flowmap XXX TODO Make flowmap a structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
extern void ftledata_136load_flowmap(int nF_);


/* Save barrier field XXX TODO Make structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
extern void ftledata_137save_barrierField(int nF_);


/* Load barrier field XXX TODO Make structure which contains all information for the gradient */
/* ------------------------------------------------------------------------------ */
extern void ftledata_138load_barrierField(int nF_);


int iF_ ;

/*  */
mainstart
 fprintf(stdout,"""!====================================!""");putc('\n',stdout);
 fprintf(stdout,"""!                                    !""");putc('\n',stdout);
 fprintf(stdout,"""!        active barrier Field        !""");putc('\n',stdout);
 fprintf(stdout,"""!                                    !""");putc('\n',stdout);
 fprintf(stdout,"""!====================================!""");putc('\n',stdout);
 fprintf(stdout,"""! """);putc('\n',stdout);
 fprintf(stdout,"""! This program computes the active    " "");putc('\n',stdout);
 fprintf(stdout,"""! barrier vector field                """);putc('\n',stdout);
 fprintf(stdout,"""! """);putc('\n',stdout);
 fprintf(stdout,"""! to cite this software:              """);putc('\n',stdout);
 fprintf(stdout,"""! """);putc('\n',stdout);
 fprintf(stdout,"""! G. Haller, S. Katsanoulis, M. Holzner, " "");putc('\n',stdout);
 fprintf(stdout,"""! B. Frohnapfel and D. Gatti, Objective  """);putc('\n',stdout);
 fprintf(stdout,"""! material barriers to the transport of  " "");putc('\n',stdout);
 fprintf(stdout,"""! momentum and vorticity. submitted (2020)""");putc('\n',stdout);
 fprintf(stdout,"""! """);putc('\n',stdout);



/* For usage see fft.info.                                ! */
/*                                                        ! */
/* Copyright 1997-2020 Paolo Luchini http://CPLcode.net   ! */
/* Released under the attached LICENSE.                   ! */
/*                                                        ! */
/* Code maturity: green.                                  ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */



fft_fft_LASTN=1;fft_fft_12C3=sin(3.14159265358979323846/3.);
 

fft_fft_exit:;


/* with "number" redefined to the respective numeric type.           ! */
/* See matrix.info for usage.                                        ! */
/*                                                                   ! */
/* Copyright 1999-2020 Paolo Luchini http://CPLcode.net              ! */
/* Released under the attached LICENSE.                              ! */
/*                                                                   ! */
/* Code maturity: green.                                             ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

Lanczos_norm_=0.;


rbmat_Lanczos_R_exit:;setup_signal_USR1();


barrier_=mmap(NULL,(ssize_t)sizeof(volatile int),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(barrier_==MAP_FAILED)errmalloc();atblockexit(barrier_f,barrier_free,(void*)barrier_);(*barrier_)=0;
  gettimeofday(&wallclock_wallclock_startim,NULL);
  wallclock_wallclock_exit:;
CHARbyCHAR_CHARbyCHAR_CbCdescr= - 1;CHARbyCHAR_CHARbyCHAR_exit:;


rtchecks_SingleStep_grabin=NULL;rtchecks_SingleStep_grabin=NULL;rtchecks_SingleStep_StopLevel=INT_MAX;rtchecks_SingleStep_LastLine=0;(*(int *)(rtchecks_SingleStep_LoopCount))=1;
rtchecks_SingleStep_paused=0;rtchecks_SingleStep_lastfnlength=80;rtchecks_SingleStep_lastrow=1;rtchecks_SingleStep_lastfn=fn;rtchecks_SingleStep_termwidth=80;rtchecks_SingleStep_termheight=25;rtchecks_SingleStep_hotkeys="Tracing:(P)ause (Q)uit (T)roff (V)iew <tab>=(F)inish <C-c>=(I)cpl <space>=(S)tep";rtchecks_SingleStep_exit:;fn="ftledata.cpl";memmove(&clock_,&sigNAN,sizeof(double));ln=36;if( (argc-1)<1 ){ iproc_=1; nproc_=1 ;}else{
ln=36;iproc_=atoi((void *)((*(char**)(cb(0,(argc-1),1)*(ssize_t)sizeof(char*)+(char*)argv))));  nproc_=atoi((void *)((*(char**)(cb(0,(argc-1),2)*(ssize_t)sizeof(char*)+(char*)argv))));  };
ln=37;/*bufsize=800*/  /*baseport=(IPPORT_USERRESERVED+111)*/
prev_=NULL;next_=NULL;ln=42;if( iproc_<nproc_ ){
  ln=40;next_=fdopen(tcpserver((IPPORT_USERRESERVED+111)+iproc_),(void *)("r+"));
  ln=41;setvbuf(next_,malloc(800),_IOFBF,800);
};
ln=46;if( iproc_>1 ){
  ln=44;prev_=fdopen(tcpclient((void *)((*(char**)(cb(0,(argc-1),3)*(ssize_t)sizeof(char*)+(char*)argv))),(IPPORT_USERRESERVED+111)+iproc_-1),(void *)("r+"));
  ln=45;setvbuf(prev_,malloc(800),_IOFBF,800);
};
ln=51; nsmp_= 64;ln=61;nxd_=0;ln=61;nzd_=0;memmove(&alfa0_,&sigNAN,sizeof(double));memmove(&beta0_,&sigNAN,sizeof(double));memmove(&a_,&sigNAN,sizeof(double));memmove(&ymin_,&sigNAN,sizeof(double));memmove(&ymax_,&sigNAN,sizeof(double));memmove(&ni_,&sigNAN,sizeof(double));memmove(&deltat_,&sigNAN,sizeof(double));memmove(&deltas_,&sigNAN,sizeof(double));memmove(&smax_,&sigNAN,sizeof(double));ln=62;Lx_=0.;ln=62;Lz_=0.;path_=NULL;atblockexit(path_f,condfree,&path_);ln=90;ftledata_3read_initial_data();
ln=91;ftledata_4dir=(( (nfmax_-nfmin_)>0  ?1  :( (nfmax_-nfmin_)==0  ?0  : - 1)));
ln=91; 
ln=92;if( ftledata_4dir>0 ){ if( (next_==NULL) ){  fprintf(stdout,"""Forward aFTLE""");putc('\n',stdout);};};
ln=93;if( ftledata_4dir<0 ){ if( (next_==NULL) ){  fprintf(stdout,"""Backward aFTLE""");putc('\n',stdout);};};

/* Define grids */
/* ------------------------------------------------------------------------------ */
ln=100;ftledata_5h=ny_+1;
ln=100;ftledata_6i=(ssize_t)sizeof(double)*(ftledata_5h-(-1)+1);
ln=100;ftledata_7st=(-1)*(ssize_t)sizeof(double);

y_=malloc(ftledata_6i);if(y_==NULL)y_=errmalloc();y_-=ftledata_7st;{int i8;for(i8=(-1);i8<=ftledata_5h;i8++){memmove((double *)(y_+i8*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(y_f,free,y_+ftledata_7st);ln=100;ftledata_10nyl=1+(d9=(iproc_-1)*(ny_-1) ,(d9>=0)==(nproc_>=0)?d9:d9-(nproc_)+1)/ nproc_;
ln=100;   ftledata_12nyh=(d11=iproc_*(ny_-1) ,(d11>=0)==(nproc_>=0)?d11:d11-(nproc_)+1)/ nproc_;
 
coordfile_=NULL;ln=104;errfopen(&coordfile_,"yp.dat",O_RDONLY);cb((-1),ftledata_5h,0+(1)*(0));cb((-1),ftledata_5h,0+(1)*(ny_));ln=105;ftledata_13h=ny_;
ln=105; if(!((scanrec( coordfile_ ," ",NULL),({int i14=0; while(i14<=ftledata_13h){if(!scanrec( coordfile_ ," %lg",(double *)(i14*(ssize_t)sizeof(double)+y_))>0)ioerr( coordfile_ ); i14++;}}),1)))ioerr( coordfile_ );
ln=106;errfclose(&coordfile_);
ln=107;(*(double *)(cb((-1),ftledata_5h, - 1)*(ssize_t)sizeof(double)+y_))= - (*(double *)(cb((-1),ftledata_5h,1)*(ssize_t)sizeof(double)+y_));   (*(double *)(cb((-1),ftledata_5h,ny_+1)*(ssize_t)sizeof(double)+y_) )= (*(double *)(cb((-1),ftledata_5h,ny_)*(ssize_t)sizeof(double)+y_) )+ (*(double *)(cb((-1),ftledata_5h,ny_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb((-1),ftledata_5h,ny_-1)*(ssize_t)sizeof(double)+y_));
fieldname_=NULL;atblockexit(fieldname_f,condfree,&fieldname_);ln=113;ftledata_15h=nxd_-1;
ln=113;ftledata_16h=nzd_-1;
ln=113;ftledata_17h=ny_+1;
ln=113;ftledata_18i=(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1)*(ftledata_17h-(-1)+1);
ln=113;ftledata_19i=ftledata_18i*(ftledata_16h+1);
ln=113;ftledata_20i=ftledata_19i*(ftledata_15h+1);
ln=113;ftledata_21st=(-1)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1);

velocity_=mmap(NULL,ftledata_20i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(velocity_==MAP_FAILED)velocity_=errmalloc();velocity_-=ftledata_21st;atblockexit(velocity_f,velocity_free,(void*)velocity_);ln=113;memset(ftledata_21st+velocity_,0,ftledata_20i);ln=115;ftledata_22h=nxd_-1;
ln=115;ftledata_23h=nzd_-1;
ln=115;ftledata_24h=ny_+1;
ln=115;ftledata_25i=(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1)*(ftledata_24h-(-1)+1);
ln=115;ftledata_26i=ftledata_25i*(ftledata_23h+1);
ln=115;ftledata_27i=ftledata_26i*(ftledata_22h+1);
ln=115;ftledata_28st=(-1)*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1);

active_=mmap(NULL,ftledata_27i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(active_==MAP_FAILED)active_=errmalloc();active_-=ftledata_28st;atblockexit(active_f,active_free,(void*)active_);ln=115;memset(ftledata_28st+active_,0,ftledata_27i);fn="xCompactInterface.cpl";

ln=24;xCompactInterface_channelInterface_2h=nzd_-1;
ln=24;xCompactInterface_channelInterface_3h=ny_;
ln=24;xCompactInterface_channelInterface_4h=nxd_-1;
ln=24;xCompactInterface_channelInterface_5i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_4h+1);
ln=24;xCompactInterface_channelInterface_6i=xCompactInterface_channelInterface_5i*(xCompactInterface_channelInterface_3h+1);
ln=24;xCompactInterface_channelInterface_7i=xCompactInterface_channelInterface_6i*(xCompactInterface_channelInterface_2h+1);
ln=25;xCompactInterface_channelInterface_9i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_4h+1);
ln=25;xCompactInterface_channelInterface_10i=xCompactInterface_channelInterface_9i*(xCompactInterface_channelInterface_3h+1);
ln=25;xCompactInterface_channelInterface_11i=xCompactInterface_channelInterface_10i*(xCompactInterface_channelInterface_2h+1);
ln=25;xCompactInterface_channelInterface_12i=xCompactInterface_channelInterface_11i*(2+1);
xCompactInterface_channelInterface_diskfield=NULL;ln=41; xCompactInterface_channelInterface_alfa1= 1.0/3.0;ln=41;xCompactInterface_channelInterface_14a1=14.0/9.0;
ln=41;   xCompactInterface_channelInterface_15b1=1.0/9.0;
 
ln=42;xCompactInterface_channelInterface_alfa2=(272.-45.*(3.14159265358979323846*3.14159265358979323846))/(416.-90.*(3.14159265358979323846*3.14159265358979323846));ln=42;xCompactInterface_channelInterface_a2=(48.-135.*(3.14159265358979323846*3.14159265358979323846))/(1664.-360.*(3.14159265358979323846*3.14159265358979323846));ln=43;xCompactInterface_channelInterface_b2=(528.-81.*(3.14159265358979323846*3.14159265358979323846))/(208.-45.*(3.14159265358979323846*3.14159265358979323846));ln=43;xCompactInterface_channelInterface_c2=(-432.+63.*(3.14159265358979323846*3.14159265358979323846))/(1664.-360.*(3.14159265358979323846*3.14159265358979323846));ln=44;xCompactInterface_channelInterface_dx=Lx_/(double)(nxd_);ln=44;xCompactInterface_channelInterface_dz=Lz_/(double)(nzd_);ln=44;xCompactInterface_channelInterface_dxi=1./(double)(ny_);ln=45;/*gamma=1.0*/  xCompactInterface_channelInterface_16delta=0.5/*TODO read this from input */;
 
ln=46;xCompactInterface_channelInterface_17st=(-3)*(ssize_t)sizeof(double);
ln=46;xCompactInterface_channelInterface_18st=(-2)*(ssize_t)sizeof(double);
ln=47;xCompactInterface_channelInterface_19h=nxd_-1;
ln=47;xCompactInterface_channelInterface_20i=DERIVCOEFFS_s*(xCompactInterface_channelInterface_19h+1);

xCompactInterface_channelInterface_derivx=malloc(xCompactInterface_channelInterface_20i);if(xCompactInterface_channelInterface_derivx==NULL)xCompactInterface_channelInterface_derivx=errmalloc();atblockexit(xCompactInterface_channelInterface_derivxf,free,xCompactInterface_channelInterface_derivx);ln=47;memset(xCompactInterface_channelInterface_derivx,0,xCompactInterface_channelInterface_20i);ln=47;xCompactInterface_channelInterface_21h=ny_;
ln=47;xCompactInterface_channelInterface_22i=DERIVCOEFFS_s*(xCompactInterface_channelInterface_21h+1);

xCompactInterface_channelInterface_derivy=malloc(xCompactInterface_channelInterface_22i);if(xCompactInterface_channelInterface_derivy==NULL)xCompactInterface_channelInterface_derivy=errmalloc();atblockexit(xCompactInterface_channelInterface_derivyf,free,xCompactInterface_channelInterface_derivy);ln=47;memset(xCompactInterface_channelInterface_derivy,0,xCompactInterface_channelInterface_22i);ln=47;xCompactInterface_channelInterface_23h=nzd_-1;
ln=47;xCompactInterface_channelInterface_24i=DERIVCOEFFS_s*(xCompactInterface_channelInterface_23h+1);

xCompactInterface_channelInterface_derivz=malloc(xCompactInterface_channelInterface_24i);if(xCompactInterface_channelInterface_derivz==NULL)xCompactInterface_channelInterface_derivz=errmalloc();atblockexit(xCompactInterface_channelInterface_derivzf,free,xCompactInterface_channelInterface_derivz);ln=47;memset(xCompactInterface_channelInterface_derivz,0,xCompactInterface_channelInterface_24i);ln=49;xCompactInterface_channelInterface_25h=nxd_-1;
ln=49;xCompactInterface_channelInterface_26i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_25h+1);

xCompactInterface_channelInterface_uux1=malloc(xCompactInterface_channelInterface_26i);if(xCompactInterface_channelInterface_uux1==NULL)xCompactInterface_channelInterface_uux1=errmalloc();atblockexit(xCompactInterface_channelInterface_uux1f,free,xCompactInterface_channelInterface_uux1);ln=49;memset(xCompactInterface_channelInterface_uux1,0,xCompactInterface_channelInterface_26i);
xCompactInterface_channelInterface_uux2=malloc(xCompactInterface_channelInterface_26i);if(xCompactInterface_channelInterface_uux2==NULL)xCompactInterface_channelInterface_uux2=errmalloc();atblockexit(xCompactInterface_channelInterface_uux2f,free,xCompactInterface_channelInterface_uux2);ln=49;memset(xCompactInterface_channelInterface_uux2,0,xCompactInterface_channelInterface_26i);ln=49;(*(double *)(cb(0,xCompactInterface_channelInterface_25h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uux1))=-1.;  (*(double *)(cb(0,xCompactInterface_channelInterface_25h,xCompactInterface_channelInterface_25h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uux1))=xCompactInterface_channelInterface_alfa1;   (*(double *)(cb(0,xCompactInterface_channelInterface_25h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uux2))=-1.;  (*(double *)(cb(0,xCompactInterface_channelInterface_25h,xCompactInterface_channelInterface_25h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uux2))=xCompactInterface_channelInterface_alfa2;
ln=50;xCompactInterface_channelInterface_27h=nxd_-1;
ln=50;xCompactInterface_channelInterface_28i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_27h+1);

xCompactInterface_channelInterface_vvx1=malloc(xCompactInterface_channelInterface_28i);if(xCompactInterface_channelInterface_vvx1==NULL)xCompactInterface_channelInterface_vvx1=errmalloc();atblockexit(xCompactInterface_channelInterface_vvx1f,free,xCompactInterface_channelInterface_vvx1);ln=50;memset(xCompactInterface_channelInterface_vvx1,0,xCompactInterface_channelInterface_28i);
xCompactInterface_channelInterface_vvx2=malloc(xCompactInterface_channelInterface_28i);if(xCompactInterface_channelInterface_vvx2==NULL)xCompactInterface_channelInterface_vvx2=errmalloc();atblockexit(xCompactInterface_channelInterface_vvx2f,free,xCompactInterface_channelInterface_vvx2);ln=50;memset(xCompactInterface_channelInterface_vvx2,0,xCompactInterface_channelInterface_28i);ln=50;(*(double *)(cb(0,xCompactInterface_channelInterface_27h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvx1))=1.;   (*(double *)(cb(0,xCompactInterface_channelInterface_27h,xCompactInterface_channelInterface_27h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvx1))= - xCompactInterface_channelInterface_alfa1;  (*(double *)(cb(0,xCompactInterface_channelInterface_27h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvx2))=1.;   (*(double *)(cb(0,xCompactInterface_channelInterface_27h,xCompactInterface_channelInterface_27h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvx2))= - xCompactInterface_channelInterface_alfa2;
ln=61;  {int ix_=xCompactInterface_channelInterface_19h;do{{ ln=61;{ 
   struct DERIVCOEFFS_ *_29w;
ln=51;_29w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,ix_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx);
ln=52;(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_29w).d02_-ftledata_7st))=xCompactInterface_channelInterface_alfa2;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_29w).d02_-ftledata_7st))=1.;  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_29w).d02_-ftledata_7st))=xCompactInterface_channelInterface_alfa2 ;
   ln=53;(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_29w).d01_-ftledata_7st))=xCompactInterface_channelInterface_alfa1;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_29w).d01_-ftledata_7st))=1.;  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_29w).d01_-ftledata_7st))=xCompactInterface_channelInterface_alfa1;
   ln=54;(*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=-2.*(xCompactInterface_channelInterface_a2+xCompactInterface_channelInterface_b2/4.+xCompactInterface_channelInterface_c2/9.)/xCompactInterface_channelInterface_dx/xCompactInterface_channelInterface_dx;
   ln=55;(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_a2/xCompactInterface_channelInterface_dx/xCompactInterface_channelInterface_dx;    (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st));
   ln=56;(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_b2/xCompactInterface_channelInterface_dx/xCompactInterface_channelInterface_dx/4.;  (*(double *)(cb((-3),3, - 2)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st));
   ln=57;(*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_c2/xCompactInterface_channelInterface_dx/xCompactInterface_channelInterface_dx/9.;  (*(double *)(cb((-3),3, - 3)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_29w).d2_-xCompactInterface_channelInterface_17st));
   ln=58;(*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st))=0.;
   ln=59;(*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st))=xCompactInterface_channelInterface_14a1/xCompactInterface_channelInterface_dx/2.;  (*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st))= - (*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st));
   ln=60;(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st))=xCompactInterface_channelInterface_15b1/xCompactInterface_channelInterface_dx/4.;  (*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st))= - (*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_29w).d1_-xCompactInterface_channelInterface_18st));
}}ix_--;}while(ix_>=0);}
ln=62;(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st))+=1.;  (*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st))=0.;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,nxd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st))+=(xCompactInterface_channelInterface_alfa1*xCompactInterface_channelInterface_alfa1);  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,nxd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st))=0.;
ln=63;(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st))+=1.;  (*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st))=0.;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,nxd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st))+=(xCompactInterface_channelInterface_alfa2*xCompactInterface_channelInterface_alfa2);  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_19h,nxd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st))=0.;
ln=64;rbmat_6LUdecomp(0,xCompactInterface_channelInterface_19h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),(char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st);  rbmat_6LUdecomp(0,xCompactInterface_channelInterface_19h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),(char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st);  {{rbmat_8LeftLDiv(0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux1),0,xCompactInterface_channelInterface_19h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st),0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux1));  rbmat_9LeftUDiv(0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux1),0,xCompactInterface_channelInterface_19h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivx)).d01_-ftledata_7st),0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux1));};}  {{rbmat_8LeftLDiv(0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux2),0,xCompactInterface_channelInterface_19h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st),0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux2));  rbmat_9LeftUDiv(0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux2),0,xCompactInterface_channelInterface_19h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivx)).d02_-ftledata_7st),0,xCompactInterface_channelInterface_25h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uux2));};}
/* z-derivatives */
ln=66;xCompactInterface_channelInterface_30h=nzd_-1;
ln=66;xCompactInterface_channelInterface_31i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_30h+1);

xCompactInterface_channelInterface_uuz1=malloc(xCompactInterface_channelInterface_31i);if(xCompactInterface_channelInterface_uuz1==NULL)xCompactInterface_channelInterface_uuz1=errmalloc();atblockexit(xCompactInterface_channelInterface_uuz1f,free,xCompactInterface_channelInterface_uuz1);ln=66;memset(xCompactInterface_channelInterface_uuz1,0,xCompactInterface_channelInterface_31i);
xCompactInterface_channelInterface_uuz2=malloc(xCompactInterface_channelInterface_31i);if(xCompactInterface_channelInterface_uuz2==NULL)xCompactInterface_channelInterface_uuz2=errmalloc();atblockexit(xCompactInterface_channelInterface_uuz2f,free,xCompactInterface_channelInterface_uuz2);ln=66;memset(xCompactInterface_channelInterface_uuz2,0,xCompactInterface_channelInterface_31i);ln=66;(*(double *)(cb(0,xCompactInterface_channelInterface_30h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uuz1))=-1.;  (*(double *)(cb(0,xCompactInterface_channelInterface_30h,xCompactInterface_channelInterface_30h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uuz1))=xCompactInterface_channelInterface_alfa1;   (*(double *)(cb(0,xCompactInterface_channelInterface_30h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uuz2))=-1.;  (*(double *)(cb(0,xCompactInterface_channelInterface_30h,xCompactInterface_channelInterface_30h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_uuz2))=xCompactInterface_channelInterface_alfa2;
ln=67;xCompactInterface_channelInterface_32h=nzd_-1;
ln=67;xCompactInterface_channelInterface_33i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_32h+1);

xCompactInterface_channelInterface_vvz1=malloc(xCompactInterface_channelInterface_33i);if(xCompactInterface_channelInterface_vvz1==NULL)xCompactInterface_channelInterface_vvz1=errmalloc();atblockexit(xCompactInterface_channelInterface_vvz1f,free,xCompactInterface_channelInterface_vvz1);ln=67;memset(xCompactInterface_channelInterface_vvz1,0,xCompactInterface_channelInterface_33i);
xCompactInterface_channelInterface_vvz2=malloc(xCompactInterface_channelInterface_33i);if(xCompactInterface_channelInterface_vvz2==NULL)xCompactInterface_channelInterface_vvz2=errmalloc();atblockexit(xCompactInterface_channelInterface_vvz2f,free,xCompactInterface_channelInterface_vvz2);ln=67;memset(xCompactInterface_channelInterface_vvz2,0,xCompactInterface_channelInterface_33i);ln=67;(*(double *)(cb(0,xCompactInterface_channelInterface_32h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvz1))=1.;   (*(double *)(cb(0,xCompactInterface_channelInterface_32h,xCompactInterface_channelInterface_32h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvz1))= - xCompactInterface_channelInterface_alfa1;  (*(double *)(cb(0,xCompactInterface_channelInterface_32h,0)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvz2))=1.;   (*(double *)(cb(0,xCompactInterface_channelInterface_32h,xCompactInterface_channelInterface_32h)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_vvz2))= - xCompactInterface_channelInterface_alfa2;
ln=78;  {int iz_=xCompactInterface_channelInterface_23h;do{{ ln=78;{ 
   struct DERIVCOEFFS_ *_34w;
ln=68;_34w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,iz_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz);
ln=69;(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_34w).d02_-ftledata_7st))=xCompactInterface_channelInterface_alfa2;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_34w).d02_-ftledata_7st))=1.;  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_34w).d02_-ftledata_7st))=xCompactInterface_channelInterface_alfa2 ;
   ln=70;(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_34w).d01_-ftledata_7st))=xCompactInterface_channelInterface_alfa1;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_34w).d01_-ftledata_7st))=1.;  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_34w).d01_-ftledata_7st))=xCompactInterface_channelInterface_alfa1;
   ln=71;(*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=-2.*(xCompactInterface_channelInterface_a2+xCompactInterface_channelInterface_b2/4.+xCompactInterface_channelInterface_c2/9.)/xCompactInterface_channelInterface_dz/xCompactInterface_channelInterface_dz;
   ln=72;(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_a2/xCompactInterface_channelInterface_dz/xCompactInterface_channelInterface_dz;    (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st));
   ln=73;(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_b2/xCompactInterface_channelInterface_dz/xCompactInterface_channelInterface_dz/4.;  (*(double *)(cb((-3),3, - 2)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st));
   ln=74;(*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_c2/xCompactInterface_channelInterface_dz/xCompactInterface_channelInterface_dz/9.;  (*(double *)(cb((-3),3, - 3)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_34w).d2_-xCompactInterface_channelInterface_17st));
   ln=75;(*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st))=0.;
   ln=76;(*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st))=xCompactInterface_channelInterface_14a1/xCompactInterface_channelInterface_dz/2.;  (*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st))= - (*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st));
   ln=77;(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st))=xCompactInterface_channelInterface_15b1/xCompactInterface_channelInterface_dz/4.;  (*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st))= - (*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_34w).d1_-xCompactInterface_channelInterface_18st));
}}iz_--;}while(iz_>=0);}
ln=79;(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st))+=1.;  (*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st))=0.;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,nzd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st))+=(xCompactInterface_channelInterface_alfa1*xCompactInterface_channelInterface_alfa1);  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,nzd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st))=0.;
ln=80;(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st))+=1.;  (*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st))=0.;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,nzd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st))+=(xCompactInterface_channelInterface_alfa2*xCompactInterface_channelInterface_alfa2);  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_23h,nzd_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st))=0.;
ln=81;rbmat_6LUdecomp(0,xCompactInterface_channelInterface_23h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),(char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st);  rbmat_6LUdecomp(0,xCompactInterface_channelInterface_23h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),(char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st);  {{rbmat_8LeftLDiv(0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz1),0,xCompactInterface_channelInterface_23h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st),0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz1));  rbmat_9LeftUDiv(0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz1),0,xCompactInterface_channelInterface_23h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivz)).d01_-ftledata_7st),0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz1));};}  {{rbmat_8LeftLDiv(0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz2),0,xCompactInterface_channelInterface_23h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st),0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz2));  rbmat_9LeftUDiv(0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz2),0,xCompactInterface_channelInterface_23h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),((char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivz)).d02_-ftledata_7st),0,xCompactInterface_channelInterface_30h,(ssize_t)sizeof(double),(xCompactInterface_channelInterface_uuz2));};}
/* y-derivatives */
ln=95; {int iy_=2  ;do{{ ln=95;{ 
   struct DERIVCOEFFS_ *_35w;
ln=83;_35w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,iy_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
ln=90;if( (iy_>2 )&&( iy_<ny_-2 )){ 
     ln=85;(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_35w).d02_-ftledata_7st))=xCompactInterface_channelInterface_alfa2;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_35w).d02_-ftledata_7st))=1.;  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_35w).d02_-ftledata_7st))=xCompactInterface_channelInterface_alfa2 ;
     ln=86;(*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=-2.*(xCompactInterface_channelInterface_a2+xCompactInterface_channelInterface_b2/4.+xCompactInterface_channelInterface_c2/9.)/xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;
     ln=87;(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_a2/xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;    (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st));
     ln=88;(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_b2/xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi/4.;  (*(double *)(cb((-3),3, - 2)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st));
     ln=89;(*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=xCompactInterface_channelInterface_c2/xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi/9.;  (*(double *)(cb((-3),3, - 3)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_35w).d2_-xCompactInterface_channelInterface_17st));
   };
   ln=91;(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_35w).d01_-ftledata_7st))=xCompactInterface_channelInterface_alfa1;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_35w).d01_-ftledata_7st))=1.;  (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_35w).d01_-ftledata_7st))=xCompactInterface_channelInterface_alfa1;
   ln=92;(*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st))=0.;
   ln=93;(*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st))=xCompactInterface_channelInterface_14a1/xCompactInterface_channelInterface_dxi/2.;  (*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st))= - (*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st));
   ln=94;(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st))=xCompactInterface_channelInterface_15b1/xCompactInterface_channelInterface_dxi/4.;  (*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st))= - (*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_35w).d1_-xCompactInterface_channelInterface_18st));
}}iy_+=1;}while(iy_<=ny_-2);}

{    struct DERIVCOEFFS_ *_36w;
ln=97;_36w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_36w).d01_-ftledata_7st))=1.;     (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_36w).d01_-ftledata_7st))=2.;   (*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_36w).d1_-xCompactInterface_channelInterface_18st))=-5./2./xCompactInterface_channelInterface_dxi;   (*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_36w).d1_-xCompactInterface_channelInterface_18st))=4./2./xCompactInterface_channelInterface_dxi;       (*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+(*_36w).d1_-xCompactInterface_channelInterface_18st))=0.5/xCompactInterface_channelInterface_dxi;}
{    struct DERIVCOEFFS_ *_37w;
ln=98;_37w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,0)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_37w).d02_-ftledata_7st))=1.;     (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_37w).d02_-ftledata_7st))=11.;  (*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_37w).d2_-xCompactInterface_channelInterface_17st))=13./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi; (*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_37w).d2_-xCompactInterface_channelInterface_17st))=-27./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;   (*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_37w).d2_-xCompactInterface_channelInterface_17st))=15./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;    (*(double *)(cb((-3),3,3)*(ssize_t)sizeof(double)+(*_37w).d2_-xCompactInterface_channelInterface_17st))=-1./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;}

{    struct DERIVCOEFFS_ *_38w;
ln=100;_38w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_38w).d01_-ftledata_7st))=1./4.;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_38w).d01_-ftledata_7st))=1.;   (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_38w).d01_-ftledata_7st))=1./4.;       (*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+(*_38w).d1_-xCompactInterface_channelInterface_18st))=-3./4./xCompactInterface_channelInterface_dxi;     (*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_38w).d1_-xCompactInterface_channelInterface_18st))=0.;             (*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_38w).d1_-xCompactInterface_channelInterface_18st))=3./4./xCompactInterface_channelInterface_dxi;}
{    struct DERIVCOEFFS_ *_39w;
ln=101;_39w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_39w).d02_-ftledata_7st))=1./10.; (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_39w).d02_-ftledata_7st))=1.;   (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_39w).d02_-ftledata_7st))=1./10.;      (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_39w).d2_-xCompactInterface_channelInterface_17st))=6./5./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_39w).d2_-xCompactInterface_channelInterface_17st))=-12./5./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi; (*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_39w).d2_-xCompactInterface_channelInterface_17st))=6./5./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;}

{    struct DERIVCOEFFS_ *_40w;
ln=103;_40w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,2)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_40w).d02_-ftledata_7st))=2./11.; (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_40w).d02_-ftledata_7st))=1.;   (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_40w).d02_-ftledata_7st))=2./11.;      (*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st))=12./11./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st)); (*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st))=3./44./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi; (*(double *)(cb((-3),3, - 2)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st)); (*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st))=-2.*((*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st))+(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_40w).d2_-xCompactInterface_channelInterface_17st)));}
{ struct DERIVCOEFFS_ *_41w;
ln=104;_41w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,ny_-2)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_41w).d02_-ftledata_7st))=2./11.; (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_41w).d02_-ftledata_7st))=1.;   (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_41w).d02_-ftledata_7st))=2./11.;      (*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st))=12./11./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st)); (*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st))=3./44./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi; (*(double *)(cb((-3),3, - 2)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st))=(*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st)); (*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st))=-2.*((*(double *)(cb((-3),3,2)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st))+(*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_41w).d2_-xCompactInterface_channelInterface_17st)));}

{ struct DERIVCOEFFS_ *_42w;
ln=106;_42w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,ny_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_42w).d01_-ftledata_7st))=1./4.;  (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_42w).d01_-ftledata_7st))=1.;   (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_42w).d01_-ftledata_7st))=1./4.;       (*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+(*_42w).d1_-xCompactInterface_channelInterface_18st))=-3./4./xCompactInterface_channelInterface_dxi;     (*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_42w).d1_-xCompactInterface_channelInterface_18st))=0.;             (*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+(*_42w).d1_-xCompactInterface_channelInterface_18st))=3./4./xCompactInterface_channelInterface_dxi;}
{ struct DERIVCOEFFS_ *_43w;
_43w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,ny_-1)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_43w).d02_-ftledata_7st))=1./10.; (*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_43w).d02_-ftledata_7st))=1.;   (*(double *)(cb((-1),1,1)*(ssize_t)sizeof(double)+(*_43w).d02_-ftledata_7st))=1./10.;      (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_43w).d2_-xCompactInterface_channelInterface_17st))=6./5./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_43w).d2_-xCompactInterface_channelInterface_17st))=-12./5./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi; (*(double *)(cb((-3),3,1)*(ssize_t)sizeof(double)+(*_43w).d2_-xCompactInterface_channelInterface_17st))=6./5./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;}

{   struct DERIVCOEFFS_ *_44w;
ln=109;_44w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,ny_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_44w).d01_-ftledata_7st))=1.;     (*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_44w).d01_-ftledata_7st))=2.;  (*(double *)(cb((-2),2,0)*(ssize_t)sizeof(double)+(*_44w).d1_-xCompactInterface_channelInterface_18st))=5./2./xCompactInterface_channelInterface_dxi;     (*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+(*_44w).d1_-xCompactInterface_channelInterface_18st))=-4./2./xCompactInterface_channelInterface_dxi;     (*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+(*_44w).d1_-xCompactInterface_channelInterface_18st))= - 0.5/xCompactInterface_channelInterface_dxi;}
{   struct DERIVCOEFFS_ *_45w;
ln=110;_45w=(struct DERIVCOEFFS_ *)(cb(0,xCompactInterface_channelInterface_21h,ny_)*DERIVCOEFFS_s+xCompactInterface_channelInterface_derivy);
(*(double *)(cb((-1),1,0)*(ssize_t)sizeof(double)+(*_45w).d02_-ftledata_7st))=1.;     (*(double *)(cb((-1),1, - 1)*(ssize_t)sizeof(double)+(*_45w).d02_-ftledata_7st))=11.; (*(double *)(cb((-3),3,0)*(ssize_t)sizeof(double)+(*_45w).d2_-xCompactInterface_channelInterface_17st))=13./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3, - 1)*(ssize_t)sizeof(double)+(*_45w).d2_-xCompactInterface_channelInterface_17st))=-27./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3, - 2)*(ssize_t)sizeof(double)+(*_45w).d2_-xCompactInterface_channelInterface_17st))=15./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;  (*(double *)(cb((-3),3, - 3)*(ssize_t)sizeof(double)+(*_45w).d2_-xCompactInterface_channelInterface_17st))=-1./xCompactInterface_channelInterface_dxi/xCompactInterface_channelInterface_dxi;}
ln=111;rbmat_6LUdecomp(0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),(char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d01_-ftledata_7st);  rbmat_6LUdecomp(0,xCompactInterface_channelInterface_21h,DERIVCOEFFS_s,(-1),1,(ssize_t)sizeof(double),(char*)(*(struct DERIVCOEFFS_ *)(xCompactInterface_channelInterface_derivy)).d02_-ftledata_7st);
/* stretching functions  */
ln=113; xCompactInterface_channelInterface_beta= a_/(ymax_-ymin_);ln=114; xCompactInterface_channelInterface_alfah= (-1.+ sqrt(1.+4.*((xCompactInterface_channelInterface_beta*xCompactInterface_channelInterface_beta))*(3.14159265358979323846*3.14159265358979323846)))/(2.*xCompactInterface_channelInterface_beta);ln=115;xCompactInterface_channelInterface_46h=ny_;
ln=115;xCompactInterface_channelInterface_47i=(ssize_t)sizeof(double)*(xCompactInterface_channelInterface_46h+1);

xCompactInterface_channelInterface_hp=malloc(xCompactInterface_channelInterface_47i);if(xCompactInterface_channelInterface_hp==NULL)xCompactInterface_channelInterface_hp=errmalloc();{int i48;for(i48=0;i48<=xCompactInterface_channelInterface_46h;i48++){memmove((double *)(xCompactInterface_channelInterface_hp+i48*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(xCompactInterface_channelInterface_hpf,free,xCompactInterface_channelInterface_hp);
xCompactInterface_channelInterface_one_hp=malloc(xCompactInterface_channelInterface_47i);if(xCompactInterface_channelInterface_one_hp==NULL)xCompactInterface_channelInterface_one_hp=errmalloc();{int i49;for(i49=0;i49<=xCompactInterface_channelInterface_46h;i49++){memmove((double *)(xCompactInterface_channelInterface_one_hp+i49*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(xCompactInterface_channelInterface_one_hpf,free,xCompactInterface_channelInterface_one_hp);
xCompactInterface_channelInterface_one_hp2=malloc(xCompactInterface_channelInterface_47i);if(xCompactInterface_channelInterface_one_hp2==NULL)xCompactInterface_channelInterface_one_hp2=errmalloc();{int i50;for(i50=0;i50<=xCompactInterface_channelInterface_46h;i50++){memmove((double *)(xCompactInterface_channelInterface_one_hp2+i50*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(xCompactInterface_channelInterface_one_hp2f,free,xCompactInterface_channelInterface_one_hp2);
xCompactInterface_channelInterface_hpp_hp3=malloc(xCompactInterface_channelInterface_47i);if(xCompactInterface_channelInterface_hpp_hp3==NULL)xCompactInterface_channelInterface_hpp_hp3=errmalloc();{int i51;for(i51=0;i51<=xCompactInterface_channelInterface_46h;i51++){memmove((double *)(xCompactInterface_channelInterface_hpp_hp3+i51*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(xCompactInterface_channelInterface_hpp_hp3f,free,xCompactInterface_channelInterface_hpp_hp3);
xCompactInterface_channelInterface_hpp=malloc(xCompactInterface_channelInterface_47i);if(xCompactInterface_channelInterface_hpp==NULL)xCompactInterface_channelInterface_hpp=errmalloc();{int i52;for(i52=0;i52<=xCompactInterface_channelInterface_46h;i52++){memmove((double *)(xCompactInterface_channelInterface_hpp+i52*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(xCompactInterface_channelInterface_hppf,free,xCompactInterface_channelInterface_hpp);ln=122;  {int i_=xCompactInterface_channelInterface_46h;do{{ 
  double xi_ ;

  double *_53q;
ln=117; xi_= (double)(i_)*xCompactInterface_channelInterface_dxi;ln=118; (*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_hp)      )= (ymax_-ymin_)*(3.14159265358979323846*xCompactInterface_channelInterface_beta/(xCompactInterface_channelInterface_alfah*xCompactInterface_channelInterface_beta+pow(sin(3.14159265358979323846*(1.0*xi_+xCompactInterface_channelInterface_16delta)),2)))  ;
  ln=119; (*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_one_hp)  )= (xCompactInterface_channelInterface_alfah*xCompactInterface_channelInterface_beta+pow(sin(3.14159265358979323846*(1.0*xi_+xCompactInterface_channelInterface_16delta)),2))/(3.14159265358979323846*xCompactInterface_channelInterface_beta)/(ymax_-ymin_);
  ln=120;_53q=(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_one_hp);
ln=120; (*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_one_hp2) )= ((*(_53q!=NULL?_53q:(double *)cp()))*(*(_53q!=NULL?_53q:(double *)cp())));
  ln=121; (*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_hpp_hp3) )= (-2.*1.0*sin(3.14159265358979323846*(1.0*xi_+xCompactInterface_channelInterface_16delta))*cos(3.14159265358979323846*(1.0*xi_+xCompactInterface_channelInterface_16delta))/((ymax_-ymin_)*xCompactInterface_channelInterface_beta))*(*(double *)(cb(0,xCompactInterface_channelInterface_46h,i_)*(ssize_t)sizeof(double)+xCompactInterface_channelInterface_one_hp));
}i_--;}while(i_>=0);}
/*DO WITH derivy(i): hpp(i) = [SUM d1(j)*hp((i+j)) FOR ALL j EXCEPT (i+j)<0 OR (i+j)>ny] FOR ALL i */
/*hpp = derivy.d01\hpp */
/*DO hpp_hp3(i) = hpp(i)/hp(i)**3 FOR ALL i */

/* derivatives functions and macros */

xCompactInterface_channelInterface_exit:;fn="ftledata.cpl";
memmove(&newcoef_,&sigNAN,sizeof(double));memmove(&oldcoef_,&sigNAN,sizeof(double));memmove(&lambda_,&sigNAN,sizeof(double));{int i29;for(i29=1;i29<=4;i29++){{int i30;for(i30=1;i30<=4;i30++){memmove((double *)(RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))+i29*(ssize_t)sizeof(double)*4+i30*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}}}ln=130;(*(double *)(cb(1,4,1)*(ssize_t)sizeof(double)+cb(1,4,1)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=1020./240.;  (*(double *)(cb(1,4,2)*(ssize_t)sizeof(double)+cb(1,4,1)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=2.0;     (*(double *)(cb(1,4,3)*(ssize_t)sizeof(double)+cb(1,4,1)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;        (*(double *)(cb(1,4,4)*(ssize_t)sizeof(double)+cb(1,4,1)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;
ln=131;(*(double *)(cb(1,4,1)*(ssize_t)sizeof(double)+cb(1,4,2)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=1020./32.;   (*(double *)(cb(1,4,2)*(ssize_t)sizeof(double)+cb(1,4,2)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=289./32.;  (*(double *)(cb(1,4,3)*(ssize_t)sizeof(double)+cb(1,4,2)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=-225./32.;  (*(double *)(cb(1,4,4)*(ssize_t)sizeof(double)+cb(1,4,2)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=2.*240./1020.;
ln=132;(*(double *)(cb(1,4,1)*(ssize_t)sizeof(double)+cb(1,4,3)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=1020./68.;   (*(double *)(cb(1,4,2)*(ssize_t)sizeof(double)+cb(1,4,3)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=25./4.;    (*(double *)(cb(1,4,3)*(ssize_t)sizeof(double)+cb(1,4,3)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=-17./4.;    (*(double *)(cb(1,4,4)*(ssize_t)sizeof(double)+cb(1,4,3)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=2.*(double)((240+32))/1020.;
ln=133;(*(double *)(cb(1,4,1)*(ssize_t)sizeof(double)+cb(1,4,4)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=1020./170.;  (*(double *)(cb(1,4,2)*(ssize_t)sizeof(double)+cb(1,4,4)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=9./2.;    (*(double *)(cb(1,4,3)*(ssize_t)sizeof(double)+cb(1,4,4)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=-5./2.;      (*(double *)(cb(1,4,4)*(ssize_t)sizeof(double)+cb(1,4,4)*(ssize_t)sizeof(double)*4+RK4_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=2.*(double)((240+32+68))/1020.;

ln=167;ftledata_36nx_part=nxd_*ox_*ofx_;
ln=167;  
ln=168;dx_part_=2.*3.14159265358979323846/(alfa0_*(double)(ftledata_36nx_part));ln=169;ftledata_37h=ftledata_36nx_part-1;
ln=169;ftledata_38i=(ssize_t)sizeof(double)*(ftledata_37h+1);

xx_=malloc(ftledata_38i);if(xx_==NULL)xx_=errmalloc();atblockexit(xx_f,free,xx_);ln=169;memset(xx_,0,ftledata_38i);ln=169;  {int ix_=ftledata_37h;do{{ ln=169;(*(double *)(cb(0,ftledata_37h,ix_)*(ssize_t)sizeof(double)+xx_))=(double)(ix_)*dx_part_ ;}ix_--;}while(ix_>=0);}
ln=171;ftledata_39nz_part=nzd_*oz_*ofz_;
ln=171;   
ln=172;dz_part_=2.*3.14159265358979323846/(beta0_*(double)(ftledata_39nz_part));ln=173;ftledata_40h=ftledata_39nz_part-1;
ln=173;ftledata_41i=(ssize_t)sizeof(double)*(ftledata_40h+1);

zz_=malloc(ftledata_41i);if(zz_==NULL)zz_=errmalloc();atblockexit(zz_f,free,zz_);ln=173;memset(zz_,0,ftledata_41i);ln=173;  {int iz_=ftledata_40h;do{{ ln=173;(*(double *)(cb(0,ftledata_40h,iz_)*(ssize_t)sizeof(double)+zz_))=(double)(iz_)*dz_part_ ;}iz_--;}while(iz_>=0);}
ln=174;ftledata_42ny_part=ny_*oy_*ofy_;
ln=174;  
ln=175;ftledata_43h=ftledata_42ny_part+1;
ln=175;ftledata_44i=(ssize_t)sizeof(double)*(ftledata_43h-(-1)+1);

yy_=malloc(ftledata_44i);if(yy_==NULL)yy_=errmalloc();yy_-=ftledata_7st;{int i45;for(i45=(-1);i45<=ftledata_43h;i45++){memmove((double *)(yy_+i45*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}atblockexit(yy_f,free,yy_+ftledata_7st);ln=176;  {int i_=(-1);do{{ ln=176;(*(double *)(cb((-1),ftledata_43h,i_)*(ssize_t)sizeof(double)+yy_))=ymin_+0.5*(ymax_-ymin_)*(tanh(a_*((double)(2*i_)/(double)(ftledata_42ny_part)-1.))/tanh(a_)+0.5*(ymax_-ymin_)) ;}i_++;}while(i_<=ftledata_43h);}
ln=177; np_= 6*ftledata_36nx_part*ftledata_39nz_part*(ftledata_42ny_part-1);ln=178; extnp_= ftledata_36nx_part*ftledata_39nz_part*(ftledata_42ny_part-1);ln=186;if( (next_==NULL) ){ 
  ssize_t diskspace_;
  int _46h;
int _47h;
int _48h;
ssize_t _49i;
ssize_t _50i;
ssize_t _51i;

                     int _52h;
int _53h;
int _54h;
ssize_t _55i;
ssize_t _56i;
ssize_t _57i;
                               
  ln=180; fprintf(stdout,"""Seeding particles in the barrier field ...""");putc('\n',stdout);
  ln=181;_46h=ftledata_36nx_part-1;
ln=181;_47h=ftledata_39nz_part-1;
ln=181;_48h=ftledata_42ny_part-1;
ln=181;_49i=(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)*_48h;
ln=181;_50i=_49i*(_47h+1);
ln=181;_51i=_50i*(_46h+1);
ln=181;diskspace_=_51i;
ln=183;_52h=ftledata_36nx_part-1;
ln=183;_53h=ftledata_39nz_part-1;
ln=183;_54h=ftledata_42ny_part-1;
ln=183;_55i=(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*_54h;
ln=183;_56i=_55i*(_53h+1);
ln=183;_57i=_56i*(_52h+1);
ln=183;diskspace_+=_57i;
ln=185; fprintf(stdout,""" ""\t""this will require " "%g"" GiB of memory ...""",(double)(diskspace_)/(pow(1024.0,3)) );putc('\n',stdout);
};
/* Particles that I need for the inverse of the flow map at the barrier field position */
ln=188;ftledata_58h=ftledata_36nx_part-1;
ln=188;ftledata_59h=ftledata_39nz_part-1;
ln=188;ftledata_60h=ftledata_42ny_part-1;
ln=188;ftledata_61i=(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)*ftledata_60h;
ln=188;ftledata_62i=ftledata_61i*(ftledata_59h+1);
ln=188;ftledata_63i=ftledata_62i*(ftledata_58h+1);

particles_=mmap(NULL,ftledata_63i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(particles_==MAP_FAILED)particles_=errmalloc();particles_-=(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1);atblockexit(particles_f,particles_free,(void*)particles_);ln=188;memset((ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)+particles_,0,ftledata_63i);ln=189;ftledata_64h=ftledata_36nx_part-1;
ln=189;ftledata_65h=ftledata_39nz_part-1;
ln=189;ftledata_66h=ftledata_42ny_part-1;
ln=189;ftledata_67i=(ssize_t)sizeof(int)*(5+1)*ftledata_66h;
ln=189;ftledata_68i=ftledata_67i*(ftledata_65h+1);
ln=189;ftledata_69i=ftledata_68i*(ftledata_64h+1);

hitBoundary_=mmap(NULL,ftledata_69i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(hitBoundary_==MAP_FAILED)hitBoundary_=errmalloc();hitBoundary_-=(ssize_t)sizeof(int)*(5+1);atblockexit(hitBoundary_f,hitBoundary_free,(void*)hitBoundary_);ln=189;memset((ssize_t)sizeof(int)*(5+1)+hitBoundary_,0,ftledata_69i);ln=192;ftledata_70h=ftledata_36nx_part-1;
ln=192;ftledata_71h=ftledata_39nz_part-1;
ln=192;ftledata_72h=ftledata_42ny_part-1;
ln=192;ftledata_73i=(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*ftledata_72h;
ln=192;ftledata_74i=ftledata_73i*(ftledata_71h+1);
ln=192;ftledata_75i=ftledata_74i*(ftledata_70h+1);

extparticles_=mmap(NULL,ftledata_75i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(extparticles_==MAP_FAILED)extparticles_=errmalloc();extparticles_-=(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1);atblockexit(extparticles_f,extparticles_free,(void*)extparticles_);ln=192;memset((ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+extparticles_,0,ftledata_75i);ln=193;ftledata_76h=ftledata_36nx_part-1;
ln=193;ftledata_77h=ftledata_39nz_part-1;
ln=193;ftledata_78h=ftledata_42ny_part-1;
ln=193;ftledata_79i=(ssize_t)sizeof(int)*ftledata_78h;
ln=193;ftledata_80i=ftledata_79i*(ftledata_77h+1);
ln=193;ftledata_81i=ftledata_80i*(ftledata_76h+1);

exthitBoundary_=mmap(NULL,ftledata_81i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(exthitBoundary_==MAP_FAILED)exthitBoundary_=errmalloc();exthitBoundary_-=(ssize_t)sizeof(int);atblockexit(exthitBoundary_f,exthitBoundary_free,(void*)exthitBoundary_);ln=193;memset((ssize_t)sizeof(int)+exthitBoundary_,0,ftledata_81i);ln=196;ftledata_82h=ftledata_36nx_part-1;
ln=196;ftledata_83h=ftledata_39nz_part-1;
ln=196;ftledata_84h=ftledata_42ny_part-1;
ln=196;ftledata_85i=(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)*ftledata_84h;
ln=196;ftledata_86i=ftledata_85i*(ftledata_83h+1);
ln=197;ftledata_87h=ftledata_36nx_part-1;
ln=197;ftledata_88h=ftledata_39nz_part-1;
ln=197;ftledata_89h=ftledata_42ny_part-1;
ln=197;ftledata_90i=(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*ftledata_89h;
ln=197;ftledata_91i=ftledata_90i*(ftledata_88h+1);
ln=198;ftledata_93i=(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)*ftledata_84h;
ln=198;ftledata_94i=ftledata_93i*(ftledata_83h+1);
ln=198;ftledata_95i=ftledata_94i*(ftledata_82h+1);
ln=198;ftledata_96i=(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*ftledata_89h;
ln=198;ftledata_97i=ftledata_96i*(ftledata_88h+1);
ln=198;ftledata_98i=ftledata_97i*(ftledata_87h+1);
diskparticles_=NULL;{int i99;for(i99=1;i99<=6;i99++){memmove((double *)(Wx_-((ssize_t)sizeof(double))+i99*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}{int i100;for(i100=1;i100<=6;i100++){memmove((double *)(Wz_-((ssize_t)sizeof(double))+i100*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}{int i101;for(i101=1;i101<=6;i101++){memmove((double *)(Wxp_-((ssize_t)sizeof(double))+i101*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}{int i102;for(i102=1;i102<=6;i102++){memmove((double *)(Wzp_-((ssize_t)sizeof(double))+i102*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}{int i103;for(i103=0;i103<=5;i103++){memmove((double *)(Wy_+i103*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}{int i104;for(i104=0;i104<=5;i104++){memmove((double *)(Wyp_+i104*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}memmove(&vpoldu_,&sigNAN,sizeof(double));memmove(&vpoldv_,&sigNAN,sizeof(double));memmove(&vpoldw_,&sigNAN,sizeof(double));ln=202;dx_=2.*3.14159265358979323846/(alfa0_*(double)(nxd_));ln=202;dz_=2.*3.14159265358979323846/(beta0_*(double)(nzd_));ln=203;(*(double *)(cb(1,6,1)*(ssize_t)sizeof(double)+Wx_-((ssize_t)sizeof(double))))=1./(-120.*pow(dx_,5)); (*(double *)(cb(1,6,2)*(ssize_t)sizeof(double)+Wx_-((ssize_t)sizeof(double))))=1./(24.*pow(dx_,5)); (*(double *)(cb(1,6,3)*(ssize_t)sizeof(double)+Wx_-((ssize_t)sizeof(double))))=1./(-12.*pow(dx_,5)); (*(double *)(cb(1,6,4)*(ssize_t)sizeof(double)+Wx_-((ssize_t)sizeof(double))))=1./(12.*pow(dx_,5)); (*(double *)(cb(1,6,5)*(ssize_t)sizeof(double)+Wx_-((ssize_t)sizeof(double))))=1./(-24.*pow(dx_,5)); (*(double *)(cb(1,6,6)*(ssize_t)sizeof(double)+Wx_-((ssize_t)sizeof(double))))=1./(120.*pow(dx_,5));
ln=204;(*(double *)(cb(1,6,1)*(ssize_t)sizeof(double)+Wz_-((ssize_t)sizeof(double))))=1./(-120.*pow(dz_,5)); (*(double *)(cb(1,6,2)*(ssize_t)sizeof(double)+Wz_-((ssize_t)sizeof(double))))=1./(24.*pow(dz_,5)); (*(double *)(cb(1,6,3)*(ssize_t)sizeof(double)+Wz_-((ssize_t)sizeof(double))))=1./(-12.*pow(dz_,5)); (*(double *)(cb(1,6,4)*(ssize_t)sizeof(double)+Wz_-((ssize_t)sizeof(double))))=1./(12.*pow(dz_,5)); (*(double *)(cb(1,6,5)*(ssize_t)sizeof(double)+Wz_-((ssize_t)sizeof(double))))=1./(-24.*pow(dz_,5)); (*(double *)(cb(1,6,6)*(ssize_t)sizeof(double)+Wz_-((ssize_t)sizeof(double))))=1./(120.*pow(dz_,5));
ln=205;  {int j_=5;do{{ ln=205;(*(double *)(cb(0,5,j_)*(ssize_t)sizeof(double)+Wy_))=1.;}j_--;}while(j_>=0);}
memmove(&ftledata_105,&sigNAN,sizeof(double));ftledata_105=dx_;if(ftledata_105>dx_part_)ftledata_105=dx_part_;ln=206;ftledata_106epsx=ftledata_105/200.;
ln=206;      ftledata_107epsy=((*(double *)(cb((-1),ftledata_5h,1)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb((-1),ftledata_5h,0)*(ssize_t)sizeof(double)+y_)))/200.;
      memmove(&ftledata_108,&sigNAN,sizeof(double));ftledata_108=dz_;if(ftledata_108>dz_part_)ftledata_108=dz_part_;ftledata_109epsz=ftledata_108/200.;
  
{int i110;for(i110=0;i110<=5;i110++){{int i111;for(i111=0;i111<=2;i111++){memmove((double *)(eps_+i110*(ssize_t)sizeof(double)*(2+1)+i111*(ssize_t)sizeof(double)),&sigNAN,sizeof(double));}}}}ln=208; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,0)*(ssize_t)sizeof(double)*(2+1)+eps_) )= ftledata_106epsx;     (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,0)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;     (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,0)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0; 
ln=209; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,1)*(ssize_t)sizeof(double)*(2+1)+eps_) )=  - ftledata_106epsx;    (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,1)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;     (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,1)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0; 
ln=210; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,2)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;      (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,2)*(ssize_t)sizeof(double)*(2+1)+eps_) )= ftledata_107epsy;    (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,2)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0; 
ln=211; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,3)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;      (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,3)*(ssize_t)sizeof(double)*(2+1)+eps_) )=  - ftledata_107epsy;   (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,3)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0; 
ln=212; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,4)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;      (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,4)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;     (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,4)*(ssize_t)sizeof(double)*(2+1)+eps_) )= ftledata_109epsz; 
ln=213; (*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,5)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;      (*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,5)*(ssize_t)sizeof(double)*(2+1)+eps_) )= 0.0;     (*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,5)*(ssize_t)sizeof(double)*(2+1)+eps_) )=  - ftledata_109epsz; 
ln=223; {int ix_=0  ;while(ix_<=ftledata_36nx_part-1 ){ {int iz_=0  ;while(iz_<=ftledata_39nz_part-1 ){ {int iy_=1  ;while(iy_<=ftledata_42ny_part-1 ){
/*#ifndef dummy */
  ln=216;{  char *_112w;
ln=216;_112w=cb(1,ftledata_72h,iy_)*(ssize_t)sizeof(double)*(/*SA35*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(0,ftledata_71h,iz_)*ftledata_73i+cb(0,ftledata_70h,ix_)*ftledata_74i+extparticles_;
 (*(double *)(0+_112w) )= (*(double *)(cb(0,ftledata_37h,ix_)*(ssize_t)sizeof(double)+xx_));  (*(double *)(0+(ssize_t)sizeof(double)+_112w) )= (*(double *)(cb((-1),ftledata_43h,iy_)*(ssize_t)sizeof(double)+yy_));  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_112w) )= (*(double *)(cb(0,ftledata_40h,iz_)*(ssize_t)sizeof(double)+zz_));}
/*#endif */
  ln=222; {int i_=0  ;do{{ ln=222;{
    char *_113w;
ln=218;_113w=cb(0,5,i_)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+cb(1,ftledata_60h,iy_)*(ssize_t)sizeof(double)*(/*SA34*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(5+1)+cb(0,ftledata_59h,iz_)*ftledata_61i+cb(0,ftledata_58h,ix_)*ftledata_62i+particles_;
ln=219; (*(double *)(0+_113w) )= (*(double *)(cb(0,ftledata_37h,ix_)*(ssize_t)sizeof(double)+xx_))+(*(double *)(cb(0,2,0)*(ssize_t)sizeof(double)+cb(0,5,i_)*(ssize_t)sizeof(double)*(2+1)+eps_));  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_113w))=(*(double *)(0+_113w)); 
    ln=220; (*(double *)(0+(ssize_t)sizeof(double)+_113w) )= (*(double *)(cb((-1),ftledata_43h,iy_)*(ssize_t)sizeof(double)+yy_))+(*(double *)(cb(0,2,1)*(ssize_t)sizeof(double)+cb(0,5,i_)*(ssize_t)sizeof(double)*(2+1)+eps_));  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_113w))=(*(double *)(0+(ssize_t)sizeof(double)+_113w)); 
    ln=221; (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_113w) )= (*(double *)(cb(0,ftledata_40h,iz_)*(ssize_t)sizeof(double)+zz_))+(*(double *)(cb(0,2,2)*(ssize_t)sizeof(double)+cb(0,5,i_)*(ssize_t)sizeof(double)*(2+1)+eps_));  (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_113w))=(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+_113w)); 
  }}i_+=1;}while(i_<=5);}
iy_+=1;};}iz_+=1;};}ix_+=1;};} 

/* Definition of the barrier field  */
/* ------------------------------------------------------------------------------ */
ln=232;ftledata_114h=ftledata_36nx_part-1;
ln=232;ftledata_115h=ftledata_39nz_part-1;
ln=232;ftledata_116h=ftledata_42ny_part+1;
ln=232;ftledata_117i=(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(ftledata_116h-(-1)+1);
ln=232;ftledata_118i=ftledata_117i*(ftledata_115h+1);
ln=232;ftledata_119i=ftledata_118i*(ftledata_114h+1);
ln=232;ftledata_120st=(-1)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1);

barrierField_=mmap(NULL,ftledata_119i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(barrierField_==MAP_FAILED)barrierField_=errmalloc();barrierField_-=ftledata_120st;atblockexit(barrierField_f,barrierField_free,(void*)barrierField_);ln=232;memset(ftledata_120st+barrierField_,0,ftledata_119i);ln=233;ftledata_121h=ftledata_36nx_part-1;
ln=233;ftledata_122h=ftledata_39nz_part-1;
ln=233;ftledata_123h=ftledata_42ny_part+1;
ln=233;ftledata_124i=(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(ftledata_123h-(-1)+1);
ln=233;ftledata_125i=ftledata_124i*(ftledata_122h+1);
ln=233;ftledata_126i=ftledata_125i*(ftledata_121h+1);

barrierFieldIntegrand_=mmap(NULL,ftledata_126i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(barrierFieldIntegrand_==MAP_FAILED)barrierFieldIntegrand_=errmalloc();barrierFieldIntegrand_-=ftledata_120st;atblockexit(barrierFieldIntegrand_f,barrierFieldIntegrand_free,(void*)barrierFieldIntegrand_);ln=233;memset(ftledata_120st+barrierFieldIntegrand_,0,ftledata_126i);ln=234;ftledata_127h=ftledata_36nx_part-1;
ln=234;ftledata_128h=ftledata_39nz_part-1;
ln=234;ftledata_129h=ftledata_42ny_part+1;
ln=234;ftledata_130i=(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(ftledata_129h-(-1)+1);
ln=234;ftledata_131i=ftledata_130i*(ftledata_128h+1);
diskBarrierField_=NULL;fn="barrierField.cpl";
/*  */
ln=21; iF_= nfmin_;ln=50;while( ((*(( ftledata_4dir>0  ?&nfmax_  :&iF_)))-(*(( ftledata_4dir>0  ?&iF_  :&nfmax_))))>0 ){
   ssize_t _6i;
struct freefunc _5f;char *_5;

   int m7;
int m8;
double chron_;
  int m13;
ln=27;if( iF_==nfmin_ ){
      ssize_t _2i;
struct freefunc _1f;char *_1;
int m3;
int m4;
ln=25;_2i=(snprintf((char*)NULL,0,"""%s""Field""%d"".fld""",path_,iF_)+1+1);

_1=malloc(_2i);if(_1==NULL)_1=errmalloc();atblockexit(_1f,free,_1);snprintf(_1,snprintf((char*)NULL,0,"""%s""Field""%d"".fld""",path_,iF_)+1+1,"""%s""Field""%d"".fld""",path_,iF_);ln=25; if(1!=1)traphandler("String must be contiguous");
if(fieldname_ !=NULL)free(fieldname_ );
fieldname_ =strndup(_1+0,snprintf((char*)NULL,0,"""%s""Field""%d"".fld""",path_,iF_)+1-(0)+1);
      ln=26;xCompactInterface_1readVelocityField(fieldname_ ,0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,((m3=((iF_))%2,m3>=0?m3:m3+2)))*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_ ,0,ftledata_22h,ftledata_26i,0,ftledata_23h,ftledata_25i,(-1),ftledata_24h,(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,((m4=((iF_))%2,m4>=0?m4:m4+2)))*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+active_);
   freemem(&barrierFieldIntegrand_f);};
   ln=28;_6i=(snprintf((char*)NULL,0,"""%s""Field""%d"".fld""",path_,iF_+ftledata_4dir)+1+1);

_5=malloc(_6i);if(_5==NULL)_5=errmalloc();atblockexit(_5f,free,_5);snprintf(_5,snprintf((char*)NULL,0,"""%s""Field""%d"".fld""",path_,iF_+ftledata_4dir)+1+1,"""%s""Field""%d"".fld""",path_,iF_+ftledata_4dir);ln=28; if(1!=1)traphandler("String must be contiguous");
if(fieldname_ !=NULL)free(fieldname_ );
fieldname_ =strndup(_5+0,snprintf((char*)NULL,0,"""%s""Field""%d"".fld""",path_,iF_+ftledata_4dir)+1-(0)+1);ln=29;xCompactInterface_1readVelocityField(fieldname_ ,0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,((m7=((iF_+ftledata_4dir))%2,m7>=0?m7:m7+2)))*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_ ,0,ftledata_22h,ftledata_26i,0,ftledata_23h,ftledata_25i,(-1),ftledata_24h,(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,((m8=((iF_+ftledata_4dir))%2,m8>=0?m8:m8+2)))*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+active_);
   ln=30;chron_=wallclock_1wallclock();ln=30;if( (next_==NULL) ){  fprintf(stdout,"""Advances trajectories...""");putc('\n',stdout);};
   ln=43; {int it_=1  ;while(it_<=(4-(1)+1)){
     double chroni_;
  int m9;
int m10;

     
     int m11;
int m12;
ln=32;chroni_=wallclock_1wallclock();ln=32;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""ODE step ""\t%d" ,it_);putc('\n',stdout);};
     ln=33;ftledata_32set_ODE_step(it_);
     ln=34;ftledata_33linearInterpolator(0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),0,/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),(ssize_t)sizeof(double),cb(0,2,((m9=((iF_))%2,m9>=0?m9:m9+2)))*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_ ,0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),0,/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),(ssize_t)sizeof(double),cb(0,2,((m10=((iF_+ftledata_4dir))%2,m10>=0?m10:m10+2)))*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_ ,0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),0,/*SA1*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),(ssize_t)sizeof(double),cb(0,2,2)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_);
     ln=35;if( (next_==NULL) ){  fprintf(stdout,""" ""\t"" ""\t""velocity interpolation took ""%g"" seconds""" ,wallclock_1wallclock()-chroni_);putc('\n',stdout); };  chroni_=wallclock_1wallclock();ln=36;ftledata_132advance_trajectories(0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,2)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_);
     ln=37;if( (next_==NULL) ){  fprintf(stdout,""" ""\t"" ""\t""advection took ""%g"" seconds""" ,wallclock_1wallclock()-chroni_);putc('\n',stdout); };  chroni_=wallclock_1wallclock();ln=38;ftledata_33linearInterpolator(0,ftledata_22h,ftledata_26i,0,ftledata_23h,ftledata_25i,(-1),ftledata_24h,(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),0,/*SA2*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),(ssize_t)sizeof(double),cb(0,2,((m11=((iF_))%2,m11>=0?m11:m11+2)))*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+active_ ,0,ftledata_22h,ftledata_26i,0,ftledata_23h,ftledata_25i,(-1),ftledata_24h,(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),0,/*SA2*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),(ssize_t)sizeof(double),cb(0,2,((m12=((iF_+ftledata_4dir))%2,m12>=0?m12:m12+2)))*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+active_ ,0,ftledata_22h,ftledata_26i,0,ftledata_23h,ftledata_25i,(-1),ftledata_24h,(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),0,/*SA2*/((0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1),(ssize_t)sizeof(double),cb(0,2,2)*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+active_);
     ln=39;if( (next_==NULL) ){  fprintf(stdout,""" ""\t"" ""\t""active field interpolation took ""%g"" seconds""" ,wallclock_1wallclock()-chroni_);putc('\n',stdout); ln=39;chroni_=wallclock_1wallclock() ;};
     ln=40;ftledata_133advance_trajectories(0,ftledata_15h,ftledata_19i,0,ftledata_16h,ftledata_18i,(-1),ftledata_17h,(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,2)*(ssize_t)sizeof(double)*(/*SA1*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+velocity_ ,0,ftledata_22h,ftledata_26i,0,ftledata_23h,ftledata_25i,(-1),ftledata_24h,(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)*(2+1),cb(0,2,2)*(ssize_t)sizeof(double)*(/*SA2*/(((ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double))/((ssize_t)sizeof(double))-1)+1)+active_);
     ln=41;if( (next_==NULL) ){  fprintf(stdout,""" ""\t"" ""\t""advection took ""%g"" seconds""" ,wallclock_1wallclock()-chroni_);putc('\n',stdout);};
     ln=42;ftledata_134compute_barrier_field();
   it_+=1;};}
   ln=44;if( (next_==NULL) ){  fprintf(stdout,""" ""\t""took ""%g"" seconds""",wallclock_1wallclock()-chron_);putc('\n',stdout);};
   ln=45;iF_+=ftledata_4dir;
   ln=49;if( ((m13=(iF_-nfmin_) % dn_save_,m13>=0?m13:m13+dn_save_)==0 )&&( (iF_-nfmin_)!=0  )){
     ln=47;ftledata_135save_flowmap(iF_-nfmin_);
     ln=48;ftledata_137save_barrierField(iF_-nfmin_);
   };
freemem(&barrierFieldIntegrand_f);}

freemem(es);return 0;}
