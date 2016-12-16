// Name : multipointer.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 16, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int *p, *q, *r, i = 12;

  p = q = r = &i;

  printf("p == &i ? %s\n", p == &i ? "true" : "false");
  printf("q == &i ? %s\n", q == &i ? "true" : "false");
  printf("r == &i ? %s\n", r == &i ? "true" : "false");

  printf("p == q ? %s\n", p == q ? "true" : "false");
  printf("q == r ? %s\n", q == r ? "true" : "false");
  printf("r == p ? %s\n", r == p ? "true" : "false");

  printf("&p == &q ? %s\n", &p == &q ? "true" : "false");
  printf("&q == &r ? %s\n", &q == &r ? "true" : "false");
  printf("&r == &p ? %s\n", &r == &p ? "true" : "false");

  return 0;
}