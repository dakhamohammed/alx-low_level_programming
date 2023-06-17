#include <stdio.h>

/**
 * main - Entry point
 * Prints all letters in lowercase except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabet[] = "abcdfghijklmnoprstuvwxyz";

	int i;
	int alphabet = 24;

	for (i = 0; i < alphabet; i++)
	{
		putchar(lower_alphabet[i]);
	}

	putchar('\n');

	return (0);
}

