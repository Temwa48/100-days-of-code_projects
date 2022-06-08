#include <stdio.h>

#define SPEEDLIMIT 65
#define RATE 26
#define FIRST_TICKET 85
#define SECOND_TICKET 95
#define THIRD_TICKET 110

int main()
{
	int total = 0, fine, speeding;

	puts("Speeding Tickets\n");

	/* first ticket */

	speeding = FIRST_TICKET - SPEEDLIMIT;	/* mph over limit */
	fine = speeding * RATE;			/* fine per mph over limit */
	total = total + fine;
	printf("For going 85 in a 55 zone: $%d\n", fine);

	/* second ticket */

	speeding = SECOND_TICKET - SPEEDLIMIT;	/* mph over limit */
	fine = speeding * RATE;			/* fine per mph over limit */
	total = total + fine;
	printf("For going 95 in a 55 zone: $%d\n", fine);

	/* third ticket */

	speeding = THIRD_TICKET - SPEEDLIMIT;	/* mph over limit */
	fine = speeding * RATE; /* fine per mph over limit */
	total = total + fine;
	printf("For going 100 in a 55 zone: $%d\n", fine);

	/* Display total */

	printf("\nTotal in fines: $%d\n", total);

	return (0);
}
