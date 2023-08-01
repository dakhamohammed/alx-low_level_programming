#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: the sum of all the data (n) of a listint_t
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int data_sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		data_sum = data_sum + head->n;
		head = head->next;
	}

	return (data_sum);
}

