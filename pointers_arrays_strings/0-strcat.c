#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to be appended with src
 * @src: string that appends to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
