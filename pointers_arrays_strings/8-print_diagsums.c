#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix to get sum from
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, ldiag, rdiag;

	j = 0;
	ldiag = 0;
	rdiag = 0;

	for (i = 0; i < size; i++)
	{
		if (i == j)
		{
			ldiag += (*a * size) + i;
			rdiag += (*a * size) - (i + 1);
		}
	}
	printf("%d, %d\n", ldiag, rdiag);
}
