// Name : tfloat.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <float.h>

int main(void) {
	float f = FLT_MAX;
	double d = DBL_MAX;
	long double ld = LDBL_MAX;

	printf(""
						 "%f \n"
						 "%lf\n"
						 "%Lf\n",
	f, d, ld);

	return 0;
}