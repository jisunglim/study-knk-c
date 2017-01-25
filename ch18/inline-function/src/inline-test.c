#include <stdio.h>
#include "inline-extern.h"

static inline double average(double a, double b);
static inline double addition(double a, double b);

int main(void)
{
  double a = 7.0;
  double b = 3.0;

  printf("average : %5.3lf\n"
        "add : %5.3lf, sub : %5.3lf\n"
        "mul : %5.3lf, div : %5.3lf\n",
        average(a, b),
        addition(a, b), subtract(a, b),
        multiplication(a, b), division(a, b));
}

static inline double average(double a, double b)
{
  return (a + b) / 2;
}

inline double addition(double a, double b)
{
  return a + b;
}
