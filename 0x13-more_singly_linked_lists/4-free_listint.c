#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the first and new node in the list.
 *
 * Return: void, no return.
 */
void free_listint(listint_t *head)
{
	listint_t *free_listint;

	while ((free_listint = head) != NULL)
	{
		head = head->next;
		free(free_listint);
	}
}

