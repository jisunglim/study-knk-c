// Name : count.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int count_space_1(const char []);
int count_space_2(const char *p);
// int count_space_2(const char * const p); /*** WRONG!!! ***/

int main(void)
{
  char *p, str[] = "Hello, my name is Jisung. This string has 9 spaces.";

  printf("# of spaces : %d\n", count_space_1(str));
  printf("# of spaces : %d\n", count_space_2(str));

  printf("# of spaces : %d\n", count_space_1("Hello, my name is Jisung. This string has 9 spaces."));
  printf("# of spaces : %d\n", count_space_2("Hello, my name is Jisung. This string has 9 spaces."));

  p = str;
  printf("# of spaces : %d\n", count_space_1(p));
  printf("# of spaces : %d\n", count_space_2(p));

  printf("%p : %p : %p\n", (void *) "Hello, my name is Jisung. This string has 9 spaces.", (void *) str, (void *) p);

  return 0;
}

int count_space_1(const char a[])
{
  int i, c = 0;

  for (i = 0; a[i] != '\0'; i++)
    if (a[i] == ' ')
      c++;

  return c;
}

int count_space_2(const char *p)
{
  int c = 0;

  for (;*p != '\0'; p++)
    if (*p == ' ')
      c++;

  return c;
}