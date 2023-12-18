#include <stdlib.h>
#include <stddef.h>
#include <strings.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to update the key/value to
 * @key: the key
 * @value: associated value with the key
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index, i;
	hash_table_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = value;
	ht->array[index] = new;

	return (1);
}
