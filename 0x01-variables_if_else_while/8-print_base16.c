#include <stdio.h>

/**
 * main - Entry point
 * Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}

