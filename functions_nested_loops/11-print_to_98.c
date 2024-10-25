#include <stdio.h>
/**
 * print_to_98 - will print all integers between given nb and 98
 * @n: number from where printing will start
 *
 * Return: no return for this function
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
