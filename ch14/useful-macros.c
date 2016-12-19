// Name : useful.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 20, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define CHECK_ZERO(divisor)                          \
if (divisor == 0)                                    \
  printf(                                            \
    "*** Attempt to divide by zero on line %d "      \
    "of file %s ***\n", __LINE__, __FILE__           \
  )

#define PROG_COMPILE_DESC(year)                         \
printf(                                                 \
  "Copyright (c) %d Jay J. Lim. All right reserved.\n"  \
  "Compiled with %li on %s at %s\n\n",                  \
  year, __STDC_VERSION__, __DATE__, __TIME__            \
)

#define FUNCTION_CALLED()   printf("/*** %s called ***/\n", __func__)
#define FUNCTION_RETURNS()  printf("/*** %s returns ***/\n", __func__)

#define TEST(condition, ...)                   \
(                                              \
  (condition)                                  \
  ? printf("Passed test : %s\n", #condition)   \
  : printf(__VA_ARGS__)                        \
)

void test_func(void);

int main(void)
{
  FUNCTION_CALLED();
  PROG_COMPILE_DESC(2016);

  test_func();

  FUNCTION_RETURNS();
  return 0;
}

void test_func(void)
{
  FUNCTION_CALLED();
  int i = 3, j = 4;

  CHECK_ZERO(j);
  TEST(i / j > 1, "%d / %d is less than or equal to 1\n", i, j);

  FUNCTION_RETURNS();
}