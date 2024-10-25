#include <stdio.h>
void print_sum_mult_3_5_below_1024(void);

/**
 * main - entry point
 *
 * Return: 0 if no errors
 */

int main(void)
{
	print_sum_mult_3_5_below_1024();
	return (0);
}

/**
 * print_sum_mult_3_5_below_1024 - prints sum of the mult. of 3 & 5 below 1024
 *
 * Return: nothing will be returned
 */

void print_sum_mult_3_5_below_1024(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
