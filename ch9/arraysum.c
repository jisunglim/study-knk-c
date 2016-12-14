// Name : arraysum.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include<stdio.h>

#define LEN 20

void store_zeros(int [], int);
// int sum_array(int a[], int n);
int sum_array(int [], int);


int main(void)
{
  int b[LEN], total;

  total = 0;
  for (int i = 0; i < LEN; i++) {
    total += b[i] = ((i + 127) * (i + 3)) % 21;
    printf("%2d ", b[i]);
  }
  printf("\n");

  printf("The total : %d : %d\n", total, sum_array(b, LEN));

  total = 0;

  store_zeros(b, LEN);
  for (int i = 0; i < LEN; i++) {
    total += b[i];
    printf("%2d ", b[i]);
  }
  printf("\n");

  printf("The total : %d : %d\n", total, sum_array(b, LEN));

  return 0;
}

void store_zeros(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    a[i] = 0;
  }
}

int sum_array(int a[], int n)
{
  int i, sum = 0;
  for (i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}