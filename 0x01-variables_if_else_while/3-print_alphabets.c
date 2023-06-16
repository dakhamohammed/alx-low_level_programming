#include <stdio.h>

/**
 * main - Entry point
 * Prints the alphabet in lowercase then in uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	int alphabet = 26;

	for (i = 0; i < alphabet; i++)
	{
		putchar(lower_alphabet[i]);
	}

	/* Check if lowercase alphabet then convert to uppercase alphabet. */
	for (i = 0; i < alphabet; i++)
	{
		if (lower_alphabet[i] >= 'a' && lower_alphabet[i] <= 'z')
		{
			lower_alphabet[i] = lower_alphabet[i] - 32;

			putchar(lower_alphabet[i]);
		}
	}

	putchar('\n');

	return (0);
}

