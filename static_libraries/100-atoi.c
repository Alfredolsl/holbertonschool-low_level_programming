#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int len, sign, digit, f, i, n;

	len = 0;
	sign = 0;
	digit = 0;
	f = 0;
	i = 0;
	n = 0;

	while (s[len] != '\0')
		len++;

	while (s[i] != '\0' && f == 0)
	{
		if (s[i] == '-')
			++sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (sign % 2)
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
