#include "main.h"

/**
 * _isalpha - is a function that checks for alphabetic character.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * @c: is a character in alphabetic or numeric mode.
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

