// Name : dweight.c
// Purpose : Computes the dimensional weight of a 12" x 10" x 8" box
// Author : Jay J. Lim
// Date : Dec. 07, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {

	int height = 8, length = 12, width = 10;
	int volume, weight;

	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions : %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches) : %d\n", volume);
	printf("Dimensional weight (pounds) : %d\n", weight);

	return 0;
}