#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: given name by the user input.
 * @f: function pointer to that name.
 *
 * Return: void, no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

