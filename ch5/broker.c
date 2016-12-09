// Name : broker.c
// Purpose : calculate a broker's commission
// Author : Jay J. Lim
// Date : Dec. 09, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.
#include <stdio.h>

int main(void) {

	int trade_size;
	float commission;

	printf("Enter value of trade : ");
	scanf("%d", &trade_size);

	if (trade_size < 2500) {
		commission = 30 + trade_size * 0.017;
	} else if (2500 <= trade_size && trade_size < 6250) {
		commission = 56 + trade_size * 0.0066;
	} else if (6250 <= trade_size && trade_size < 20000) {
		commission = 76 + trade_size * 0.0034;
	} else if (20000 <= trade_size && trade_size < 50000) {
		commission = 100 + trade_size * 0.0022;
	} else if (50000 <= trade_size && trade_size < 500000) {
		commission = 155 + trade_size * 0.0011;
	} else {
		commission = 255 + trade_size * 0.0009;
	}

	printf("Commision : $%.2f\n", commission);

	return 0;
}