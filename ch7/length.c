// Name : length.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void) {
	char ch;
	int cnt = 0;

	printf("Enter a message: ");


	for (scanf("%c", &ch); ch != '\n'; scanf("%c", &ch)) {
		cnt++;
	}

	printf("Your message was %d character(s) long.\n", cnt);
	return 0;
}