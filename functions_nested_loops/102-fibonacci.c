#include <stdio.h>
void print_50_fibonacci(void);

/**
 * main - entry point
 *
 * Return: no return
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
	int a = 1;
	int b = 2;
	int c = 3;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%d", c);
		}
		else
		{	
			printf("%d, ", c);
		}
		a = b;
		c += b;
	}
	printf("\n");
}
