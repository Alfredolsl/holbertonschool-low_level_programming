#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: char to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c == "ABCDEFGHJIKLMNOPQRSTUVWXYZ")
		return (1);
	else
		return (0);
}
