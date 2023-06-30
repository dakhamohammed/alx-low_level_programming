#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @src: source.
 * @dest: destination.
 * @n: bytes from src.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenCount = 0, lenCount2 = 0;

	while (*(dest + lenCount) != '\0')
	{
		lenCount++;
	}

	while (lenCount2 < n)
	{
		*(dest + lenCount) = *(src + lenCount2);
		if (*(src + lenCount) == '\0')
		{
			break;
		}

		lenCount++;
		lenCount2++;
	}

	return (dest);
}

