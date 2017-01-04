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

Stack create()
{
  Stack new_stack = malloc(sizeof(struct stack_type));
  if (new_stack == NULL)
    return NULL;

  new_stack->top = NULL;

  return new_stack;
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

bool push(Stack s, Item i) {
  // Useless part for linked list based stack
  // if (is_full(s))
  //   return false;
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    return false;

  new_node->data = i;
  new_node->next = s->top;
  s->top = new_node;

  return true;
}

Item *pop(Stack s)
{
  struct node *old_top;
  static Item old_item;

  if (is_empty(s))
    return NULL;

  old_top = s->top;
  old_item = old_top->data;

  s->top = old_top->next;
  free(old_top);

  return &old_item;
}
