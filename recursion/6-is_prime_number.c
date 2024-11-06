/**
 * is_prime_number - checks if a given nb is a prime nummber
 * @n: given number
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	if ((n / n - 1) % 2 != 0)
		return (-1);
	is_prime_number(n - 1);
	return(1);
}
