#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char str;
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
		i++;

	j = i - 1;

	for (k = 0; k < (i / 2); k++)
	{
		str = s[ji];
		s[k] = s[j];
		s[j--] = str;
	}
}
