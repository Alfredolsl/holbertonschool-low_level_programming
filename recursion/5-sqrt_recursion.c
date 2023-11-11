#include "main.h"

int _sqrt(int n, int guess);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root
 * Return: the square root of n,
 * -1 if square root isn't a natural integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - function that calculates square root of n
 * @n: natural number to be calculated
 * @guess: test number
 * Return: guess if guess * guess is equal to n,
 * else call itself and incrementing guess by 1
 */

int _sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else
		return (_sqrt(n, guess + 1));
}
