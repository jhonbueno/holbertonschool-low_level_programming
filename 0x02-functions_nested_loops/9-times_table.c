#include "main.h"

/**
 * times_table - Print 9 times table
 *
 *
 * Return: 0
 */

void times_table(void)
{
	int r, c, i, m, d1, d2;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (r == 0)
				_putchar('0');
			else if (r == 1)
				_putchar(c + '0');
			else
			{
				m = r * c;
				d1 = m / 10;
				d2 = m % 10;

				_putchar(d1 + '0');
				_putchar(d2 + '0');
				}
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (c == 9)
				_putchar('$');

		}

	}

}
