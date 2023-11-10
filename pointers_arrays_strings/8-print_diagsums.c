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
	int i, ldiag, rdiag;

	ldiag = 0;
	rdiag = 0;

	for (i = 0; i < size; i++)
	{
		ldiag += a[i];
		a += size;
	}

	a -= size;
	
	for (i = 0; i < size; i++)
	{
		rdiag += a[i];
		a -= size;
	}

	printf("%d, %d\n", ldiag, rdiag);
}
