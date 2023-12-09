#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer that returns void
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	if (name != NULL && f != NULL)
		(*f)(name); /* <-- executing function using pointer */
}
