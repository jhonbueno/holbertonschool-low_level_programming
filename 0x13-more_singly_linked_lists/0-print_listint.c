#include <stdio.h>
#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: listint_t list
 *
 *
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
