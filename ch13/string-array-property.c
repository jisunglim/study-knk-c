// Name : string.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
  char a[] = "This is string a.";
  char b[] = "This is string a.";

  char *p, *q, *r, *s, *t;

  p = a;
  q = b;
  r = a;
  s = a;
  t = s;

  printf("a[] : %p, *p : %p\n", a, p);
  printf("b[] : %p, *q : %p\n", b, q);
  printf("c[] : %p, *r : %p\n", a, r);
  printf("d[] : %p, *s : %p\n", a, s);
  printf("e[] : %p, *t : %p\n", s, t);

  for (int i = 0; i < 10; i++) {
    printf("%p\n", "THETHETHE");
    printf("%p\n", "THETHETHETHE");
  }

  return 0;
}