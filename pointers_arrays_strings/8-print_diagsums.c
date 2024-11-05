#include <stdio.h>
/**
 * print_diagsums - prints sum diagonals square matrix
 * @a: pointer to an array of int
 * @size: size of 2 dimensional array (both sides)
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int *ptr = 0;
	int result = 0;

	for (i = 0; i < size; i++)
	{
		ptr = a + (i * (size + 1));
		result = result + *ptr;
	}
	printf("%d, ", result);

	result = 0;
	*ptr = 0;

	for (j = 1; j <= size; j++)
	{
		ptr = a + ((size - 1) * j);
		result = result + *ptr;
	}
	printf("%d\n", result);
}
