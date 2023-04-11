#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char
 *
 * Return: pointer to the array or  NULL if it fails or size = 0.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
