#include "main.h"

/**
 *_abs - Returns absolute value of an integer
 *@n: int to check
 *Return: Absolute int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
