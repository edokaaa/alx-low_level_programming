#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - realloc clone,
 * reallocates a memory block using malloc and free
 * @ptr: ponter to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size
 *
 * Return: pointer to the new allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i = 0;
	unsigned int copy_size;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			return (NULL);
		}
		return (ptr2);
	}
	if (new_size == old_size)
		return (ptr);
	else if (new_size > old_size)
		copy_size = new_size;
	else
		copy_size = old_size;

	ptr2 = malloc(copy_size);
	if (ptr2 == NULL)
		return (NULL);

	while (i < copy_size && i < old_size)
	{
		*((char *)ptr2 + i) = *((char *)ptr + i);
		i++;
	}

	free(ptr);

	return (ptr2);

}

