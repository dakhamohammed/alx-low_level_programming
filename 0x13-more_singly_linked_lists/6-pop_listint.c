#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the first and new node in the list.
 *
 * Return: the head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int node_head;
	listint_t *head1, *head2;

	if (*head == NULL)
	{
		return (0);
	}

	head1 = *head;

	node_head = head1->n;

	head2 = head1->next;

	free(head1);

	*head = head2;

	return (node_head);
}

