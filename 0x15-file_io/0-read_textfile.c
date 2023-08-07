#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to open.
 * @letters: number of letters it should read and print
 *
 * Return: numbers of letters printed. or 0 if it fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t rread, wwrite;

	if (!filename)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}

	rread = read(file, buffer, letters);
	wwrite = write(STDOUT_FILENO, buffer, rread);

	close(file);

	return (wwrite);
}

