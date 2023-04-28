#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: double pointer to the head node
 *
 * Return: the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *prev;
	int data;

	prev = *head;
	if (prev == NULL)
		return (0);
	*head = prev->next;
	data = prev->n;
	free(prev);

	return (data);
}
