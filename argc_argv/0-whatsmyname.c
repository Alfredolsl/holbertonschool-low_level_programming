#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a program's name
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	printf("%s", argv[0]);
	putchar('\n');

	(void)argc;
	return (0);
}
