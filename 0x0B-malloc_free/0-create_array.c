#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: given char.
 *
 * Return: pointer of an array, NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *stc;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	stc = malloc(sizeof(c) * size);

	if (stc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		stc[i] = c;
	}

	return (stc);
}

