#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
