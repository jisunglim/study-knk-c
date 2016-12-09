// Name : subexpr.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {

	int a, b = 2, c = 3, d;
	int aa, bb= 2, cc = 3, dd;

	// Undefined behavior
	d = (a = b) + (a + c); /* CAUTION!!! We don't know whether (a=b) will be evaluated  before (a+c) */

	dd = (aa = bb);
	dd += aa + cc;

	printf("Side effect version : %d, safe version : %d\n", d, dd);

	return 0;
}