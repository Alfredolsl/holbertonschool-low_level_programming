#include "main.h"

/**
 * reverse_array - reverses the conent of an array of integers
 * @a: array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, j;

	j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		a[j] = a[i];
		j++;
	}
}
