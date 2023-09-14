#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * dlistint_t list.
 * @h: head of the list.
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nbelements; /* number of elements variable */

	/* check if head is NULL */
	if (h == NULL)
	{
		return (0);
	}

	/* point to the previous node */
	while (h->prev != NULL)
	{
		h = h->prev;
	}

	nbelements = 0;

	/* count number of nodes or (elements) */
	while (h != NULL)
	{
		nbelements++;
		h = h->next;
	}

	/* return that number */
	return (nbelements);
}

