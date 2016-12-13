// Name : identitym.c
// Purpose : initialize indentity matrix.
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#define N 10

int main(void) {


	int identity[N][N];
	int row, col;

	printf("       ");
	for (col = 0; col < N; col++) {
		printf(" col%2d ", col);
	}
	printf("\n");

	for (row = 0; row < N; row++) {
		printf(" row%2d ", row);
	  for (col = 0; col < N; col++) {
			if (row == col) {
				identity[row][col] = 1;
				printf("   %1d   ", identity[row][col]);
			} else {
				identity[row][col] = 0;
				printf("   %1d   ", identity[row][col]);
			}
		}
		printf("\n");
	}



	return 0;
}