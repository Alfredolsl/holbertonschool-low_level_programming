#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the
 * cmp function does not return 0,
 * if no element matches or size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
