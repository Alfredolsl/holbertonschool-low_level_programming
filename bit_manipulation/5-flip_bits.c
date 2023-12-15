#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: address of number
 * @m: target number to flip to
 *
 * Return: Number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m;
	unsigned long int bits;

	n_xor_m = n ^ m;
	bits = 0;

	while (n_xor_m > 0)
	{
		bits += n_xor_m & 1;
		n_xor_m >>= 1;
	}

	return (bits);
}
