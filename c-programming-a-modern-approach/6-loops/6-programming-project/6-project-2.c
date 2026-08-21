#include <stdio.h>

int main()
{
	int m;
	int n;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	for (;;)
	{
		int remainder = m % n;

		m = n;
		n = remainder;
		if (n == 0)
		{
			printf("Greatest common divisor: %d", m);
			return 0;
		}
	}
}