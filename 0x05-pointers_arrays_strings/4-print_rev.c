#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: string value.
 *
 * Return: void, no return.
 */
void print_rev(char *s)
{
	int lenCount = 0;

	while (lenCount >= 0)
	{
		if (s[lenCount] == '\0')
		{
			break;
		}

		lenCount++;
	}

	for (lenCount--; lenCount >= 0; lenCount--)
	{
		_putchar(s[lenCount]);
	}
	_putchar('\n');
}

