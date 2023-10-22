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
	int j;

	float div (n / i);

	while (div != 1)
	{
		if (isdigit(div) == 1)
			j = div;
	}
	printf("%d\n", j);
	return (0);
}
