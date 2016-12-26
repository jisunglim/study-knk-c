// Name : flex.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 26, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdlib.h>

struct vstring {
    int len;
    unsigned char chars[];
};

struct flex_vector {
    int len;
    double vector[];
};

int main(void)
{
  int i, n;
  double d;
  struct flex_vector  *vector1;

  printf("Enter the size of vector : ");
  scanf("%d", &n);

  vector1 = malloc(sizeof(struct flex_vector) + n * sizeof(double));
  vector1->len = n;

  printf("Enter the initial value : ");
  for (i = 0; i < n; i++) {
    scanf("%lf", &d);
    vector1->vector[i] = d;
  }

  for (i = 0; i < vector1->len; i++) {
    printf("%lf ", vector1->vector[i]);
  }

  return 0;
}