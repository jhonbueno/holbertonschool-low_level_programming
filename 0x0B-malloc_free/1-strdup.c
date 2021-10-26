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

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
}
