#include <stdio.h>

int main()
{
	int countdown;

	for (countdown = 10; countdown > 1; countdown = countdown - 1)
	{
		printf("%d\n", countdown);
	}
	printf("Blastoff!");

	return (0);
}
