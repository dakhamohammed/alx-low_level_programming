#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program,
 * 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int random = 0, i = 0;

	time_t t;

	srand((unsigned int) time(&t));

	while (i < 2772)
	{
		random = rand() % 128;
		if ((i + random) > 2772)
		{
			break;
		}
		i = i + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - i));

	return (0);
}

