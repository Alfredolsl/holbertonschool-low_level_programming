#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
