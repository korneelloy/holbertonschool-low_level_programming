#include <stdio.h>

/**
 * print_times_table - prints n times the muliplication table
 * @n: n times table, should be between 0 and 15
 *
 * Return: no return for this function
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int x;

				x = i * j;
				if (j < n)
				{
					printf("%d, ", x);
					if (x < 10)
					{
						printf("  ");
					}
					else if (x >= 10 && x < 100)
					{
						printf(" ");
					}
				}
				else
				{
					printf("%d", x);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
