#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node
 * @head: pointer to list
 * @index: integer
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listing_t *tmp;
	unsigned int i = 0;

	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
