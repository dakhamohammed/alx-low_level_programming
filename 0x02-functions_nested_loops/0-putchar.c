#include <stdio.h>
#include "main.h"

/**
 * main - Print _putchar, followed by a new line.
 *
 * Print _putchar without using printf or puts standar input output lib
 * Or using any secondary function outside main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *string = "_putchar\n";

	while (*string)
	{
		_putchar(*string++);
	}

	return (0);
}

