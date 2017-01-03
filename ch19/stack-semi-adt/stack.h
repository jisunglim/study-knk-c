// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#ifndef CH_19_SEMI_ADT_STACK_H
#define CH_19_SEMI_ADT_STACK_H

#define STACK_SIZE 100

typedef struct {
  int contents[STACK_SIZE];
  int top;
} Stack;

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);

#endif /* end of include guard: CH_19_SEMI_ADT_STACK_H */
