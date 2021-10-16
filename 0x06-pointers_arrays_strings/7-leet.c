#include "main.h"
#include <stdio.h>

/**
 * leet - leet encoding
 * @str: char
 *
 *
 * Return: char
 */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char code[] = "43071";
	int i, j, k;

	j = 0;
	k = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 9; j += 2)
		{
			if (str[i] == letters[j] || str[i] == letters[j + 1])
			{
				str[i] = code[k];
				k++;
			}
		}

		i++;
		k = 0;
	}
	return (str);
}
