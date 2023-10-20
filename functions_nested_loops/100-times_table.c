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

				if (j == 0)
				{
					printf("%d", k);
				}
				else if (k >= 100 && j != n)
				{
					printf(", ");
					printf("%d", k);
				}
				else if ((k > 10 && k <= 99) && j != n)
				{
					printf(",  ");
					printf("%d", k);
					printf(",  ");
				}
				else if (k < 9 && j != n)
				{
					printf(",   ");
					printf("%d", k);
				}
				else
				{
					printf("%d\n", k);
				}
			}
		}
	}
}
