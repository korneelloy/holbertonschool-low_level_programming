#include "main.h"

/**
 * void _puts - print string + newline to stdout
 * @str pointer to a character / first character of a string
 *
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
