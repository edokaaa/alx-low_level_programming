#include "hash_tables.h"

/**
 * hash_djb2 - a function implementing the djb2 algorithm
 * This function will be our hashing function.
 *
 * @str: this will be our input key
 *
 * Return: It will always return a hash value.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
