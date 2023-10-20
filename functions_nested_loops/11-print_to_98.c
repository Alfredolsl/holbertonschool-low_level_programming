#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: integer to begin counting from
 * Return: Void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
			printf("%d, ", n);
			n++;

		else if (n > 98)
			printf("%d, ", n);
			n--;
	}
}
