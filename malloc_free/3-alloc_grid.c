#include <stdlib.h>

/**
 * alloc_grid - memory allocation for grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2 dimensional array of ints
 */

int **alloc_grid(int width, int height)
{
	/** liste de pointeurs sur les lignes*/
	int **liste_pointeurs = NULL;
	/**alloc toute la mémoire néc (comme si array uni dimensionel)*/
	int *alloc_complete = NULL;
	int i;

	alloc_complete = calloc(width * height, sizeof(int));
	if (alloc_complete == NULL)
		return (NULL);

	liste_pointeurs = calloc(height, sizeof(int *));
	if (liste_pointeurs == NULL)
	{
		free(alloc_complete);
		return (NULL);
	}

	/** faire pointer les height x pointeurs sur les premières cases des lignes*/
	for (i = 0; i < height; i++)
		liste_pointeurs[i] = &alloc_complete[0] + (i * width);
	return (liste_pointeurs);
}
