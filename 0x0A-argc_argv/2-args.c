#include <stdio.h>

/**
 * main - function that print all arguments it receives.
 * @argc: total number of the command line argumments.
 * @argv: arguments are passed to the program by the host,
 * system's command line interpreter.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}

