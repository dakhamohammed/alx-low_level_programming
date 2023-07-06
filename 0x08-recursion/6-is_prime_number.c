#include "main.h"

/**
 * is_prime - prime number.
 * @number: integer value.
 * @i: integer value.
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime(int number, int i)
{

	if (number <= 1)
	{
		return (0);
	}
	if (number % i == 0)
	{
		if (number == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(number, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: given input number.
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

