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
	int __attribute__(unused) argc;
	printf("%s", argv[0]);
	return (0);
}
