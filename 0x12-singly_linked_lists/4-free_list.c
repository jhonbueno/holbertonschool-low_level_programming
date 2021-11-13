#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free list
 * @head: list_t list
 *
 *
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
