// Included Input and Output Functions(printf and scanf)

#include <stdio.h>

int main()
{
	int height;
	int length;
	int width;
	int close;

	printf("Enter height: ");
	scanf("%d", &height);

	printf("Enter length: ");
	scanf("%d", &length);

	printf("Enter width: ");
	scanf("%d", &width);

	if (length && width && height > 0)
	{
		printf("\nheight, length and width are provided\n\n");
	}

	int volume = height * length * width;
	int weight = (volume + 165) / 166;

	printf("Volume: %d\n", volume);
	printf("Weight: %d\n", weight);

	printf("Exit the program: ");
	scanf("%d", &close);

	return 0;
}