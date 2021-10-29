#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * calloc - allocates memory
 * @nmemb: number or memb
 * @size: size
 *
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	s = malloc(size * nmemb);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;

	return (s);
}
