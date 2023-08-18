#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: pointer to the start of the list
 * @index: the index of the node
 *
 * Return: the nth node or NULL is node does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
