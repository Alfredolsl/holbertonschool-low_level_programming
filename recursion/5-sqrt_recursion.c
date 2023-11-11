#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root
 * Return: integer converted to its square root,
 * -1 if square root isn't a natural integer
 */

int _sqrt_recursion(int n)
{
	guess = 1;
	if (n < 0)
		return (-1);
	else if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
		return (_sqrt_recursion(n));
		guess += 1;
	}
}
