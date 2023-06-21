#include <stdio.h>

/**
 * main - a that finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 1, n2 = 2, fib, afib;

	fib = afib = 0;

	while (fib <= 4000000)
	{
		fib = n + n2;
		n = n2;
		n2 = fib;

		if ((n % 2) == 0)
		{
			afib += n;
		}
	}

	printf("%ld\n", afib);

	return (0);
}

