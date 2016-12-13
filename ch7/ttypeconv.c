// Name : ttypeconv.c
// Purpose : Test type conversion between two arithmentic operands.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

int main(void) {

	char c = '\x01';
	short s = 1;
	int i = 1;
	unsigned int u = 1;
	long l = 1;
	unsigned long ul;
	float f;
	double d;
	long double ld;

	/* The Usual Arithmetic Conversion */
	// Integral promotion
	i = i + c; /* c is converted to int */
	i = i + s; /* s is converted to int */

	// Neither operand type is a floating type
	u = u + i;   /* i is converted to unsigned int */
	l = l + u;   /* u is converted to long int */
	ul = ul + l; /* l is converted to unsigned long */

	// The type of either operand is a floating type
	f = f + ul;  /* ul is converted to float */
	d = d + f;   /* f is converted to double */
	ld = ld + d; /* d is converted to long double */

	/* The Conversion During Assignment */
	i = c; /* c is converted to int */
	f = i; /* i is converted to float */
	d = f; /* f is converted to double */

	/* cast expression */
	i = (int) 842.96f;   /* i is now 842 */
	i = (int) -842.96f;  /* i is now -842 i*/

	/*  */
	c = (char)  10000;     /* WRONG */
	i = (int)   1.2e20;    /* WRONG
 *
 * 	f = (float) 1.0e1000f; /* WRONG */

	return 0;

}