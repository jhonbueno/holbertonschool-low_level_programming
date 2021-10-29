#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create array
 * @min: minimun number
 * @max: maximum number
 *
 *
 * Return: integer
 */

int *array_range(int min, int max)
{
	int *s;
	int i, dist;

	if (min > max)
		return (NULL);
	dist = max - min;
	s = malloc(sizeof(int) * (max - min));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < dist; i++)
	{
		s[i] = min;
		min++;
	}

	return (s);
}
