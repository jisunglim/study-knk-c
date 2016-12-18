// Name : array.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
  int a[10] = {1}, *p;
  char b[10] = {'1', '2'}, *q;

  for(p = a; p < a + 10; p++) {
    printf("%2d ", *p);
  }
  printf("\n");

  for(q = b; q < b + 10; q++) {
    printf(" %c ", (*q == '\0') ? '0' : *q);
  }
  printf("\n");

  return 0;
}