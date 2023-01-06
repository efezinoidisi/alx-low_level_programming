#include "hash_tables.h"

/**
 * check_key - check if key already exists
 * @ht: hash table
 * @key: key
 * @index: index of array
 *
 * Return: 1 on success or 0 otherwise
 */

unsigned int check_key(hash_table_t *ht, const char *key, unsigned int index)
{
	hash_node_t *temp;

	temp = ht->array[index];
	while (temp)
	{
		if (temp->key == key)
			return (1);
		temp = temp->next;
	}

	return (0);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 on success or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *str;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	str = strdup(value);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = str;
	node->next = NULL;
	if (!ht->array[idx])
	{
		ht->array[idx] = malloc(sizeof(hash_node_t));
		ht->array[idx] = node;
	}
	else
	{
		if (check_key(ht, key, idx))
		{
			ht->array[idx]->value = str;
			free(node);
		}
		else
		{
			node->next = ht->array[idx];
			ht->array[idx] = node;
		}
	}

	return (1);
}
