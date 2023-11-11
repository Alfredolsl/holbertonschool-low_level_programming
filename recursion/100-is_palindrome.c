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
	int len = 0;

	if (*(s + len)) /* true if len != '\0' */
	{
		len++;
		len += find_strlen(s + len);
	}

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
	else if (s[index] == s[len - index - 1])
		return check_palindrome(s, index + 1, len);
	else
		return (0);
}
