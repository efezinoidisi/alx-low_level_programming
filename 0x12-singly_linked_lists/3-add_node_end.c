#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * str_len - get length of a string
 * @str: string
 *
 * Return: length of the string
 */

unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}


/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to first element of list
 * @str: string to be used for new list element
 *
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;

	current = head[0];
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;

	if (head[0] == NULL)
	{
		head[0] = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (head[0]);
}
