# include <stdio.h>

/**
 * main - Prints alphabet with for loop
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
