#include <stdio.h>
/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements in the array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i <= (n / 2) - 1; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
