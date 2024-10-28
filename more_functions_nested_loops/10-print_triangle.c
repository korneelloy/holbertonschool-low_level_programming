#include "main.h"

/**
 * print_triangle - printing triangle, right alligned
 * @size:  size of triangle
 *
 * Return: nothing to return
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > i; j--)
			_putchar(32);
		for (k = 0; k <= i; k++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
