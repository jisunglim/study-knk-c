// Name : tpreced.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	int ambiguous_a, ambiguous_b, ambiguous_c, ambiguous_d, ambiguous_e, ambiguous_f;
	int clear_a, clear_b, clear_c, clear_d, clear_e, clear_f;
	ambiguous_b = clear_b = 2;
	ambiguous_c = clear_c = 3;
	ambiguous_d = clear_d = 4;
	ambiguous_e = clear_e = 5;
	ambiguous_f = clear_f = 6;

	ambiguous_a = ambiguous_b += ambiguous_c++ - ambiguous_d + --ambiguous_e / -ambiguous_f;
	// a = b = b + c - d + ((e-1)/(-f));
	// a = (2 + 3 - 4) + (4/(-6)) = 1 - 0 = 1

	clear_a = (clear_b += ( (clear_c++) - clear_d + ( (--clear_e) / (-clear_f) ) ));

	printf("ambiguous : %d, clear : %d\n", ambiguous_a, clear_a);

	return 0;
}