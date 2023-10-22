#include "main.h"

/**
 *_isdigit - checks for a digit 0 - 9
 *@c: integer to check
 *Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	for (i = 0; i <= 9; i++)
		if (c == i)
			return (1);
	return (0);
}
