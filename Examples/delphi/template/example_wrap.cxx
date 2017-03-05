/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif



#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#include "example.h"

SWIGINTERN int vector_Sl_int_Sg__getitem(vector< int > *self,int index){
      return self->get(index);
    }
SWIGINTERN void vector_Sl_int_Sg__setitem(vector< int > *self,int index,int val){
      self->set(index,val);
    }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int Delphi_maxint(int pasarg0, int pasarg1) {
  int cresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  arg1 = (int)pasarg0;
  arg2 = (int)pasarg1;
  result = (int)max< int >(arg1,arg2);
  cresult = result; 
  return cresult;
}


SWIGEXPORT double Delphi_maxdouble(double pasarg0, double pasarg1) {
  double cresult = 0 ;
  double arg1 ;
  double arg2 ;
  double result;
  
  arg1 = (double)pasarg0;
  arg2 = (double)pasarg1;
  result = (double)max< double >(arg1,arg2);
  cresult = result; 
  return cresult;
}


SWIGEXPORT vector< int > * Delphi_new_vecint(int pasarg0) {
  vector< int > * cresult = 0 ;
  int arg1 ;
  vector< int > *result = 0 ;
  
  arg1 = (int)pasarg0;
  result = (vector< int > *)new vector< int >(arg1);
  *(vector< int > **)&cresult = result; 
  return cresult;
}


SWIGEXPORT int * Delphi_vecint_get(vector< int > * pasarg0, int pasarg1) {
  int * cresult = 0 ;
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  int *result = 0 ;
  
  arg1 = *(vector< int > **)&pasarg0; 
  arg2 = (int)pasarg1;
  result = (int *) &(arg1)->get(arg2);
  *(int **)&cresult = result; 
  return cresult;
}


SWIGEXPORT void Delphi_vecint__set(vector< int > * pasarg0, int pasarg1, int * pasarg2) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  int *arg3 = 0 ;
  
  arg1 = *(vector< int > **)&pasarg0; 
  arg2 = (int)pasarg1;
  arg3 = *(int **)&pasarg2;
  if(!arg3) {
    //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
    return ;
  } 
  (arg1)->set(arg2,*arg3);
}


SWIGEXPORT int Delphi_vecint_getitem(vector< int > * pasarg0, int pasarg1) {
  int cresult = 0 ;
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = *(vector< int > **)&pasarg0; 
  arg2 = (int)pasarg1;
  result = (int)vector_Sl_int_Sg__getitem(arg1,arg2);
  cresult = result; 
  return cresult;
}


SWIGEXPORT void Delphi_vecint_setitem(vector< int > * pasarg0, int pasarg1, int pasarg2) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  int arg3 ;
  
  arg1 = *(vector< int > **)&pasarg0; 
  arg2 = (int)pasarg1;
  arg3 = (int)pasarg2;
  vector_Sl_int_Sg__setitem(arg1,arg2,arg3);
}


SWIGEXPORT void Delphi_delete_vecint(vector< int > * pasarg0) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  
  arg1 = *(vector< int > **)&pasarg0; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

