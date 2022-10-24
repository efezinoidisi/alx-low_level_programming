#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	for (count = 0; temp != NULL; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
