#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements
 * of a linked lists
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes on the list
*/
size_t print_list(const list_t *h)
{
	size_t l = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		l++;
		h = h->next;
	}
	return (l);
}
