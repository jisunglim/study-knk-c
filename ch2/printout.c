// Name : printout.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.
#include <stdio.h>

int main(void) {
	int i, j;
	float x, y;

	i = 10;
	j = 20;
	x = 0.123;
	y = 5527.0f;

	printf("i = %d, j = %d, x = %.3g, y = %f", i, j, x, y);

	// Conversion specification : %(-)(m)(.p)T
	// %m.pT or %-m.pX or %.pX or %mX ...
	//
	// T (cinversion specifier) : d (decimal), f (float), e (exponential), g ()...
	// m (minimum field width) w/ or w/o - (alignment) : ex) m =4; "123 " or " 123"
	// .p (precision) :
	// 		%d : %.1d (default), %.6d -> 000123
	//    %f : %.6f (default), %.3f -> 0.421
	//    %e : %.6e (default), %.2f -> 3.1+e3
	//    %g : %.6g (default), %.3g -> 0.123, 1.23, 12.3, 1.23+e3, 1.23+e4, ....

	return 0;
}