#include <stdio.h>

#define DISTANCE 378921.46
#define SPEED 140

int main()
{
/* first iteration
 
	float duration;

	duration = 378921.46 / 140;

	printf("It would take %f hours to drive to the moon.\n", duration);

	return (0);
*/
/* second iteration	
 
	float duration, distance, speed;
	distance = 378921.46;
	speed = 140;

	duration = distance / speed;

	printf("It would tak %f hours to drive to the moon.\n", duration);

	return (0);
*/
	float duration;

	duration = DISTANCE / SPEED;

	printf("The moon is %f km away.\n", DISTANCE);
	printf("Travelling at %f kph, ", SPEED);
	printf("it would take %f hours to drive to the moon.\n", duration);

	return (0);

}
