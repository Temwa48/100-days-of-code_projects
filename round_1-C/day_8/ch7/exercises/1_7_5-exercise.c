#include <stdio.h>

int main()
{
	int tick;

	printf("Variable tick is uninitialized.\n");
	for (tick = 0; tick < 10; tick = tick + 1)
	{
		if (tick > 5)
		{
			break;
		}
		printf("\tIn the loop, tick = %d\n", tick);
	}
	printf("After the loop, tick = %d\n", tick);

	return (0);
}
