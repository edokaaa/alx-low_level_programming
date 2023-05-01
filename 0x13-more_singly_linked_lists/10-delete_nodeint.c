#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a linked list.
 * @head: double pointer to the start of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *bef_idx, *curr_idx;

	bef_idx = *head;
	i = 0;
	while (bef_idx != NULL)
	{
		if (index == 0)
		{
			*head = bef_idx->next;
			free(bef_idx);
			return (1);
		}
		if (index == i + 1)
		{
			curr_idx = bef_idx->next;
			bef_idx->next = curr_idx->next;
			free(curr_idx);
			return (1);
		}
		bef_idx = bef_idx->next;
		i++;
	}
	return (-1);
}
