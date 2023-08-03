#include "lists.h"

void free_listint2safe(listpointer_t **head);

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nof_nodes = 0;
	listpointer_t *new_node, *headp, *addp;

	headp = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listpointer_t));

		if (new_node == NULL)
		{
			exit(98);
		}

		new_node->head_pointer = (void *)head;
		new_node->next = headp;
		headp = new_node;
		addp = headp;

		while (addp->next != NULL)
		{
			addp = addp->next;
			if (head == addp->head_pointer)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint2safe(&headp);
				return (nof_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nof_nodes++;
	}
	free_listint2safe(&headp);

	return (nof_nodes);
}

/**
 * free_listint2safe - function that frees a listint_t list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: void, no return.
 */
void free_listint2safe(listpointer_t **head)
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

