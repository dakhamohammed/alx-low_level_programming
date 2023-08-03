#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *headptr1, *headptr2;

	headptr1 = head;
	headptr2 = head;

	while (headptr2 && head && headptr2->next)
	{
		head = head->next;
		headptr2 = headptr2->next->next;

		if (headptr2 == head)
		{
			head = headptr1;

			while(1)
			{
				headptr2 = headptr1;
				while (headptr2->next != headptr1 && headptr2->next != head)
				{
					headptr2 = headptr2->next;
				}

				if (headptr2->next == head)
				{
					break;
				}

				head = head->next;
			}

			return (headptr2->next);
		}
	}

	return (NULL);
}
