// Name : versatile.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
  int *p;
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int i = 0; i < 10; i++) {
    printf("%2d ", a[i]);
  }
  printf("\n");

  for (int i = 0; i < 10; i++) {
    printf("%2d ", *(a + i));
  }
  printf("\n");

  p = a;
  for (int i = 0; i < 10; i++) {
    printf("%2d ", p[i]);
  }
  printf("\n");

  p = a;
  for (int i = 0; i < 10; i++) {
    printf("%2d ", *(p + i));
  }
  printf("\n");

  for (p = &a[0]; p < &a[10]; p++) {
    printf("%2d ", *p);
  }
  printf("\n");

  for (p = a; p < a + 10; p++) {
    printf("%2d ", *p);
  }
  printf("\n");


  return 0;
}