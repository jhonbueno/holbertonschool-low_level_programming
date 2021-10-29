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

	s = malloc(size * nmemb);

	return (s);
}
