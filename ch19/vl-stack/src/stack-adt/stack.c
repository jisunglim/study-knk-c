#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack_type {
  Item *contents;
  int top;
  int size;
}

static terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(int size)
{
  Stack new = malloc(sizeof(struct stack_type));
  if (new == NULL)
    terminate("There was an error creating new stack.");

  // create member variables
  new->contents = malloc(sizeof(Item) * size);
  if (new->contents == NULL) {
    free(new);
    terminate("There was an error creating new stack.");
  }
  new->top = 0;
  new->size = size;

  return new;
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
    terminate("Error in push: Stack is full.");
  *(s->contents + (s->top)++) = i;
}

Item pop(Stack s)
{
  if (is_empty(s))
    terminate("Error in pop: Stack is empty.");
  return *(s->contents + --(s->top));
}
