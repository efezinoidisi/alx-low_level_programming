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
 * delete_nodeint_at_index - deletes a node at given index of a list
 * @head: pointer to first node
 * @index: given index to delete
 *
 * Return: 1 if it succeeds or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev, *current;
	unsigned int count, len;

	len = listint_len(*head);
	if (index > len || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		temp = *head;
		*head = current->next;
		free(temp);
	}
	else
	{
		for (count = 0; current != NULL; count++)
		{
			if (count == index)
			{
				temp = current;
				prev->next = current->next;
				current = current->next;
				free(temp);
				break;
			}
			prev = current;
			current = current->next;
		}
	}
	return (1);
}
