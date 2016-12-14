// Name : concat.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define LEN_A 5
#define LEN_B 10

void concat(int m, int n, int [m], int [n], int [m+n]);

int main(void)
{
  int a[LEN_A], b[LEN_B], c[LEN_A + LEN_B];

  for (int i = 0; i < LEN_A; i++) {
    a[i] = i + 1;
  }

  for (int i = 0; i < LEN_B; i++) {
    b[i] = i + LEN_A + 1;
  }

  concat(LEN_A, LEN_B, a, b, c);

  printf("The result : ");
  for (int i = 0; i < LEN_A + LEN_B; i++) {
    printf("%d ", c[i]);
  }
  printf("\n");

  return 0;
}


void concat(int m, int n, int a[m], int b[n], int c[m+n])
{
  for(int i = 0; i < m; i++) {
    c[i] = a[i];
  }
  for(int i = 0; i < n; i++) {
    c[i+m] = b[i];
  }
}