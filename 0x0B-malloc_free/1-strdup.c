#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string
 * @str: char
 *
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int len, i;

	len = strlen(str);

	s = malloc(sizeof(char) * len);

	if (s == NULL || str == NULL)
		return (NULL);
	else
		len = strlen(str);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
}
