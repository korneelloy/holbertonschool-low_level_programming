#include "main.h"

/**
 * times_table - prints 9 time tables
 *
 * Return: nothing
 */

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int x, y, z;

			x = i * j;
			y = x / 10;
			z = x % 10;
			if (y == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + y);
			}
			_putchar('0' + z);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
