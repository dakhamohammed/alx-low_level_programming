#include "lists.h"

/**
 * add_nodeint - unction that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the first and new node in the list..
 * @n: number of elements in the list.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new;

	add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
	{
		return (NULL);
	}

	add_new->n = n;

	add_new->next = *head;

	*head = add_new;

	return (*head);
}

