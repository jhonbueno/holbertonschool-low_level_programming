#include <stdio.h>

/**
 * print_list - singly linked list
 * @h: list_t list
 *
 *
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	list_t *current  = h;
	int count = 0;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->str);
		current = current->next;
		count++;
	}
	return (count);
}
