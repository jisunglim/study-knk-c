// Name : array.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

void translation(int n, int a[n]);

int main(void)
{
  int a[5] = {3, 5, 7, 9, 11};

  printf("Before : ");
  for (int i = 0; i < 5; i++) {
    printf("%2d ", a[i]);
  }
  printf("\n");

  translation(5, a);

  printf("Before : ");
  for (int i = 0; i < 5; i++) {
    printf("%2d ", a[i]);
  }
  printf("\n");

  return 0;
}

void translation(int n, int a[n]) {
  int *p;

  for (p = &a[0]; p < &a[n]; p++) {
    (*p)++;
  }
}