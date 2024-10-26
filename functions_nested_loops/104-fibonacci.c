#include <stdio.h>
void print_98_fibonacci(void);

/**
 * main - entry point
 *
 * Return: 0 if no mistake
 */

int main(void)
{
	print_98_fibonacci();
	return (0);
}

/**
 * print_98_fibonacci - printing 98 Fibonacci numbers, start with 1 & 2
 *
 * Return: no return
 */

void print_98_fibonacci(void)
{
	int i;
	double a = 0;
	double b = 1;
	double c;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		if (i == 97)
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
