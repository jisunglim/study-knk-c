// Perform xor encryption
// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#include <stdio.h>
#include <ctype.h>

#define KEY '&'

int main(void)
{
  int orig_char, new_char;

  while ((orig_char = getchar()) != EOF) {
    new_char = orig_char ^ KEY;
    if (isprint(orig_char) && isprint(new_char))
      putchar(new_char);
    else
      putchar(orig_char);
  }

  return 0;
}
