#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int num;

	current = h;
	num = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}

	return (num);
}
