#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @lstr: string input.
 *
 * Return: pointer to lstr.
 */
char *string_toupper(char *lstr)
{
	int lenC = 0;

	while (*(lstr + lenC) != '\0')
	{
		if ((*(lstr + lenC) >= 97) && (*(lstr + lenC) <= 122))
		{
			*(lstr + lenC) = *(lstr + lenC) - 32;
		}

		lenC++;
	}

	return (lstr);
}

