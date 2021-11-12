#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: list_t list
 *
 *
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
