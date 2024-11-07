#include <stdio.h>

/**
 * _sqrt_recursion - return natural square root of given nb
 * @n: number
 *
 * Return: the square root, or -1 if not existing
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n - _sqrt_recursion(n - 1));
}
