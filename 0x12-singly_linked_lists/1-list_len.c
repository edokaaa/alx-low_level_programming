#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list.
*/
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
