#include "main.h"

/**
 *print_triangle - prints a triangle depending on int size
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = size; i != 0; i--)
		{
			int j = 1;

			while (j <= size)
			{
				if (j < i)
					_putchar(' ');
				else if (j >= i)
					_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
