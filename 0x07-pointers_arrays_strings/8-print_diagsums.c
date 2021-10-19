#include "main.h"

/**
 * print_diagsums - copies memory area
 * @a: char
 *
 * Return: 0
 */

void print_diagsums(int (*a), int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}
	printf("%d, ", sum1);

	for (i = size - 1; i < size * size - 1; i = i + size - 1)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d\n", sum2);
}
