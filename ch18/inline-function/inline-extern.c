#include "inline-extern.h"

// extern in one place to request a stand-alone definition
extern inline double multiplication(double a, double b);

extern inline double addition(double a, double b);

inline double addition(double a, double b)
{
  return a + b;
}

// a definition mentioning inline
double subtract(double a, double b)
{
  return addition(a, -b);
}

double division(double a, double b)
{
  return (b == 0.0) ? -1.0 : multiplication(a, 1/b);
}
