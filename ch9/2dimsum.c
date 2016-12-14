// Name : 2dimsum.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define LEN 20

int sum_two_dim_array(int a[][LEN], int n);

int main(void)
{
  int n = 15, sum;
  int a[n][LEN];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < LEN; j++) {
      a[i][j] = ((i + 23) * (j + 77)) % 13;
    }
  }

  sum = sum_two_dim_array(a, n);

  printf("The sum : %d\n", sum);

  return 0;
}

// Empty array allowed only at the first dimension!
int sum_two_dim_array(int a[][LEN], int n)
{
  int i, j, sum = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < LEN; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}