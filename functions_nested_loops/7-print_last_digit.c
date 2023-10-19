#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: number to check
 * Return: Return value of the last digit
 */

int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	_putchar('\n');
	return (n % 10);
}
