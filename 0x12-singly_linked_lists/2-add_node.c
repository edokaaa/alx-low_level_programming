#include "lists.h"
#include <string.h>

/**
 * add_node - function to add node to a linked list
 * @head: pointer to the head of the list
 * @str: the data of the node
 *
 * Return: pointer to the new node
 * or NULL is it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
