#include <stdio.h>

int main()
{
	long n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate)");

	scanf("%ld", &n);
	sum = sum + n;

	while (n != 0)
	{
		scanf(" %ld", &n);
		sum = sum + n;
	}

	printf("The sum is: %ld", sum);

	return 0;
}