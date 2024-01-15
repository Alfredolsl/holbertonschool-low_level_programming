#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * using the Linear search algorithm
 * @array: pointer to base address of array
 * @size: size of array
 * @value: value to search
 *
 * Return: index where value is located,
 * if value is not present or if array is NULL, return NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array || !*array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
