// Name : mem.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 26, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void scalar_multiplication(int *restrict src1, int *restrict src2, int n);
void f(int *a, int *b, int *x);
void fr(int *restrict a, int *restrict b, int *restrict x);
int main(void)
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int b = 3, i;
  int *bp = &b;
  int n = 9;

  scalar_multiplication(bp, a, n);


  for (i = 0; i < n; i++) {
    printf("%d ", *(a + i));
  }
  printf("\n");
  return 0;
}

void scalar_multiplication(int *restrict scalar, int *restrict vector, int n)
{
  int i;
  for (i = 0; i < n; i++) {
    *(vector + i) = *(vector + i) * *scalar;
  }
}

void f(int *a, int *b, int *x) {
  *a += *x;
  *b += *x;

  // Pseudo assembly :
  //
  // [line 1] *a += *x;
  // load R1 <- *x
  // load R2 <- *a
  // add R2 += R1
  // set R2 -> *a
  // [line 2] *b += *x;
  // load R1 <- *x
  // load R2 <- *b
  // add R2 += R1
  // set R2 -> *b
}

void fr(int *restrict a, int *restrict b, int *restrict x)
{
  *a += *x;
  *b += *x;

  // Pseudo assembly :
  //
  // [line 1] *a += *x;
  // load R1 <- *x
  // load R2 <- *a
  // add R2 += R1
  // set R2 -> *a
  // [line 2] *b += *x;
  // load R2 <- *b /* There is no need to assign *x into R1 again.*/
  // add R2 += R1
  // set R2 -> *b
}
