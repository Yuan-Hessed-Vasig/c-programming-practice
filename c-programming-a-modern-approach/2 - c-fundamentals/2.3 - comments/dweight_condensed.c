#include <stdio.h>

int main(void)
{
	int height = 8;
	int length = 10;
	int width = 12;

	int volume = height * length * width;

	printf("The weight is: %i", (volume + 165) / 166);
}