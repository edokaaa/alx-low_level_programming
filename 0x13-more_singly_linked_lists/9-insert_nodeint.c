#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position in a linked list
 * @head: double pointer to the start node
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: the address of the new node,
 * or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev, *new, *curr;

	prev = *head;
	i = 0;
	while (prev != NULL)
	{
		if ((idx == i || idx == i + 1) && prev->next != NULL)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;

			if (i == 0 && idx == i)
			{
				new->next = prev;
				*head = new;
			}
			if (idx == i + 1)
			{
				curr = prev->next;
				prev->next = new;
				new->next = curr;
				new->n = n;
			}

			return (new);

		}
		prev = prev->next;
		i++;
	}
	return (NULL);
}
