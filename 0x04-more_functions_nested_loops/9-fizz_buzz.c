#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print
 * FizzBuzz.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 1;

	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return (0);

}

