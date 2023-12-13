#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: first node of dlistint_t
 * @index: requested index element
 *
 * Return: address of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (counter != index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
