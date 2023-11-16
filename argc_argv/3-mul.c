#include <stdio.h>

/**
 * main - prints two numbers multiplied
 * @argc: arg counter
 * @argv: arg vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	if (argc < 2)
		puts("Error");
	else
	{
		int n1, n2;

		n1 = *argv[1] - '0';
		n2 = *argv[2] - '0';
		printf("%d", n1 * n2);
	}
	putchar('\n');

	return (0);
}

