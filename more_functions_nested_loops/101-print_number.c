#include "main.h"

/**
 *print_number - prints an integer
 *@n: integer to print
 *Return: void
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;

	while (i / 10)
	{
		i /= 10;
		_putchar(i + '0');
	}

	_putchar(n % 10 + '0');
	_putchar('\n');
}
