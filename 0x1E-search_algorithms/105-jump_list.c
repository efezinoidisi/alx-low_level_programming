#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted singly linked list
 * @list: pointer to head of the list
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Description: using the jump search algorithm
 * Return: pointer to first node where value is found or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i, j;
	listint_t *current = list, *prev_node = list;

	if (!list)
		return (NULL);

	for (i = step; i < size; i += step)
	{
		while (current->index != i)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", i, current->n);
		if (value <= current->n)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
			break;
		}

		prev = current->index;
		prev_node = current;

		if (i + step >= size)
		{
			for (j = 0; j < (size - 1) - prev; j++)
				current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", size - 1, current->n);
			printf("Value found between indexes [%lu] and [%lu]\n", prev, size - 1);
		break;
		}
	}
	current = prev_node;
	return (linear_check(&current, size, value));
}


/**
 * linear_check - check each node for value
 * @list: pointer that contains pointer to list
 * @size: size of entire list
 * @value: value to check for
 *
 * Return: pointer to first node where value is found or NULL
 */

listint_t *linear_check(listint_t **list, size_t size, int value)
{
	listint_t *current = *list;
	size_t idx = current->index;

	while (idx < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", idx, current->n);
		if (current->n == value)
			return (current);
		if (idx > size)
			break;

		idx++;
		current = current->next;
	}

	return (NULL);
}
