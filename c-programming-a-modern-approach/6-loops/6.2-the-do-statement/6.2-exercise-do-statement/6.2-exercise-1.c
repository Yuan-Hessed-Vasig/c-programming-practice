#include <stdio.h>

int main()
{
	int i = 9384;
	do
	{
		printf("%d ", i);
		i /= 10;
	} while (i > 0);
}

// The program outputs:
// 9384 938 93 9