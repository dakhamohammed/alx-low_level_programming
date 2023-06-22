#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, j, k;
	long int n = 1, n2 = 2, fib, afib, _n, _n2;

	j = k = 1;

	printf("%ld, %ld", n, n2);

	for (i = 0; i < 96; i++)
	{
		if (j)
		{
			fib = n + n2;
			printf(", %ld", fib);
			n = n2;
			n2 = fib;
		}
		else
		{
			if (k)
			{
				_n = n % 1000000000;
				_n2 = n2 % 1000000000;
				n = n / 1000000000;
				n2 = n2 / 1000000000;
				k = 0;
			}

			afib = (_n + _n2);
			fib = n + n2 + (afib / 1000000000);

			printf(", %ld", fib);
			printf("%ld", afib % 1000000000);

			n = n2;
			_n = _n2;
			n2 = fib;
			_n2 = (afib % 1000000000);
		}
		if (((n + n2) < 0) && j == 1)
		{
			j = 0;
		}
	}

	printf("\n");

	return (0);
}

