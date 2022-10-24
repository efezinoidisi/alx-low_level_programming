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
	listint_t *prev, *new_node, *temp;
	unsigned int len, count;

	len = listint_len(*head) - 1;
	if (idx > len)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;
	for (count = 0; temp != NULL; count++)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->next = prev->next;
			prev->next = new_node;
			break;
		}
		prev = temp;
		temp = temp->next;
	}
	return (new_node);
}
