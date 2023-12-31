#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: number in binary
 *
 * Return: converted number, or 0 if theres a char that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b) /* true if current char is not '\0' */
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
