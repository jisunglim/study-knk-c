// Name : inventory2.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 23, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdlib.h>
#include <stdio.h>
#include "readline.h"

#define NAME_LEN 30

struct part
{
    int id;
    char name[NAME_LEN + 1];
    int stock;
    struct part *next;
};

struct part *inventory = NULL;

struct part *find_part(int id);

void insert_part(void);

void select_part(void);

void update_part(void);

void delete_part(void);

void print_part(void);

int main(void)
{
  char ch;
  for (;;) {
    printf("Enter operation code\n");
    printf("insert (i), select (s), update (u), delete (d), print (p), quit (q) : ");
    scanf(" %c", &ch);

    switch (ch) {
      case 'i' : case 'I' : insert_part(); break;
      case 's' : case 'S' : select_part(); break;
      case 'u' : case 'U' : update_part(); break;
      case 'd' : case 'D' : delete_part(); break;
      case 'p' : case 'P' : print_part();  break;
      case 'q' : case 'Q' : exit(EXIT_SUCCESS);
      default :
        printf("Illegal code... try again.\n");
    }
    printf("\n");
  }
}

struct part *find_part(int id)
{
  struct part *p;
  for (p = inventory; p != NULL && id > p->id;p = p->next)
    ;
  if (p != NULL && id == p->id)
    return p;
  return NULL;
}


void insert_part(void)
{
  struct part *cur, *prv, *new_part;

  new_part = malloc(sizeof(struct part));
  if (new_part == NULL) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part id : ");
  scanf("%d", &new_part->id);

  for (cur=inventory, prv=NULL;
       cur != NULL && new_part->id > cur->id;
       prv = cur, cur = cur->next)
    ;
  if (cur != NULL && new_part->id == cur->id) {
    printf("Part[id - %d] is already exists.\n", new_part->id);
    free(new_part);
    return;
  }
  printf("Enter part name : ");
  read_line(new_part->name, NAME_LEN);

  printf("Enter quantity in stock : ");
  scanf("%d", &new_part->stock);

  new_part->next = cur;
  if (prv == NULL)
    inventory = new_part;
  else
    prv->next = new_part;
}

void select_part(void)
{
  int id;
  struct part *p;

  printf("Enter part id : ");
  scanf("%d", &id);

  p = find_part(id);
  if (p != NULL) {
    printf("+----------+--------------------------------+-----------+\n" /* 10  30  11 */
           "|    id    |              name              |   stock   |\n"
           "+----------+--------------------------------+-----------+\n");
    printf("| %8d | %-30s | %9d |\n", p->id, p->name, p->stock);
    printf("+----------+--------------------------------+-----------+\n");
    printf("[%s]\n", __TIMESTAMP__);
  } else
    printf("Cannot found part[id-%d]\n", id);
}


void update_part(void)
{
  int id, change;
  struct part *p;

  printf("Enter part id : ");
  scanf("%d", &id);

  p = find_part(id);
  if (p != NULL) {
    printf("Enter change in quantitiy in stock : ");
    scanf("%d", &change);
    p->stock += change;
  } else
    printf("Cannot found part[id-%d]\n", id);
}

void delete_part(void)
{
  int id;
  struct part *prv, *cur;

  printf("Enter part id : ");
  scanf("%d", &id);

  for(prv = NULL, cur = inventory;
      cur != NULL && id > cur->id;
      prv = cur, cur = cur->next)
    ;
  if (cur != NULL && id == cur->id) {
    if (prv == NULL)
      inventory = cur->next;
    else
      prv->next = cur->next;
    free(cur);
  } else
    printf("Cannot found part[id-%d]\n", id);
}

void print_part(void)
{
  struct part *p;
  printf("+----------+--------------------------------+-----------+\n" /* 10  30  11 */
         "|    id    |              name              |   stock   |\n"
         "+----------+--------------------------------+-----------+\n");

  for (p = inventory; p != NULL; p = p->next)
    printf("| %8d | %-30s | %9d |\n", p->id, p->name, p->stock);
  printf("+----------+--------------------------------+-----------+\n");
  printf("[%s]\n", __TIMESTAMP__);
}