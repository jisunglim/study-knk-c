// Name : pointer.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdio.h>

int main(void)
{

  int i, a[10], *p, *q, *r;

  for (i = 0; i < 10; i++) {
    a[i] = i;
  }

  p = &a[2];
  q = &a[6];
  r = &a[6];

  printf("p  < q : %s\n", (p < q) ? "true" : "false");
  printf("p  > q : %s\n", (p > q) ? "true" : "false");
  printf("p <= q : %s\n", (p <= q) ? "true" : "false");
  printf("p >= q : %s\n", (p >= q) ? "true" : "false");

  printf("p == r : %s\n", (p == r) ? "true" : "false");
  printf("p != r : %s\n", (p != r) ? "true" : "false");
  printf("q == r : %s\n", (q == r) ? "true" : "false");
  printf("q != r : %s\n", (q != r) ? "true" : "false");

  return 0;
}