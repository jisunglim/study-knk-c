#include <stdio.h>
#include "inline-extern.h"

// A function where all the declarations mention inline and never extern.
// There must be a definition in the same translation unit.

// The standard refers to this as an inline definition.
// No stand-alone object code is emitted, so this definition
// can't be called from another translation unit.

// The function won't be called from other files.
// If another file has a defnition, that might be used instead.
static inline double average(double a, double b);
inline double addition(double a, double b);

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
