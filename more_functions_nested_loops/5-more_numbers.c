#include "main.h"
/**
 * more_numbers - printing numbers for 0 to 14, 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			int x;

			if (j < 10)
			{
				x = j + 48;
			}
			else
			{
				_putchar(49);
				x = j + 38;
			}
			_putchar(x);
		}
		_putchar('\n');
	}
}
