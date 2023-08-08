#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

void errors(int file_from, int file_to, char *argv[]);

/**
 * main - entry point function.
 * @argc: command line arguments count.
 * @argv: command line arguments.
 * Return: Always 0, with error if there is.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t chars, wwrite;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors(file_from, file_to, argv);

	chars = BUFFER_SIZE;
	while (chars == BUFFER_SIZE)
	{
		chars = read(file_from, buffer, BUFFER_SIZE);
		if (chars == -1)
		{
			errors(-1, 0, argv);
		}

		wwrite = write(file_to, buffer, chars);
		if (wwrite == -1)
		{
			errors(0, -1, argv);
		}
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

/**
 * errors - function that checks for file error.
 * @file_from: from a file.
 * @file_to: to a file.
 * @argv: command line arguments.
 * Return: void, no return.
 */
void errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

