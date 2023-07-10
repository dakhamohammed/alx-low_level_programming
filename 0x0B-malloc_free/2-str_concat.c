#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *strconcats;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	strconcats = malloc(sizeof(char) * (i + j + 1));

	if (strconcats == NULL)
	{
		free(strconcats);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		strconcats[k] = s1[k];
	}
	l = j;
	for (j = 0; j <= l; k++, j++)
	{
		strconcats[k] = s2[j];
	}

	return (strconcats);
}

