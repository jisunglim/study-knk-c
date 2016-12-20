// Name : stack.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 20, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#ifndef __STDC__
#errer This header requires a Standard C compiler
#endif

#ifndef STUDY_KNK_C_STACK_H //
#define STUDY_KNK_C_STACK_H // Protecting header files against multiple inclusion

#include <stdbool.h>

#define STACK_SIZE 100
extern int contents[];
extern int top;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif //STUDY_KNK_C_STACK_H
