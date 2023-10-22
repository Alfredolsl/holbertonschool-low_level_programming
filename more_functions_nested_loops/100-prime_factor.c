#include <stdio.h>

/**
 *main - prints largest prime factor of the number 612852475143
 *
 *Return: void
 */

int main(void)
{
	long int n;
	int maxPrime, oddPrime;

	n = 612852475143;
	maxPrime = 0;
	oddPrime = 3;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	while (n != 1)
	{
		while (n % oddPrime == 0)
		{
			maxPrime = oddPrime;
			n /= oddPrime;
		}
		oddPrime += 2;
	}

	printf("%d\n", maxPrime);
	return (0);
}
