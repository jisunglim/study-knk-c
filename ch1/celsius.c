// Name : celsius.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 07, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
	float fahrenheit, celsius;

	printf(">>>>Fahrenheit to Celsius<<<<\n");
	printf("Fahrenheit temperature : ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent : %.1f\n", celsius);
	return 0;
}