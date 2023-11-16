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
	int i, j;

	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (!(argv[i] > 'a' && argv[i] < 'z') || !(argv[i] > 'A' && argv[i] < 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				j += _atoi(i);
			}
		}
		printf("%d\n", j);
	}
	return (0);
}
