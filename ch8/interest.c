// Name : interest.c
// Purpose : compute interest.
// Author : Jay J. Lim
// Date : Dec. 13, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {

	int min_rate, num_years;
	double value[5] = {100.00, 100.00, 100.00, 100.00, 100.00};

	printf("Enter interest rate : ");
	scanf("%d", &min_rate);

	printf("Enter number of years : ");
	scanf("%d", &num_years);


	printf("| Years |");
	for (int rate = min_rate; rate < min_rate + 5; rate++) { // min_rate...(min_rate + 5)
		printf("   %2d%%   |", rate);
	}
	printf("\n");

	for (int year = 1; year <= num_years; year++) { // 1...5
		printf("| %3d   |", year);
		for (int i = 0; i < 5; i++) { // min_rate...(min_rate + 5)
			printf(" %7.2f |", value[i] *= (100.0 + min_rate + i) / 100.0);
		}
		printf("\n");
	}



	return 0;
}