#include <stdio.h>

#define FRACTION_SPHERE 4.0 / 3.0
#define PI 3.14159265358979323846

int main()
{
	int radius = 10;

	float sphere_volume = FRACTION_SPHERE * PI * (radius * radius * radius);

	printf("%.2f", sphere_volume);
}