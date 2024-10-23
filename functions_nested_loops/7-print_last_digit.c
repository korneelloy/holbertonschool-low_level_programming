#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : number give
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int dernier;

	dernier = n % 10;
	if (dernier < 0)
	{
		dernier = dernier * -1;
	}
	_putchar('dernier');
	return (dernier);
}
