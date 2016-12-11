// Name : numdigits.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 11, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int n, d;

	printf("Enter a non-negative integer : ");
	scanf("%d", &n);

	d = 0;
	do {
		n /= 10;
		d++;
	} while (n > 0);

//	d = 1;
//	while ((n/=10) > 0) {
//		d++;
//	}

	printf("The number has %d digit(s).", d);

	return 0;
}