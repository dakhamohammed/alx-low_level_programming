#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the first and new node in the list.
 * @index: the index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *next_node;
	unsigned int i = 0;

	previous_node = *head;

	if (index != 0)
	{
		while (i < index - 1 && previous_node != NULL)
		{
			previous_node = previous_node->next;
			i++;
		}
	}

	if (previous_node == NULL || (previous_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next_node = previous_node->next;

	if (index != 0)
	{
		previous_node->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(previous_node);
		*head = next_node;
	}

	return (1);
}
