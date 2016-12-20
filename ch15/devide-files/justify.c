// Name : justify.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 21, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <string.h>
#include "word.h"
#include "line.h"

#define MAX_WORD_LEN 20

int main(void)
{
  // TODO... Auto-generated code
  char word[MAX_WORD_LEN + 2];
  int word_len;

  clear_line();
  for (;;) {
    word_len = read_word(word, MAX_WORD_LEN + 1); // read word from input;

    // "terminate" condition
    if (word_len == 0) {                       // if (can't read word)
      flush_line();                            //   write contents of line buffer without justification;
      return 0;                                //   terminate program;
    }

    // "truncate" condition
    if (word_len > MAX_WORD_LEN) {             // if (word is too long to store in the char[])
      word[MAX_WORD_LEN] = '*';                //   truncates the word;
    }

    // "write and next line" condition
    if (word_len + 1 > space_remaining()) {    // if (word doesn't fit in line buffer)
      write_line();                            //   write contents of line buffer with justification;
      clear_line();                            //   clear line buffer;
    }

    add_word(word);                            // add word to line buffer;

  }
}