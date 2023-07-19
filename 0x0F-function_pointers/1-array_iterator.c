#include "function_pointers.h"

/**
 * array_iterator - function thst executes a function given as a
 * parameter on each element of an array.
 * @array: given input integer array.
 * @size: given size of the array.
 * @action: pointer to the function.
 *
 * Return: void, no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

