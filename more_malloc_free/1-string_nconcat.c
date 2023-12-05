#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - partially concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: bytes from second string
 *
 * Return: pointer to the base address of resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = 0;
	int s2_len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat = malloc(sizeof(char) * (s1_len + n + 1));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
