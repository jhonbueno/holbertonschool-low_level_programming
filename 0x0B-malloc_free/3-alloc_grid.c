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
	int **p, i, j, k, l;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}

	if (p[i] == NULL)
	{
		for (l = 0; l < height; l++)
		{
			free(p[i]);
			p[i] = NULL;
		}
		free(p);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			p[j][k] = 0;
		}
	}
	return (p);
}
