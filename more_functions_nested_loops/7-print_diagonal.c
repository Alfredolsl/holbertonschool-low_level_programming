#include "main.h"

/**
 *print_diagonal - prints a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n ; i++)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('$');
			_putchar('\n');
		}
	}
}
