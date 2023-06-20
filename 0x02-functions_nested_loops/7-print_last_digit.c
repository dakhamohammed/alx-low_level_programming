#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number in integer type.
 *
 * Return: always the last digit.
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}

