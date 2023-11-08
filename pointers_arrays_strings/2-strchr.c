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
	int p;

	while (1)
	{
		p = *s++;
		if (p == c)
			return (s - 1);

		if (p == 0)
			return (NULL);
	}
}
