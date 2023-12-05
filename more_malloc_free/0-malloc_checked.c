#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to allocated memory,
 * if malloc fails, return 98
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
		exit(98);

	return (allocated_memory);
}
