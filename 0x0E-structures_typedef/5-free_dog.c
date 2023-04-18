#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: pointer to the dog to free
 *
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
