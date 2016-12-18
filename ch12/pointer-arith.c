// Name : pointer.c
// Purpose : example for pointer arithmetic.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
  int a[10], *p, *q, i;

  for (i = 0; i < 10; i++) {
    a[i] = i;
  }

  p = &a[2];
  printf("p = &a[2] : %d\n", *p);

  q = p + 3;
  printf("q = p + 3 : %d\n", *q);

  p = p + 6;
  printf("p = p + 6 : %d\n", *p);

  p = &a[8];
  printf("p = &a[8] : %d\n", *p);

  q = p - 3;
  printf("q = p - 3 : %d\n", *q);

  p = p - 6;
  printf("p = p - 6 : %d\n", *p);

  p = &a[3];
  printf("p = &a[3] : %d\n", *p);

  q = &a[8];
  printf("q = &a[8] : %d\n", *q);

  i = (int) (q - p);
  printf("i = q - p : %d\n", i);

  /*
   * Performing arithmetic on a pointer that doesn't point to an array element causes undefined behavior.
   * Furthermore, the effect of subtracting one pointer from another is undefined unless both point to elements
   * of same array.
   */

  return 0;
}