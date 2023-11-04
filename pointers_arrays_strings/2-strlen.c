#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: input must be string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (strlen(*s));
}
