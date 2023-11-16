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
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		int i, sum;

		sum = 0;

		for (i = 1; i < argc; i++)
		{

			if (!(argv[i] > 'a' && argv[i] < 'z') || !(argv[i] > 'A' && argv[i] < 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += _atoi(argv[i]);
			}
		}
		printf("%d\n", j);
	}
	return (0);
}
