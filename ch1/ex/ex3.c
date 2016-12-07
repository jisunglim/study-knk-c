// Name : dweight3.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 07, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {

	int height = 8, length = 12, width = 10;
	int volume;

	volume = height * length * width;

	printf("Dimensions : %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches) : %d\n", volume);
	printf("Dimensional weight (pounds) : %d\n",
				 (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

	return 0;
}