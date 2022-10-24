#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to first node
 * @n: data/value
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	prev = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = new_node;
	}
	return (*head);
}
