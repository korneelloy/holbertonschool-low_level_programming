#include <stdio.h>

/**
 * _pow_recursion - x to the power of y
 * @x: 1st number
 * @y: 2nd number
 *
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
	{
		return (x);
	}
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
