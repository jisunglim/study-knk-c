// Name : tincdec.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {

	int i = 1;
	int j = 9;

	printf("before pre-increment : %d\n", i);
	printf("pre-increment        : %d\n", ++i);
	printf("after pre-increment  : %d\n", i);
	printf("before post-increment : %d\n", i);
	printf("post-increment        : %d\n", i++);
	printf("after post-increment  : %d\n", i);


	printf("before pre-decrement : %d\n", j);
	printf("pre-decrement        : %d\n", --j);
	printf("after pre-decrement  : %d\n", j);
	printf("before post-decrement : %d\n", j);
	printf("post-decrement        : %d\n", j--);
	printf("after post-decrement  : %d\n", j);

	// The sequence point in C
	// C standard introduces the concept of "Sequence Point"
	// "updating the stored value of the operand shall occur between the previous and the next sequence point"

	// There are various kinds of sequence points in C :
	//  1. The end of the expression statement.
	//  2. Certain operators (&& || > >= < <= == != ,)
	//  3. Function calls

	return 0;
}