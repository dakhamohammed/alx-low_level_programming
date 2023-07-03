#include "main.h"

/**
 * set_string - function that sets the value of a pointer
 * to a char
 * @s: source adress.
 * @to: target adress.
 *
 * Return: void, no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

