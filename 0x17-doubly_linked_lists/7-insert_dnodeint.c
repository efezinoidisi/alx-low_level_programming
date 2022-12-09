#include "lists.h"

/**
 * insert_dnodeint_at_index - add new node at a given index
 * @h: start of list
 * @idx: index to add new node
 * @n: data
 *
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *current, *new_node;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *h;
	i = 0;
	while (current)
	{
		prev = current->prev;
		if (i == idx)
		{
			if (i == 0)
			{
				new_node->prev = NULL;
				new_node->next = current;
				*h = new_node;
				break;
			}
			else
			{
				prev->next = new_node;
				new_node->prev = prev;
				new_node->next = current;
				current->prev = new_node;
				break;
			}
		}
		current = current->next;
		i++;
	}
	return (new_node);
}
