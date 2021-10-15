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
	int a2[1000];

	j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		a2[j] = a[i];
		j++;
	}

	for (k = 0; k <= n; k++)
	{
		a[k] = a2[k];
	}
}
