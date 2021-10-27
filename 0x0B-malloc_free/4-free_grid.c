#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional array
 * @grid: int
 * @height: int
 *
 * Return: pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
