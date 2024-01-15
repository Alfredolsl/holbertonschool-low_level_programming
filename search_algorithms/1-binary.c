#include "search_algos.h"

/**
 * print_arr_range - prints an array within two ranges
 * @array: pointer to array
 * @range1: from index to print
 * @range2: target index to print
 */

void print_arr_range(int *array, int range1, int range2)
{
	int i;
	printf("Searching in array: ");

	for (i = range1; i <= range2; i++)
	{
		printf("%d", array[i]);
		if (i != range2)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to base address of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 * if value is not present or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int middle;

	if (!array)
		return (-1);

	while (l <= r)
	{
		middle = (l + r) / 2;
		print_arr_range(array, l, r);

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (value < array[middle])
			r = middle - 1;
		else if (value > array[middle])
			l = middle + 1;
	}

	return (-1);
}
