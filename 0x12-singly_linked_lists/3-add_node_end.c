#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list, first node.
 * @str: string to be stored in the list and needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newstr, *tempstr;
	size_t nchar;

	newstr = malloc(sizeof(list_t));

	if (newstr == NULL)
	{
		return (NULL);
	}

	newstr->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newstr->len = nchar;
	newstr->next = NULL;
	tempstr = *head;

	if (tempstr == NULL)
	{
		*head = newstr;
	}
	else
	{
		while (tempstr->next != NULL)
		{
			tempstr = tempstr->next;
		}

		tempstr->next = newstr;
	}

	return (*head);
}

