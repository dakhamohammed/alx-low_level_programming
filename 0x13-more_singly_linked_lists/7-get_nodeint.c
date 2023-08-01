#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the first and new node in the list.
 * @index: index of the node.
 *
 * Return: the nth node of a listint_t linked list, or NULL if the node
 * does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;

	while (nth < index && head != NULL)
	{
		head = head->next;
		nth++;
	}

	return (head);
}
