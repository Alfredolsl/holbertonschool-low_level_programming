#include "main.h"

/**
 *print_line - print a straight line
 *@n: length of line
 *Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > i)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
