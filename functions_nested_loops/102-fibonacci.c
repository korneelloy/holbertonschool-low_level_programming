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
	double a = 0;
	double b = 1;
	double c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i == 49)
		{
			printf("%.0f", c);
		}
		else
		{
			printf("%.0f, ", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
}
