// Name : constarray.c
// Purpose : Create constant arrays
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define SIZE (int) (sizeof(hex_chars)/sizeof(hex_chars[0])

int main(void) {
	const char hex_chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	// hex_chars[0] = 3; /*** WRONG ***/

	for (int i = 0; i < SIZE); i++) {
		printf("%c ", hex_chars[i]);
	}
	return 0;
}