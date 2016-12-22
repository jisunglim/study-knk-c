// Name : union.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define ARRAY_SIZE 1000

typedef enum {TYPE_INT, TYPE_DOUBLE} Number_type;
typedef struct {
    Number_type type;  /*   Tag field */
    union {            /* Value field */
        int    i;
        double d;
    } member;
} Number;

void print_number(Number n);

int main(void)
{
  int i;
  Number a_number[ARRAY_SIZE];

  for (i = 0; i < ARRAY_SIZE; i += 2) {
    a_number[i].type = TYPE_INT;
    a_number[i].member.i = (((i + 27) * ( (i + 11) + 33) / 7) * (i + 27)) % 100;
  }

  for (i = 1; i < ARRAY_SIZE; i += 2) {
    a_number[i].type = TYPE_DOUBLE;
    /* It's program's responsibility to change the tag field
     * each time an assignment is made to a member of the union.
     */
    a_number[i].member.d = (double) (((i + 17) * 53 / 11) * (i * 67) % 100) / 11.0;
  }

  for (i = 0; i < ARRAY_SIZE; i++) {
    print_number(a_number[i]);
  }

  return 0;
}

void print_number(Number n)
{
  if (n.type == TYPE_INT) {
    printf("%d ", n.member.i);
  } else if (n.type == TYPE_DOUBLE) {
    printf("%lf ", n.member.d);
  }
}