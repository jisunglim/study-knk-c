#if defined(__STDC__)
#  define PREDEF_STANDARD_C_1989
#  if defined(__STDC_VERSION__)
#    define PREDEF_STANDARD_C_1990
#    if (__STDC_VERSION__ >= 199409L)
#      define PREDEF_STANDARD_C_1994
#    endif
#    if (__STDC_VERSION__ >= 199901L)
#      define PREDEF_STANDARD_C_1999
#    endif
#  endif
#endif

#ifndef PREDEF_STANDARD_C_1999
#error This module requires Standard C compiler.
#endif

#ifndef CH_19_STACK_H
#define CH_19_STACK_H

// Header code here...
#include <stdbool.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif
