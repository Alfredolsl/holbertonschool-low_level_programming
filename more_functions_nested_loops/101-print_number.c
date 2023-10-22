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

	while (i / 1000)
	{
		i /= 1000;
		_putchar(i + '0');
	}

	_putchar(i % 10 + '0');
}
