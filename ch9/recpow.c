// Name : recpow.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int recpow(int x, int n);

int main(void)
{
  printf("5^3 : %d\n", recpow(5, 3));

  return 0;
}

// x^n == x^(n-1) * x
int recpow(int x, int n)
{
  return n == 1 ? x : x * recpow(x, n - 1);
}