#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return list lenght
 * @h: list_t list
 *
 *
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
