#include <stdio.h>
/**
 * is_prime_number - checks if a given nb is a prime nummber
 * @n: given number
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x * x > n)
	{
		return(1);
	}
	return(is_prime(n, x + 1));
}

int is_prime_number(int n)
{

	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
