// Name : 2dimsum2.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define ROW 15
#define COL 15

int two_dim_sum_array(int n, int m, int a[n][m]);

int main(void)
{
  int i, j;
  int a[ROW][COL];


  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      a[i][j] = 1/*((13 + i) * (59 + j)) % 71*/;
    }
  }

  printf("The result : %d\n", two_dim_sum_array(ROW, COL, a));

  printf("The result of 5 by 5 diagonal matrix : %d\n",
         two_dim_sum_array(5, 5, (const int[5][5]) {[0][0] = 1, [1][1] = 1, [2][2] = 1, [3][3] = 1, [4][4] = 1}));

  return 0;
}

int two_dim_sum_array(int n, int m, int a[n][m])
{
  int i, j, sum = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}