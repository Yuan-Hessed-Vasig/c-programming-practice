#include <stdio.h>

int main()
{
	float x = 3.14323214;

	// Exponential notation
	printf("|%8.1e|\n", x);
	printf("|%-10.6e|\n", x);

	// Fixed decimal notation
	printf("|%8.3f|\n", x);
	printf("|%6f|\n", x);
}