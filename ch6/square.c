// Name : square.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 11, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
	int i, n;
	printf("This program prints a table of squares.\n"
						 "Enter number of entries in table : ");
	scanf("%d",&n);

//  i = 1;
//	while (i <= n) {
//		printf("%8d%8d\n", i, i * i);
//		i++;
//	}

	for (i = 1; i <= n; i++) {
		printf("%8d%8d\n", i, i * i);
	}

	return 0;
}