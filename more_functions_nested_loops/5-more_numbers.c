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
			if (j < 10)
			{
				_putchar(j + 48);
			}
			else
			{
				_putchar(49);
				_putchar(j + 38);
			}
		}
		_putchar('\n');
	}
}
