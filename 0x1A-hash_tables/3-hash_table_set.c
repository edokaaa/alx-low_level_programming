#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - a function that adds am element to the hash table.
 * @ht: hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the begining of the list.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* create the item */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	/* allocate memory for key nd value */
	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	/* get index */
	index = key_index((const unsigned char *)node->key, ht->size);

	/* insert into array */
	if (ht->array[index] != NULL)
	{
		/* key already exist so insert to begining of linked list */
		node->next = ht->array[index];
	}
		/* index doesn't exist */
	else
	{
		node->next = NULL;
	}
	ht->array[index] = node;

	return (1);
}
