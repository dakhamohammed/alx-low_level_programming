#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible combinations of single-digit numbers
 * separated by , and followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

