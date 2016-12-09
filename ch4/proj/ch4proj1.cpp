// Name : ch4proj1.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int i, sign, ones, tens;

	printf("Enter a two-digit number : ");
	scanf("%d", &i);

	sign = i < 0 ? -1 : 1;

	tens = sign * i / 10;
	ones = sign * i % 10;

	printf("The reversal is : %d\n", sign * (10 * ones + tens));

	return 0;
}