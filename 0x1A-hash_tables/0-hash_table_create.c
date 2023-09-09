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
	hash_node_t **array;

	new_h = malloc(sizeof(hash_table_t));
	if (new_h == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
		return (NULL);
	new_h->array = array;
	new_h->size = size;

	return (new_h);
}
