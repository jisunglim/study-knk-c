// Name : func.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 24, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <math.h>

#define MY_PI 3.14159265358979323846

double integral(double (*f)(double), double a, double b);
double x_square(double);
double sin(double d);

int main(void)
{
  double (*sin_fp) (double);
  sin_fp = sin;

  printf("%lf\n", sin_fp(MY_PI/2));
  printf("%lf\n", (*sin_fp)(MY_PI/2));


  double integ_x_square = integral(x_square, 0.0, 3.0);
  printf("integ_x_square : %lf\n", integ_x_square);

  double integ_sine = integral(sin, 0.0, 3.14159265358979323846);
  printf("integ_sine : %lf\n", integ_sine);

  return 0;
}

double integral(double (*f)(double), double a, double b)
{
  double integral_sum = 0.0;
  double interval = 0.0000001;
  long n = (long) ((b - a) / interval);

  for (long i = 1L; i <= n; i++) {
    integral_sum += f(a + i * interval) * interval;
  }

  return integral_sum;
}

double x_square(double d)
{
  return d * d;
}

