// Name : maxmin.c
// Purpose : finding the largest and smallest elements in an array.
// Author : Jay J. Lim
// Date : Dec. 16, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define N 10

void max_min(const int array[], int number, int *maximum_element, int *minimum_element);

int main(void)
{
  int b[N], i, big, small;

  printf("Enter %d numbers : ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);

  printf("Largest : %d\n", big);
  printf("Smallest : %d\n", small);

  return 0;
}


void max_min(const int a[], int n, int *max, int *min)
{
  *max = *min = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > *max) {
      *max = a[i];
    } else if (a[i] < *min) {
      *min = a[i];
    }
  }
}