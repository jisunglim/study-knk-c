// Name : string.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 19, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

size_t my_strlen(const char *s);

char *strcat(char *s1, const char *s2);

int main(void)
{
  return 0;
}

size_t my_strlen(const char *s)
{
  const char *p = s;

  while (*s)
    s++;

  return s - p;
}

char *strcat(char *s1, const char *s2)
{
  char *p = s1;

  while (*p)
    p++;

  while ((*p++ = *s2++));

  return s1;
}