#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed in half
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len / 2) + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
