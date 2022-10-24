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
 * get_nodeint_at_index - get nth node of a list
 * @head: pointer to first node
 * @index: position of nth node
 *
 * Return: nth node of a listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len = listint_len(head) - 1, count;

	if (head == NULL)
		return (NULL);

	if (index > len)
	{
		temp = NULL;
	}
	else
	{
		for (count = 0; head != NULL; count++)
		{
			if (count == index)
			{
				temp = head;
				break;
			}
			head = head->next;
		}
	}
	return (temp);
}
