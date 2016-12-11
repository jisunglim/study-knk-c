// Name : twhile.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 11, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int i = 10;
	int j = 10;

	while (i > 0) {
		printf("CNT : %d\n", i);
		i--;
	}

	while (j > 0) {
		printf("CNT : %d\n", j--);
	}

	return 0;
}