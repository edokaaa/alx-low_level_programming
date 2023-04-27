#include "lists.h"
#include <string.h>

/**
 * add_node_end - function to add node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: the data of the node
 *
 * Return: pointer to the new node
 * or NULL is it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	while (*head != NULL)
	{
		/**
		 * instead of modifying the head,
		 * we modify the pointer to it;
		 * this way the pointer to the start remains thesame,
		 * but the pointer to the pointer to the start changes.
		*/
		head = &((*head)->next);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	*head = new;

	return (new);
}
