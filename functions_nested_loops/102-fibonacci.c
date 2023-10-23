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

	for (k = 0; k < 50; ++k)
	{
		if (k <= 49)
			printf("%ld, ", i);
		f = i + j;
		i = j;
		j = f;
	}
	putchar('\n');
	return (0);
}
