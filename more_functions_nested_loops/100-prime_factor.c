#include <stdio.h>

/**
 *main - prints largest prime factor of the number 612852475143
 *
 *Return: void
 */

int main(void)
{
	long int n;
	int maxPrimeN;

	n = 612852475143;
	maxPrimeN = 0;

	while (n % 2 == 0)
	{
		maxPrimeN = 2;
		n /= 2;
	}

	printf("%ld\n", n);
	return (0);
}
