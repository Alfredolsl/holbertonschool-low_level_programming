#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i, j;

	/* Array that stores word separators. */
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', 
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
				s[i+1] = s[i] -= 32;
		}
	}
	return (s);
}
