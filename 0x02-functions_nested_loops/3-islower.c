#include "main.h"

/**
 * _islower - is a function that checks for lowercase character.
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 *
 * @c: is a character in alphabetic mode like 'a' or 'B' or 'k'.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}

