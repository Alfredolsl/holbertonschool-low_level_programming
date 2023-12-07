#include <stdio.h>
#include "dog.h"

/**
 * new_dog - new constructor
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Return: none
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return(NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);
	newDog->age = strdup(age);

	return (newDog);
}
