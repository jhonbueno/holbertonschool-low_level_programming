#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - return list lenght
 * @head: list_t list
 * @str: string
 *
 *
 *
 * Return: size_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new_node;

	current = *head;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL || !strdup(str))
	{
		free(new_node);
		return (NULL);
	}

	while (current->next != NULL)
		current = current->next;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (new_node == NULL)
	{
		return (NULL);
	}

	current->next = new_node;

	return (current->next);
}
