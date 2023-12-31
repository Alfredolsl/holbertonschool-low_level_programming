#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match from  s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, flag;

	i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				flag = 1;
				i++;
			}
		}
		if (flag == 0)
			return (i);
	}

	return (0);
}
