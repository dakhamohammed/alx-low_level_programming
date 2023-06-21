#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int i, j, k, n;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (i >= 50 && j >= 52)
						break;

					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(n);

					_putchar('\n');
				}
			}
		}
	}
}

