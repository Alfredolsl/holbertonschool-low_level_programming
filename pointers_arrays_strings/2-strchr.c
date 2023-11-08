#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to matching char,
 * NULL if character not found.
 */

char *_strchr(char *s, char c)
{
	char pntr;
	int i;
	i = 0;

	while (s[i] != c)
	{
		i++;
	}
	pntr = *s[i];

	return (pntr);
}
