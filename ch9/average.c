// Name : average.c
// Purpose : computing average.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

// Notice that I've put the definition of average before main.
double average(double a, double b)
{
  return (a + b) / 2;
}

int main(void)
{

  double x, y, z;

  printf("Enter three numbers : ");
  scanf("%lf%lf%lf", &x, &y, &z);

  printf("Average of %g and %g : %g\n", x, y, average(x, y));
  printf("Average of %g and %g : %g\n", y, z, average(y, z));
  printf("Average of %g and %g : %g\n", z, x, average(z, x));

  return 0;
}
