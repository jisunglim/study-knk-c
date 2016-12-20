// Name : stack.c
// Purpose : Stack
// Author : Jay J. Lim
// Date : Dec. 20, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include "stack.h"

int contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE - 1;
}

void push(int i)
{
  if (is_full()) {
    printf("Stack is full.");
    return;
  }
  contents[top++] = i;
}

int pop(void)
{
  if (is_empty()) {
    printf("Stack is empty.");
    return -1;
  }
  return contents[--top];
}
