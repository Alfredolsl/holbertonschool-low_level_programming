#include <stdlib.h>
#include <time.h>
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
		printf("is zero\n")
	}
	else
	{
		if (n > 0)
		{
			printf("is positive\n")
		}
		else
		{
			printf("is negative\n")
		}
	}
	return (0);
}
