#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: char to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
		if (c == letter)
			return (1);
	return(0);
}
