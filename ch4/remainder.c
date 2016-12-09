// Name : remainder.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int x, p, q, r;
	// The definition of / and % operator was designed to ensure the equation
	// a = (a / b) * b + a % b
	// which is known as the polynomial remainder theorem
	// x = p * q + r where p ( x / q ) and r = ( x % q )

	printf("Enter the nominator x : ");
	scanf("%d", &x);
	printf("Enter the denominator q : ");
	scanf("%d", &q);

	p = ( x / q ); // c99 - the result of division is always truncated toward zero.
	r = ( x % q ); // c99 - the result of mod operator has the same sign as left operand.

	if (x == (p * q + r)) {
		printf("Success!! %d = %d * %d + %d\n", x, p, q, r);
	} else {
		printf("Failed...\n");
	}

	return 0;
}