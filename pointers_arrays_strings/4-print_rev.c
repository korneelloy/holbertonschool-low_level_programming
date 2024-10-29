#include "main.h"

/**
 * print_rev - print string in reverse + newline to stdout
 * @s: pointer to a character / first character of a string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int i, j;

	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
			j = i;
		for (; j >= 0; j--)
			_putchar(s[j]);
	}
	_putchar('\n');
}
