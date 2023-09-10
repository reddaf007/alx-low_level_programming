#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: Always 0(seccess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII reprsentation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
