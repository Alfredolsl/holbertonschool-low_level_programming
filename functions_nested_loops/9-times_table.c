#include "main.h"

/**
 * time_table - prints the 9 times table starting with 0
 *
 * Return: Void
 */

void time_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
