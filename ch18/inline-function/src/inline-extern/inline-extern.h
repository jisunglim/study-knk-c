// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#if \
  !defined(__STDC__) || \
  !defined(__STDC_VERSION__) ||\
  !(__STDC_VERSION__ >= 199901L)
#error This header file requires Standard C compiler.
#endif

#ifndef INLINE_EXTERN
#define INLINE_EXTERN

// simple function for external linkage
extern double subtract(double a, double b);
extern double division(double a, double b);

// inline function for external linkage
// No externally visible code is generated.
// But one might be called, and so must exist.
inline double multiplication(double a, double b)
{
  return a * b;
}

#endif // Inline extern
