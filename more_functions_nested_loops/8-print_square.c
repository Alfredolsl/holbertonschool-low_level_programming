#include "main.h"

/**
 *print_square - prints a square
 *@size: size of square
 *Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i != n; i++)
		{
			int j = 0;
			
			while (j != size)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
