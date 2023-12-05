#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value
 * @max: highest value
 *
 * Return: pointer to base address of resulting array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
