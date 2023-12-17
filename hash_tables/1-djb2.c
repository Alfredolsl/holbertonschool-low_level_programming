#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_djb2 - hash function with the djb2 algorithm
 * @str: string to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	/* Why this number? In testing, this number resulted in fewer collisions
	 * and better avalanching. */

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
