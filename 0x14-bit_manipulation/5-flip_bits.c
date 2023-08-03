#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int number 1.
 * @m: unsigned long int number 2.
 *
 * Return: fliped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nof_bits;

	for (nof_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			nof_bits++;
		}
	}

	return (nof_bits);
}

