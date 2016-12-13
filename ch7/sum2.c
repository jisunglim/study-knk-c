// Name : sum2.c
// Purpose : Summing a series of numbers.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {

	long n, sum = 0;

	printf("This porgram sums a series of integers.\n"
						 "Enter integers (0 to terminate) : ");

	for (scanf("%ld", &n); n != 0; scanf("%ld", &n)) {
		sum += n;
	}

	printf("The sum is : %ld\n", sum);
	return 0;
}