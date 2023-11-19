#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initialized it with specific char
 *
 * @size: size of array
 * @c: specific char to initialize array
 *
 * Return: NULL if size = 0 or fails, else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++) /* change the values of the array to char c */
		*(ar + i) = c;

	return (ar);
}
