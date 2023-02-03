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
		if (strcmp(temp->key, key) == 0)
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
	char *str, *key_cpy;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	str = strdup(value);
	key_cpy = strdup(key);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = key_cpy;
	node->value = NULL;
	node->next = NULL;
	if (!ht->array[idx])
	{
		node->value = str;
		ht->array[idx] = node;
	}
	else
	{
		if (check_key(ht, key, idx))
		{
			ht->array[idx]->value = str;
			free(node->key);
			free(node);
		}
		else
		{
			node->value = str;
			node->next = ht->array[idx];
			ht->array[idx] = node;
		}
	}

	return (1);
}
