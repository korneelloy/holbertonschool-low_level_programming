#include <stdlib.h>
/**
 * array_range - create array of numbers
 * @min: futs number
 * @max: last number
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int compteur = 0;
	int *pointeur = NULL;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		compteur++;
	pointeur = malloc(compteur * sizeof(int));
	if (pointeur == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		pointeur[i] = i;
	return (pointeur);
}
