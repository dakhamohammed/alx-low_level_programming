#include <stdio.h>

/**
 * main - function that print the number of argument passed into it.
 * @argc: total number of the command line arguments.
 * @argv: arguments are passed to the program by the host,
 * system's command line interpreter.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

