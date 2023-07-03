#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination to memory area.
 * @src: source of memory area.
 * @n: bytes from memory area.
 *
 * Return: pointer to (dest) memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) =  *(src + i);
	}

	return (dest);
}

