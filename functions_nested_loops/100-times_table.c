#include "main.h"
#include <stdio.h>

/**
 *print_times_table - Prints n times table, starting with 0
 *@n: integer to print n times the table
 *Return: void
 */

void print_times_table(int n)
{
	if (n > 0 || n < 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j, k;

			for (j = 0; j <= n; j++)
				{
					k = i * j;

					printf("%d", k);

					if (k <= 9 && n != i)
						printf(",   ");
					else
						printf(",  ");
				}
		_putchar('\n');
		}
	}
}