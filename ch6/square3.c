// Name : square3.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 11, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

int main(void) {
	int i, n, odd, square;

	printf("This program prints a table of squares.\n"
						 "Enter number of entries in table : ");
	scnaf("%d", n);


	for (i = square = 1, odd = 3; i <= n; i++, odd += 2, square += odd) {
		printf("%8d%8d\n", i, square);
	}

	return 0;
}