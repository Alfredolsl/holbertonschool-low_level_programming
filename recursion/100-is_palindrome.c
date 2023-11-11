#include "main.h"

int find_strlen(char *s);

int check_palindrome(char *s, int pos, int index);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if string is palindrome,
 * 0 if not.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (*s == '\0')
		return (1);
	else
		return (check_palindrome(s, index, len));
}

int find_strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++);

	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @index: current position of string
 * @len: length of string
 * Return: 1 if string is palindrome,
 * 0 if not.
 */

int check_palindrome(char *s, int index, int len)
{
	if (s[index] == s[len/2])
		return (1);
	else if (s[index] == s[-(index + 1)])
		return _palindrome(*s, index + 1);
	else
		return (0)
}
