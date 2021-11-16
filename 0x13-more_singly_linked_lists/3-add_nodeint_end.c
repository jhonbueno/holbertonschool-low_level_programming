#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node end
 * @head: list_t list
 * @n: integer
 *
 *
 *
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
