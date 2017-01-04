// Abstract data type for stack with linked list
// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#ifndef ADT_LINKED_STACK
#define ADT_LINKED_STACK

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

#endif /* end of include guard: ADT_LINKED_STACK */
