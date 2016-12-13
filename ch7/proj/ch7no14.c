// Name : ch7no14.c
// Purpose : compute the square root of a positive floating-point number using Newton's method.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <math.h>

int main(void) {
	int x;
	double y, yy;

	printf("Enter a positive number : ");
	scanf("%d", &x);

	y = x / 2.0;

	while (1) {
		yy = (y + x/y) / 2.0;
		if (fabs(y - yy) <= 0.0000001) {
			break;
		}
		y = yy;
	}

	printf("%10.8f\n", yy);
	return 0;
}