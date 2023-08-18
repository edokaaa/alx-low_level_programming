#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to the start of the list
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}
