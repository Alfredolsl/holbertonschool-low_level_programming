#include "main.h"

/**
 *main - Prints alphabet 10 times with nest loops
 *Return: None
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c = 'a' <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
