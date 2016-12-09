// Name : ch4ex1.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int i, j, k;

	i = 5; j = 3;
	printf("%d %d\n", i / j, i % j); // 1 2

	i = 2; j = 3;
	printf("%d\n", (i + 10) % j); // 0

	i = 7; j = 8; k = 9;
	printf("%d\n", (i + 10) % k / j); // 1

	i = 1; j = 2; k = 3;
	printf("%d\n", (i + 5) % (j + 2) / k); // 0

	return 0;
}
