// Name : linked-list.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 23, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdlib.h>
#include <stdio.h>

struct node {
    int value;         /* data stored in the node  */
    struct node *next; /* pointer to the next node */
};

struct node *read_numbers(void);
struct node *add_to_list(struct node *list, int n);
struct node *delete_from_list(int n, struct node *list);
struct node *search_list(int n, struct node *lst);
void print_list(struct node *list);

int main(void)
{
  struct node *list = read_numbers();

  print_list(list);

  return 0;
}

struct node *read_numbers(void)
{
  struct node *first = NULL;
  int n;

  printf("Enter a series of integers (0 to terminate) : ");
  for (;;) {
    scanf("%d", &n);
    if (n == 0)
      return first;
    first = add_to_list(first, n);
  }
}

struct node *add_to_list(struct node *list, int n)
{
  struct node *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL /* (void *) 0 */ ) {
    printf("Error : malloc failed in add_to_list\n");
    exit(EXIT_FAILURE);
  }
  new_node -> value = n;
  new_node -> next = list;

  return new_node;
}

struct node *delete_from_list(int n, struct node *list) {
  struct node *cur;
  struct node *prv;

  // find the node containing a value n.
  for (cur = list, prv = NULL;
       cur != NULL && cur->value != n;
       prv = cur, cur = cur->next)
    ;
  // At this point the target node, which is to be deleted, will be pointed to by cur pointer.

  // If there is no node containing a value n, return function call.
  if (cur == NULL)
    return list;

  // Delete current node.
  if (prv == NULL)
    list = cur->next;
  else
    prv->next = cur->next;
  free(cur);

  return list;
}

struct node *search_list(int n, struct node *list) {
  /* The list parameter is a copy of original list pointer provided by function argument. */
  while (list != NULL && list->value != n)
    list = list->next;
  return list;
  // for (; list != NULL; list = list->next)
  //   if (list->value == n)
  //     return list;
  // printf("Cannot find the node having a value n.\n");
  // return NULL;
}

void print_list(struct node *list)
{
  struct node *p;
  printf("{HEAD}->");
  for (p = list; p != NULL; p = p->next) { /* IDIOM - traverse every node of linked list. */
    printf("{%d}->", p->value);
  }
  printf("{NULL}\n");
}
