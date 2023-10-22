#include <stdio.h>

/**
 *main - prints largest prime factor of the number 612852475143
 *
 *Return: void
 */

int main(void)
{
	long int n;
	int i;
	int maxPrimeN;

	n = 612852475143;

	while (n % 2 == 0)
	{
		i = 2;
		n /= 2;
	}

	printf("%d\n", n);
	return (0);
}
