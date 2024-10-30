#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: the string
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
		length_of_the_string++;
	if (length_of_the_string % 2 == 1)
		n = (length_of_the_string + 1) / 2;
	else
		n = length_of_the_string / 2;
	for (j = n; j < length_of_the_string; j++)
		_putchar(str[j]);
	_putchar('\n');
}
