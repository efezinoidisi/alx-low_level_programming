#include "lists.h"

/**
 * sum_dlistint - sum all data in a doubly linked list
 * @head: start of list
 *
 * Return: sum of all data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (sum);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
