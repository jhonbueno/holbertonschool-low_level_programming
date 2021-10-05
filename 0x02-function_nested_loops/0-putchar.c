#include "main.h"

/**
 * _putchar - Print _putchar
 * @c: The character to print
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
