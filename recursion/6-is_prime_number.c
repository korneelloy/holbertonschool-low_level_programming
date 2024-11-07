/**
 * is_prime_number - checks if a given nb is a prime nummber
 * @n: given number
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime(int n, int x)
{
	if ((n / x) % 2 == 0)
		return (1);
	return(is_prime(n, x-1));
	return (0);
}

int is_prime_number(int n)
{
	int x;

	if (n < 1)
		return (0);
	if (n == 0)
		return (1);
	x = is_prime(n, n - 1);
	if (x == 0)
		return (0);
	return (1);
}
