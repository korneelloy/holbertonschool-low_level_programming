#include <stdio.h>

/**
 * main - entry function C
 *
 * Return: 0 is no error
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	i = 10;
	putchar(i);
	return (0);
}
