#include "lists.h"

/**
 * sum_listint - sums up a the data of a linked list.
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data of the linkedlist.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
