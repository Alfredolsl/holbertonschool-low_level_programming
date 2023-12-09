#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: first integer
 * @b: second integer
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: first integer
 * @b: second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a and b.
 * @a: first integer
 * @b: second integer
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b.
 * @a: first integer
 * @b: second integer
 * Return: The remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
