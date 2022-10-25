#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - get number of nodes in a list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	for (count = 0; temp != NULL; count++)
		temp = temp->next;
	return (count);
}


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index to insert new node
 * @n: data
 *
 * Return: new node address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int len, count;

	len = listint_len(*head);
	if (idx > len)
	{
		return (NULL);
	}
	else
	{
		current = *head;
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = current;
			*head = new_node;
		}
		else
		{
			for (count = 0; current != NULL; count++)
			{
				if (count == (idx - 1))
				{
					new_node->next = current->next;
					current->next = new_node;
					break;
				}
				current = current->next;
			}
		}
	}
	return (new_node);
}
