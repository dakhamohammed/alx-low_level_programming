#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if the string b that is not 0 or 1
 * or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int intlen, base2;

	if (!b)
	{
		return (0);
	}

	unint = 0;

	for (intlen = 0; b[intlen] != '\0'; intlen++)
	{
		;
	}

	for (intlen--, base2 = 1; intlen >= 0; intlen--, base2 *= 2)
	{
		if (b[intlen] != '0' && b[intlen] != '1')
		{
			return (0);
		}

		if (b[intlen] & 1)
		{
			unint = unint + base2;
		}
	}

	return (unint);
}

