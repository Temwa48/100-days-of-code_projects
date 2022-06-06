#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input[20];
	int age, age_months;
	float height, height_cms;

	printf("Enter your age in years:");
	age = atoi(gets(input));
	age_months = age * 12;

	printf("Enter you height in inches:");
	height = atof(gets(input));
	height_cms = height * 2.2;

	printf("You are %d months old\n", age_months);
	printf("and %f cms tall.\n", height_cms);

												        return (0);
}      
