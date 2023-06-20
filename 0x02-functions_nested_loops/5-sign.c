#include "main.h"
/**
 * print_sign - is a function that prints the sign of a number.
 * @n: is a numerical value.
 * it will return 1 and prints + if n is greater than zero
 * it will return 0 and prints 0 if n is zero
 * it will return -1 and prints - if n is less than zero
 *
 * Return: 1 is greater than zero, 0 is zero, -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}

	_putchar('\n');
}

