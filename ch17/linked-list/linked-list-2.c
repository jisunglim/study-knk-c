// Name : linked.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 24, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NON_NEGATIVE(n)                                   \
if (n < 0) {                                              \
printf("struct node *traverse_node\\ %d is negativ value" \
"pos must be non-negative integer.", n);                  \
exit(EXIT_FAILURE);                                       \
}

struct node {
    int value;         /* Data stored in the node  */
    struct node *next; /* Pointer to the next node */
};

struct node *create_node();
struct node *insert_node(struct node *list, int value, int pos); /* add new node into the pos.          */
struct node *append_node(struct node *list, int value);          /* add new node into the tail.         */
struct node *clear_node(struct node *list);           /* delete all node in the list.        */
struct node *remove_node(struct node *list, int pos); /* delete specific node from the list. */
int getValue_node(struct node *list, int pos); /* Get value from node on pos. */
int length(struct node *list_node);            /* Get total number of nodes in list. */

struct node *find_node(struct node *list, int value);   /* Find node having the value. */
struct node *traverse_node(struct node *list, int pos);  /*Utility function. */

int main(void)
{
  struct node *list; // Declare node structure. At this point, node has no entry and so that it has length 0;
  printf("DECL/length = %d\n", length(list));

  list = create_node();



  return 0;
}

struct node *create_node()
{
  struct node *new;
  new = malloc(sizeof(struct node));
  if (new == NULL) {
    printf("Failed to allocate new memory.\n");
    exit(EXIT_FAILURE);
  }
  new->value = 0;
  new->next = NULL;

  return new;
}

struct node *insert_node(struct node *list, int value, int pos)
{
  struct node *cur, *new;

  NON_NEGATIVE(pos)

  new = malloc(sizeof(struct node));
  if (new == NULL) {
    printf("Failed to allocate new memory.\n");
    exit(EXIT_FAILURE);
  }
  new->value = value;

  cur = (pos == 0) ? NULL : traverse_node(list, pos - 1);
  if (cur == NULL) {
    new->next = list;
    list->next = new;
  } else {
    new->next = cur->next;
    cur->next = new;
  }


}

struct node *append_node(struct node *list, int value)
{
  struct node *new;
  new = malloc(sizeof(struct node));
  if (new == NULL) {
    printf("Failed to allocate new memory.\n");
    exit(EXIT_FAILURE);
  }
  new->value = value;

  while(list->next != NULL)
    list = list->next;
  list->next = new;

  return new;
}

struct node *claer_node(struct node *list)
{
  while (list->next != NULL) {
    free(list->next);
  }
  free(list);

  return NULL;
}

struct node *remove_node(struct node *list, int pos)
{
  NON_NEGATIVE(pos)

  struct node *prv, *cur;
  prv = (pos <= 0)? NULL : traverse_node(list, pos - 1);
  cur = (pos <= 0)? list : prv->next;

  if (prv == NULL)
    list = cur->next;
  else
    prv->next = cur->next;
  free(cur);

  return list;
}

int getValue(struct node *list, int pos)
{
  return traverse_node(list, pos)->value;
}

int length(struct node *list)
{
  int i;
  for (i = 0; list != NULL; list=list->next)
    i++;
  return i;
}

/**
 *
 * @param list  Pointer to the list.
 * @param value What we want to find.
 * @return The position of the first node having the value.
 */
struct node *find_node(struct node *list, int value)
{
  while(list != NULL && list->value != value)
    list = list->next;

  if (list == NULL)
    printf("Cannot find a node containing the value.");
  return list;
}

/**
 *
 * @param list Pointer to the list.
 * @param pos  Position to be the destination of the traverse.
 */
struct node *traverse_node(struct node *list, int pos)
{
  int i;
  NON_NEGATIVE(pos)

  for (i = 0; i < pos && list != NULL; i++)
    list = list->next;
  if (list == NULL) {
    printf("struct node *traverse_node\\The position is out of bound.");
    exit(EXIT_FAILURE);
  } else {
    return list;
  }
}
