// Name : reverse2.c
// Purpose : reverses a series of numbers using a variable-length array.
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int i, n;

	printf("How many numbers do you want to reverse? ");
	scanf("%d", &n);

	int a[n]; /* C99 only - length of array depends on n */

	printf("Enter %d numbers : ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	printf("In reverse order : ");
	for (i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}