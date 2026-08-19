#include <stdio.h>

int main()
{
	printf("This program prints a table of squares\n");
	printf("Enter number of entries in table: ");

	int entry;
	scanf("%d", &entry);
	int num = 0;
	int square;

	while (num <= entry)
	{
		num++;
		printf("%d | %d\n", num, num * num);
	}

	return 0;
}