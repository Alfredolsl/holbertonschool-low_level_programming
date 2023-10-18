#include <stdio.h>

/**
 * main - no input, must return zero
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
