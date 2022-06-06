#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input[20];
	int age;
	float height;

	printf("Enter your age in years:");
	age = atoi(gets(input));

	printf("Enter you height in inches:");
	height = atoi(gets(input));

	printf("You are %d years old\n", age);
	printf("and %f inches tall.\n", height);
												        return (0);
}      
