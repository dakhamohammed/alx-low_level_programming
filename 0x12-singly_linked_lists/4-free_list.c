#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head of the linked list, first node.
 *
 * Return: void, no return.
 */
void free_list(list_t *head)
{
	list_t *currentnode;

	while ((currentnode = head) != NULL)
	{
		head = head->next;
		free(currentnode->str);
		free(currentnode);
	}
}

