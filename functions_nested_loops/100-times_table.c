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

				if (k >= 100)
					printf(", ");
				else if (k <= 99)
					printf(",  ");
				else
				{
					if (y !=0)
						printf(",   ");
				}
				_putchar(k + '0');
			}
			_putchar('\n');
		}
	}
}
