#include <stdio.h>

int main(void)
{
	double user_num;
	double highest_num = 0;
	for (;;)
	{
		printf("Enter a number: ");
		scanf("%lf", &user_num);

		if (user_num > highest_num)
		{
			highest_num = user_num;
		}

		if (user_num <= 0)
		{
			printf("\nThe largest number entered was: %g", highest_num);
			return 0;
		}
	}
}