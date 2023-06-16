#include <stdio.h>

/**
 * main - Entry point
 * Prints the alphabet in lowercase
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

	putchar('\n');

	return (0);
}

