#include <stdio.h>

int main()
{
	char var = 0;
	printf("enter an uppercase letter pls ");
	scanf(" %c", &var);
	char result = var | 32;
	printf("here is your lowercase letter %c\n", result);
	return 0;
}