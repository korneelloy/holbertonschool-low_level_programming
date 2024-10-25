#include "main.h"
/**
 * print_times_table - prints n times the muliplication table
 * @n: n times table, should be between 0 and 15
 *
 * Return: no return for this function
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int units = ((i * j) % 10) + 48;
				int decim = ((i * j) / 10 % 10) + 48;
				int cent = ((i * j) / 100 % 10) + 48;

				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					if ((i * j) < 10)
					{
						_putchar(32);
						_putchar(32);
					}
					else if ((i * j) >= 10 && (i * j) < 100)
					{
						_putchar(32);
						_putchar(decim);
					}
					else
					{
						_putchar(cent);
						_putchar(decim);
					}
				}
				_putchar(units);
			}
			_putchar(10);
		}
		_putchar(10);
	}
}
