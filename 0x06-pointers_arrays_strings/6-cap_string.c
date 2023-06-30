#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @lstr: string input.
 *
 * Return: pointer to lstr.
 */
char *cap_string(char *lstr)
{
	int lenC = 0, i;
	int separ[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(lstr + lenC) >= 97 && *(lstr + lenC) <= 122)
	{
		*(lstr + lenC) = *(lstr + lenC) - 32;
	}
	lenC++;

	while (*(lstr + lenC) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(lstr + lenC) == separ[i])
			{
				if ((*(lstr + (lenC + 1)) >= 97) && (*(lstr + (lenC + 1)) <= 122))
				{
					*(lstr + (lenC + 1)) = *(lstr + (lenC + 1)) - 32;
				}
				break;
			}
		}
		lenC++;
	}
	return (lstr);
}

