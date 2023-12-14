#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at specific index
 * @head: first node of the linked list
 * @index: index to delete node
 * Return: 1 if successful,
 * -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	current = *head;

	counter = 0;
	while (head != NULL)
	{
		if (current == NULL)
			return (-1);

		if (counter == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			else
				*head = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}
		current = current->next;
		counter++;
	}

	return (-1);
}
