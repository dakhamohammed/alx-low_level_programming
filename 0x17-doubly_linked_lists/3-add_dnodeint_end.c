#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list.
 * @head: head of the list.
 * @n: integer value of the element.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t  *current_node;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	current_node = *head;

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node;
	new_node->prev = current_node;

	return (new_node);
}

