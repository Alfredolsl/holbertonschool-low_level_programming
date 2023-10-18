#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - no input and must return int
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		puts("is zero\n");
	}
	else
	{
		if (n > 0)
		{
			puts("is positive\n");
		}
		else
		{
			puts("is negative\n");
		}
	}
	return (0);
}
