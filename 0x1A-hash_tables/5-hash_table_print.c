#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int delim = 0, i;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (delim)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				delim = 1;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
