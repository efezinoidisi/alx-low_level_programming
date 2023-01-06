#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 on success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *str;
	hash_node_t *node;

	if (key == NULL || key[0] == '\0')
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
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}

	return (1);
}
