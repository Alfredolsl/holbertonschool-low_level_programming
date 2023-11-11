#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to get factorial from
 * Return: Factorial n
 */

int factorial(int n)
{
	/* base case */
	if (n == 1)
		return (0);
	else if (n < 0)
		return (-1);
	else
	{
		return (n * factorial (n - 1));
	}
}
