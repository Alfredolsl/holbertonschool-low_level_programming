#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: An integer less than, equal to, or greater than 0 if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
