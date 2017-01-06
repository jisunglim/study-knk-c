// Name : endswithlf.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int i;

	printf("Test for format string ends with '\\n' character : ");
	scanf("%d\n", &i);  /* WARNING : scanf's format string ends with \n character!!! */

	printf("Input : %d\n", i);

	return 0;
}