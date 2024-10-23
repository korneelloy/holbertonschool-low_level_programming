#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, from a to z, in lowercase, x10
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int i;

		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
