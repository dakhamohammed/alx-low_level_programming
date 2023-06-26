#include "main.h"

/**
 * _strlen - C function that returns the lenght of a string.
 * @s: string value.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int lenCount = 0;

	while (*(s + lenCount) != '\0')
	{
		lenCount++;
	}

	return (lenCount);
}

