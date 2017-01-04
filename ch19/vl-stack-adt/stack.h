// Abstract data type for variable length stack
// Copyright (c) 2016 Copyright Holder All Rights Reserved.

#ifndef VAR_LEN_STACK_ADT
#define VAR_LEN_STACK_ADT

#include <stdbool.h>

typedef int Item;
typedef struct stack_type *Stack;

Stack create(int size);
void destroy(Stack s);

void make_empty(Stack s);

bool is_empty(Stack s);
bool is_full(Stack s);

void push(Stack s, Item i);
Item pop(Stack s);

#endif /* end of include guard: VAR_LEN_STACK_ADT */
