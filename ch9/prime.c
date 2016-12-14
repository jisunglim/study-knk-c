// Name : prime.c
// Purpose : testing whether a number is prime
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>

// Way to avoid the problem of call-before-definition : function prototype
bool is_prime(int num);  /* DECLARATION */

int main(void)
{
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  if (is_prime(n/*argument*/)) {
    printf("%d is a prime number.", n);
  } else {
    printf("%d is not a prime number.", n);
  }

  return 0;
}

// argument(s) is/are "passed by value" to function.
// When the functions is called, each argument is evaluated so that it's value will be assigned to the parameter(s).
bool is_prime(int num/*parameter*/)   /* DEFINITION */
{
  if (num <= 1) {
    return false;
  }
  for (int div = 2; div * div <= num; div++) {
    if (num % div == 0) {
      return false;
    }
  }

  return true;
}