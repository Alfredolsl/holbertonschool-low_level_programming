#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: first node of dlistint
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev_node;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			prev_node = head;
			head = head->next;

			free(prev_node->int);
			free(prev_node);
		}
		free(head->n);
		free(head);
	}
}
