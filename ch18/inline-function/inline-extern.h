#ifndef __STDC__
#error This header requires a Standard C compiler.
#endif /* __STDC__ */

#ifndef STUDY_KNK_C_INLINE_EXTERN_H
#define STUDY_KNK_C_INLINE_EXTERN_H

extern double subtract(double a, double b);
extern double division(double a, double b);
// a definition mentioning inline
inline double multiplication(double a, double b)
{
  return a * b;
}

#endif
