#include <stdio.h>
/**
 * print_diagsums
 * @a: pointer to an array of int 
 * @size: size of 2 dimensional array (both sides)
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int i;
	int *ptr = 0;
	int result = 0;

	for (i = 0; i < size; i++)
	{
		ptr = a + (i * (size + 1));
		result = result + *ptr;
	}
	printf("%d\n, ", result);

	for (j = 
}
