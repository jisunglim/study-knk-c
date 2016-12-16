// Name : returnpmaxmin.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 16, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int *max(int *i, int *j);
int *min(int *i, int *j);

int main(void)
{
  int *p, i, j;
  i = 3, j = 5;

  p = max(&i, &j);

  if (p == &i) {
    printf("p == &i ; i > j\n");
  } else if (p == &j) {
    printf("p == &j ; i <= j\n");
  }

  if (*p == i) {
    printf("*p == i\n");
  } else if (*p == j) {
    printf("*p == j\n");
  }

  return 0;
}

int *max(int *i, int *j)
{
  return *i > *j ? i : j;
}

int *min(int *i, int *j)
{
  return *i < *j ? i : j;
}