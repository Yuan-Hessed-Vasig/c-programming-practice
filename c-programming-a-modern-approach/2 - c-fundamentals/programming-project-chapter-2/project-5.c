#include <stdio.h>

int main()
{
	int x;
	printf("Enter value of x: ");
	scanf("%d", &x);

	int polynomial = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * (x)) - 6;

	printf("Polynomial with x value: 3(%d)^5 + 2(%d)^4 - 5(%d)^3 - (%d)^2 + 7(%d) - 6\n", x, x, x, x, x);
	printf("Value of the polynomial: %d", polynomial);

	getchar();

	printf("\nPress Enter to exit...");
	getchar();

	return 0;
}