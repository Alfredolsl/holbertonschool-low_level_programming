#include <stdio.h>

int _atoi(char *s);

/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int i, j, k, sum, num;

	sum = 0;

	/* iterating through each char of item in array */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}
	}
	/* adds to var sum the iterated integers from array */
	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num > 0)
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
