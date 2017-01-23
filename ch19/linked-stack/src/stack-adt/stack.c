#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
  Item data;
  struct node *next;
};

struct stack_type {
  struct node *top;
};

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create()
{
  Stack new = malloc(sizeof(struct stack_type));
  if (new == NULL)
    terminate("There was a problem creating new stack.");
  new->top = NULL;
  return new;
}

void destroy(Stack s)
{
  make_empty(s);
  free(s);
}

void make_empty(Stack s)
{
  while(!is_empty(s))
    pop(s);
}

bool is_empty(Stack s)
{
  return s->top == NULL;
}

bool is_full(Stack s)
{
  return false;
}

void push(Stack s, Item i)
{
  struct node *new = malloc(sizeof(struct node));
  if (new == NULL)
    terminate("There was an error creating new node.");

  new->data = i;
  new->next = s->top;
  s->top = new;
}

Item pop(Stack s)
{
  struct node *old;
  Item temp;

  if (is_empty(s))
    terminate("Stack is empty, there is no item to be pop up.");

  old = (s->top);
  temp = old->data;
  s->top = old->next;
  free(old);

  return temp;
}
