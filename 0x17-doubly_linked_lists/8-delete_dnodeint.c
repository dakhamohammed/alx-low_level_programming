#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: head of the list.
 * @index: index of the new node.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currn = *head, *nextn;
	unsigned int i = 0;

	if (currn != NULL)
	{
		while (currn->prev != NULL)
		{
			currn = currn->prev;
		}
	}

	while (currn != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = currn->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				nextn->next = currn->next;

				if (currn->next != NULL)
					currn->next->prev = nextn;
			}

			free(currn);
			return (1);
		}

		nextn = currn;
		currn = currn->next;
		i++;
	}

	return (-1);
}

