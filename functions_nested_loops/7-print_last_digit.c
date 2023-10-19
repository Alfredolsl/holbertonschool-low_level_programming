#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: number to check
 * Return: Return value of the last digit
 */

int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
		n = -n;

	ldigit = n % 10;

	if (ldigit < 0)
		a = -a;

	_putchar(ldigit + '0');
	return (a);
}
