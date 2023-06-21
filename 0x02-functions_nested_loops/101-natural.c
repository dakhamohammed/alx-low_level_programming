#include <stdio.h>

/**
 * main - print the natural numbers below 10 that are multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}

	printf("%d\n", j);

	return (0);
}

