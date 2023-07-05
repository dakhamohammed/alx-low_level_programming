#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string value.
 *
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ( i + _strlen_recursion(s + i));
	}
}

