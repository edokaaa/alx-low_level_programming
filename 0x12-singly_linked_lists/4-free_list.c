#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to the start of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
