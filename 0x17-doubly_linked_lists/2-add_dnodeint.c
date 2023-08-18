#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head pointer
 * @n: data of new node
 *
 * Return: address of the new node of NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	/* (*head)->n = n_node; */
	n_node->next = *head;
	n_node->n = n;
	n_node->prev = NULL;
	*head = n_node;
	return (n_node);
}
