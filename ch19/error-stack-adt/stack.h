//
// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#ifndef CH_19_ERROR_HANDLE_STACK
#define CH_19_ERROR_HANDLE_STACK

#include <stdbool.h>

typedef int Item;
typedef struct stack_type *Stack;

Stack create();
void destroy(Stack s);
void make_empty(Stack s);

bool is_empty(Stack s);
bool is_full(Stack s);

bool push(Stack s, Item i);
Item *pop(Stack s);

#endif /* end of include guard: CH_19_ERROR_HANDLE_STACK */
