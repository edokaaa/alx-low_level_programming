#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of the list
 * @head: pointer to the head node
 * @index: index to get
 *
 * Return: pointer to the index node or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
