#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nbnodes; /* number of nodes variable */

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

	nbnodes = 0;

	/* print and count number of nodes */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nbnodes++;
		h = h->next;
	}

	/* return that number */
	return (nbnodes);
}

