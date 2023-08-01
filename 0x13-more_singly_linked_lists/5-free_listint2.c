#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: void, no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *head1, *head2;

	if (head != NULL)
	{
		head1 = *head;

		while ((head2 = head1) != NULL)
		{
			head1 = head1->next;
			free(head2);
		}

		*head = NULL;
	}
}

