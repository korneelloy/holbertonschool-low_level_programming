#include "main.h"

/**
 * print_square - will print a square if #
 * @size: size of square
 *
 * Return: nothing will be returned
 */

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
