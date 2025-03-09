#include <stdio.h>

int main()
{
	char var = '\0';
	printf("Enter a uppercase character: ");
	scanf(" %c", &var);
	char low_var = var + 32;
	printf("Lowercase: %c", low_var);
	return 0;
}