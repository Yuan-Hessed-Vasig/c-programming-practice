#include <stdio.h>

int main()
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

	printf("Enter the first single digit: \n");
	scanf("%ld", &d);

	printf("Enter the first group of five digits: \n");
	printf("%ld%ld%ld%ld%ld", i1, i2, i3, i4, i5);

	printf("Enter the second group of five digits: \n");
	printf("%ld%ld%ld%ld%ld", j1, j2, j3, j4, j5);

	first_sum = i1 + i2 + i3 + i4 + i5;
	second_sum = j1 + j2 + j3 + j4 + j5;

	total = (first_sum * 3) + second_sum;

	printf("Check digit: %ld\n", ((total - 1) % 10) - 9);

	return 0;
}