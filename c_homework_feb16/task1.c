#include <stdio.h>

int main()
{
	char var = '\0';
	printf("Enter a lowercase character: ");
	scanf(" %c", &var);
	char upp_var = var - 32;
	printf("Uppercase: %c\n", upp_var);
	return 0;
}