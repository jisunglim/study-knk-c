// Name : part.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <string.h>

#define NAME_LEN 30

struct part
{
    int id;
    char name[NAME_LEN];
    int stock;
};

void print_part(struct part part_struct);

struct part build_part(int part_id, const char *part_name, int available_stock);

int main(void)
{
  // TODO... Auto-generated code
  struct part p = build_part(20154, "ssd", 12);
  print_part(p);

  return 0;
}

void print_part(struct part p)
{
  printf("Part number : %d\nPart name : %s\nAvailable stock : %d\n",
         p.id, p.name, p.stock);
}

struct part build_part(int id, const char *name, int stock)
{
  struct part p;
  p.id = id;
  strncpy(p.name, name, NAME_LEN);
  p.stock = stock;

  return p;
}