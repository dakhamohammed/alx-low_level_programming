#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @strn: string input.
 * Return: pointer to strn
 */
char *leet(char *strn)
{
	int lenC = 0, i;
	int l_letters[] = {97, 101, 111, 116, 108};
	int u_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(strn + lenC) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(strn + lenC) == l_letters[i] || *(strn + lenC) == u_letters[i])
			{
				*(strn + lenC) = numbers[i];
				break;
			}
		}
		lenC++;
	}

	return (strn);
}

