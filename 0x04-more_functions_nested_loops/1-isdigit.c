#include "main.h"

/**
 * _isdigit - C unction that checks for a digit (0 through 9).
 * @c: could be digit or alphabet
 *
 * Return: 1 if c is a digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

