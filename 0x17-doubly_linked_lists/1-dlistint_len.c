#include "lists.h"

/**
 * dlistint_len - gets the number of number of elements in the list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
