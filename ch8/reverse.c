// Name : reverse.c
// Purpose : reverse a series of numbers
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define N 10

int main(void) {

	int nums[N];

	printf("Enter 10 numbers : ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &nums[i]);
	}

	printf("In reverse order : ");
	for (int j = N - 1; j >= 0; j--) {
		printf("%d ", nums[j]);
	}
	printf("\n");

	printf("%lu\n", (unsigned long) sizeof(nums)); // 4 byte * 10 elements

	return 0;
}