#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - no input and must return int
 * 
 * N will be a random number and the last digit (n % 10)
 * will determine if its 0, greater than 5, or else, less than 6 and not 0
 * 
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit;
	lastdigit = n % 10;
	if (lastdigit == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else
	{
		if (lastdigit > 5)
		{
			printf("Last digit of %d and is greater than 5\n", n);
		}
		else
		{
			printf("Last digit of %d and is less than 6 and not 0\n", n);
		}
	}
	return (0);
}
