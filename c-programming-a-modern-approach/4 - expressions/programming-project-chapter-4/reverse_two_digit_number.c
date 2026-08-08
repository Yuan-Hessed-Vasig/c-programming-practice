#include <stdio.h>

int main()
{
	int num;

	printf("Enter a two-digit number: ");
	scanf("%2d", &num);

	int last_digit = num % 10;
	int first_digit = num / 10;

	printf("The reversal is: %d%d", last_digit, first_digit);
	return 0;
}