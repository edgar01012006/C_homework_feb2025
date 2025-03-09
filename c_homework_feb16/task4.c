#include <stdio.h>

int main()
{
	double length = 0, width = 0;
	printf("Enter the length of the rectangle\n");
	scanf("%lf", &length);
	printf("Enter the width of the rectangle\n");
	scanf("%lf", &width);
	double area = length * width;
	printf("area = %.1lf\n", area);
	return 0;
}