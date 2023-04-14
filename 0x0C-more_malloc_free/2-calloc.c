#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc clone using malloc.
 * @nmemb: number of elements for the array.
 * @size: size of each elements.
 *
 * Return: void or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(nmemb * size);

	if (call == NULL)
		return (NULL);

	return (call);
}
