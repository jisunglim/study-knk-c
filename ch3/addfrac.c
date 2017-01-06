// Name : addgrac.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int num1, denom1, num2 , denom2, result_num, result_denom;

	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}