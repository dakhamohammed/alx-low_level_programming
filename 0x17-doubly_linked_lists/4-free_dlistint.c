#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of the list.
 *
 * Return:void, no return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head, *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}

