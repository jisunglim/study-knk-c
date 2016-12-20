// Name : calc.c
// Purpose : Simple calculator that evaluates integer expressions entered in Reverse Polish notation (RPN).
// Author : Jay J. Lim
// Date : Dec. 20, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include "stack.h"
#include "token.h"

int main(void)
{
  int c;
  int a, b;

  while ((c = getchar()) != '\n') {

    if (is_digit(c)) {
      push(c - '0');
    } else {
      a = pop();
      b = pop();
      switch (c) {
        case '+' : push(b + a); break;
        case '-' : push(b - a); break;
        case '*' : push(b * a); break;
        case '/' : push(b / a); break;
        default:                break;
      }
    }
  }
  printf("The result is : %d\n", pop());

  return 0;
}