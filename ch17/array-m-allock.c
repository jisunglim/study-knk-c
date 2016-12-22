// Name : array.c
// Purpose : Test dynamic allocated Strings.
// Author : Jay J. Lim
// Date : Dec. 23, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *a, *b;
  int i;

  int n;
  printf("Enter the number of integer : ");
  scanf("%d", &n);


  a = malloc(n * sizeof(int));
  b = calloc((size_t) n, sizeof(int));


  for (i = 0; i < n; i++)
    a[i] = i + 1;

  for (i = 0; i < n; i++)
    printf("%2d ", a[i]);
  printf("\n");

  for (i = 0; i < n; i++)
    printf("%2d ", b[i]);
  printf("\n");

  free(a);
  a = b;

  for (i = 0; i < n; i++)
    printf("%2d::%-2d ", a[i], b[i]);


  return 0;
}

