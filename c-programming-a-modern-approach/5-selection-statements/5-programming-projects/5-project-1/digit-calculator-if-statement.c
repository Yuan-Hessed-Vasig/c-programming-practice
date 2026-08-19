#include <stdio.h>

int main()
{
	unsigned int number;

	printf("Enter a number(only up to 4 digits): ");

	if (scanf("%4d", &number) != 1)
	{
		printf("Invalid input. \n");
		return 1;
	};

	if (number >= 0 && number <= 9)
	{
		printf("The number %d has 1 digits", number);
	}
	else if (number >= 10 && number <= 99)
	{
		printf("The number %d has 2 digits", number);
	}
	else if (number >= 100 && number <= 999)
	{
		printf("The number %d has 3 digits", number);
	}
	else if (number >= 1000 && number <= 9999)
	{
		printf("The number %d has 4 digits", number);
	}
}