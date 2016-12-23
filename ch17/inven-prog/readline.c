// Name : readline.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 23, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.
#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char *str, int len)
{
  int ch, i = 0;

  while (isspace(ch = getchar())) /* Skip heading white spaces. */
    ;
  while (ch != '\n' && ch != EOF) {
    if (i < len)
      *(str++) = (char) ch; /* read each characters. */
    ch = getchar();
  }
  str[i] = '\0';

  return i; /* return number of lines (except heading white spaces). */
}
