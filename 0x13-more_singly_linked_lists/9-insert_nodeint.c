#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


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
	listint_t *tmp, *new_node, *tmp2;
	unsigned int i = 0;

	tmp = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;

	if (idx == 0)
	{
		tmp = new_node;
		tmp->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	tmp2 = tmp->next;
	tmp->next = new_node;
	new_node->next = tmp2;
	return (new_node);
}
