#include <stdio.h>

int main()
{
	char first_name[20], last_name[20];

	printf("What is your first name?");
	gets(first_name);
	printf("What is your last name?");
	gets(last_name);
	printf("Pleased to meet you, %s %s!\n", first_name, last_name);

	return (0);
}
