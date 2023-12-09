#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on each element
 * of an array
 * @array: pointer to an integer array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		(*action)(array, size);
	}
}
