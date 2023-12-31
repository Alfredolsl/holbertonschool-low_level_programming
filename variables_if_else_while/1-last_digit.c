#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints last digit from n and will determine if its 0, greater than 5, or else, less than 6 and not 0
 * 
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		if (n % 10 > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
		}
	}
	return (0);
}
