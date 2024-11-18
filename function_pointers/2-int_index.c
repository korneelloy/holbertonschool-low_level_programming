/**
 * int_index - integer search in array accoring diff criteria / cmp
 * @array: given array
 * @size : size of array
 * @cmp: pointer to function of type int as parameter / int as return
 *
 * Return: index of 1st index or 61 if no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
