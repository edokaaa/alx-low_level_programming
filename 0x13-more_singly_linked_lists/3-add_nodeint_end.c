#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: double pointer to the head of the list
 * @n: data of the new node
 *
 * Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	while (*head != NULL)
		head = &((*head)->next);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	*head = new;

	return (new);
}
