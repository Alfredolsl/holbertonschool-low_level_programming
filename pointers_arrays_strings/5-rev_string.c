#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char str;
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = i - 1; j <= 0; j--)
		str = s[j];
}
