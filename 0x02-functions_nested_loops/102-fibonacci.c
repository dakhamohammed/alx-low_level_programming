#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long int n = 1, n2 = 2, fib;

	printf("%ld, %ld", n, n2);

	for (i = 0; i < 48; i++)
	{
		fib = n + n2;
		printf(", %ld", fib);

		n = n2;
		n2 = fib;
	}

	printf("\n");

	return (0);
}

