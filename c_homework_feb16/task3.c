#include<stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);	
	int sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}