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
		printf("%d", (argv[1] - '0') * (argv[2] - '0'));

	putchar('\n');

	return (0);
}

