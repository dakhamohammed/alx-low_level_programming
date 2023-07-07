#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two given numbers.
 * @argc: total number of the command line argumments.
 * @argv: arguments are passed to the program by the user in terminal.
 *
 * Return: 0 (Success), 1 if the program does not receive two args.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}

