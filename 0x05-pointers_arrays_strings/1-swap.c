#include "main.h"

/**
 * swap_int - Swapt the values
 * @a: number 1
 * @b: number 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = 0;
	*c = *a;
	*a = *b;
	*b = *c;
}
