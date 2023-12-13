#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->data);

		h = h->next;
		counter++;
	}

	return (counter);
}
