#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: string to be checked
 * @s2: string to compare against s1
 * Return: 1 if strings are identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1 + 1, s2));
	else
		return (0);
}
