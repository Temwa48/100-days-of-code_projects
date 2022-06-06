#include <stdio.h>

int main()
{
	char input[20];
	int age;
	float height;

	printf("Enter your age in years:");
	scanf("%d", &age);

	printf("Enter you height in inches:");
	scanf("%f", &height);

	printf("You are %d years old\n", age);
	printf("and %f inches tall.\n", height);

	return (0);
}
