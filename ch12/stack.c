// Name : stack.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>

#define N 100

int stack[N];
int *top = &stack[0];

void push(int i);

int pop(void);

bool is_empty(void);

bool is_full(void);


void push(int i)
{
  if (is_full()) {
    printf("Stack is full.\n");
    return;
  } else
    *(top++) = i;
}

int pop()
{
  if (is_empty()) {
    printf("Stack is empty.\n");
    return -1;
  } else
    return *--top;
}

bool is_empty(void)
{
  if (top <= &stack[0])
    return true;
  else
    return false;
}

bool is_full(void)
{
  if (top >= &stack[N - 1])
    return true;
  else
    return false;
}