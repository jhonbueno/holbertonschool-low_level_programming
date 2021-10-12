#include "main.h"

/**
 * _strlen - Swapt the values
 * @s: Char
 * 
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s[i] != '\0')
	{
		i++;
	}

	return (i);
}
