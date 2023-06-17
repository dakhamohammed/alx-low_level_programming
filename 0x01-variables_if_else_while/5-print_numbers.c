#include <stdio.h>

/**
 * main - Entry point
 * Prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbersBase10;

	for (numbersBase10 = 0; numbersBase10 < 10; numbersBase10++)
	{
		printf("%d", numbersBase10);
	}
	printf("\n");

	return (0);
}

