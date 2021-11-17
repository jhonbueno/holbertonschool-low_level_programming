#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at specified index
 * @head: head
 * @idx: index
 * @n: value
 *
 *
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
	}
	tmp->n = n;
	return (tmp);
}
