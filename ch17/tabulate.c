// Name : tabulate.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 26, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <math.h>

void tabulate(double (*f) (double), double first, double last, double increment);

int main(void)
{
  double final, increment, initial;

  printf("Enter initial value : ");
  scanf("%lf", &initial);

  printf("Enter final value : ");
  scanf("%lf", &final);

  printf ("Enter increment : ");
  scanf("%lf", &increment);

  printf("\n             x       con(x)"
         "\n    ----------   ----------\n");
  tabulate(cos, initial, final, increment);

  printf("\n             x       sin(x)"
         "\n    ----------   ----------\n");
  tabulate(sin, initial, final, increment);

  printf("\n             x       tan(x)"
         "\n    ----------   ----------\n");
  tabulate(tan, initial, final, increment);


  return 0;
}

void tabulate(double (*f) (double), double first, double last, double increment)
{
  double x;
  int i, num_intervals;

  num_intervals = (int) floor((last - first) / increment);
  for (i = 0; i <= num_intervals; i++) {
    x = first + i * increment;
    printf("    %10.5f   %10.5f\n", x, (*f)(x));
  }
  printf("    %10.5f   %10.5f\n", last, (*f)(last));

}
