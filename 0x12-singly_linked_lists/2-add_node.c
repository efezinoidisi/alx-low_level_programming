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
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to first element of list
 * @str: string to be used for new list element
 *
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;

	if (head[0] == NULL)
	{
		current = malloc(sizeof(list_t));
		if (current == NULL)
			return (NULL);
		current->str = strdup(str);
		current->len = str_len(str);
		current->next = head[0];
		head[0] = current;
	}
	else
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = str_len(str);
		new->next = head[0];
		head[0] = new;
	}
	return (head[0]);
}
