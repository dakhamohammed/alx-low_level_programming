#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: alphabetic character
 *
 * Return: 0 is the alphabet character is lowercase and 1 if
 * in uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

