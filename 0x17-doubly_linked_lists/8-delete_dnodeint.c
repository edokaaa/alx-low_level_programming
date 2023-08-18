#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: the first node of the list
 * @index: the index of the node to be deleted
 * Return: 1 on sucess, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
