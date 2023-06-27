#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string value.
 *
 * Return: void, no return.
 */
void puts2(char *str)
{
	int lenCount = 0;

	while (lenCount >= 0)
	{
		if (str[lenCount] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (lenCount % 2 == 0)
		{
			_putchar(str[lenCount]);
		}
		lenCount++;
	}
}

