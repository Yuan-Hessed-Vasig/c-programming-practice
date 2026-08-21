#include <stdio.h>

int main()
{
	int command;
	float credit = 0.00f, debit, balance = 0.00f;

	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

	for (;;)
	{
		printf("Enter command: ");
		scanf(" %d", &command);
		switch (command)
		{
		case 0:
			balance = 0.00f;
			break;
		case 1:
			printf("Enter amount of credit: ");
			scanf(" %f", &credit);
			balance = balance + credit;
			break;
		case 2:
			printf("Enter amount of debit: ");
			scanf(" %f", &debit);
			balance = balance - debit;
			break;
		case 3:
			printf("Current balance: %.2f\n", balance);
			break;
		case 4:
			return 0;
		}
	}
}