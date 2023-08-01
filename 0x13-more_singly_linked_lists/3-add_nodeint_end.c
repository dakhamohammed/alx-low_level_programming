#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to the first and new node in the list.
 * @n: number of elements in the list.
 *
 * Return: the address of the new element, or NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new, *tempn;


	add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
	{
		return (NULL);
	}

	add_new->n = n;
	add_new->next = NULL;
	tempn = *head;

	if (*head == NULL)
	{
		*head = add_new;
	}
	else
	{
		while (tempn->next != NULL)
		{
			tempn = tempn->next;
		}
		tempn->next = add_new;
	}

	return (*head);
}

