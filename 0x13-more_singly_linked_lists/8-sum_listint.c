#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all of the data of a listint_t list
 * @head: pointer to the first node
 *
 * Return: sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
