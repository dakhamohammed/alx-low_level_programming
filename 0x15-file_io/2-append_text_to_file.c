#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * of a file.
 * @filename: file to append the text to.
 * @text_content: text to be add to the file.
 *
 * Return: 1 on success. -1 on failure or file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, read_write, text = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[text])
		{
			text++;
		}

		read_write = write(file, text_content, text);
		if (read_write == -1)
		{
			return (-1);
		}
	}

	close(file);

	return (1);
}

