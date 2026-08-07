#include <stdio.h>

int main()
{
	float dollar_cent;

	printf("Enter an amount: ");
	scanf("%f", &dollar_cent);

	printf("Amount with tax added: %.2f", dollar_cent + 5);
}