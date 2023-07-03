#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *ptrhaystack;
	char *ptrneedle;

	while (*haystack != '\0')
	{
		ptrhaystack = haystack;
		ptrneedle = needle;

		while (*haystack != '\0' && *ptrneedle != '\0' && *haystack == *ptrneedle)
		{
			haystack++;
			ptrneedle++;
		}

		if (!*ptrneedle)
		{
			return (ptrhaystack);
		}
		haystack = ptrhaystack + 1;
	}
	return (0);
}

