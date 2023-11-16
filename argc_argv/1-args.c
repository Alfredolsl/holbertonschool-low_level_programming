#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	printf("%d", argc);

	(void)argv;
	return (0);
}
