#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum elements of list
 * @head: head
 *
 *
 *
 * Return: integer
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
