// Name : decompose.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 16, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

void decompose(double x, long *integer_part, double *fractional_part);

int main(void)
{
  double x = 3.141592;
  long int_part;
  double frac_part;

  decompose(x, &int_part, &frac_part);

  printf("decompose %lf into integer part %ld and fractional part %lf\n", x, int_part, frac_part);

  return 0;
}

void decompose(double x, long *i, double *f)
{
  *i = (long) x;
  *f = x - *i;
}