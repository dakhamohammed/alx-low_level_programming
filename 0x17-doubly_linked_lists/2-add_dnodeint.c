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
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
	{
		return (NULL);
	}

	add_node->n = n;
	add_node->prev = NULL;

	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
		{
			*head = (*head)->prev;
		}
	}

	add_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = add_node;
	}

	*head = add_node;

	return (add_node);
}

