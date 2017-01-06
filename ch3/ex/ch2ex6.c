// Name : ch2ex2.c
// Purpose : Modify addfrac.c program so that the user is allowed to enter fractions
//           that contain spaces before and after each '/' character.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result, res_denom;

	printf("Enter first fraction : ");
	scanf("%d / %d", &num1, &denom1);

	printf("Enter second fraction : ");
	scanf("%d / %d", &num2, &denom2);

	result = num1 * denom2 + num2 * denom1;
	res_denom = denom1 * denom2;

	printf ("The sum is %d / %d\n", result, res_denom);

	return 0;
}