#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: double pointer to the start of the list
 *
 * Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *next;

	prev = NULL;
	next = NULL;
	curr = *head;

	while (curr != NULL)
	{
		/* store the next */
		next = curr->next;
		/* reverse current node's pointer */
		curr->next = prev;
		/* move pointers one position ahead */
		prev = curr;
		curr = next;
	}
	/* update the head */
	*head = prev;

	return (prev);
}
