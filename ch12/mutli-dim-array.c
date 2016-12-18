// Name : mutli.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define N 10

void init_zeros(int n_row, int n_col, int a[n_row][n_col]);

void flattening(int n_row, int n_col, int a[n_row][n_col]);

void matrix(int n_row, int n_col, int a[n_row][n_col]);

void transpose(int n_row, int n_col, int a[n_row][n_col]);

int main(void)
{
  int n = 5;
  int c = 10;
  int a[n][c];

  init_zeros(n, c, a);
  flattening(n, c, a);
  matrix(n, c, a);
  transpose(n, c, a);

  return 0;
}

void init_zeros(int n_row, int n_col, int a[n_row][n_col])
{
  int row, col;

  for (row = 0; row < n_row; row++) {
    for (col = 0; col < n_col; col++) {
      a[row][col] = ((row + 13) * (col + 31)) % 29;
    }
  }
}

void flattening(int n_row, int n_col, int a[n_row][n_col])
{
  int *p;
  for (p = &a[0][0]; p <= &a[n_row - 1][n_col - 1]; p++) {
    printf("%2d  ", *p);
  }
  printf("\n");
  printf("\n");

}

void matrix(int n_row, int n_col, int a[n_row][n_col])
{
  int row, *p;
  for (row = 0; row < n_row; row++) {
    for (p = a[row]; p < a[row] + n_col; p++) {
      printf("%2d  ", *p);
    }
    printf("\n");
  }
  printf("\n");

}

void transpose(int n_row, int n_col, int a[n_row][n_col])
{
  int col, (*p)[n_col];

  for (col = 0; col < n_col; col++) {
    for (p = a; p < a + n_row; p++) {
      printf("%2d  ", (*p)[col]);
    }
//    for (p = &a[0]; p < &a[n_row]; p++) {
//      printf("%2d ", (*p)[col]);
//    }
    printf("\n");
  }
  printf("\n");

}
