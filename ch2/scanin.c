// Name : scanin.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 08, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.
#include<stdio.h>

int main(void) {
	int i, j;
	float x, y;

	printf("Format : int, int, float, float\n Enter here : ");
	scanf("%d, %d, %f, %f", &i, &j, &x, &y);

	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

	return 0;
}