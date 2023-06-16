#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if the number is greater than 0: is positive */
	if (n > 0)
		printf("%d is positive\n", n);

	/* if the number is 0: is zero */
	if (n == 0)
		printf("%d is zero\n", n);

	/* if the number is less than 0: is negative */
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}

