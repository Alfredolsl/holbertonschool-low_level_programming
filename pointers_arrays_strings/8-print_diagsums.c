#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix to get sum from
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum, diagonal;

	sum, diagonal = 0, 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == diagonal)
			{
				sum += a[i][j];
				diagonal++;
			}
		}
	}
	return (sum);
}
