#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value to be included.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array,
 * if man > mix, returns NULL,
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *parray;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	parray = malloc(sizeof(*parray) * ((max - min) + 1));
	if (parray == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		parray[i] = min;
	}

	return (parray);
}

