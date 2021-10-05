#include "main.h"

/**
 * jack_bauer - Print hours
 * 
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 00; h <= 23; t++)
	{
		for (m = 00; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
