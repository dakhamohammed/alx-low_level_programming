#include "lists.h"

void free_listint2safer(listpointer_t **head);

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to the first and new node in the list.
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listpointer_t *new_node, *headp, *addp;
	size_t nof_nodes = 0;
	listint_t *head1;

	headp = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listpointer_t));

		if (new_node == NULL)
		{
			exit(98);
		}

		new_node->head_pointer = (void *)*h;
		new_node->next = headp;
		headp = new_node;
		addp = headp;

		while (addp->next != NULL)
		{
			addp = addp->next;
			if (*h == addp->head_pointer)
			{
				*h = NULL;
				free_listint2safer(&headp);
				return (nof_nodes);
			}
		}

		head1 = *h;
		*h = (*h)->next;
		free(head1);
		nof_nodes++;
	}

	*h = NULL;
	free_listint2safer(&headp);
	return (nof_nodes);
}

/**
 * free_listint2safer - function that frees a listint_t list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: void, no return.
 */
void free_listint2safer(listpointer_t **head)
{
	listpointer_t *head1, *head2;

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

