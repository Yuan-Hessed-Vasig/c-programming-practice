#include <stdio.h>

int main()
{
	unsigned int num;
	int i = 0;

	printf("Enter a nonnegative integer: ");
	scanf("%d", &num);

	do
	{
		num /= 10;
		i++;
	} while (num > 0);

	printf("The number has %d digit(s)\n", i);

	return 0;
}