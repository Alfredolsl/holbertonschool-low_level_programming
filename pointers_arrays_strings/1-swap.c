#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
