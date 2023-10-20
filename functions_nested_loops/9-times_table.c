#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Void
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			if (i * j >= 10)
			{
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
		i++;
	}
}
