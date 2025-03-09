#include <stdio.h>

int main()
{
	char var = 0;
	printf("enter a letter pls ");
	scanf(" %c", &var);
	char result = var ^ 32;
	printf("here is the opposite case of your letter %c\n", result);
	return 0;
}