#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *separator;

	separator = "";

	if (ht == NULL)
		return;

	putchar('{');

	for (i = 0; ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%s", separator);

			node = ht->array[i];

			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}
			separator = ", ";
		}
	}
	printf("}\n");
}
