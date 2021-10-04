#include "main.h"


/**
 * main - Main function use _putchar
 *
 * Return: 0
 */

int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(put[i]);
	}

	_putchar('\n');

	return (0);
}
