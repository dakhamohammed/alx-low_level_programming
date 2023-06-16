#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to the variable n.
 * each time it is executed
 * And print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_n = n % 10;

	/* If the last digit of n is greater than 5 */
	if (last_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);

	/* if the last digit of n is 0 */
	if (last_n == 0)
		printf("Last digit of %d is %d and is 0 \n", n, last_n);

	/* f the last digit of n is less than 6 and not 0 */
	else if (last_n < 6 && !0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);

	return (0);
}

