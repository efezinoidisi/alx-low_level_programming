#include "lists.h"

/**
 * get_dnodeint_at_index - get a given node from list
 * @head: start of list
 * @index: index of node to get
 *
 * Return: node at index or NULL
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	current = head;
	i = 0;
	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
