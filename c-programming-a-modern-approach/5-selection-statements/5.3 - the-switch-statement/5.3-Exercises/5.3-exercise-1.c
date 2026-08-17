#include <stdio.h>

int main()
{
	int area_code;

	switch (area_code)
	{
	case 229:
		printf("Albany");
		break;
	case 404:
		printf("Atlanta");
		break;
	case 470:
		printf("Atlanta");
		break;
	case 678:
		printf("Macon");
		break;
	case 706:
		printf("Atlanta");
		break;
	case 762:
		printf("Columbus");
		break;
	case 770:
		printf("Atlanta");
		break;
	case 912:
		printf("Savannah");
		break;
	default:
		printf("Area code not recognized");
		break;
	}
}