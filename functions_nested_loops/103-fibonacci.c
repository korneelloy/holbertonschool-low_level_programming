#include <stdio.h>
void sum_even_fibonacci(void);

/**
 * main - entry point
 *
 * Return: 0 if no mistake
 */

int main(void)
{
	sum_even_fibonacci();
	return (0);
}

/**
 * sum_even_fibonacci - sum of all even Fibonacci numbers, start 1 & 2 to 4M
 *
 * Return: no return
 */

void sum_even_fibonacci(void)
{
	int i;
	int a = 0;
	int b = 1;
	int c = 0;
	int total;

	for (i = 0; c < 4000000; i++)
	{
		if (c % 2 == 0)
		{
			total += c;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", total);
}
