#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - free a list
 * @head: pointer to list
 *
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int retval = -1;
	listint_t *next_node = NULL;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;

	return (retval);
}
