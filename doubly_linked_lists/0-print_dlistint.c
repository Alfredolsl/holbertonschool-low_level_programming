#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: header of the dlistint_t
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}
	return(counter);
}
