#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop in a
 * linked list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *headptr1 = head, *headptr2 = head;

	while (head && headptr1 && headptr1->next)
	{
		head = head->next;
		headptr1 = headptr1->next->next;

		if (head == headptr1)
		{
			head = headptr2;
			headptr2 =  headptr1;

			while (1)
			{
				headptr1 = headptr2;

				while (headptr1->next != head && headptr1->next != headptr2)
				{
					headptr1 = headptr1->next;
				}

				if (headptr1->next == head)
				{
					break;
				}

				head = head->next;
			}

			return (headptr1->next);
		}
	}

	return (NULL);
}

