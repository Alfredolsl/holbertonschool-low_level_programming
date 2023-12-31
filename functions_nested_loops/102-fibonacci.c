#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	long int i, j, k, f;

	i = 1;
	j = 2;

	for (k = 1; k <= 50; ++k)
	{
		if (i != 20365011074)
			printf("%ld, ", i);
		else
			printf("%ld\n", i);
		f = i + j;
		i = j;
		j = f;
	}
	return (0);
}
