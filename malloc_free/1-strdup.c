#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated
 * space in memory, containing a copy of the string
 * given as a parameter
 *
 * @str: string to copy
 *
 * Return: NULL if str = NULL
 * else pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		*(s + i) = *(str + i);
	}

	return (s);
}