#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *previous_node;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			previous_node = head;
			head = head->next;

			free(previous_node->str); /*value*/
			free(previous_node); /*address*/
		}
		free(head->str);
		free(head);
	}
}
