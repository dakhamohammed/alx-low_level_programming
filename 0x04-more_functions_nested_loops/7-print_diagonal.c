#include "main.h"

/**
 * print_diagonal - C function that draws a diagonal line,
 * on the terminal.
 * @n: is the number of times the character \
 * should be printed.
 *
 * Return: void, nothing.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}

	_putchar('\n');
}

