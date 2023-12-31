#include "main.h"

/**
 * wildcmp - function that compares two strings.
 * @s1: first string value.
 * @s2: second string value. can contains a * as a special character.
 *
 * Return: 1 if s1 and s2 are identical, or 0 if they are not identical.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	return (0);
}

