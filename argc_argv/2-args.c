#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arg counter
 * @argv: arg vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	while (argc++)
		printf("%s\n", argv[argc]);

	return (0);
}
