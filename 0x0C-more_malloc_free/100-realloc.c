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

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	memcpy(ptr2, ptr, (old_size < new_size ? old_size : new_size));
		free(ptr);

	return (ptr2);
}
