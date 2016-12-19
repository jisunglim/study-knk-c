// Name : generic.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 19, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define PRINT_INT(n) printf(#n " = %d\n", n)
#define PRINT_LONG(n) printf(#n " = %ld\n", n)
#define PRINT_FLOAT(n) printf(#n " = %.2f\n", n)


#define GENERIC_MAX(type)         \
type type##_max(type x, type y)   \
{                                 \
  return x > y ? x : y;           \
}


GENERIC_MAX(int)
GENERIC_MAX(long)
GENERIC_MAX(float)

int main(void)
{

  PRINT_INT(int_max(3, 4));
  PRINT_LONG(long_max(3l, 4l));
  PRINT_FLOAT(float_max(3.0f, 4.0f));

  return 0;
}