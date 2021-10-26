#include "main.h"

/**
 * create_array - create array malloc
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (0);

	for (i = 0; i < size; i++)
		s[i] = c;
}
