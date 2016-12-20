// Name : word.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 21, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#ifndef __STDC__
#errer This header requires a Standard C compiler
#endif

#ifndef STUDY_KNK_C_WORD_H
#define STUDY_KNK_C_WORD_H

#include <stdio.h>

/**
 * Reads the next word from the input and stores it in word.
 * Makes word empty if no word could be read because of end-of-file.
 * Truncates the word if its length exceeds len.
 *
 * @param word  Next word to be read.
 * @param len   The expected maximum length of next word.
 */
int read_word(char *word, int len);

#endif //STUDY_KNK_C_WORD_H
