#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrition: print all single digit numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	print("\n");

	return (0);
}
