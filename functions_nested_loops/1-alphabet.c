#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet, doesn't return anything
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
