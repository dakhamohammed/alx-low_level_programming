#include "main.h"

/**
 * print_most_numbers - C function that prints the numbers, from 0 to 9
 * but do not print 2 and 4
 *
 * Return: void, nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}

