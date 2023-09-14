#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - a function that retrives a value associated with a key
 * @ht: hash table
 * @key: the keey to look up
 *
 * Return: the value associated with the element
 * or NULL if key couldn't be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next
	}
	return (NULL);
}
