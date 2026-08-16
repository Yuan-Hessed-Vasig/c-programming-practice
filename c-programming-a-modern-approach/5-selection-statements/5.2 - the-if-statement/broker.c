#include <stdio.h>

int main()
{
	float trade_amount;
	float commission_amount;

	printf("Enter value of trade: ");
	scanf("%f", &trade_amount);

	if (trade_amount < 2500.00f)
	{
		printf("Transaction Size: Under $2,500\n");
		commission_amount = 30.00f + 0.017f * trade_amount;
	}
	else if (trade_amount >= 2500.00f && trade_amount <= 6250.00f)
	{
		printf("Transaction Size: $2,500-$6,250\n");
		commission_amount = 56.00f + 0.0066f * trade_amount;
	}
	else if (trade_amount > 6250.00f && trade_amount <= 20000.00f)
	{
		printf("Transaction Size: $6,250-$20,000\n");
		commission_amount = 76.00f + 0.0034f * trade_amount;
	}
	else if (trade_amount > 20000.00f && trade_amount <= 50000.00f)
	{
		printf("Transaction Size: $20,000-$50,000\n");
		commission_amount = 100.00f + 0.0022 * trade_amount;
	}
	else if (trade_amount > 50000.00f && trade_amount <= 500000.00f)
	{
		printf("Transaction Size: $50,000-$500,000\n");
		commission_amount = 155.00f + 0.0011 * trade_amount;
	}
	else if (trade_amount > 500000.00f)
	{
		printf("Transaction Size: Over $500,000\n");
		commission_amount = 255.00f + 0.0009 * trade_amount;
	}

	printf("Commission: %.2f", commission_amount);

	return 0;
}