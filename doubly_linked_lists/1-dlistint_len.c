#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list
 * @h: first node
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
