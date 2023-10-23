#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line
 *Return: always 0
 */

int main(void)
{
	int n;
	int multiples = 0;

	for (n = 0; n != 1024; n++)
	{
		if (n % 3 == 0)
			multiples += n;
		else if (n % 5 == 0)
			multiples += n;
	}
	printf("%d\n", multiples);
	return (0);
}
