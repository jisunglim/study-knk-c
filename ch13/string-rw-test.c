// Name : string.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define N 100

int read_line(int n, char str[n+1]);

int main(void)
{
  char str[N+1];

  printf("Enter the string : ");
  // scanf("%s", str);
  // gets(str);
  read_line(N, str);

  printf("%s\n", str);
  puts(str);

  return 0;
}

int read_line(int n, char str[n+1])
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = (char) ch;
  }
  str[i] = '\0';
  return i;
}