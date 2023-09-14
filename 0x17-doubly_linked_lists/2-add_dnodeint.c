#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list.
 * @head: head of the list.
 * @n: intger value of the element.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	current_node = *head;

	if (current_node != NULL)
	{
		while (current_node->prev != NULL)
		{
			current_node = current_node->prev;
		}
	}

	new_node->next = current_node;

	if (current_node != NULL)
	{
		current_node->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}

