#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the alphabet in lowercase, followed by new line */
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - Print the alphabet in lowercase, followed by new line
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

