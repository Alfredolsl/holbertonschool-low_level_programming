#include <stdio.h>

/**
 *main - prints largest prime factor of the number 612852475143
 *
 *Return: void
 */

int main(void)
{
	long int n = 612852475143;
	int i = 2;

	int div (n / i);

	while (div != 1)
	{
		if (isdigit(div) == 1)
			n = div;
	}
	printf("%d\n", n);
	return (0);
}
