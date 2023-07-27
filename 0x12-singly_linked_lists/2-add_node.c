#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list, first node.
 * @str: string to be stored in the list and needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newstr;
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
	newstr->next = *head;
	*head = newstr;

	return (*head);
}

