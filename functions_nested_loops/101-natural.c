#include <stdio.h>

/**
 * print_sum_mult_3_5_below_1024 - prints sum of the mult. of 3 & 5 below 1024
 *
 * Return: nothing will be returned
 */

void print_sum_mult_3_5_below_1024(void)
{
	int sum_3 = 0;
	int x = 0;
	int i;

	for (i = 1; x < 1024; i++)
	{
		sum_3 += i * 3;
		x = i * 3;
	}

	int sum_5 = 0;
	int y = 0;
	int j;

	for (j = 1; y < 1024; j++)
	{
		sum_5 += j * 5;
		y = j * 5;
	}
	printf("%d\n", sum_3 + sum_5);
}
