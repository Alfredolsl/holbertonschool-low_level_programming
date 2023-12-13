#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the singly linked list
 * @str: new value
 *
 * Return: address of the new element,
 *         or NULL if fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	while (*head != NULL)
		*head = head->next;

	*head = new_node;

	return (new_node);
}
