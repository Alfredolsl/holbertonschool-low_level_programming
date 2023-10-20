#include "main.h"
#include <stdio.h>

/**
 *print_times_table - Prints n times table, starting with 0
 *@n: integer to print n times the table
 *Return: void
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				_putchar(k  + '0')
				if (j != n)
					_putchar(',');

				if (k >= 100)
					printf(" ");
				else if (k >= 10 && k <= 99)
					printf("  ");
				else
				{
					printf("   ");
				}
			}
			_putchar('\n');
		}
	}
}
