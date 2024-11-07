/**
 * is_square - checks if multi of numbers equals givven number
 * @n: given number
 * @x: increasing number
 *
 * Return: num if a multiplication equals given nb, or -1 otherwise
 */

int is_square(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (is_square(n, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a given nb
 * @n: given number
 *
 * Return: natural sqaure root or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (is_square(n, 2));
}
