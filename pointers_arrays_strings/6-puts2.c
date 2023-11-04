#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print every other character
 */

void puts2(char *str)
{

	int len, i;

	len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	_putchar('\n')
}
