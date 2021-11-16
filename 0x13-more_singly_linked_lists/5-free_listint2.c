#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_listint2 - free list
 * @head: list_t list
 *
 *
 *
 * Return: none
 */

void free_listint2(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
