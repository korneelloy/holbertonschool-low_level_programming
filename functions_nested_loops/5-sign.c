#include "main.h"
/**
 * print_sign - prints a sign for pos nb / neg nb or 0
 * @n : number to be tested
 *
 * Return: 1 if greater then 0 / 0 if zero  / -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
