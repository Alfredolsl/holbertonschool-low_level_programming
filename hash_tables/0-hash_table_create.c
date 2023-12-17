#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	if (size <= 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = malloc(sizeof(*(new_ht->array)) * size);

	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;

	return (new_table);
}
