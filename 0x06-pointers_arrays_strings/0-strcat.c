#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: source.
 * @dest: destination.
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int lenCount = 0, lenCount2 = 0;

	while (*(dest + lenCount) != '\0')
	{
		lenCount++;
	}

	while (lenCount2 >= 0)
	{
		*(dest + lenCount) = *(src + lenCount2);
		if (*(src + lenCount2) == '\0')
		{
			break;
		}

		lenCount++;
		lenCount2++;
	}
	return (dest);
}

