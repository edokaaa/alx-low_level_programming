#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements
 * of a linked lists
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes on the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t l = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
