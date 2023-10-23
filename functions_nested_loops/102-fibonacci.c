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

	for (k = 1; k != 50; k++)
	{
		f = i + j;
		i = j;
		j = f;
		if (k != 50)
			printf("%ld, ", j);
	}
	putchar('\n');
	return (0);
}
