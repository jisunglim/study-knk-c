// Name : line.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 21, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#ifndef __STDC__
#errer This header requires a Standard C compiler
#endif

#ifndef STUDY_KNK_C_LINE_H
#define STUDY_KNK_C_LINE_H

#include <string.h>
#include <stdio.h>

/**
 * Clear the current line.
 */
void clear_line(void);

/**
 * Adds word to the end of the current line.
 * If this is not the first word on the line,
 * puts one space before word.
 * @param word
 */
void add_word(const char *word);

/**
 * @return The number of characters left in the current line.
 */
int space_remaining(void);

/**
 * Writes the current line with justification.
 */
void write_line(void);

/**
 * Writes the current line without justification. If the line is empty, does nothing.
 */
void flush_line(void);

#endif //STUDY_KNK_C_LINE_H
