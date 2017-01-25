#include <stdio.h>
#include <stdlib.h>
#include "inline-extern.h"


// force this inline function to emit externally visible code.
extern inline double multiplication(double a , double b);

static inline double addition(double a, double b);
static inline double addition(double a, double b)
{
  return a + b;
}

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

// simple definition for external linkage
double subtract(double a, double b)
{
  return a - b;
}

double division(double a, double b)
{
  if (b == 0.0)
    terminate("[DIV 0] Invalid operation");

  return multiplication(a, 1/b);
}
