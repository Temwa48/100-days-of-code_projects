#include <stdio.h>

int main()
{
	float duration_hours, duration_days;
	float distance = 378921.46;
	float speed = 140;

	duration_hours = distance / speed;
	duration_days = duration_hours / 24;

	printf("The moon is %f km away.\n", distance);
	printf("Travelling at %f kph, ", speed);
	printf("it would take %f hours, or %f days, to drive to the moon.\n", duration_hours,
		       	duration_days);

	return (0);
}
