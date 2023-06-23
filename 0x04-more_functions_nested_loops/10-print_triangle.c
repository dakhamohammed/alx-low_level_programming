#include "main.h"

/**
 * print_triangle - C function that prints a triangle
 * @size: is the size of the triangle.
 * If size is 0 or less, the function should
 * print only a new line.
 * Use the character # to print the triangle
 *
 * Return: void, nothing.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar(' ');
		}

		for (j--; j < size; j++)
		{
			_putchar(35);
		}

		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}

	_putchar('\n');
}

