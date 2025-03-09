#include <stdio.h>

int main()
{
	char var = 0;
	printf("enter a lowercase letter pls ");
	scanf(" %c", &var);	
	char result = ~(~var | 32);
	printf("here is your uppercase letter %c\n", result);
	return 0;
}