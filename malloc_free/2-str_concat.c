#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string to concatenate to string 1
 *
 * Return: NULL if is an empty string or failure,
 * else pointer to new space in memory of string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len, concat;
	char s3;

	len = 0;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[len])
			len++;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[len])
			len++;
	}

	s3 = malloc(sizeof(char) * len + 1);

	if (s3 == NULL)
		return (NULL);

	for (concat = 0; concat < x; concat++)
	{
		s3[concat] = s1[concat];
	}

	for (concat = 0; concat < y; concat++)
	{
		s3[concat + i] = s2[concat];
	}

	return (s3);
}
