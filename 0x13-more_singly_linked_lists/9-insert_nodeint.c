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
	listint_t *bef_new, *new, *af_new;

	bef_new = *head;
	i = 0;
	while (bef_new != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			af_new = bef_new->next;
			bef_new->next = new;
			new->next = af_new;
			new->n = n;

			return (new);
		}
		bef_new = bef_new->next;
		i++;
	}
	return (NULL);
}
