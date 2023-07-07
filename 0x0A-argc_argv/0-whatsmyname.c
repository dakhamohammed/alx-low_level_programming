#include <stdio.h>

/**
 * main - function that print the program name.
 * @argc: total number of the command line argumments.
 * @argv: arguments are passed to the program by the host,
 * system's command line interpreter.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

