#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fav;

        printf("Enter your favourite number:");
	scanf("%d", &fav);

        if(fav == 4)
        {
                printf("That's my favourite number, too!");
        }

        return (0);
}
