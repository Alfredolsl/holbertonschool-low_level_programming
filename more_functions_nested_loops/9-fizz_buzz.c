#include <stdio.h>

/**
 * main - print numbers 1 to 100, multiples of 3 print Fizz, and multiples
 * of 5, print Buzz, if numbers are multiple of both 3 and 5, print FizzBuzz.
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i != 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
