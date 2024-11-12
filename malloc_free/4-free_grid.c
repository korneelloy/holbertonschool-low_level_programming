#include <stdlib.h>

/**
 * free_grid - frees the allocation of memory
 * @grid: pointer to the grid
 * @height: height of the grid
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	(void)height;
	free(grid[0]);
	free(grid);
}
