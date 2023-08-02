#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * linked list, the first shall be last and the last shall
 * be first (RATM).
 * @head: pointer to the first (and new) node in the list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL, *last = NULL;

	while (*head != NULL)
	{
		last = (*head)->next;

		(*head)->next = first;

		first = *head;

		*head = last;
	}

	*head = first;

	return (*head);
}

