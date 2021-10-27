#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - 2 dimensional array
 * @width: int
 * @height: int
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;

	p = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	return (p);
}
