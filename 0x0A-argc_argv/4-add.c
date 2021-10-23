#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
