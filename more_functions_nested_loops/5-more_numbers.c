#include "main.h"

/**
 *more_numbers - prints numbers from 0 to 14, followed by a newline
 *
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
		for (j = 0; j <= 15; j++)
		{
			_putchar(j + '0');
			if (j <= 10)
				_putchar(j / 10 + '0');
			_putchar('\n');
		}
}
