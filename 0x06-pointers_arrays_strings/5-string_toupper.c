#include "main.h"
#include <ctype.h>

/**
 * string_toupper - print string
 * @str: char
 *
 *
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = toupper(str[j]);
	}
	return (str);
}
