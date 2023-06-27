#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string value.
 *
 * Return: integer value.
 */
int _atoi(char *s)
{
	unsigned int lenCount = 0, size = 0, i = 0, j = 1, k = 1;
	unsigned int l;

	while (*(s + lenCount) != '\0')
	{
		if (size > 0 && (*(s + lenCount) < '0' || *(s + lenCount) > '9'))
		{
			break;
		}
		if (*(s + lenCount) == '-')
		{
			j *= -1;
		}
		if ((*(s + lenCount) >= '0') && (*(s + lenCount) <= '9'))
		{
			if (size > 0)
			{
				k *= 10;
			}
			size++;
		}
		lenCount++;
	}

	for (l = lenCount - size; l < lenCount; l++)
	{
		i = i + ((*(s + l) - 48) * k);
		k /= 10;
	}
	return (i * j);
}

