// Name : recurfact.c
// Purpose : Factorial function computes n! recursively.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int fact(int n);

int main(void)
{
  printf("Factorial 5 : %d\n", fact(5));

  return 0;
}

int fact(int n)
{
  return n == 1 ? 1 : n * fact(n-1);
}