#include <stdio.h>

/**
 * main -Entry point
 *
 * Descrition: print all single digit numbers
 *
 * Retun: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}