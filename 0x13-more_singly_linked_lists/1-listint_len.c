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
