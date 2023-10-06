#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: is the key, and can not be an empty string.
 * @value: value associated with the key,
 * value must be duplicated. value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *dup_val = strdup(value);
	unsigned long int i, index;
	int key_cmp;

	if (dup_val == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		key_cmp = strcmp(ht->array[i]->key, key);
		if (key_cmp == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_val;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_val);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = dup_val;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

