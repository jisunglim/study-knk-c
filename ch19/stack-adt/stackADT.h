// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

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

#ifndef CH_19_STACK_ADT
#define CH_19_STACK_ADT

#include <stdbool.h>

// Stack : pointer to struct stack_type.
typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);

#endif /* end of include guard: CH_19_STACK_ADT */
