#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: number to check
 * Return: Return value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n % 10 + '0');
	return (n);
}
