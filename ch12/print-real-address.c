// Name : print.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
  double a[10], *p;

  int i = 0;
  for (p = a; p < a + 10; p++) {
    printf("pointer to a[%d] : %p\n", i, (void *) p);
    i++;
  }

  for (i = 0; i < 10; i++) {
    printf("pointer to a[%d] : %p\n", i, (void *) &a[i]);
  }

  return 0;
}