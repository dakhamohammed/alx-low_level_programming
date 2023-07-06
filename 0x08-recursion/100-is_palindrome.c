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
		return (i + _strlen_recursion(s + i));
	}
}

/**
 * string_diff - cheque difference betwean characters.
 * @s: string of characters
 * @n: the smallest iterator.
 * @n2: the biggest iterator.
 *
 * Return: .
 */
int string_diff(char *s, int n, int n2)
{
	if (*(s + n) == *(s + n2))
	{
		if (n == n2 || n == n2 + 1)
		{
			return (1);
		}
		return (0 + string_diff(s, n + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that return a string is a palindrome or not
 * @s: string value.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (string_diff(s, 0, _strlen_recursion(s) - 1));
}

