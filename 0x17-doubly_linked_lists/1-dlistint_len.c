#include "lists.h"

/**
 * dlistint_len - get number of elements in a list
 * @h: head of doubly linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int num;

	current = h;
	num = 0;
	while (current)
	{
		num++;
		current = current->next;
	}
	return (num);
}
