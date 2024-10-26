#include <stdio.h>
void print_50_fibonacci(void);

/**
 * main - entry point
 *
 * Return: 0 if no mistake
 */

int main(void)
{
	print_50_fibonacci();
	return (0);
}

/**
 * print_50_fibonacci - printing 50 Fibonacci numbers, start with 1 & 2
 *
 * Return: no return
 */

void print_50_fibonacci(void)
{
	int i;
	long long int a = 0;
	long long int b = 1;
	long long int c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i == 49)
		{
			printf("%lld", c);
		}
		else
		{
			printf("%lld, ", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
}
