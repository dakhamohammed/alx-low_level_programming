#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line,
 * to stdout.
 * @str: string value.
 *
 * Return: void, no return.
 */
void _puts(char *str)
{
	int lenCount = 0;

	do {
		if (str[lenCount] == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[lenCount]);
		lenCount++;
	} while (lenCount >= 0)
}

