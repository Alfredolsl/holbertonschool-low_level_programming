#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - struct dog intializer.
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
