/**
 * swap_int - swaps values of 2 pointers
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
