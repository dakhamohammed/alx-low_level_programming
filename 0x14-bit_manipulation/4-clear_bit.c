#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0.
 * at a given index.
 * @n: pointer to an unsigned long int number.
 * @index: index of the bit starting from 0.
 *
 * Return: 1 if it worked, -1 if an arror occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
	{
		return (-1);
	}

	bit = 1 << index;

	if (*n & bit)
	{
		*n = (*n ^ bit);
	}

	return (-1);
}

