#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: integer to begin counting from
 * Return: Void
 */

void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		printf("%d, ", n);
	}
}
