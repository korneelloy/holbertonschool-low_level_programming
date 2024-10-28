#include <stdio.h>

/**
 * largest_prime - prints largest prime factor of 612852475143
 *
 * Return: no return
 */

int prime(int x)
{
	int y;

	for (y = x - 1; y > 1; y--)
	{
		if (x % y == 0)
		{
			prime(y);
			break;
		}
		else
			printf("%d\n", y);
	}
}

void largest_prime(void)
{
	int x = 1231952;
	prime(x);
/**
	for (i = 1231951; i > 1; i--)
	{
		if(1231952 % i == 0)
		{
			printf("%d\n", i);
		}
	}
*/
}


int main(void)
{
        largest_prime();
        return (0);
}
