#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - same as calloc's function
 * sets memory allocated to 0
 * @nmemb: number of elements
 * @size: bytes per element
 *
 * Return: pointer to base adress of allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);

	if (alloc == NULL)
		return (NULL);

	return (alloc);
}
