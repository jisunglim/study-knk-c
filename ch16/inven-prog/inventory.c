// Name : inventory.c
// Purpose : maintaining static database for parts.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

// u : update, i : insert, s : select, p : print, q : quit

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NAME_LEN 30
#define MAX_PARTS 100

struct part {
    int id;
    char name[NAME_LEN+1];
    int stock;
} inventory[MAX_PARTS];

int cnt_parts = 0; // current count

void insert_part(void);
void select_part(void);
void update_part(void);
void print_part(void);
int find_part(int number);

int main(void)
{
  char c;

  for (;;) {
    printf("Enter operation code\n");
    printf("update (u), insert (i), select (s), print (p), quit (q) : ");
    scanf(" %c", &c);

    switch (c) {
      case 'u' : case 'U' :
        update_part();
        break;
      case 'i' : case 'I' :
        insert_part();
        break;
      case 's' : case 'S' :
        select_part();
        break;
      case 'p' : case 'P' :
        print_part();
        break;
      case 'q' : case 'Q' :
        exit(EXIT_SUCCESS);
      default:
        printf("Illegal code... try again.\n");
    }
    printf("\n");
  }
}

int find_part(int p_id)
{
  int i;
  for (i = 0; i < cnt_parts; i++)
    if (inventory[i].id == p_id)
      return i;
  return -1;
}

void insert_part(void)
{
  int l_id, l_quant;
  char l_name[NAME_LEN+1];

  printf("Enter part id : ");
  scanf("%d", &l_id);
  if (find_part(l_id) >= 0) {
    printf("Part-%d already exists.\n", l_id);
    return;
  }
  printf("Enter part name : ");
  read_line(l_name, NAME_LEN);
  printf("Enter quantity in stock : ");
  scanf("%d", &l_quant);

  inventory[cnt_parts].id = l_id;
  strcpy(inventory[cnt_parts].name, l_name);
  inventory[cnt_parts].stock = l_quant;
  cnt_parts++;
}

void update_part(void)
{
  int l_id;
  int quant_change;
  int row;

  printf("Enter part id : ");
  scanf("%d", &l_id);

  if ((row = find_part(l_id)) >= 0) {
    printf("Enter change in quantity in stock : ");
    scanf("%d", &quant_change);
    inventory[row].stock += quant_change;
  } else
    printf("Cannot found part-%d.\n", l_id);
}

void select_part(void)
{
  int l_id;
  int row;
  printf("Enter part id : ");
  scanf("%d", &l_id);

  if ((row = find_part(l_id)) >= 0) {
    printf("[part-%d]\n", l_id);
    printf("+----------+--------------------------------+-----------+\n" /* 10  30  11 */
           "|    id    |              name              |   stock   |\n"
           "+----------+--------------------------------+-----------+\n");
    printf("| %8d | %-30s | %9d |\n", inventory[row].id, inventory[row].name, inventory[row].stock);
    printf("+----------+--------------------------------+-----------+\n");
    printf("[%s]\n", __TIMESTAMP__);
  } else
    printf("Cannot found part-%d.\n", l_id);
}

void print_part(void)
{
  int i;
  printf("+----------+--------------------------------+-----------+\n" /* 10  30  11 */
         "|    id    |              name              |   stock   |\n"
         "+----------+--------------------------------+-----------+\n");
  for (i = 0; i < cnt_parts; i++)
    printf("| %8d | %-30s | %9d |\n", inventory[i].id, inventory[i].name, inventory[i].stock);
  printf("+----------+--------------------------------+-----------+\n");
  printf("[%s]\n", __TIMESTAMP__);

}