// Name : checking.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
	int cmd;
	float balance, credit, debit;

	printf("*** ACME checkbook-balancing program ***\n"
						 "Commands : 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

	for (balance = 0.0f;;) {
		printf("Enter command : ");
		scanf("%d", &cmd);

		switch (cmd) {
			case 0 :
				balance = 0.0f;
				printf("Current balance : %.2f\n", balance);
				break;
			case 1 :
				printf("Enter amount of credit : ");
				scanf("%f", &credit);
				balance += credit;
				break;
			case 2 :
				printf("Enter amount of debit : ");
				scanf("%f", &debit);
				balance -= debit;
				break;
			case 3 :
				printf("Current balance : %.2f\n", balance);
				break;
			case 4 :
				printf("The program is shut down.\n");
				return 0;
			default :
				printf("Commands : 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
				break;
		}
	}
}