#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint list
 * @head: pointer to head node
 *
 * Return: the head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
