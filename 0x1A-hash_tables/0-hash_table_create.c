#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - This function create a hash table
 * @size: This is the size of the array,
 * which is the size of our hash table.
 *
 * Return: a pointer to the newlu created hash table,
 * or NULL if something went wrong.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h;
	unsigned long int i;

	/* allocating memory for the hash table */
	new_h = malloc(sizeof(hash_table_t));
	if (new_h == NULL)
		return (NULL);

	/* allocation memoty for the array of pointers */
	new_h->array = malloc(sizeof(hash_node_t *) * size);
	if (new_h->array == NULL)
	{
		free(new_h);
		return (NULL);
	}

	/* initializing each element of the array to NULL */
	for (i = 0; i < size; i++)
	{
		new_h->array[i] = NULL;
	}

	/* setting the size of the hash table */
	new_h->size = size;

	return (new_h);
}
