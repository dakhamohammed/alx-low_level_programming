#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: given unsigned int value (only positive number).
 *
 * Return: a pointer to the allocated memory, or 98 if it fail.
 */
void *malloc_checked(unsigned int b)
{
	char *mallocp;

	mallocp = malloc(b);

	if (mallocp == NULL)
	{
		exit(98);
	}

	return (mallocp);
}

