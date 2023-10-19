#include "main.h"

/**
 *print_sign - Prints the sign of a number
 *@n: integer to check
 *Return: if n == 0 print '0', return 0
 * if n > 0 print '+', return 1
 * else, print '-', return -1
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
