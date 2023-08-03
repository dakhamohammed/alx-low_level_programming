#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1.
 * at a given index.
 * @n: pointer to an unsigned long int number.
 * @index: index of the bit starting from 0.
 *
 * Return: 1 if it worked, or -1 if and error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
	{
		return (-1);
	}

	bit = 1 << index;
	*n = (*n | bit);

	return (1);
}

