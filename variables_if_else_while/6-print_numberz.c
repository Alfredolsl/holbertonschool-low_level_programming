#include <stdio.h>

/**
 * main - No input and must return int
 * Single-quoted character has numeric values equal to its ASCII code, so '0'
 * is a way to write 48
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
