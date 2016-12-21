// Name : readline.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.
#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char *str, int len)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    ;
  while (ch != '\n' && ch != EOF) {
    if (i < len)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}
