#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string value.
 *
 * Return: void, no return.
 */
void rev_string(char *s)
{
	int lenCount = 0, i, j;
	char *str, tmp;

	while (lenCount >= 0)
	{
		if (s[lenCount] == '\0')
		{
			break;
		}
		lenCount++;
	}
	str = s;

	for (i = 0; i < (lenCount - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = tmp;
		}
	}
}

