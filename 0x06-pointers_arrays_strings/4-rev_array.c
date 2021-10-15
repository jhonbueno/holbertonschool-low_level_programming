#include "main.h"

/**
 * reverse_array - print string
 * @a: int
 * @n: int
 *
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, k;
	char a2[n];

	j = 0;

	for (i = n; i >= 0; i--)
	{
		a2[j] = a[i];
		j++;
	}

	for (k = 0; k < n; k++)
	{
		a[k] = a2[k];
	}
}
