#include "lists.h"

/**
 * add_dnodeint_end - add a new node at end of dlist
 * @head: doubly linked list
 * @n: data
 *
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	if (current == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next)
			current = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
