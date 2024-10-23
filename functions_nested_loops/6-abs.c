/**
 * _abs - computes the aboslute value of an integer
 * @n: number given in input
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
