#include "main.h"

/**
 * print_diagonal - prints diagonal of n lines for \ character
 * @n: number of lines
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}

	if (n >= 0)
		_putchar('\n');
}
