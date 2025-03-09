#include <stdio.h>

int main()
{
	double C = 0;
	printf("Enter the temperature in Celsius: ");
	scanf("%lf", &C);
	double F = (C * 9 / 5) + 32;
	printf("Temperature in Fahrenheit: %.1lf\n", F);
	return 0;
}