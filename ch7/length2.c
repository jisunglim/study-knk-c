// Name : length2.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
//	char ch;
	int cnt = 0;

	printf("Enter a message: ");


//	for (ch = getchar(); ch != '\n'; ch = getchar()) {
//		cnt++;
//	}

	while(getchar() != '\n') {
		cnt++;
	}

	printf("Your message was %d character(s) long.\n", cnt);
	return 0;
}