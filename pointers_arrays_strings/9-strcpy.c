#include "main.h"

/**
 * *_strcpy - copies string pointed to src, to pointer dest
 * @dest: destination of copied string
 * @src: source of string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char tmp;
	int len, i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		tmp = src[i];
		dest = tmp;
	}
	dest = '\0'
}
