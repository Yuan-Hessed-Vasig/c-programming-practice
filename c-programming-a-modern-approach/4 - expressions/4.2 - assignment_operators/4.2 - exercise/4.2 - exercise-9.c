#include <stdio.h>

int main()
{
	int i = 7;
	int j = 8;

	i *= j + 1;

	printf("%d %d", i, j);

	return 0;
}