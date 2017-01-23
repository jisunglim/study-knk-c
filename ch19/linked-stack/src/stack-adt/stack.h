// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#if \
  !defined(__STDC__) || \
  !defined(__STDC_VERSION__) ||\
  !(__STDC_VERSION__ >= 199901L)
#error This header file requires Standard C99 compiler.
#endif

#ifndef LINKED_STACK_ADT
#define LINKED_STACK_ADT

#include <stdbool.h>

typedef int Item;
typedef struct stack_type *Stack;

Stack create();
void destroy(Stack s);
void make_empty(Stack s);

bool is_empty(Stack s);
bool is_full(Stack s);

void push(Stack s, Item i);
Item pop(Stack s);

#endif /* end of include guard: LINKED_STACK_ADT */
