// Name : repdigit.c
// Purpose : Checking a number for repeated digits.
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>

int main(void) {

	bool digit_exist[10] = {false};
	int digit;
	long num;

	printf("Enter a number : ");
	scanf("%ld", &num);

	while (num > 0) {
		digit = (int) (num % 10);
		if (digit_exist[digit]) {
			break;
		}
		digit_exist[digit] = true;

		num /= 10;
	}

	if (num > 0) {
		printf("Repeated digit\n");
	} else {
		printf("No repeated digit\n");
	}
	return 0;
}