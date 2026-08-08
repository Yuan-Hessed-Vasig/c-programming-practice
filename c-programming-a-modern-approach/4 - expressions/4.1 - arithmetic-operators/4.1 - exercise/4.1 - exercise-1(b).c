#include <stdio.h>

int main()
{
	int i = 2;
	int j = 3;

	// B
	printf("%d", (i + 10) % j);
	// i + 10 = 12
	// 12 % 3 = 0

	return 0;
}