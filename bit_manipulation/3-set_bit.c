#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: index to change the bit to 1
 *
 * Return: 1 if successful, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n ^ (1 << index);

	return (1);
}
