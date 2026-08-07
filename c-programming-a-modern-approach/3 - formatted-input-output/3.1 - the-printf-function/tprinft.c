#include <stdio.h>

int main()
{
	int i;
	float x;
	int exit;

	i = 40;
	x = 3.1415f;

	printf("|%d|%5d|%-5d|%5.3d|\n\a", i, i, i, i);

	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

	printf("Enter anything to exit");
	scanf("%d", &exit);

	return 0;
}