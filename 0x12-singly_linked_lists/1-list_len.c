#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the data in a node.
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t nelements = 0;

	while (h != NULL)
	{
		h = h->next;
		nelements++;
	}

	return (nelements);
}

