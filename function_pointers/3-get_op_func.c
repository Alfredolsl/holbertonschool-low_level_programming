#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Selects the function to make the operation
 * @s: The operator passed as argument to the program
 * Return: A pointer to the function with the
 * selected operation
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);

}
