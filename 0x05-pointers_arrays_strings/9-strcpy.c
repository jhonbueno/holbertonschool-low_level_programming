#include "main.h"

/**
 * _strcpy - print string
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;
	char str[1000];

	i = 0;

	while(src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
		str[j] = src[j];

	return (*dest = str);
}
