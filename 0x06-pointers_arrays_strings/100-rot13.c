#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @strn: string input value.
 *
 * Return: char, pointer to strn.
 */
char *rot13(char *strn)
{
	int lenCount = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(strn + lenCount) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(strn + lenCount) == alph[i])
			{
				*(strn + lenCount) = rot_13[i];
				break;
			}
		}
		lenCount++;
	}

	return (strn);
}

