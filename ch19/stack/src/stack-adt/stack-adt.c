#include <stdio.h>
#include <stdlib.h>
#include "stack-adt.h"

#define STACK_SIZE 100

#define PUBLIC
#define PRIVATE static

struct stack_type {
  Item contents[STACK_SIZE];
  int top;
};

PRIVATE void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack new = malloc(sizeof(struct stack_type));
  if (new == NULL)
    terminate("Error in create: stack could not be created.");

  new->top = 0;
  return new;
}

void destroy(Stack s)
{
  free(s);
}

void make_empty(Stack s)
{
  s->top = 0;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == STACK_SIZE;
}

void push(Stack s, Item i)
{
  if (is_full(s))
    terminate("Error in push: stack is full.");
  s->contents[(s->top)++] = i;
}

Item pop(Stack s)
{
  if (is_empty(s))
    terminate("Error in pop: stack is empty.");
  return s->contents[--(s->top)];
}
