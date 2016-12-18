// Name : reverse3.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define N 10

int main(void)
{
  int a[N], *p;

  printf("Enter %d numbers : ", N);
  for (p = a; p < a + N; p++)
    scanf("%2d", p);

  printf("In reverse order : ");
  for (p = a + N - 1; p >= a; p--)
    printf("%2d ", *p);
  printf("\n");

  return 0;
}
