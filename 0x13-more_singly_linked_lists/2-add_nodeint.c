#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linkedlist
 * @head: double pointer to the head of the list
 * @n: data of the new node;
 *
 * Return: pointer to the new element of NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
