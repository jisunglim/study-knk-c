// Name : pointer.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 23, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *malloc_concat(const char *s1, const char *s2);

int main(void)
{
  size_t n = 26;

  char *p1 = malloc(n + 1);
  char *p2 = malloc(n + 1);
  char *p3;

  char c1 = 'a';
  char s1[] = "My name is Jisung Lim.";

  for (char *q = p1;q < p1 + n; q++)
    *q = c1++;
  *(p1+n) = '\0';

  strcpy(p2, s1);

  p3 = malloc_concat(p1, p2);

  printf("%s\n", p1);
  printf("%s\n", p2);
  printf("%s\n", p3);

  return 0;
}

char *malloc_concat(const char *s1, const char *s2)
{
  char *result;
  result = malloc(strlen(s1) + strlen(s2));

  if (result == NULL) {
    printf("Error : malloc failed in concat\n");
    exit(EXIT_FAILURE);
  }
  strcpy(result, s1);
  strcat(result, s2);
  return result;
}