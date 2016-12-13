// Name : ch7no5.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <ctype.h>
int main(void) {
	int score;
	char c;

	RESTART :
	printf("Enter a word: ");


	for(score = 0, scanf(" %c", &c); c != '\n' ; scanf("%c", &c)) {
		switch (toupper(c)) {
			case 'A' : case 'E' : case 'I' : case 'L' : case 'N' :
			case 'O' : case 'R' : case 'S' : case 'T' : case 'U' :
				score += 1;
				break;
			case 'D' : case 'G' :
				score += 2;
				break;
			case 'B' : case 'C' : case 'M' : case 'P' :
				score += 3;
				break;
			case 'F' : case 'H' : case 'V' : case 'W' : case 'Y' :
				score += 4;
				break;
			case 'K' :
				score += 5;
				break;
			case 'J' : case 'X' :
				score += 8;
				break;
			case 'Q' : case 'Z' :
				score += 10;
				break;
			default : // Invalid input
				printf("Invalid input!!!\n");
				while (getchar() != '\n');     // Ignore remaining characters
				goto RESTART;
		}
	}
	printf("Scrabble value : %d\n", score);

	return 0;
}