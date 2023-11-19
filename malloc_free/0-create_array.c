#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, with a specific char
 * @size: size of array
 * @c: specific char to initialize array
 *
 * Return: NULL if size = 0, else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size < 1)
		return (NULL);
	else
	{
		ar = malloc(sizeof(c) * size);
		return(*ar)
	}
}
