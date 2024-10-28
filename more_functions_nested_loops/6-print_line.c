#include "main.h"

/**
 * print_line - prints straight line of n characters
 * @n: character lenght of line
 *
 * Return: no return
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}
