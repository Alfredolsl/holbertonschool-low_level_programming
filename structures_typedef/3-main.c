#include <stdio.h>
#include "dog.h"

/**
 * main - uses typedef dog_t in dog.h
 *
 * Return: 0 if successful
 */

int main(void)
{
	dog_t my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
