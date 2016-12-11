// Name : sum.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 11, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int n, sum = 0;

	printf("This program sums a series of integers."
						 "Enter integers (0 to terminate) : ");

//	scanf("%d", &n);
//	while (n != 0) {
//		sum += n;
//		scanf("%d", &n);
//	}

	do {
		scanf("%d", &n);
		sum += n;
	} while (n != 0);

	printf("The sum is : %d\n", sum);
	return 0;
}