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
	int i;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) + 1  * (max - min));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < (max - min); i++)
		s[i] = i;

	return (s);
}
