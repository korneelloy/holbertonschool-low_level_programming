#include <stdio.h>

/**
 * largest_prime - prints largest prime factor of 612852475143
 *
 * Return: no return
 */

int largest_prime(int x)
{
	int y;

	for (y = x - 1; y > 0; y--)
	{
		if (y == 1)
		{
			printf("%d\n", x);
			return (0);
		}
		else if (x % y == 0)
		{
			printf("boucle %d\n", y);
			largest_prime(y);
		}
	}
}

int main(void)
{
        int x = 1231952;
	largest_prime(x);
	return (0);
}
