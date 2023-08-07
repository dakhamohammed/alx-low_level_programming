#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 if it success. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int read_write, file, text = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[text])
	{
		text++;
	}

	read_write = write(file, text_content, text);
	if (read_write == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}

