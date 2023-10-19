#include "main.h"

/**
 *main - Prints alphabet using for loop with _puthcar and a newline
 *Return: Always 0
 */

int main(void)
{
	char c;

	while (c = 'a' <= 'z')
	{
		_putchar(c);
		c++;
	}
	return (0);
}
