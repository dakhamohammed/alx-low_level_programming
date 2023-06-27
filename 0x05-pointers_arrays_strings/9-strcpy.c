#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: destination folder.
 * @src: source folder.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int lenCount = 0;

	while (lenCount >= 0)
	{
		*(dest + lenCount) = *(src + lenCount);

		if (*(src + lenCount) == '\0')
		{
			break;
		}
		lenCount++;
	}

	return (dest);
}

