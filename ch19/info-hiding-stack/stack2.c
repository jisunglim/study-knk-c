// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define PUBLIC  /* empty */
#define PRIVATE static

struct node {
  int data;
  struct node *next;
};

PRIVATE struct node *top = NULL;

PRIVATE void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  while (!is_empty())
    pop();
}

bool is_empty(void)
{
  return top == NULL;
}

bool is_full(void)
{
  return false;
}

void push(int i)
{
  struct node *new_top = malloc(sizeof(struct node));
  if (new_top == NULL)
    terminate("Error in push : stack is full.");

  new_top->data = i;
  new_top->next = top;
  top = new_top;
}

int pop(void)
{
  struct node *target;
  int i;

  if (is_empty())
    terminate("Error in pop : stack is empty.");

  target = top;
  i = top->data;
  top = top->next;
  free(target);
  return i;
}
