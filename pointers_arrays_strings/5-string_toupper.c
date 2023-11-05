#include "main.h"

/**
 * string_toupper - changes lowercase letters of a str to uppercase
 * @s: string to modify
 * Return: converted string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
