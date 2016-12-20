// Name : word.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 21, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include "word.h"

int read_char(void)
{
  int ch = getchar();

  return (ch == '\n' || ch == '\t') ? ' ' : ch;
}

int read_word(char *w, int n)
{
  int ch, pos = 0;

  while ((ch = read_char()) == ' ')
    ;
  while (ch != ' ' && ch != EOF) {
    if (pos < n)
      w[pos++] = (char) ch;
    ch = read_char();
  }
  w[pos] = '\0';
  return pos;
}
