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

	if (width <= 0 || height <= 0)
		return (NULL);
	alloc_complete = malloc(width * height * sizeof(int));
	if (alloc_complete == NULL)
		return (NULL);

	liste_pointeurs = malloc(height * sizeof(int *));
	if (liste_pointeurs == NULL)
	{
		free(liste_pointeurs);
		free(alloc_complete);
		return (NULL);
	}

	/** faire pointer les height x pointeurs sur les premières cases des lignes*/
	for (i = 0; i < height; i++)
		liste_pointeurs[i] = &alloc_complete[0] + (i * width);
	for (i = 0; i < height * width; i++)
		alloc_complete[i] = 0;
	return (liste_pointeurs);
}
