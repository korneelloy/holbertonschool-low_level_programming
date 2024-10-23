#include "main.h"

/**
 * print_alphabet - prints the alphabet, from a to z, in lowercase
 *
 * Return: no return
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
