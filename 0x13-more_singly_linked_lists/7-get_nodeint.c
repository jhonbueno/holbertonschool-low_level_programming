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

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int retval = -1;
	int i = 0;

	for (i = 0; i <= index; i++)
	{
		head = head->next;
	}

	retval = head->n;

	return (retval);
}
