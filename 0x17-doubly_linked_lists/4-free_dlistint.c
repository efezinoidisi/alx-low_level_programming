#include "lists.h"

/**
 * free_dlistint - frees a dlist_int list
 * @head: start of list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
