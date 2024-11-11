#include <stdlib.h>

/**
 * alloc_grid - memeory allocation for grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2 dimensional array of ints
 */
int **alloc_grid(int width, int height)
{
	int **pointer = NULL;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	pointer = calloc(height * width, sizeof(int));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pointer[i] = calloc(height, sizeof(int));
		if (pointer[i] == NULL)
			return (NULL);
	}
	return (pointer);
}
