#include <stdlib.h>
#include "main.h"

/**
 * print_dog - print a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %.6lf\n", (d->age == NULL) ? "(nil)" : d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
