#include "main.h"
#include <stdio.h>
#include <string.h>

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
	if (strlen(*argv) > 0)
	{
		printf("%d\n", argc);
		return (0);
	}
	return (0);
}
