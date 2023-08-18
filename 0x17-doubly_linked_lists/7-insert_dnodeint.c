#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @idx: the index of the new node
 * @n: the value of the new node
 * @h: the first node of the list
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = tmp;
		if (tmp != NULL)
			tmp->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (tmp != NULL)
	{
		if (count == idx)
		{
			new_node->prev = tmp->prev;
			new_node->next = tmp;
			if (tmp->prev != NULL)
				tmp->prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
