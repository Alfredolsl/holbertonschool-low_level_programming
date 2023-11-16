#include <stdio.h>

int _atoi(char *s);

/**
 * main - prints two numbers multiplied
 * @argc: arg counter
 * @argv: arg vector
 *
 * Return: 0 if successful, else 1
 */

int main(int argc, char **argv)
{
	int num, cents, j;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return(1);
	}

	num = _atoi(argv[1]);
        cents = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	/* for loop to iterate coin array to determine number of cents */
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			cents++;
			num -= coins[j];
		}
	}
	printf("%d\n", cents)

	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: the converted value
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
