#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: string value.
 *
 * Return: void, no return.
 */
void puts_half(char *str)
{
	int lenCount = 0, i;

	while (lenCount >= 0)
	{
		if (str[lenCount] == '\0')
		{
			break;
		}
		lenCount++;
	}

	if (lenCount % 2 == 1)
	{
		i = lenCount / 2;
	}
	else
	{
		i = (lenCount - 1) / 2;
	}

	for (i++; i < lenCount; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

