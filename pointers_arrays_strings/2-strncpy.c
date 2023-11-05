#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: sourced string
 * @n: number of bytes of string to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
