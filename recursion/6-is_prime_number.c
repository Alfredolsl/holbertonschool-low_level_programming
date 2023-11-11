#include "main.h"

/**
 * is_prime_number - function that determines if integer
 * is prime number or not.
 * @n: integer to determine if its a prime number
 * Return: 1 if integer is a prime number,
 * else return 0
 */

int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	else
		return (_prime_number(n, 2));
}

/**
 * _prime_number - function that determines if integer
 * is prime number or not.
 * @n: integer to determine if its a prime number
 * @div: divisor of n
 * Return: 1 if integer is a prime number,
 * else return 0
 */

int _prime_number(int n, int div)
{
	if (n == div)
		return (1);
	else if (n % div == 0)
		return (0);
	else
		return (_prime_number(n, div + 1));
}
