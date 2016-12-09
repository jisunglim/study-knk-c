// Name : tassign.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int i;
	float f;

	i = 3;
	f = 32.12f;

	printf("%d, %f\n", i, f);
	printf("%d, %f\n", i = 92.32f, f = 3);
	printf("%d, %f\n", i, f);

	return 0;
}