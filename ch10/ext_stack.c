// Name : ext_stack.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 15, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* External variables */
int contents[STACK_SIZE];
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
  return top == STACK_SIZE;
}

void stack_overflow(void)
{
  printf("The stack is full.\n");
}

void stack_underflow(void)
{
  printf("The stack is empty.\n");
}

void push(int i)
{
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

int pop()
{
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

