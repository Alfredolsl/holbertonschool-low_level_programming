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
	int i, j, len1, len2, concat;
	char *s3;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[len1])
			len1++;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[len2])
			len2++;
	}

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (concat = 0; concat < i; concat++)
	{
		s3[concat] = s1[concat];
	}

	for (concat = 0; concat < j; concat++)
	{
		s3[concat + i] = s2[concat];
	}

	return (s3);
}
