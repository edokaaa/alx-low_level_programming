#include "lists.h"

/**
 * free_listint2 - frees a linked list, setting the head to NULL.
 * @head: double pointer to the head of the list
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *prev, *curr;

	prev = NULL;
	curr = *head;
	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		free(prev);
	}
	*head = NULL;
}
