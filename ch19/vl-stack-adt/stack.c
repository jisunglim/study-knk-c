#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack_type {
  Item *contents;
  int top;
  int size;
};

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(int size)
{
  // create new stack
  Stack new_stack = malloc(sizeof(struct stack_type));
  if (new_stack == NULL)
    terminate("Error in create : stack could not be created.");

  // create member variables
  new_stack->contents = malloc(size * sizeof(Item));
  if (new_stack->contents == NULL) {
    free(new_stack);
    terminate("Error in create : stack could not be created.");
  }
  new_stack->top = 0;
  new_stack->size = size;

  return new_stack;
}

void destroy(Stack s)
{
  free(s->contents);
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
  return s->top == s->size;
}


void push(Stack s, Item i)
{
  if (is_full(s))
    terminate("Error in push : stack is full.");
  s->contents[(s->top)++] = i;
  // *(s->contents + (s->top++)) = i;
}

Item pop(Stack s)
{
  if (is_empty(s))
    terminate("Error in pop : stack is empty.");
  return s->contents[--(s->top)];
}
