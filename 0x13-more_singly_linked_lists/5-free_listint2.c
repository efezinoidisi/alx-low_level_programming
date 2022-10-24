#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to first node
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
