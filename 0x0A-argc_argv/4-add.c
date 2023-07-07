#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds positive numbers.
 * @argc: total number of the command line argumments.
 * @argv: arguments are passed to the program by the user in terminal.
 *
 * Return: 0 (Success) & no number is given,
 * 1 if one of the number is negative number or contains symbols
 * that are not digits.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}

	printf("%d\n", add);

	return (0);
}

