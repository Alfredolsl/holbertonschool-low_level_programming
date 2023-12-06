#include <stdio.h>
#include "4-sum.h"

/**
 * main - checks the macro inside 4-sum.h
 *
 * Return: 0 if successful
 */

int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
