#include "main.h"

/**
 * times_table - Print 9 times table
 *
 *
 * Return: 0
 */

void times_table(void)
{
	int r, c, i, j;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			_putchar('0');

			if (r == 0)
			{
				_putchar('0');

				if (c < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			else if (r == 1)
			{
				for (i = 1; i <= 9; i++)
					_putchar((i) + '0');
			}
			else
			{
				for (j = 1; j <= 9; j++)
				{
					_putchar((r * j) + '0');

					if (c < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}

			if (c == 9)
				_putchar('$');

		}

		_putchar('\n');
	}

}
