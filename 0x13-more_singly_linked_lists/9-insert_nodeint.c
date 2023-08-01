#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given posi.
 * @head: pointer to the first and new node in the list.
 * @idx: index of the list where the new node should be added. start at 0.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *head1;
	unsigned int i = 0;

	head1 = *head;

	if (idx != 0)
	{
		while (i < idx - 1 && head1 != NULL)
		{
			head1 = head1->next;
			i++;
		}
	}

	if (idx != 0 && head1 == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = head1->next;
		head1->next = new_node;
	}

	return (new_node);
}

