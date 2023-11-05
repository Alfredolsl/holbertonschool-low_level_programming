#include "main.h"

/**
 * _strncat - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, bytes, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[!] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++
	}

	return (dest);
}
